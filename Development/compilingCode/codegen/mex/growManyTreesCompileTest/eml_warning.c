/*
 * eml_warning.c
 *
 * Code generation for function 'eml_warning'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "eml_warning.h"
#include "growCCTnotRecursive.h"
#include "repmat.h"
#include "growManyTreesCompileTest_mexutil.h"

/* Variable Definitions */
static emlrtMCInfo pb_emlrtMCI = { 16, 13, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo qb_emlrtMCI = { 16, 5, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtRSInfo xp_emlrtRSI = { 16, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

/* Function Declarations */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);

/* Function Definitions */
static void warning(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "warning", true, location);
}

void b_eml_warning(const emlrtStack *sp, real_T varargin_2, const char_T
                   varargin_3[14])
{
  const mxArray *y;
  static const int32_T iv63[2] = { 1, 32 };

  const mxArray *m27;
  char_T cv88[32];
  int32_T i;
  static const char_T cv89[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv64[2] = { 1, 14 };

  char_T b_varargin_3[14];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m27 = emlrtCreateCharArray(2, iv63);
  for (i = 0; i < 32; i++) {
    cv88[i] = cv89[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m27, cv88);
  emlrtAssign(&y, m27);
  b_y = NULL;
  m27 = emlrtCreateDoubleScalar(varargin_2);
  emlrtAssign(&b_y, m27);
  c_y = NULL;
  m27 = emlrtCreateCharArray(2, iv64);
  for (i = 0; i < 14; i++) {
    b_varargin_3[i] = varargin_3[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m27, b_varargin_3);
  emlrtAssign(&c_y, m27);
  st.site = &xp_emlrtRSI;
  warning(&st, message(&st, y, b_y, c_y, &pb_emlrtMCI), &qb_emlrtMCI);
}

void eml_warning(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv61[2] = { 1, 27 };

  const mxArray *m25;
  char_T cv83[27];
  int32_T i;
  static const char_T cv84[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m25 = emlrtCreateCharArray(2, iv61);
  for (i = 0; i < 27; i++) {
    cv83[i] = cv84[i];
  }

  emlrtInitCharArrayR2013a(sp, 27, m25, cv83);
  emlrtAssign(&y, m25);
  st.site = &xp_emlrtRSI;
  warning(&st, b_message(&st, y, &pb_emlrtMCI), &qb_emlrtMCI);
}

/* End of code generation (eml_warning.c) */
