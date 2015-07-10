/*
 * File: growManyTreesCompileTest_terminate.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "growManyTreesCompileTest_terminate.h"
#include "growManyTreesCompileTest_data.h"

/* Function Definitions */

/*
 * Arguments    : void
 * Return Type  : void
 */
void growManyTreesCompileTest_terminate(void)
{
  omp_destroy_nest_lock(&emlrtNestLockGlobal);
}

/*
 * File trailer for growManyTreesCompileTest_terminate.c
 *
 * [EOF]
 */
