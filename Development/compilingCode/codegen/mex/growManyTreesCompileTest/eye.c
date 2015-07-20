/*
 * eye.c
 *
 * Code generation for function 'eye'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "eye.h"
#include "repmat.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo lo_emlrtRSI = { 34, "eye",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtRSInfo mo_emlrtRSI = { 80, "eye",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtRTEInfo de_emlrtRTEI = { 1, 14, "eye",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *I)
{
  boolean_T p;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv102[2] = { 1, 28 };

  const mxArray *m33;
  char_T cv102[28];
  int32_T i;
  static const char_T cv103[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_varargin_1;
  const mxArray *d_y;
  static const int32_T iv103[2] = { 1, 21 };

  char_T cv104[21];
  static const char_T cv105[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T loop_ub;
  boolean_T b21;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lo_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  if ((varargin_1 != muDoubleScalarFloor(varargin_1)) || muDoubleScalarIsInf
      (varargin_1)) {
    p = false;
  } else {
    p = true;
  }

  guard1 = false;
  if (p) {
    if ((-2.147483648E+9 > varargin_1) || (2.147483647E+9 < varargin_1)) {
      p = false;
    } else {
      p = true;
    }

    if (p) {
      p = true;
    } else {
      guard1 = true;
    }
  } else {
    guard1 = true;
  }

  if (guard1) {
    p = false;
  }

  if (p) {
  } else {
    y = NULL;
    m33 = emlrtCreateCharArray(2, iv102);
    for (i = 0; i < 28; i++) {
      cv102[i] = cv103[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m33, cv102);
    emlrtAssign(&y, m33);
    b_y = NULL;
    m33 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m33) = MIN_int32_T;
    emlrtAssign(&b_y, m33);
    c_y = NULL;
    m33 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m33) = MAX_int32_T;
    emlrtAssign(&c_y, m33);
    b_st.site = &vp_emlrtRSI;
    c_st.site = &fr_emlrtRSI;
    f_error(&b_st, message(&c_st, y, b_y, c_y, &emlrtMCI), &b_emlrtMCI);
  }

  if (varargin_1 <= 0.0) {
    b_varargin_1 = 0.0;
  } else {
    b_varargin_1 = varargin_1;
  }

  if (2.147483647E+9 >= b_varargin_1) {
  } else {
    d_y = NULL;
    m33 = emlrtCreateCharArray(2, iv103);
    for (i = 0; i < 21; i++) {
      cv104[i] = cv105[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m33, cv104);
    emlrtAssign(&d_y, m33);
    b_st.site = &up_emlrtRSI;
    c_st.site = &tq_emlrtRSI;
    f_error(&b_st, b_message(&c_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  i = I->size[0] * I->size[1];
  I->size[0] = (int32_T)varargin_1;
  I->size[1] = (int32_T)varargin_1;
  emxEnsureCapacity(sp, (emxArray__common *)I, i, (int32_T)sizeof(real_T),
                    &de_emlrtRTEI);
  loop_ub = (int32_T)varargin_1 * (int32_T)varargin_1;
  for (i = 0; i < loop_ub; i++) {
    I->data[i] = 0.0;
  }

  if ((int32_T)varargin_1 > 0) {
    st.site = &mo_emlrtRSI;
    if (1 > (int32_T)varargin_1) {
      b21 = false;
    } else {
      b21 = ((int32_T)varargin_1 > 2147483646);
    }

    if (b21) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= (int32_T)varargin_1; i++) {
      I->data[i + I->size[0] * i] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */
