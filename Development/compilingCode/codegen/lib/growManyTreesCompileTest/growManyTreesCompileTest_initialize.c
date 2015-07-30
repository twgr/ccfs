/*
 * File: growManyTreesCompileTest_initialize.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:37:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_initialize.h"
#include "eml_rand_mt19937ar_stateful.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void growManyTreesCompileTest_initialize(void)
{
  rt_InitInfAndNaN(8U);
  state_not_empty_init();
}

/*
 * File trailer for growManyTreesCompileTest_initialize.c
 *
 * [EOF]
 */
