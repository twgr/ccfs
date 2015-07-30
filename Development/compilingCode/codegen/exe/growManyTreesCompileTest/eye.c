/*
 * File: eye.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "eye.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : double varargin_1
 *                emxArray_real_T *I
 * Return Type  : void
 */
void eye(double varargin_1, emxArray_real_T *I)
{
  int k;
  int loop_ub;
  k = I->size[0] * I->size[1];
  I->size[0] = (int)varargin_1;
  I->size[1] = (int)varargin_1;
  emxEnsureCapacity((emxArray__common *)I, k, (int)sizeof(double));
  loop_ub = (int)varargin_1 * (int)varargin_1;
  for (k = 0; k < loop_ub; k++) {
    I->data[k] = 0.0;
  }

  if ((int)varargin_1 > 0) {
    for (k = 0; k + 1 <= (int)varargin_1; k++) {
      I->data[k + I->size[0] * k] = 1.0;
    }
  }
}

/*
 * File trailer for eye.c
 *
 * [EOF]
 */
