/*
 * File: power.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "power.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *a
 *                emxArray_real_T *y
 * Return Type  : void
 */
void power(const emxArray_real_T *a, emxArray_real_T *y)
{
  unsigned int uv2[2];
  int i21;
  int k;
  for (i21 = 0; i21 < 2; i21++) {
    uv2[i21] = (unsigned int)a->size[i21];
  }

  i21 = y->size[0] * y->size[1];
  y->size[0] = (int)uv2[0];
  y->size[1] = (int)uv2[1];
  emxEnsureCapacity((emxArray__common *)y, i21, (int)sizeof(double));
  i21 = (int)uv2[0] * (int)uv2[1];
  for (k = 0; k < i21; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/*
 * File trailer for power.c
 *
 * [EOF]
 */
