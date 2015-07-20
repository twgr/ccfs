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
static emlrtMCInfo sb_emlrtMCI = { 16, 13, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtMCInfo tb_emlrtMCI = { 16, 5, "eml_warning",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_warning.m"
};

static emlrtRSInfo uq_emlrtRSI = { 16, "eml_warning",
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
  static const int32_T iv98[2] = { 1, 32 };

  const mxArray *m31;
  char_T cv96[32];
  int32_T i;
  static const char_T cv97[32] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'r', 'a', 'n', 'k', 'D', 'e', 'f', 'i', 'c', 'i', 'e',
    'n', 't', 'M', 'a', 't', 'r', 'i', 'x' };

  const mxArray *b_y;
  const mxArray *c_y;
  static const int32_T iv99[2] = { 1, 14 };

  char_T b_varargin_3[14];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m31 = emlrtCreateCharArray(2, iv98);
  for (i = 0; i < 32; i++) {
    cv96[i] = cv97[i];
  }

  emlrtInitCharArrayR2013a(sp, 32, m31, cv96);
  emlrtAssign(&y, m31);
  b_y = NULL;
  m31 = emlrtCreateDoubleScalar(varargin_2);
  emlrtAssign(&b_y, m31);
  c_y = NULL;
  m31 = emlrtCreateCharArray(2, iv99);
  for (i = 0; i < 14; i++) {
    b_varargin_3[i] = varargin_3[i];
  }

  emlrtInitCharArrayR2013a(sp, 14, m31, b_varargin_3);
  emlrtAssign(&c_y, m31);
  st.site = &uq_emlrtRSI;
  warning(&st, message(&st, y, b_y, c_y, &sb_emlrtMCI), &tb_emlrtMCI);
}

void eml_warning(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv96[2] = { 1, 27 };

  const mxArray *m29;
  char_T cv91[27];
  int32_T i;
  static const char_T cv92[27] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'i', 'n', 'g', 'u', 'l', 'a', 'r', 'M', 'a', 't',
    'r', 'i', 'x' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m29 = emlrtCreateCharArray(2, iv96);
  for (i = 0; i < 27; i++) {
    cv91[i] = cv92[i];
  }

  emlrtInitCharArrayR2013a(sp, 27, m29, cv91);
  emlrtAssign(&y, m29);
  st.site = &uq_emlrtRSI;
  warning(&st, b_message(&st, y, &sb_emlrtMCI), &tb_emlrtMCI);
}

/* End of code generation (eml_warning.c) */
