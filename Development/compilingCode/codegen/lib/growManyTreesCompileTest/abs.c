/*
 * File: abs.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "abs.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void b_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  short iv0[2];
  int k;
  for (k = 0; k < 2; k++) {
    iv0[k] = (short)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = iv0[1];
  emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(double));
  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void c_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  unsigned int uv1[2];
  int i8;
  int k;
  for (i8 = 0; i8 < 2; i8++) {
    uv1[i8] = (unsigned int)x->size[i8];
  }

  i8 = y->size[0] * y->size[1];
  y->size[0] = (int)uv1[0];
  y->size[1] = (int)uv1[1];
  emxEnsureCapacity((emxArray__common *)y, i8, (int)sizeof(double));
  i8 = x->size[0] * x->size[1];
  for (k = 0; k < i8; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void d_abs(const emxArray_real_T *x, emxArray_real_T *y)
{
  unsigned int unnamed_idx_0;
  int k;
  unnamed_idx_0 = (unsigned int)x->size[0];
  k = y->size[0];
  y->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(double));
  for (k = 0; k < x->size[0]; k++) {
    y->data[k] = fabs(x->data[k]);
  }
}

/*
 * File trailer for abs.c
 *
 * [EOF]
 */
