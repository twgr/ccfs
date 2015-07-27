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
static emlrtRSInfo co_emlrtRSI = { 15, "strcmpi",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\strcmpi.m"
};

static emlrtRSInfo do_emlrtRSI = { 22, "strcmpi",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\strcmpi.m"
};

static emlrtRSInfo eo_emlrtRSI = { 16, "lower",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\lower.m"
};

static emlrtRSInfo fo_emlrtRSI = { 10, "eml_string_transform",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_string_transform.m"
};

static emlrtMCInfo vb_emlrtMCI = { 16, 9, "eml_assert_supported_string",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_assert_supported_string.m"
};

static emlrtMCInfo wb_emlrtMCI = { 15, 19, "eml_assert_supported_string",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_assert_supported_string.m"
};

static emlrtRSInfo to_emlrtRSI = { 15, "eml_assert_supported_string",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\strfun\\eml_assert_supported_string.m"
};

static emlrtRSInfo op_emlrtRSI = { 16, "eml_assert_supported_string",
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
  static const int32_T iv75[2] = { 1, 31 };

  const mxArray *m33;
  char_T cv112[31];
  static const char_T cv113[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
    m33 = emlrtCreateCharArray(2, iv75);
    for (i = 0; i < 31; i++) {
      cv112[i] = cv113[i];
    }

    emlrtInitCharArrayR2013a(sp, 31, m33, cv112);
    emlrtAssign(&y, m33);
    b_y = NULL;
    m33 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
    *(int8_T *)mxGetData(m33) = MAX_int8_T;
    emlrtAssign(&b_y, m33);
    st.site = &to_emlrtRSI;
    b_st.site = &op_emlrtRSI;
    f_error(&st, c_message(&b_st, y, b_y, &vb_emlrtMCI), &wb_emlrtMCI);
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
  static const int32_T iv74[2] = { 1, 31 };

  const mxArray *m32;
  char_T cv108[31];
  int32_T i;
  static const char_T cv109[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv110[4] = { 'g', 'i', 'n', 'i' };

  static const char_T cv111[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
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
  st.site = &co_emlrtRSI;
  eml_assert_supported_string(&st, s1_data, s1_size);
  n = (int32_T)muDoubleScalarMin(s1_size[1], 4.0);
  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &do_emlrtRSI;
        b_st.site = &eo_emlrtRSI;
        c_st.site = &fo_emlrtRSI;
        if (s1_data[k] <= 127.0) {
        } else {
          y = NULL;
          m32 = emlrtCreateCharArray(2, iv74);
          for (i = 0; i < 31; i++) {
            cv108[i] = cv109[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m32, cv108);
          emlrtAssign(&y, m32);
          b_y = NULL;
          m32 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m32) = MAX_int8_T;
          emlrtAssign(&b_y, m32);
          d_st.site = &to_emlrtRSI;
          e_st.site = &op_emlrtRSI;
          f_error(&d_st, c_message(&e_st, y, b_y, &vb_emlrtMCI), &wb_emlrtMCI);
        }

        st.site = &do_emlrtRSI;
        b_st.site = &eo_emlrtRSI;
        c_st.site = &fo_emlrtRSI;
        if (cv111[s1_data[k] & 127] != cv111[(int32_T)cv110[k]]) {
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
  static const int32_T iv76[2] = { 1, 31 };

  const mxArray *m34;
  char_T cv114[31];
  int32_T i;
  static const char_T cv115[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv116[4] = { 'i', 'n', 'f', 'o' };

  static const char_T cv117[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
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
  st.site = &co_emlrtRSI;
  eml_assert_supported_string(&st, s1_data, s1_size);
  n = (int32_T)muDoubleScalarMin(s1_size[1], 4.0);
  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &do_emlrtRSI;
        b_st.site = &eo_emlrtRSI;
        c_st.site = &fo_emlrtRSI;
        if (s1_data[k] <= 127.0) {
        } else {
          y = NULL;
          m34 = emlrtCreateCharArray(2, iv76);
          for (i = 0; i < 31; i++) {
            cv114[i] = cv115[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m34, cv114);
          emlrtAssign(&y, m34);
          b_y = NULL;
          m34 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m34) = MAX_int8_T;
          emlrtAssign(&b_y, m34);
          d_st.site = &to_emlrtRSI;
          e_st.site = &op_emlrtRSI;
          f_error(&d_st, c_message(&e_st, y, b_y, &vb_emlrtMCI), &wb_emlrtMCI);
        }

        st.site = &do_emlrtRSI;
        b_st.site = &eo_emlrtRSI;
        c_st.site = &fo_emlrtRSI;
        if (cv117[s1_data[k] & 127] != cv117[(int32_T)cv116[k]]) {
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
  static const int32_T iv78[2] = { 1, 31 };

  const mxArray *m37;
  char_T cv121[31];
  int32_T i;
  static const char_T cv122[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv123[4] = { 'r', 'a', 'n', 'd' };

  static const char_T cv124[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
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
  st.site = &co_emlrtRSI;
  eml_assert_supported_string(&st, s1_data, s1_size);
  n = (int32_T)muDoubleScalarMin(s1_size[1], 4.0);
  if (s1_size[1] == 4) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &do_emlrtRSI;
        b_st.site = &eo_emlrtRSI;
        c_st.site = &fo_emlrtRSI;
        if (s1_data[k] <= 127.0) {
        } else {
          y = NULL;
          m37 = emlrtCreateCharArray(2, iv78);
          for (i = 0; i < 31; i++) {
            cv121[i] = cv122[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m37, cv121);
          emlrtAssign(&y, m37);
          b_y = NULL;
          m37 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m37) = MAX_int8_T;
          emlrtAssign(&b_y, m37);
          d_st.site = &to_emlrtRSI;
          e_st.site = &op_emlrtRSI;
          f_error(&d_st, c_message(&e_st, y, b_y, &vb_emlrtMCI), &wb_emlrtMCI);
        }

        st.site = &do_emlrtRSI;
        b_st.site = &eo_emlrtRSI;
        c_st.site = &fo_emlrtRSI;
        if (cv124[s1_data[k] & 127] != cv124[(int32_T)cv123[k]]) {
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
  static const int32_T iv79[2] = { 1, 31 };

  const mxArray *m38;
  char_T cv125[31];
  int32_T i;
  static const char_T cv126[31] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'u', 'n', 's', 'u', 'p', 'p', 'o', 'r', 't', 'e',
    'd', 'S', 't', 'r', 'i', 'n', 'g' };

  const mxArray *b_y;
  static const char_T cv127[5] = { 'f', 'i', 'r', 's', 't' };

  static const char_T cv128[128] = { '\x00', '\x01', '\x02', '\x03', '\x04',
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
  st.site = &co_emlrtRSI;
  eml_assert_supported_string(&st, s1_data, s1_size);
  n = (int32_T)muDoubleScalarMin(s1_size[1], 5.0);
  if (s1_size[1] == 5) {
    k = 0;
    do {
      exitg1 = 0;
      if (k <= n - 1) {
        st.site = &do_emlrtRSI;
        b_st.site = &eo_emlrtRSI;
        c_st.site = &fo_emlrtRSI;
        if (s1_data[k] <= 127.0) {
        } else {
          y = NULL;
          m38 = emlrtCreateCharArray(2, iv79);
          for (i = 0; i < 31; i++) {
            cv125[i] = cv126[i];
          }

          emlrtInitCharArrayR2013a(&c_st, 31, m38, cv125);
          emlrtAssign(&y, m38);
          b_y = NULL;
          m38 = emlrtCreateNumericMatrix(1, 1, mxINT8_CLASS, mxREAL);
          *(int8_T *)mxGetData(m38) = MAX_int8_T;
          emlrtAssign(&b_y, m38);
          d_st.site = &to_emlrtRSI;
          e_st.site = &op_emlrtRSI;
          f_error(&d_st, c_message(&e_st, y, b_y, &vb_emlrtMCI), &wb_emlrtMCI);
        }

        st.site = &do_emlrtRSI;
        b_st.site = &eo_emlrtRSI;
        c_st.site = &fo_emlrtRSI;
        if (cv128[s1_data[k] & 127] != cv128[(int32_T)cv127[k]]) {
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
