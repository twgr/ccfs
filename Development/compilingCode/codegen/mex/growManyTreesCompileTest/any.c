/*
 * any.c
 *
 * Code generation for function 'any'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "any.h"
#include "growCCTnotRecursive.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo uf_emlrtRSI = { 15, "any",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtRSInfo vf_emlrtRSI = { 117, "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m"
};

static emlrtRSInfo qg_emlrtRSI = { 12, "any",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtRTEInfo fc_emlrtRTEI = { 1, 14, "any",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\any.m" };

static emlrtBCInfo le_emlrtBCI = { -1, -1, 131, 46, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

static emlrtBCInfo me_emlrtBCI = { -1, -1, 131, 26, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

static emlrtBCInfo ne_emlrtBCI = { -1, -1, 132, 25, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

/* Function Definitions */
boolean_T any(const boolean_T x[2])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(x[k] == 0)) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

void b_any(const emlrtStack *sp, const emxArray_boolean_T *x, emxArray_boolean_T
           *y)
{
  uint32_T outsize[2];
  int32_T i9;
  int32_T i2;
  int32_T iy;
  boolean_T overflow;
  int32_T i;
  int32_T i1;
  boolean_T b_i1;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i9 = 0; i9 < 2; i9++) {
    outsize[i9] = (uint32_T)x->size[i9];
  }

  i9 = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity(&st, (emxArray__common *)y, i9, (int32_T)sizeof(boolean_T),
                    &fc_emlrtRTEI);
  i9 = y->size[0] * y->size[1];
  y->size[1] = (int32_T)outsize[1];
  emxEnsureCapacity(&st, (emxArray__common *)y, i9, (int32_T)sizeof(boolean_T),
                    &fc_emlrtRTEI);
  i2 = (int32_T)outsize[1];
  for (i9 = 0; i9 < i2; i9++) {
    y->data[i9] = false;
  }

  i2 = 0;
  iy = 0;
  b_st.site = &vf_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[1]; i++) {
    i1 = i2 + 1;
    i2 += x->size[0];
    iy++;
    b_st.site = &wf_emlrtRSI;
    if (i1 > i2) {
      b_i1 = false;
    } else {
      b_i1 = (i2 > 2147483646);
    }

    if (b_i1) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    exitg1 = false;
    while ((!exitg1) && (i1 <= i2)) {
      i9 = x->size[0] * x->size[1];
      if (x->data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i9, &me_emlrtBCI, &st)
          - 1] == 0) {
        overflow = true;
      } else {
        i9 = x->size[0] * x->size[1];
        emlrtDynamicBoundsCheckFastR2012b(i1, 1, i9, &le_emlrtBCI, &st);
        overflow = false;
      }

      if (!overflow) {
        i9 = y->size[1];
        y->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i9, &ne_emlrtBCI, &st)
          - 1] = true;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

void c_any(const emlrtStack *sp, const emxArray_boolean_T *x, emxArray_boolean_T
           *y)
{
  uint32_T outsize[2];
  int32_T i12;
  int32_T iy;
  int32_T i1;
  int32_T i2;
  boolean_T overflow;
  int32_T j;
  int32_T ix;
  boolean_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &uf_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i12 = 0; i12 < 2; i12++) {
    outsize[i12] = (uint32_T)x->size[i12];
  }

  i12 = y->size[0];
  y->size[0] = (int32_T)outsize[0];
  emxEnsureCapacity(&st, (emxArray__common *)y, i12, (int32_T)sizeof(boolean_T),
                    &fc_emlrtRTEI);
  iy = (int32_T)outsize[0];
  for (i12 = 0; i12 < iy; i12++) {
    y->data[i12] = false;
  }

  iy = 0;
  i1 = 0;
  i2 = (x->size[1] - 1) * x->size[0];
  b_st.site = &kg_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = false;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (j = 1; j <= x->size[0]; j++) {
    i1++;
    i2++;
    iy++;
    b_st.site = &wf_emlrtRSI;
    if ((x->size[0] == 0) || (i1 > i2)) {
      overflow = false;
    } else {
      overflow = (i2 > MAX_int32_T - x->size[0]);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    ix = i1;
    exitg1 = false;
    while ((!exitg1) && ((x->size[0] > 0) && (ix <= i2))) {
      i12 = x->size[0] * x->size[1];
      if (x->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i12, &me_emlrtBCI,
           &st) - 1] == 0) {
        overflow = true;
      } else {
        i12 = x->size[0] * x->size[1];
        emlrtDynamicBoundsCheckFastR2012b(ix, 1, i12, &le_emlrtBCI, &st);
        overflow = false;
      }

      if (!overflow) {
        i12 = y->size[0];
        y->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i12, &ne_emlrtBCI, &st)
          - 1] = true;
        exitg1 = true;
      } else {
        ix += x->size[0];
      }
    }
  }
}

