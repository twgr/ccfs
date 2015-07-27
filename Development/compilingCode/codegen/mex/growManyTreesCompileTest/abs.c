/*
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "abs.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo kb_emlrtRTEI = { 16, 5, "abs",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" };

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int16_T iv27[2];
  int32_T k;
  for (k = 0; k < 2; k++) {
    iv27[k] = (int16_T)x->size[k];
  }

  k = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = iv27[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  for (k = 0; k < x->size[1]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void c_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T uv0[2];
  int32_T i10;
  int32_T k;
  for (i10 = 0; i10 < 2; i10++) {
    uv0[i10] = (uint32_T)x->size[i10];
  }

  i10 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv0[0];
  y->size[1] = (int32_T)uv0[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i10, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  i10 = x->size[0] * x->size[1];
  for (k = 0; k < i10; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

void d_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  unnamed_idx_0 = (uint32_T)x->size[0];
  k = y->size[0];
  y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                    &kb_emlrtRTEI);
  for (k = 0; k < x->size[0]; k++) {
    y->data[k] = muDoubleScalarAbs(x->data[k]);
  }
}

/* End of code generation (abs.c) */
