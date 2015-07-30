/*
 * randi.c
 *
 * Code generation for function 'randi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "randi.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "repmat.h"

/* Variable Definitions */
static emlrtRSInfo og_emlrtRSI = { 58, "randi",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"
};

static emlrtRSInfo pg_emlrtRSI = { 59, "randi",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randi.m"
};

static emlrtRTEInfo jc_emlrtRTEI = { 100, 9, "rand",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\rand.m"
};

/* Function Definitions */
real_T b_randi(real_T lowhigh)
{
  real_T r;
  emlrtRandu(&r, 1);
  return 1.0 + muDoubleScalarFloor(r * lowhigh);
}

void randi(const emlrtStack *sp, real_T lowhigh, real_T varargin_1,
           emxArray_real_T *r)
{
  int32_T i13;
  int32_T k;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &og_emlrtRSI;
  eml_assert_valid_size_arg(&st, varargin_1);
  st.site = &pg_emlrtRSI;
  i13 = r->size[0];
  r->size[0] = (int32_T)varargin_1;
  emxEnsureCapacity(&st, (emxArray__common *)r, i13, (int32_T)sizeof(real_T),
                    &jc_emlrtRTEI);
  emlrtRandu(&r->data[0], (int32_T)varargin_1);
  i13 = r->size[0];
  for (k = 0; k < i13; k++) {
    r->data[k] = 1.0 + muDoubleScalarFloor(r->data[k] * lowhigh);
  }
}

/* End of code generation (randi.c) */
