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
static emlrtRSInfo ig_emlrtRSI = { 12, "all",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

static emlrtRSInfo sh_emlrtRSI = { 15, "all",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

static emlrtRTEInfo ad_emlrtRTEI = { 1, 14, "all",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\all.m" };

static emlrtBCInfo re_emlrtBCI = { -1, -1, 126, 24, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 127, 25, "", "allOrAny",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\allOrAny.m",
  0 };

/* Function Definitions */
boolean_T all(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  boolean_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv66[2] = { 1, 41 };

  const mxArray *m11;
  char_T cv41[41];
  int32_T i;
  static const char_T cv42[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv67[2] = { 1, 51 };

  char_T cv43[51];
  static const char_T cv44[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  boolean_T exitg1;
  int32_T i10;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ig_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !isequal(x);
  b_st.site = &jg_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m11 = emlrtCreateCharArray(2, iv66);
    for (i = 0; i < 41; i++) {
      cv41[i] = cv42[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m11, cv41);
    emlrtAssign(&b_y, m11);
    c_st.site = &xp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, b_y, &db_emlrtMCI), &db_emlrtMCI);
  }

  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  b_st.site = &kg_emlrtRSI;
  if (overflow) {
  } else {
    c_y = NULL;
    m11 = emlrtCreateCharArray(2, iv67);
    for (i = 0; i < 51; i++) {
      cv43[i] = cv44[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m11, cv43);
    emlrtAssign(&c_y, m11);
    c_st.site = &xp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, c_y, &db_emlrtMCI), &db_emlrtMCI);
  }

  y = true;
  b_st.site = &xf_emlrtRSI;
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
    i10 = x->size[1];
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i10, &re_emlrtBCI, &st)
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
  int32_T i20;
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
  st.site = &sh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  for (i20 = 0; i20 < 2; i20++) {
    outsize[i20] = (uint32_T)x->size[i20];
  }

  i20 = y->size[0];
  y->size[0] = (int32_T)outsize[0];
  emxEnsureCapacity(&st, (emxArray__common *)y, i20, (int32_T)sizeof(boolean_T),
                    &ad_emlrtRTEI);
  iy = (int32_T)outsize[0];
  for (i20 = 0; i20 < iy; i20++) {
    y->data[i20] = true;
  }

  iy = 0;
  i1 = 0;
  i2 = (x->size[1] - 1) * x->size[0];
  b_st.site = &lg_emlrtRSI;
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
    b_st.site = &xf_emlrtRSI;
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
      i20 = x->size[0] * x->size[1];
      if (x->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i20, &re_emlrtBCI,
           &st) - 1] == 0) {
        i20 = y->size[0];
        y->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i20, &hf_emlrtBCI, &st)
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
  static const int32_T iv72[2] = { 1, 41 };

  const mxArray *m16;
  char_T cv53[41];
  int32_T i;
  static const char_T cv54[41] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 'l', 'l', '_', 'o', 'r',
    '_', 'a', 'n', 'y', '_', 's', 'p', 'e', 'c', 'i', 'a', 'l', 'E', 'm', 'p',
    't', 'y' };

  const mxArray *c_y;
  static const int32_T iv73[2] = { 1, 51 };

  char_T cv55[51];
  static const char_T cv56[51] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  st.site = &ig_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  overflow = !b_isequal(x);
  b_st.site = &jg_emlrtRSI;
  if (overflow) {
  } else {
    b_y = NULL;
    m16 = emlrtCreateCharArray(2, iv72);
    for (i = 0; i < 41; i++) {
      cv53[i] = cv54[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 41, m16, cv53);
    emlrtAssign(&b_y, m16);
    c_st.site = &xp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, b_y, &db_emlrtMCI), &db_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  b_st.site = &kg_emlrtRSI;
  if (overflow) {
  } else {
    c_y = NULL;
    m16 = emlrtCreateCharArray(2, iv73);
    for (i = 0; i < 51; i++) {
      cv55[i] = cv56[i];
    }

    emlrtInitCharArrayR2013a(&b_st, 51, m16, cv55);
    emlrtAssign(&c_y, m16);
    c_st.site = &xp_emlrtRSI;
    f_error(&c_st, b_message(&c_st, c_y, &db_emlrtMCI), &db_emlrtMCI);
  }

  y = true;
  b_st.site = &xf_emlrtRSI;
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
    if (x->data[emlrtDynamicBoundsCheckFastR2012b(i, 1, i21, &re_emlrtBCI, &st)
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
