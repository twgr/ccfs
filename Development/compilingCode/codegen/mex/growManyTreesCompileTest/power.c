/*
 * power.c
 *
 * Code generation for function 'power'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "power.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo od_emlrtRTEI = { 1, 1, "scalexpAlloc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\scalexpAlloc.p"
};

/* Function Definitions */
void power(const emlrtStack *sp, const emxArray_real_T *a, emxArray_real_T *y)
{
  uint32_T uv2[2];
  int32_T i34;
  int32_T k;
  for (i34 = 0; i34 < 2; i34++) {
    uv2[i34] = (uint32_T)a->size[i34];
  }

  i34 = y->size[0] * y->size[1];
  y->size[0] = (int32_T)uv2[0];
  y->size[1] = (int32_T)uv2[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, i34, (int32_T)sizeof(real_T),
                    &od_emlrtRTEI);
  i34 = (int32_T)uv2[0] * (int32_T)uv2[1];
  for (k = 0; k < i34; k++) {
    y->data[k] = a->data[k] * a->data[k];
  }
}

/* End of code generation (power.c) */
