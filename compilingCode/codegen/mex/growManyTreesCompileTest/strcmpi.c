/*
 * strcmpi.c
 *
 * Code generation for function 'strcmpi'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "strcmpi.h"
#include "eml_int_forloop_overflow_check.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo wo_emlrtRSI = { 15, "strcmpi",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\strcmpi.m"
};

static emlrtRSInfo xo_emlrtRSI = { 22, "strcmpi",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\strcmpi.m"
};

static emlrtRSInfo yo_emlrtRSI = { 16, "lower",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"
};

static emlrtRSInfo ap_emlrtRSI = { 10, "eml_string_transform",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"
};

static emlrtMCInfo yb_emlrtMCI = { 16, 9, "eml_assert_supported_string",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_assert_supported_string.m"
};

static emlrtMCInfo ac_emlrtMCI = { 15, 19, "eml_assert_supported_string",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_assert_supported_string.m"
};

static emlrtRSInfo op_emlrtRSI = { 15, "eml_assert_supported_string",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_assert_supported_string.m"
};

static emlrtRSInfo lq_emlrtRSI = { 16, "eml_assert_supported_string",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_assert_supported_string.m"
};

/* Function Declarations */
static void eml_assert_supported_string(const emlrtStack *sp, const char_T
  s_data[], const int32_T s_size[2]);

