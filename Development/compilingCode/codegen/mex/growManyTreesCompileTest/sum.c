/*
 * sum.c
 *
 * Code generation for function 'sum'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "sum.h"
#include "growCCTnotRecursive.h"
#include "isequal.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo je_emlrtRSI = { 70, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo ke_emlrtRSI = { 76, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo le_emlrtRSI = { 61, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo xn_emlrtRSI = { 72, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo i_emlrtMCI = { 18, 9, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo j_emlrtMCI = { 17, 19, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo k_emlrtMCI = { 23, 9, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtMCInfo l_emlrtMCI = { 20, 19, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo ib_emlrtRTEI = { 55, 1, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRTEInfo jb_emlrtRTEI = { 1, 14, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo qo_emlrtRSI = { 20, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo ro_emlrtRSI = { 17, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo rp_emlrtRSI = { 23, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

static emlrtRSInfo sp_emlrtRSI = { 18, "sum",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\sum.m"
};

/* Function Definitions */
void b_sum(const emlrtStack *sp, const emxArray_boolean_T *x, emxArray_real_T *y)
{
  uint32_T sz[2];
  int32_T ixstart;
  int32_T k;
  int32_T ix;
  int32_T iy;
  boolean_T overflow;
  int32_T i;
  real_T s;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (ixstart = 0; ixstart < 2; ixstart++) {
    sz[ixstart] = (uint32_T)x->size[ixstart];
  }

  ixstart = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, ixstart, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    ixstart = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)y, ixstart, (int32_T)sizeof(real_T),
                      &jb_emlrtRTEI);
    ixstart = y->size[0] * y->size[1];
    y->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(sp, (emxArray__common *)y, ixstart, (int32_T)sizeof(real_T),
                      &jb_emlrtRTEI);
    k = (int32_T)sz[1];
    for (ixstart = 0; ixstart < k; ixstart++) {
      y->data[ixstart] = 0.0;
    }
  } else {
    ix = -1;
    iy = -1;
    st.site = &je_emlrtRSI;
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 1; i <= x->size[1]; i++) {
      ixstart = ix + 1;
      ix++;
      s = x->data[ixstart];
      st.site = &ke_emlrtRSI;
      if (2 > x->size[0]) {
        overflow = false;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        b_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 2; k <= x->size[0]; k++) {
        ix++;
        s += (real_T)x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

real_T c_sum(const emlrtStack *sp, const boolean_T x_data[], const int32_T
             x_size[2])
{
  real_T y;
  emxArray_boolean_T b_x_data;
  boolean_T b4;
  const mxArray *b_y;
  static const int32_T iv28[2] = { 1, 30 };

  const mxArray *m5;
  char_T cv24[30];
  int32_T i;
  static const char_T cv25[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv29[2] = { 1, 36 };

  char_T cv26[36];
  static const char_T cv27[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  b_x_data.data = (boolean_T *)x_data;
  b_x_data.size = (int32_T *)x_size;
  b_x_data.allocatedSize = -1;
  b_x_data.numDimensions = 2;
  b_x_data.canFreeData = false;
  b4 = !isequal(&b_x_data);
  if (b4) {
  } else {
    b_y = NULL;
    m5 = emlrtCreateCharArray(2, iv28);
    for (i = 0; i < 30; i++) {
      cv24[i] = cv25[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m5, cv24);
    emlrtAssign(&b_y, m5);
    st.site = &ro_emlrtRSI;
    b_st.site = &sp_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
  }

  if ((x_size[1] == 1) || (x_size[1] != 1)) {
    b4 = true;
  } else {
    b4 = false;
  }

  if (b4) {
  } else {
    c_y = NULL;
    m5 = emlrtCreateCharArray(2, iv29);
    for (i = 0; i < 36; i++) {
      cv26[i] = cv27[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m5, cv26);
    emlrtAssign(&c_y, m5);
    st.site = &qo_emlrtRSI;
    b_st.site = &rp_emlrtRSI;
    f_error(&st, b_message(&b_st, c_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  if (x_size[1] == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    st.site = &le_emlrtRSI;
    for (i = 2; i <= x_size[1]; i++) {
      y += (real_T)x_data[i - 1];
    }
  }

  return y;
}

real_T d_sum(const emlrtStack *sp, const emxArray_boolean_T *x)
{
  real_T y;
  boolean_T overflow;
  const mxArray *b_y;
  static const int32_T iv30[2] = { 1, 30 };

  const mxArray *m6;
  char_T cv28[30];
  int32_T i;
  static const char_T cv29[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv31[2] = { 1, 36 };

  char_T cv30[36];
  static const char_T cv31[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  overflow = !b_isequal(x);
  if (overflow) {
  } else {
    b_y = NULL;
    m6 = emlrtCreateCharArray(2, iv30);
    for (i = 0; i < 30; i++) {
      cv28[i] = cv29[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m6, cv28);
    emlrtAssign(&b_y, m6);
    st.site = &ro_emlrtRSI;
    b_st.site = &sp_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    c_y = NULL;
    m6 = emlrtCreateCharArray(2, iv31);
    for (i = 0; i < 36; i++) {
      cv30[i] = cv31[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m6, cv30);
    emlrtAssign(&c_y, m6);
    st.site = &qo_emlrtRSI;
    b_st.site = &rp_emlrtRSI;
    f_error(&st, b_message(&b_st, c_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &le_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = false;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 2; i <= x->size[0]; i++) {
      y += (real_T)x->data[i - 1];
    }
  }

  return y;
}

void e_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[2];
  int32_T ixstart;
  int32_T k;
  int32_T ix;
  int32_T iy;
  boolean_T overflow;
  int32_T i;
  real_T s;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (ixstart = 0; ixstart < 2; ixstart++) {
    sz[ixstart] = (uint32_T)x->size[ixstart];
  }

  ixstart = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int32_T)sz[1];
  emxEnsureCapacity(sp, (emxArray__common *)y, ixstart, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    ixstart = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)y, ixstart, (int32_T)sizeof(real_T),
                      &jb_emlrtRTEI);
    ixstart = y->size[0] * y->size[1];
    y->size[1] = (int32_T)sz[1];
    emxEnsureCapacity(sp, (emxArray__common *)y, ixstart, (int32_T)sizeof(real_T),
                      &jb_emlrtRTEI);
    k = (int32_T)sz[1];
    for (ixstart = 0; ixstart < k; ixstart++) {
      y->data[ixstart] = 0.0;
    }
  } else {
    ix = -1;
    iy = -1;
    st.site = &je_emlrtRSI;
    overflow = (x->size[1] > 2147483646);
    if (overflow) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 1; i <= x->size[1]; i++) {
      ixstart = ix + 1;
      ix++;
      s = x->data[ixstart];
      st.site = &ke_emlrtRSI;
      if (2 > x->size[0]) {
        overflow = false;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        b_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (k = 2; k <= x->size[0]; k++) {
        ix++;
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

void f_sum(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T sz[2];
  int32_T iy;
  int32_T ixstart;
  boolean_T overflow;
  int32_T j;
  int32_T ix;
  real_T s;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  for (iy = 0; iy < 2; iy++) {
    sz[iy] = (uint32_T)x->size[iy];
  }

  iy = y->size[0];
  y->size[0] = (int32_T)sz[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                    &ib_emlrtRTEI);
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    iy = y->size[0];
    y->size[0] = (int32_T)sz[0];
    emxEnsureCapacity(sp, (emxArray__common *)y, iy, (int32_T)sizeof(real_T),
                      &jb_emlrtRTEI);
    ixstart = (int32_T)sz[0];
    for (iy = 0; iy < ixstart; iy++) {
      y->data[iy] = 0.0;
    }
  } else {
    iy = -1;
    ixstart = -1;
    st.site = &xn_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (j = 1; j <= x->size[0]; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      st.site = &ke_emlrtRSI;
      for (k = 2; k <= x->size[1]; k++) {
        ix += x->size[0];
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

real_T g_sum(const emlrtStack *sp, const emxArray_real_T *x)
{
  real_T y;
  boolean_T p;
  boolean_T b_p;
  int32_T i;
  int32_T exitg1;
  const mxArray *b_y;
  static const int32_T iv82[2] = { 1, 30 };

  const mxArray *m41;
  char_T cv133[30];
  static const char_T cv134[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *c_y;
  static const int32_T iv83[2] = { 1, 36 };

  char_T cv135[36];
  static const char_T cv136[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  p = false;
  b_p = false;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (x->size[i] != 0) {
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      b_p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!b_p) {
  } else {
    p = true;
  }

  if (!p) {
  } else {
    b_y = NULL;
    m41 = emlrtCreateCharArray(2, iv82);
    for (i = 0; i < 30; i++) {
      cv133[i] = cv134[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m41, cv133);
    emlrtAssign(&b_y, m41);
    st.site = &ro_emlrtRSI;
    b_st.site = &sp_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &i_emlrtMCI), &j_emlrtMCI);
  }

  if ((x->size[1] == 1) || (x->size[1] != 1)) {
    p = true;
  } else {
    p = false;
  }

  if (p) {
  } else {
    c_y = NULL;
    m41 = emlrtCreateCharArray(2, iv83);
    for (i = 0; i < 36; i++) {
      cv135[i] = cv136[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m41, cv135);
    emlrtAssign(&c_y, m41);
    st.site = &qo_emlrtRSI;
    b_st.site = &rp_emlrtRSI;
    f_error(&st, b_message(&b_st, c_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    st.site = &le_emlrtRSI;
    for (i = 2; i <= x->size[1]; i++) {
      y += x->data[i - 1];
    }
  }

  return y;
}

void sum(const emlrtStack *sp, const emxArray_boolean_T *x, real_T y_data[],
         int32_T y_size[2])
{
  boolean_T overflow;
  boolean_T p;
  int32_T i;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv25[2] = { 1, 30 };

  const mxArray *m4;
  char_T cv20[30];
  static const char_T cv21[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 's', 'u', 'm', '_', 's', 'p', 'e', 'c', 'i', 'a',
    'l', 'E', 'm', 'p', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv26[2] = { 1, 36 };

  char_T cv22[36];
  static const char_T cv23[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  int32_T ix;
  real_T s;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  overflow = false;
  p = false;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (x->size[i] != 0) {
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (!p) {
  } else {
    overflow = true;
  }

  if (!overflow) {
  } else {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv25);
    for (i = 0; i < 30; i++) {
      cv20[i] = cv21[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m4, cv20);
    emlrtAssign(&y, m4);
    st.site = &ro_emlrtRSI;
    b_st.site = &sp_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &i_emlrtMCI), &j_emlrtMCI);
  }

  if ((x->size[0] == 1) || (x->size[0] != 1)) {
    overflow = true;
  } else {
    overflow = false;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m4 = emlrtCreateCharArray(2, iv26);
    for (i = 0; i < 36; i++) {
      cv22[i] = cv23[i];
    }

    emlrtInitCharArrayR2013a(sp, 36, m4, cv22);
    emlrtAssign(&b_y, m4);
    st.site = &qo_emlrtRSI;
    b_st.site = &rp_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &k_emlrtMCI), &l_emlrtMCI);
  }

  for (i = 0; i < 2; i++) {
    y_size[i] = 1;
  }

  if (x->size[0] == 0) {
    y_size[0] = 1;
    y_size[1] = 1;
    y_data[0] = 0.0;
  } else {
    st.site = &je_emlrtRSI;
    ix = 0;
    s = x->data[0];
    st.site = &ke_emlrtRSI;
    if (2 > x->size[0]) {
      overflow = false;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    for (i = 2; i <= x->size[0]; i++) {
      ix++;
      s += (real_T)x->data[ix];
    }

    y_data[0] = s;
  }
}

/* End of code generation (sum.c) */
