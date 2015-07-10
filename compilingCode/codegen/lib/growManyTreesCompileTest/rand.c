/*
 * File: rand.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "rand.h"
#include "eml_rand.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : double
 */
double b_rand(void)
{
  return eml_rand();
}

/*
 * Arguments    : double varargin_1
 *                emxArray_real_T *r
 * Return Type  : void
 */
void c_rand(double varargin_1, emxArray_real_T *r)
{
  b_eml_rand(varargin_1, r);
}

/*
 * File trailer for rand.c
 *
 * [EOF]
 */
