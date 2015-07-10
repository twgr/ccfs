/*
 * File: eml_rand.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "eml_rand.h"
#include "eml_rand_mt19937ar_stateful.h"

/* Variable Definitions */
static unsigned int method;

#pragma omp threadprivate (method)

static boolean_T method_not_empty = false;

#pragma omp threadprivate (method_not_empty)

static unsigned int method_master;
static boolean_T method_not_empty_master = false;

/* Function Definitions */

/*
 * Arguments    : double varargin_1
 *                emxArray_real_T *r
 * Return Type  : void
 */
void b_eml_rand(double varargin_1, emxArray_real_T *r)
{
  method_not_empty = true;
  b_eml_rand_mt19937ar_stateful(varargin_1, r);
}

/*
 * Arguments    : void
 * Return Type  : double
 */
double eml_rand(void)
{
  method_not_empty = true;
  return eml_rand_mt19937ar_stateful();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void eml_rand_init(void)
{
  int ub_loop;
  int i;
  ub_loop = omp_get_max_threads();

#pragma omp parallel for schedule(static)\
 num_threads(omp_get_max_threads())

  for (i = 1; i <= ub_loop; i++) {
    method = 7U;
  }

  method_master = 7U;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void eml_rand_swap(void)
{
  unsigned int method_tmp;
  boolean_T method_not_empty_tmp;
  method_tmp = method;
  method = method_master;
  method_master = method_tmp;
  method_not_empty_tmp = method_not_empty;
  method_not_empty = method_not_empty_master;
  method_not_empty_master = method_not_empty_tmp;
}

/*
 * File trailer for eml_rand.c
 *
 * [EOF]
 */
