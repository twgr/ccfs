/*
 * error.c
 *
 * Code generation for function 'error'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "error.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Function Definitions */
void b_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv89[2] = { 1, 55 };

  const mxArray *m23;
  char_T cv77[55];
  int32_T i;
  static const char_T cv78[55] = { 'C', 'a', 'n', 'n', 'o', 't', ' ', 'c', 'a',
    'r', 'r', 'y', ' ', 'o', 'u', 't', ' ', 'c', 'o', 'm', 'p', 'o', 'n', 'e',
    'n', 't', ' ', 'a', 'n', 'a', 'l', 'y', 's', 'i', 's', ' ', 'w', 'i', 't',
    'h', ' ', 'o', 'n', 'l', 'y', ' ', 'o', 'n', 'e', ' ', 'p', 'o', 'i', 'n',
    't' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m23 = emlrtCreateCharArray(2, iv89);
  for (i = 0; i < 55; i++) {
    cv77[i] = cv78[i];
  }

  emlrtInitCharArrayR2013a(sp, 55, m23, cv77);
  emlrtAssign(&y, m23);
  st.site = &np_emlrtRSI;
  f_error(&st, y, &nb_emlrtMCI);
}

void c_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv114[2] = { 1, 23 };

  const mxArray *m41;
  char_T cv130[23];
  int32_T i;
  static const char_T cv131[23] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 's',
    'p', 'l', 'i', 't', ' ', 'c', 'r', 'i', 't', 'e', 'r', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m41 = emlrtCreateCharArray(2, iv114);
  for (i = 0; i < 23; i++) {
    cv130[i] = cv131[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m41, cv130);
  emlrtAssign(&y, m41);
  st.site = &np_emlrtRSI;
  f_error(&st, y, &nb_emlrtMCI);
}

void d_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv117[2] = { 1, 18 };

  const mxArray *m44;
  char_T cv140[18];
  int32_T i;
  static const char_T cv141[18] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'd',
    'i', 'r', 'I', 'f', 'E', 'q', 'u', 'a', 'l' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m44 = emlrtCreateCharArray(2, iv117);
  for (i = 0; i < 18; i++) {
    cv140[i] = cv141[i];
  }

  emlrtInitCharArrayR2013a(sp, 18, m44, cv140);
  emlrtAssign(&y, m44);
  st.site = &np_emlrtRSI;
  f_error(&st, y, &nb_emlrtMCI);
}

void e_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv118[2] = { 1, 26 };

  const mxArray *m45;
  char_T cv142[26];
  int32_T i;
  static const char_T cv143[26] = { 'S', 'u', 'g', 'g', 'e', 's', 't', 'e', 'd',
    ' ', 's', 'p', 'l', 'i', 't', ' ', 'w', 'i', 't', 'h', ' ', 'e', 'm', 'p',
    't', 'y' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m45 = emlrtCreateCharArray(2, iv118);
  for (i = 0; i < 26; i++) {
    cv142[i] = cv143[i];
  }

  emlrtInitCharArrayR2013a(sp, 26, m45, cv142);
  emlrtAssign(&y, m45);
  st.site = &np_emlrtRSI;
  f_error(&st, y, &nb_emlrtMCI);
}

void error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv88[2] = { 1, 24 };

  const mxArray *m22;
  char_T cv75[24];
  int32_T i;
  static const char_T cv76[24] = { 'I', 'n', 'p', 'u', 't', ' ', 's', 'i', 'z',
    'e', 's', ' ', 'd', 'o', ' ', 'n', 'o', 't', ' ', 'm', 'a', 't', 'c', 'h' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m22 = emlrtCreateCharArray(2, iv88);
  for (i = 0; i < 24; i++) {
    cv75[i] = cv76[i];
  }

  emlrtInitCharArrayR2013a(sp, 24, m22, cv75);
  emlrtAssign(&y, m22);
  st.site = &np_emlrtRSI;
  f_error(&st, y, &nb_emlrtMCI);
}

/* End of code generation (error.c) */