/* Function Definitions */
static void eml_assert_supported_string(const emlrtStack *sp, const char_T
  s_data[], const int32_T s_size[2])
{
  boolean_T p;
  int32_T i;
  const mxArray *y;
  static const int32_T iv110[2] = { 1, 31 };

  const mxArray *m37;
  char_T cv120[31];
  static const char_T cv121[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  p = true;
  for (i = 0; i < s_size[1]; i++) {
    p = (p && (s_data[i] <= 127.0));
  }

  if (p) {
  } else {
    y = NULL;
    m37 = emlrtCreateCharArray(2, iv110);
    for (i = 0; i < 31; i++) {
      cv120[i] = cv121[i];
    }

    emlrtInitCharArrayR2013a(sp, 31, m37, cv120);
    emlrtAssign(&y, m37);
    b_y = NULL;
    m37 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
    *(int8_T *)mxGetData(m37) = MAX_int8_T;
    emlrtAssign(&b_y, m37);
    st.site = &op_emlrtRSI;
    b_st.site = &lq_emlrtRSI;
    f_error(&st, c_message(&b_st, y, b_y, &yb_emlrtMCI), &ac_emlrtMCI);
  }
}

boolean_T b_strcmpi(const emlrtStack *sp, const char_T s1_data[], const int32_T
                    s1_size[2])
{
  boolean_T tf;
  int32_T n;
  int32_T k;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv109[2] = { 1, 31 };

  const mxArray *m36;
  char_T cv116[31];
  int32_T i;
  static const char_T cv117[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv118[4] = { 'g', 'i', 'n', 'i' };

  static const char_T cv119[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e',
    '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
    '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!',
    '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
    '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']',
    '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{',
    '|', '}', '~', '\x7f' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  tf = false;
  st.site = &wo_emlrtRSI;
  eml_assert_supported_string(&st, s1_data, s1_size);
  n = (int32_T)muDoubleScalarMin(s1_size[1], 4.0);
  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &xo_emlrtRSI;
        b_st.site = &yo_emlrtRSI;
        c_st.site = &ap_emlrtRSI;
        if (s1_data[k] <= 127.0) {
        } else {
          y = NULL;
          m36 = emlrtCreateCharArray(2, iv109);
          for (i = 0; i < 31; i++) {
            cv116[i] = cv117[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m36, cv116);
          emlrtAssign(&y, m36);
          b_y = NULL;
          m36 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m36) = MAX_int8_T;
          emlrtAssign(&b_y, m36);
          d_st.site = &op_emlrtRSI;
          e_st.site = &lq_emlrtRSI;
          f_error(&d_st, c_message(&e_st, y, b_y, &yb_emlrtMCI), &ac_emlrtMCI);
        }

        st.site = &xo_emlrtRSI;
        b_st.site = &yo_emlrtRSI;
        c_st.site = &ap_emlrtRSI;
        if (cv119[s1_data[k] & 127] != cv119[(int32_T)cv118[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

boolean_T c_strcmpi(const emlrtStack *sp, const char_T s1_data[], const int32_T
                    s1_size[2])
{
  boolean_T tf;
  int32_T n;
  int32_T k;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv111[2] = { 1, 31 };

  const mxArray *m38;
  char_T cv122[31];
  int32_T i;
  static const char_T cv123[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv124[4] = { 'i', 'n', 'f', 'o' };

  static const char_T cv125[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e',
    '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
    '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!',
    '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
    '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']',
    '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{',
    '|', '}', '~', '\x7f' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  tf = false;
  st.site = &wo_emlrtRSI;
  eml_assert_supported_string(&st, s1_data, s1_size);
  n = (int32_T)muDoubleScalarMin(s1_size[1], 4.0);
  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &xo_emlrtRSI;
        b_st.site = &yo_emlrtRSI;
        c_st.site = &ap_emlrtRSI;
        if (s1_data[k] <= 127.0) {
        } else {
          y = NULL;
          m38 = emlrtCreateCharArray(2, iv111);
          for (i = 0; i < 31; i++) {
            cv122[i] = cv123[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m38, cv122);
          emlrtAssign(&y, m38);
          b_y = NULL;
          m38 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m38) = MAX_int8_T;
          emlrtAssign(&b_y, m38);
          d_st.site = &op_emlrtRSI;
          e_st.site = &lq_emlrtRSI;
          f_error(&d_st, c_message(&e_st, y, b_y, &yb_emlrtMCI), &ac_emlrtMCI);
        }

        st.site = &xo_emlrtRSI;
        b_st.site = &yo_emlrtRSI;
        c_st.site = &ap_emlrtRSI;
        if (cv125[s1_data[k] & 127] != cv125[(int32_T)cv124[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

boolean_T d_strcmpi(const emlrtStack *sp, const char_T s1_data[], const int32_T
                    s1_size[2])
{
  boolean_T tf;
  int32_T n;
  int32_T k;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv115[2] = { 1, 31 };

  const mxArray *m42;
  char_T cv132[31];
  int32_T i;
  static const char_T cv133[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv134[4] = { 'r', 'a', 'n', 'd' };

  static const char_T cv135[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e',
    '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
    '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!',
    '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
    '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']',
    '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{',
    '|', '}', '~', '\x7f' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  tf = false;
  st.site = &wo_emlrtRSI;
  eml_assert_supported_string(&st, s1_data, s1_size);
  n = (int32_T)muDoubleScalarMin(s1_size[1], 4.0);
  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &xo_emlrtRSI;
        b_st.site = &yo_emlrtRSI;
        c_st.site = &ap_emlrtRSI;
        if (s1_data[k] <= 127.0) {
        } else {
          y = NULL;
          m42 = emlrtCreateCharArray(2, iv115);
          for (i = 0; i < 31; i++) {
            cv132[i] = cv133[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m42, cv132);
          emlrtAssign(&y, m42);
          b_y = NULL;
          m42 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m42) = MAX_int8_T;
          emlrtAssign(&b_y, m42);
          d_st.site = &op_emlrtRSI;
          e_st.site = &lq_emlrtRSI;
          f_error(&d_st, c_message(&e_st, y, b_y, &yb_emlrtMCI), &ac_emlrtMCI);
        }

        st.site = &xo_emlrtRSI;
        b_st.site = &yo_emlrtRSI;
        c_st.site = &ap_emlrtRSI;
        if (cv135[s1_data[k] & 127] != cv135[(int32_T)cv134[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

boolean_T e_strcmpi(const emlrtStack *sp, const char_T s1_data[], const int32_T
                    s1_size[2])
{
  boolean_T tf;
  int32_T n;
  int32_T k;
  int32_T exitg1;
  const mxArray *y;
  static const int32_T iv116[2] = { 1, 31 };

  const mxArray *m43;
  char_T cv136[31];
  int32_T i;
  static const char_T cv137[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv138[5] = { 'f', 'i', 'r', 's', 't' };

  static const char_T cv139[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
    '\x05', '\x06', '\x07', '\x08', '	', '\x0a', '\x0b', '\x0c', '\x0d', '\x0e',
    '\x0f', '\x10', '\x11', '\x12', '\x13', '\x14', '\x15', '\x16', '\x17',
    '\x18', '\x19', '\x1a', '\x1b', '\x1c', '\x1d', '\x1e', '\x1f', ' ', '!',
    '\"', '#', '$', '%', '&', '\'', '(', ')', '*', '+', ',', '-', '.', '/', '0',
    '1', '2', '3', '4', '5', '6', '7', '8', '9', ':', ';', '<', '=', '>', '?',
    '@', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n',
    'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '[', '\\', ']',
    '^', '_', '`', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
    'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '{',
    '|', '}', '~', '\x7f' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  tf = false;
  st.site = &wo_emlrtRSI;
  eml_assert_supported_string(&st, s1_data, s1_size);
  n = (int32_T)muDoubleScalarMin(s1_size[1], 5.0);
  if (s1_size[1] == 5) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &xo_emlrtRSI;
        b_st.site = &yo_emlrtRSI;
        c_st.site = &ap_emlrtRSI;
        if (s1_data[k] <= 127.0) {
        } else {
          y = NULL;
          m43 = emlrtCreateCharArray(2, iv116);
          for (i = 0; i < 31; i++) {
            cv136[i] = cv137[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m43, cv136);
          emlrtAssign(&y, m43);
          b_y = NULL;
          m43 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m43) = MAX_int8_T;
          emlrtAssign(&b_y, m43);
          d_st.site = &op_emlrtRSI;
          e_st.site = &lq_emlrtRSI;
          f_error(&d_st, c_message(&e_st, y, b_y, &yb_emlrtMCI), &ac_emlrtMCI);
        }

        st.site = &xo_emlrtRSI;
        b_st.site = &yo_emlrtRSI;
        c_st.site = &ap_emlrtRSI;
        if (cv139[s1_data[k] & 127] != cv139[(int32_T)cv138[k]]) {
          exitg1 = 1;
        } else {
          k++;
        }
      } else {
        tf = true;
        exitg1 = 1;
      }
    } while (exitg1 == 0);
  }

  return tf;
}

/* End of code generation (strcmpi.c) */