boolean_T d_any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv40[2] = { 1, 41 };

  const mxArray *m12;
  char_T cv44[41];
  int32_T i;
  static const char_T cv45[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv41[2] = { 1, 51 };

  char_T cv46[51];
  static const char_T cv47[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i14;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !isequal(x);
  b_st.site = &ig_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m12 = emlrtCreateCharArray(2, iv40);
    for (i = 0; i < 41; i++) {
      cv44[i] = cv45[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m12, cv44);
    emlrtAssign(&b_y, m12);
    c_st.site = &cp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, b_y, &bb_emlrtMCI), &bb_emlrtMCI);
  }

  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  b_st.site = &jg_emlrtRSI;
  if (overflow) {
  } else {
    c_y = NULL;
    m12 = emlrtCreateCharArray(2, iv41);
    for (i = 0; i < 51; i++) {
      cv46[i] = cv47[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m12, cv46);
    emlrtAssign(&c_y, m12);
    c_st.site = &cp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, c_y, &bb_emlrtMCI), &bb_emlrtMCI);
  }

  y = false;
  b_st.site = &wf_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  i = 1;
  exitg1 = false;
  while ((!exitg1) && (i <= x->size[1])) {
    i14 = x->size[1];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i14, &me_emlrtBCI, &st)
        - 1] == 0) {
      overflow = true;
    } else {
      i14 = x->size[1];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, i14, &le_emlrtBCI, &st);
      overflow = false;
    }

    if (!overflow) {
      y = true;
      exitg1 = true;
    } else {
      i++;
    }
  }

  return y;
}

boolean_T e_any(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv53[2] = { 1, 41 };

  const mxArray *m19;
  char_T cv66[41];
  int32_T i;
  static const char_T cv67[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv54[2] = { 1, 51 };

  char_T cv68[51];
  static const char_T cv69[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i21;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !b_isequal(x);
  b_st.site = &ig_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m19 = emlrtCreateCharArray(2, iv53);
    for (i = 0; i < 41; i++) {
      cv66[i] = cv67[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m19, cv66);
    emlrtAssign(&b_y, m19);
    c_st.site = &cp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, b_y, &bb_emlrtMCI), &bb_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  b_st.site = &jg_emlrtRSI;
  if (overflow) {
  } else {
    c_y = NULL;
    m19 = emlrtCreateCharArray(2, iv54);
    for (i = 0; i < 51; i++) {
      cv68[i] = cv69[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m19, cv68);
    emlrtAssign(&c_y, m19);
    c_st.site = &cp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, c_y, &bb_emlrtMCI), &bb_emlrtMCI);
  }

  y = false;
  b_st.site = &wf_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = false;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  i = 1;
  exitg1 = false;
  while ((!exitg1) && (i <= x->size[0])) {
    i21 = x->size[0];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i21, &me_emlrtBCI, &st)
        - 1] == 0) {
      overflow = true;
    } else {
      i21 = x->size[0];
      emlrtDynamicBoundsCheckFastR2012b(i, 1, i21, &le_emlrtBCI, &st);
      overflow = false;
    }

    if (!overflow) {
      y = true;
      exitg1 = true;
    } else {
      i++;
    }
  }

  return y;
}

/* End of code generation (any.c) */
