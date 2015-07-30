/*
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "diag.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo dk_emlrtRSI = { 90, "diag",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtMCInfo mb_emlrtMCI = { 87, 9, "diag",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtMCInfo nb_emlrtMCI = { 86, 19, "diag",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtRTEInfo dd_emlrtRTEI = { 1, 14, "diag",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtRTEInfo ed_emlrtRTEI = { 89, 5, "diag",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtRSInfo bp_emlrtRSI = { 86, "diag",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

static emlrtRSInfo yp_emlrtRSI = { 87, "diag",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m"
};

/* Function Definitions */
void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  int32_T i;
  const mxArray *y;
  static const int32_T iv59[2] = { 1, 39 };

  const mxArray *m23;
  char_T cv79[39];
  static const char_T cv80[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'd', 'i', 'a', 'g', '_', 'v', 'a', 'r', 's', 'i',
    'z', 'e', 'd', 'M', 'a', 't', 'r', 'i', 'x', 'V', 'e', 'c', 't', 'o', 'r' };

  int32_T dlen;
  int32_T stride;
  boolean_T b10;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    i = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)d, i, (int32_T)sizeof(real_T),
                      &dd_emlrtRTEI);
    d->data[0] = v->data[0];
  } else {
    if (!((v->size[0] == 1) || (v->size[1] == 1))) {
    } else {
      y = NULL;
      m23 = emlrtCreateCharArray(2, iv59);
      for (i = 0; i < 39; i++) {
        cv79[i] = cv80[i];
      }

      emlrtInitCharArrayR2013a(sp, 39, m23, cv79);
      emlrtAssign(&y, m23);
      st.site = &bp_emlrtRSI;
      b_st.site = &yp_emlrtRSI;
      f_error(&st, b_message(&b_st, y, &mb_emlrtMCI), &nb_emlrtMCI);
    }

    if (0 < v->size[1]) {
      dlen = muIntScalarMin_sint32(v->size[0], v->size[1]);
      stride = v->size[0] + 1;
    } else {
      dlen = 0;
      stride = 0;
    }

    i = d->size[0];
    d->size[0] = dlen;
    emxEnsureCapacity(sp, (emxArray__common *)d, i, (int32_T)sizeof(real_T),
                      &ed_emlrtRTEI);
    st.site = &dk_emlrtRSI;
    if (1 > dlen) {
      b10 = false;
    } else {
      b10 = (dlen > 2147483646);
    }

    if (b10) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 0; i + 1 <= dlen; i++) {
      d->data[i] = v->data[i * stride];
    }
  }
}

/* End of code generation (diag.c) */
