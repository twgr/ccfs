/*
 * eml_error.c
 *
 * Code generation for function 'eml_error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "eml_error.h"
#include "eml_int_forloop_overflow_check.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo ob_emlrtMCI = { 20, 34, "eml_error",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_error.m"
};

static emlrtRSInfo qp_emlrtRSI = { 20, "eml_error",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_error.m"
};

/* Function Definitions */
void b_eml_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv93[2] = { 1, 33 };

  const mxArray *m26;
  char_T cv85[33];
  int32_T i;
  static const char_T cv86[33] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'v', 'd', '_', 'm', 'a', 't', 'r', 'i', 'x', 'W',
    'i', 't', 'h', 'N', 'a', 'N', 'I', 'n', 'f' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m26 = emlrtCreateCharArray(2, iv93);
  for (i = 0; i < 33; i++) {
    cv85[i] = cv86[i];
  }

  emlrtInitCharArrayR2013a(sp, 33, m26, cv85);
  emlrtAssign(&y, m26);
  st.site = &qp_emlrtRSI;
  f_error(&st, b_message(&st, y, &ob_emlrtMCI), &ob_emlrtMCI);
}

void c_eml_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv94[2] = { 1, 30 };

  const mxArray *m27;
  char_T cv87[30];
  int32_T i;
  static const char_T cv88[30] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'v', 'd', '_', 'N', 'o', 'C', 'o', 'n', 'v', 'e',
    'r', 'g', 'e', 'n', 'c', 'e' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m27 = emlrtCreateCharArray(2, iv94);
  for (i = 0; i < 30; i++) {
    cv87[i] = cv88[i];
  }

  emlrtInitCharArrayR2013a(sp, 30, m27, cv87);
  emlrtAssign(&y, m27);
  st.site = &qp_emlrtRSI;
  f_error(&st, b_message(&st, y, &ob_emlrtMCI), &ob_emlrtMCI);
}

void d_eml_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv112[2] = { 1, 30 };

  const mxArray *m39;
  char_T cv126[30];
  int32_T i;
  static const char_T cv127[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  const mxArray *b_y;
  static const int32_T iv113[2] = { 1, 4 };

  char_T cv128[4];
  static const char_T cv129[4] = { 'l', 'o', 'g', '2' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m39 = emlrtCreateCharArray(2, iv112);
  for (i = 0; i < 30; i++) {
    cv126[i] = cv127[i];
  }

  emlrtInitCharArrayR2013a(sp, 30, m39, cv126);
  emlrtAssign(&y, m39);
  b_y = NULL;
  m39 = emlrtCreateCharArray(2, iv113);
  for (i = 0; i < 4; i++) {
    cv128[i] = cv129[i];
  }

  emlrtInitCharArrayR2013a(sp, 4, m39, cv128);
  emlrtAssign(&b_y, m39);
  st.site = &qp_emlrtRSI;
  f_error(&st, c_message(&st, y, b_y, &ob_emlrtMCI), &ob_emlrtMCI);
}

void eml_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv90[2] = { 1, 30 };

  const mxArray *m24;
  char_T cv79[30];
  int32_T i;
  static const char_T cv80[30] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'E', 'l', 'F', 'u', 'n', 'D', 'o', 'm', 'a', 'i',
    'n', 'E', 'r', 'r', 'o', 'r' };

  const mxArray *b_y;
  static const int32_T iv91[2] = { 1, 4 };

  char_T cv81[4];
  static const char_T cv82[4] = { 's', 'q', 'r', 't' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m24 = emlrtCreateCharArray(2, iv90);
  for (i = 0; i < 30; i++) {
    cv79[i] = cv80[i];
  }

  emlrtInitCharArrayR2013a(sp, 30, m24, cv79);
  emlrtAssign(&y, m24);
  b_y = NULL;
  m24 = emlrtCreateCharArray(2, iv91);
  for (i = 0; i < 4; i++) {
    cv81[i] = cv82[i];
  }

  emlrtInitCharArrayR2013a(sp, 4, m24, cv81);
  emlrtAssign(&b_y, m24);
  st.site = &qp_emlrtRSI;
  f_error(&st, c_message(&st, y, b_y, &ob_emlrtMCI), &ob_emlrtMCI);
}

/* End of code generation (eml_error.c) */
