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
  static const int32_T iv58[2] = { 1, 55 };

  const mxArray *m22;
  char_T cv76[55];
  int32_T i;
  static const char_T cv77[55] = { 'C', 'a', 'n', 'n', 'o', 't', ' ', 'c', 'a',
    'r', 'r', 'y', ' ', 'o', 'u', 't', ' ', 'c', 'o', 'm', 'p', 'o', 'n', 'e',
    'n', 't', ' ', 'a', 'n', 'a', 'l', 'y', 's', 'i', 's', ' ', 'w', 'i', 't',
    'h', ' ', 'o', 'n', 'l', 'y', ' ', 'o', 'n', 'e', ' ', 'p', 'o', 'i', 'n',
    't' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m22 = emlrtCreateCharArray(2, iv58);
  for (i = 0; i < 55; i++) {
    cv76[i] = cv77[i];
  }

  emlrtInitCharArrayR2013a(sp, 55, m22, cv76);
  emlrtAssign(&y, m22);
  st.site = &so_emlrtRSI;
  f_error(&st, y, &lb_emlrtMCI);
}

void c_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv77[2] = { 1, 23 };

  const mxArray *m36;
  char_T cv119[23];
  int32_T i;
  static const char_T cv120[23] = { 'I', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 's',
    'p', 'l', 'i', 't', ' ', 'c', 'r', 'i', 't', 'e', 'r', 'i', 'o', 'n' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m36 = emlrtCreateCharArray(2, iv77);
  for (i = 0; i < 23; i++) {
    cv119[i] = cv120[i];
  }

  emlrtInitCharArrayR2013a(sp, 23, m36, cv119);
  emlrtAssign(&y, m36);
  st.site = &so_emlrtRSI;
  f_error(&st, y, &lb_emlrtMCI);
}

void d_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv80[2] = { 1, 18 };

  const mxArray *m39;
  char_T cv129[18];
  int32_T i;
  static const char_T cv130[18] = { 'i', 'n', 'v', 'a', 'l', 'i', 'd', ' ', 'd',
    'i', 'r', 'I', 'f', 'E', 'q', 'u', 'a', 'l' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m39 = emlrtCreateCharArray(2, iv80);
  for (i = 0; i < 18; i++) {
    cv129[i] = cv130[i];
  }

  emlrtInitCharArrayR2013a(sp, 18, m39, cv129);
  emlrtAssign(&y, m39);
  st.site = &so_emlrtRSI;
  f_error(&st, y, &lb_emlrtMCI);
}

void e_error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv81[2] = { 1, 26 };

  const mxArray *m40;
  char_T cv131[26];
  int32_T i;
  static const char_T cv132[26] = { 'S', 'u', 'g', 'g', 'e', 's', 't', 'e', 'd',
    ' ', 's', 'p', 'l', 'i', 't', ' ', 'w', 'i', 't', 'h', ' ', 'e', 'm', 'p',
    't', 'y' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m40 = emlrtCreateCharArray(2, iv81);
  for (i = 0; i < 26; i++) {
    cv131[i] = cv132[i];
  }

  emlrtInitCharArrayR2013a(sp, 26, m40, cv131);
  emlrtAssign(&y, m40);
  st.site = &so_emlrtRSI;
  f_error(&st, y, &lb_emlrtMCI);
}

void error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv57[2] = { 1, 24 };

  const mxArray *m21;
  char_T cv74[24];
  int32_T i;
  static const char_T cv75[24] = { 'I', 'n', 'p', 'u', 't', ' ', 's', 'i', 'z',
    'e', 's', ' ', 'd', 'o', ' ', 'n', 'o', 't', ' ', 'm', 'a', 't', 'c', 'h' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m21 = emlrtCreateCharArray(2, iv57);
  for (i = 0; i < 24; i++) {
    cv74[i] = cv75[i];
  }

  emlrtInitCharArrayR2013a(sp, 24, m21, cv74);
  emlrtAssign(&y, m21);
  st.site = &so_emlrtRSI;
  f_error(&st, y, &lb_emlrtMCI);
}

/* End of code generation (error.c) */
