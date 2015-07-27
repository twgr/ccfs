/*
 * all.c
 *
 * Code generation for function 'all'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "all.h"
#include "growCCTnotRecursive.h"
#include "eml_int_forloop_overflow_check.h"
#include "isequal.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo hg_emlrtRSI = { 12, "all",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

static emlrtRSInfo xg_emlrtRSI = { 15, "all",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 1, 14, "all",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 126, 24, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 127, 25, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

/* Function Definitions */
boolean_T all(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv38[2] = { 1, 41 };

  const mxArray *m11;
  char_T cv40[41];
  int32_T i;
  static const char_T cv41[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv39[2] = { 1, 51 };

  char_T cv42[51];
  static const char_T cv43[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i11;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !isequal(x);
  b_st.site = &ig_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m11 = emlrtCreateCharArray(2, iv38);
    for (i = 0; i < 41; i++) {
      cv40[i] = cv41[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m11, cv40);
    emlrtAssign(&b_y, m11);
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
    m11 = emlrtCreateCharArray(2, iv39);
    for (i = 0; i < 51; i++) {
      cv42[i] = cv43[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m11, cv42);
    emlrtAssign(&c_y, m11);
    c_st.site = &cp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, c_y, &bb_emlrtMCI), &bb_emlrtMCI);
  }

  y = true;
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
    i11 = x->size[1];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i11, &re_emlrtBCI, &st)
        - 1] == 0) {
      y = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  return y;
}

void b_all(const emlrtStack *sp, const emxArray_boolean_T *x, emxArray_boolean_T
           *y)
{
  uint32_T outsize[2];
  int32_T i17;
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
  st.site = &xg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i17 = 0; i17 < 2; i17++) {
    outsize[i17] = (uint32_T)x->size[i17];
  }

  i17 = y->size[0];
  y->size[0] = (int32_T)outsize[0];
  emxEnsureCapacity(&st, (emxArray__common *)y, i17, (int32_T)sizeof(boolean_T),
                    &nc_emlrtRTEI);
  iy = (int32_T)outsize[0];
  for (i17 = 0; i17 < iy; i17++) {
    y->data[i17] = true;
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
      i17 = x->size[0] * x->size[1];
      if (x->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i17, &re_emlrtBCI,
           &st) - 1] == 0) {
        i17 = y->size[0];
        y->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i17, &we_emlrtBCI, &st)
          - 1] = false;
        exitg1 = true;
      } else {
        ix += x->size[0];
      }
    }
  }
}

boolean_T c_all(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv44[2] = { 1, 41 };

  const mxArray *m15;
  char_T cv52[41];
  int32_T i;
  static const char_T cv53[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv45[2] = { 1, 51 };

  char_T cv54[51];
  static const char_T cv55[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i18;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hg_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !b_isequal(x);
  b_st.site = &ig_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m15 = emlrtCreateCharArray(2, iv44);
    for (i = 0; i < 41; i++) {
      cv52[i] = cv53[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m15, cv52);
    emlrtAssign(&b_y, m15);
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
    m15 = emlrtCreateCharArray(2, iv45);
    for (i = 0; i < 51; i++) {
      cv54[i] = cv55[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m15, cv54);
    emlrtAssign(&c_y, m15);
    c_st.site = &cp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, c_y, &bb_emlrtMCI), &bb_emlrtMCI);
  }

  y = true;
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
    i18 = x->size[0];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i18, &re_emlrtBCI, &st)
        - 1] == 0) {
      y = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  return y;
}

/* End of code generation (all.c) */
