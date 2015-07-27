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
static emlrtRSInfo qn_emlrtRSI = { 34, "eye",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtRSInfo rn_emlrtRSI = { 80, "eye",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

static emlrtRTEInfo qd_emlrtRTEI = { 1, 14, "eye",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\eye.m" };

/* Function Definitions */
void eye(const emlrtStack *sp, real_T varargin_1, emxArray_real_T *I)
{
  boolean_T p;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv67[2] = { 1, 28 };

  const mxArray *m29;
  char_T cv94[28];
  int32_T i;
  static const char_T cv95[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_varargin_1;
  const mxArray *d_y;
  static const int32_T iv68[2] = { 1, 21 };

  char_T cv96[21];
  static const char_T cv97[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  int32_T loop_ub;
  boolean_T b18;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &qn_emlrtRSI;
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
    m29 = emlrtCreateCharArray(2, iv67);
    for (i = 0; i < 28; i++) {
      cv94[i] = cv95[i];
    }

    emlrtInitCharArrayR2013a(&st, 28, m29, cv94);
    emlrtAssign(&y, m29);
    b_y = NULL;
    m29 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m29) = MIN_int32_T;
    emlrtAssign(&b_y, m29);
    c_y = NULL;
    m29 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m29) = MAX_int32_T;
    emlrtAssign(&c_y, m29);
    b_st.site = &ap_emlrtRSI;
    c_st.site = &hq_emlrtRSI;
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
    m29 = emlrtCreateCharArray(2, iv68);
    for (i = 0; i < 21; i++) {
      cv96[i] = cv97[i];
    }

    emlrtInitCharArrayR2013a(&st, 21, m29, cv96);
    emlrtAssign(&d_y, m29);
    b_st.site = &yo_emlrtRSI;
    c_st.site = &wp_emlrtRSI;
    f_error(&b_st, b_message(&c_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
  }

  i = I->size[0] * I->size[1];
  I->size[0] = (int32_T)varargin_1;
  I->size[1] = (int32_T)varargin_1;
  emxEnsureCapacity(sp, (emxArray__common *)I, i, (int32_T)sizeof(real_T),
                    &qd_emlrtRTEI);
  loop_ub = (int32_T)varargin_1 * (int32_T)varargin_1;
  for (i = 0; i < loop_ub; i++) {
    I->data[i] = 0.0;
  }

  if ((int32_T)varargin_1 > 0) {
    st.site = &rn_emlrtRSI;
    if (1 > (int32_T)varargin_1) {
      b18 = false;
    } else {
      b18 = ((int32_T)varargin_1 > 2147483646);
    }

    if (b18) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 0; i + 1 <= (int32_T)varargin_1; i++) {
      I->data[i + I->size[0] * i] = 1.0;
    }
  }
}

/* End of code generation (eye.c) */
