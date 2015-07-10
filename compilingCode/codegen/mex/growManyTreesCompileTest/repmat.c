/*
 * repmat.c
 *
 * Code generation for function 'repmat'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "repmat.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo fp_emlrtRSI = { 42, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo gp_emlrtRSI = { 45, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRSInfo hp_emlrtRSI = { 47, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

static emlrtRTEInfo ge_emlrtRTEI = { 30, 1, "repmat",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\repmat.m"
};

/* Function Definitions */
void eml_assert_valid_size_arg(const emlrtStack *sp, real_T varargin_1)
{
  boolean_T p;
  boolean_T guard1 = false;
  const mxArray *y;
  static const int32_T iv12[2] = { 1, 28 };

  const mxArray *m0;
  char_T cv0[28];
  int32_T i;
  static const char_T cv1[28] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'N', 'o', 'n', 'I', 'n', 't', 'e', 'g', 'e', 'r', 'I',
    'n', 'p', 'u', 't' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T b_varargin_1;
  const mxArray *d_y;
  static const int32_T iv13[2] = { 1, 21 };

  char_T cv2[21];
  static const char_T cv3[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
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
    m0 = emlrtCreateCharArray(2, iv12);
    for (i = 0; i < 28; i++) {
      cv0[i] = cv1[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m0, cv0);
    emlrtAssign(&y, m0);
    b_y = NULL;
    m0 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m0) = MIN_int32_T;
    emlrtAssign(&b_y, m0);
    c_y = NULL;
    m0 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m0) = MAX_int32_T;
    emlrtAssign(&c_y, m0);
    st.site = &vp_emlrtRSI;
    b_st.site = &fr_emlrtRSI;
    f_error(&st, message(&b_st, y, b_y, c_y, &emlrtMCI), &b_emlrtMCI);
  }

  if (varargin_1 <= 0.0) {
    b_varargin_1 = 0.0;
  } else {
    b_varargin_1 = varargin_1;
  }

  if (2.147483647E+9 >= b_varargin_1) {
  } else {
    d_y = NULL;
    m0 = emlrtCreateCharArray(2, iv13);
    for (i = 0; i < 21; i++) {
      cv2[i] = cv3[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m0, cv2);
    emlrtAssign(&d_y, m0);
    st.site = &up_emlrtRSI;
    b_st.site = &tq_emlrtRSI;
    f_error(&st, b_message(&b_st, d_y, &c_emlrtMCI), &d_emlrtMCI);
  }
}

void repmat(const emlrtStack *sp, const real_T a_data[], real_T varargin_1,
            emxArray_real_T *b)
{
  int32_T i;
  boolean_T b24;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &c_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  eml_assert_valid_size_arg(&st, varargin_1);
  i = b->size[0] * b->size[1];
  b->size[0] = (int32_T)varargin_1;
  b->size[1] = 1;
  emxEnsureCapacity(sp, (emxArray__common *)b, i, (int32_T)sizeof(real_T),
                    &ge_emlrtRTEI);
  if ((int32_T)varargin_1 == 0) {
  } else {
    st.site = &fp_emlrtRSI;
    st.site = &gp_emlrtRSI;
    if (1 > (int32_T)varargin_1) {
      b24 = false;
    } else {
      b24 = ((int32_T)varargin_1 > 2147483646);
    }

    if (b24) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (i = 1; i <= (int32_T)varargin_1; i++) {
      st.site = &hp_emlrtRSI;
      b->data[i - 1] = a_data[0];
    }
  }
}

/* End of code generation (repmat.c) */
