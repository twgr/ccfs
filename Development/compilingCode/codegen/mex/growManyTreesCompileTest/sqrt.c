/*
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "sqrt.h"
#include "eml_error.h"

/* Variable Definitions */
static emlrtRSInfo wi_emlrtRSI = { 14, "sqrt",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m"
};

/* Function Definitions */
real_T b_sqrt(const emlrtStack *sp, real_T x)
{
  real_T b_x;
  b_x = x;
  c_sqrt(sp, &b_x);
  return b_x;
}

void c_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &wi_emlrtRSI;
    eml_error(&st);
  }

  *x = muDoubleScalarSqrt(*x);
}

void d_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  int32_T k;
  int32_T i60;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < x->size[1]; k++) {
    if (x->data[k] < 0.0) {
      st.site = &wi_emlrtRSI;
      eml_error(&st);
    }
  }

  i60 = x->size[1];
  for (k = 0; k < i60; k++) {
    x->data[k] = muDoubleScalarSqrt(x->data[k]);
  }
}

/* End of code generation (sqrt.c) */
