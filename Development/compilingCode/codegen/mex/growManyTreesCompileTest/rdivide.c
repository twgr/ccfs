/*
 * rdivide.c
 *
 * Code generation for function 'rdivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "rdivide.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Variable Definitions */
static emlrtRTEInfo pd_emlrtRTEI = { 1, 14, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

/* Function Definitions */
void rdivide(const emlrtStack *sp, const emxArray_real_T *x, real_T y,
             emxArray_real_T *z)
{
  int32_T i35;
  int32_T loop_ub;
  i35 = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)z, i35, (int32_T)sizeof(real_T),
                    &pd_emlrtRTEI);
  loop_ub = x->size[0];
  for (i35 = 0; i35 < loop_ub; i35++) {
    z->data[i35] = x->data[i35] / y;
  }
}

/* End of code generation (rdivide.c) */
