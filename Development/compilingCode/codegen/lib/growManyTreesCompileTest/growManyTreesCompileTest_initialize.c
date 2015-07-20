/*
 * File: growManyTreesCompileTest_initialize.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_initialize.h"
#include "eml_rand_mt19937ar_stateful.h"
#include "eml_rand.h"
#include "growManyTreesCompileTest_data.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void growManyTreesCompileTest_initialize(void)
{
  rt_InitInfAndNaN(8U);
  omp_init_nest_lock(&emlrtNestLockGlobal);
  eml_rand_init();
  c_eml_rand_mt19937ar_stateful_i();
  getThreadID_init();
}

/*
 * File trailer for growManyTreesCompileTest_initialize.c
 *
 * [EOF]
 */
