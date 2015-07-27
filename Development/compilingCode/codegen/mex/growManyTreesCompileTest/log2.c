/*
 * log2.c
 *
 * Code generation for function 'log2'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "log2.h"
#include "eml_error.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Variable Definitions */
static emlrtRSInfo go_emlrtRSI = { 29, "log2",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\log2.m"
};

static emlrtRTEInfo sd_emlrtRTEI = { 33, 5, "log2",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elfun\\log2.m"
};

/* Function Definitions */
void b_log2(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *f)
{
  int32_T i36;
  int32_T k;
  real_T y;
  int32_T eint;
  int32_T inte;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  i36 = x->size[0] * x->size[1];
  for (k = 0; k < i36; k++) {
    if (x->data[k] < 0.0) {
      st.site = &go_emlrtRSI;
      d_eml_error(&st);
    }
  }

  for (i36 = 0; i36 < 2; i36++) {
    k = f->size[0] * f->size[1];
    f->size[i36] = x->size[i36];
    emxEnsureCapacity(sp, (emxArray__common *)f, k, (int32_T)sizeof(real_T),
                      &sd_emlrtRTEI);
  }

  i36 = x->size[0] * x->size[1];
  for (k = 0; k < i36; k++) {
    if (x->data[k] == 0.0) {
      y = rtMinusInf;
    } else if (x->data[k] < 0.0) {
      y = rtNaN;
    } else if ((!muDoubleScalarIsInf(x->data[k])) && (!muDoubleScalarIsNaN
                (x->data[k]))) {
      if ((!muDoubleScalarIsInf(x->data[k])) && (!muDoubleScalarIsNaN(x->data[k])))
      {
        y = frexp(x->data[k], &eint);
        inte = eint;
      } else {
        y = x->data[k];
        inte = 0;
      }

      if (y == 0.5) {
        y = (real_T)inte - 1.0;
      } else {
        y = muDoubleScalarLog(y) / 0.69314718055994529 + (real_T)inte;
      }
    } else {
      y = x->data[k];
    }

    f->data[k] = y;
  }
}

/* End of code generation (log2.c) */
