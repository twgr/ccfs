/*
 * File: power.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
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
  unsigned int uv4[2];
  int i23;
  int k;
  for (i23 = 0; i23 < 2; i23++) {
    uv4[i23] = (unsigned int)a->size[i23];
  }

  i23 = y->size[0] * y->size[1];
  y->size[0] = (int)uv4[0];
  y->size[1] = (int)uv4[1];
  emxEnsureCapacity((emxArray__common *)y, i23, (int)sizeof(double));
  i23 = (int)uv4[0] * (int)uv4[1];
  for (k = 0; k < i23; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/*
 * File trailer for power.c
 *
 * [EOF]
 */
