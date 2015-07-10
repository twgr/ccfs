/*
 * randomSubspace.c
 *
 * Code generation for function 'randomSubspace'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "randomSubspace.h"
#include "expandNode.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growCCTnotRecursive.h"
#include "eml_sort.h"
#include "queryIfColumnsVary.h"
#include "eml_int_forloop_overflow_check.h"
#include "any.h"
#include "bsxfun.h"
#include "randperm.h"
#include "sum.h"
#include "all.h"
#include "fastUnique.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo if_emlrtRSI = { 10, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo jf_emlrtRSI = { 11, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo kf_emlrtRSI = { 134, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo lf_emlrtRSI = { 137, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo mf_emlrtRSI = { 103, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo mg_emlrtRSI = { 117, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo ng_emlrtRSI = { 132, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo og_emlrtRSI = { 160, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo pg_emlrtRSI = { 4, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo qg_emlrtRSI = { 5, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo rg_emlrtRSI = { 7, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo sg_emlrtRSI = { 10, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo tg_emlrtRSI = { 12, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo ug_emlrtRSI = { 18, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo vg_emlrtRSI = { 20, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo wg_emlrtRSI = { 23, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo xg_emlrtRSI = { 24, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo yg_emlrtRSI = { 25, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo ah_emlrtRSI = { 26, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo bh_emlrtRSI = { 27, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo ch_emlrtRSI = { 28, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo dh_emlrtRSI = { 29, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo eh_emlrtRSI = { 34, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo fh_emlrtRSI = { 36, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo gh_emlrtRSI = { 37, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo hh_emlrtRSI = { 38, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRSInfo ih_emlrtRSI = { 39, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtMCInfo r_emlrtMCI = { 57, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo s_emlrtMCI = { 56, 19, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo t_emlrtMCI = { 148, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtMCInfo eb_emlrtMCI = { 125, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 1, 14, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRTEInfo mc_emlrtRTEI = { 1, 16, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRTEInfo nc_emlrtRTEI = { 4, 9, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRTEInfo oc_emlrtRTEI = { 7, 9, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRTEInfo pc_emlrtRTEI = { 8, 9, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRTEInfo qc_emlrtRTEI = { 10, 9, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRTEInfo rc_emlrtRTEI = { 18, 9, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRTEInfo sc_emlrtRTEI = { 21, 13, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRTEInfo tc_emlrtRTEI = { 27, 17, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m" };

static emlrtRTEInfo ie_emlrtRTEI = { 130, 9, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtBCInfo se_emlrtBCI = { -1, -1, 8, 19, "iCanBeSelected",
  "randomSubspace", "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtDCInfo q_emlrtDCI = { 8, 19, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 1 };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 18, 48, "XTrain", "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 23, 19, "iIn", "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 25, 17, "iFeatureNum",
  "randomSubspace", "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtBCInfo we_emlrtBCI = { -1, -1, 25, 29, "iInNew", "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 26, 26, "bInMat", "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 26, 26, "iInNew", "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 35, 27, "iCanBeSelected",
  "randomSubspace", "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtDCInfo r_emlrtDCI = { 35, 27, "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 1 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 38, 56, "XTrain", "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 39, 33, "iInNew", "randomSubspace",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\randomSubspace.m", 0 };

static emlrtRSInfo ip_emlrtRSI = { 125, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo jp_emlrtRSI = { 148, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo kp_emlrtRSI = { 56, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

static emlrtRSInfo nq_emlrtRSI = { 57, "eml_null_assignment",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_null_assignment.m"
};

/* Function Declarations */
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b);

/* Function Definitions */
static int32_T num_true(const emlrtStack *sp, const emxArray_boolean_T *b)
{
  int32_T n;
  boolean_T overflow;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  n = 0;
  st.site = &mf_emlrtRSI;
  if (1 > b->size[1]) {
    overflow = false;
  } else {
    overflow = (b->size[1] > 2147483646);
  }

  if (overflow) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 1; k <= b->size[1]; k++) {
    n += b->data[k - 1];
  }

  return n;
}

void b_eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_real_T *idx)
{
  boolean_T overflow;
  int32_T i;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv141[2] = { 1, 31 };

  const mxArray *m55;
  char_T cv150[31];
  static const char_T cv151[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T nxin;
  const mxArray *b_y;
  emxArray_real_T *b_x;
  int32_T nxout;
  emxArray_boolean_T *b;
  int32_T k0;
  const mxArray *c_y;
  emxArray_real_T *c_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &if_emlrtRSI;
  overflow = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i <= idx->size[1] - 1)) {
    if ((idx->data[i] < 1.0) || ((int32_T)idx->data[i] > x->size[1]) ||
        (idx->data[i] != muDoubleScalarFloor(idx->data[i]))) {
      overflow = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (overflow) {
  } else {
    y = NULL;
    m55 = emlrtCreateCharArray(2, iv141);
    for (i = 0; i < 31; i++) {
      cv150[i] = cv151[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m55, cv150);
    emlrtAssign(&y, m55);
    b_st.site = &kp_emlrtRSI;
    c_st.site = &nq_emlrtRSI;
    f_error(&b_st, b_message(&c_st, y, &r_emlrtMCI), &s_emlrtMCI);
  }

  st.site = &jf_emlrtRSI;
  nxin = x->size[1];
  if (idx->size[1] == 1) {
    b_st.site = &mg_emlrtRSI;
    if ((int32_T)idx->data[0] > x->size[1] - 1) {
      overflow = false;
    } else {
      overflow = (x->size[1] - 1 > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (i = (int32_T)idx->data[0]; i < nxin; i++) {
      x->data[i - 1] = x->data[i];
    }

    if (nxin - 1 <= nxin) {
    } else {
      b_y = NULL;
      m55 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m55);
      b_st.site = &ip_emlrtRSI;
      f_error(&b_st, b_y, &eb_emlrtMCI);
    }

    if (1 > nxin - 1) {
      i = 0;
    } else {
      i = nxin - 1;
    }

    b_emxInit_real_T(&st, &b_x, 2, &xb_emlrtRTEI, true);
    nxout = b_x->size[0] * b_x->size[1];
    b_x->size[0] = 1;
    b_x->size[1] = i;
    emxEnsureCapacity(&st, (emxArray__common *)b_x, nxout, (int32_T)sizeof
                      (real_T), &xb_emlrtRTEI);
    for (nxout = 0; nxout < i; nxout++) {
      b_x->data[b_x->size[0] * nxout] = x->data[nxout];
    }

    nxout = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = b_x->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)x, nxout, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    i = b_x->size[1];
    for (nxout = 0; nxout < i; nxout++) {
      x->data[x->size[0] * nxout] = b_x->data[b_x->size[0] * nxout];
    }

    emxFree_real_T(&b_x);
  } else {
    b_emxInit_boolean_T(&st, &b, 2, &ie_emlrtRTEI, true);
    b_st.site = &ng_emlrtRSI;
    nxout = b->size[0] * b->size[1];
    b->size[0] = 1;
    emxEnsureCapacity(&b_st, (emxArray__common *)b, nxout, (int32_T)sizeof
                      (boolean_T), &xb_emlrtRTEI);
    i = x->size[1];
    nxout = b->size[0] * b->size[1];
    b->size[1] = i;
    emxEnsureCapacity(&b_st, (emxArray__common *)b, nxout, (int32_T)sizeof
                      (boolean_T), &xb_emlrtRTEI);
    i = x->size[1];
    for (nxout = 0; nxout < i; nxout++) {
      b->data[nxout] = false;
    }

    d_st.site = &og_emlrtRSI;
    if (1 > idx->size[1]) {
      overflow = false;
    } else {
      overflow = (idx->size[1] > 2147483646);
    }

    if (overflow) {
      e_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 1; i <= idx->size[1]; i++) {
      b->data[(int32_T)idx->data[i - 1] - 1] = true;
    }

    b_st.site = &kf_emlrtRSI;
    i = num_true(&b_st, b);
    nxout = x->size[1] - i;
    k0 = -1;
    b_st.site = &lf_emlrtRSI;
    if (1 > x->size[1]) {
      overflow = false;
    } else {
      overflow = (x->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (i = 1; i <= nxin; i++) {
      if ((i > b->size[1]) || (!b->data[i - 1])) {
        k0++;
        x->data[k0] = x->data[i - 1];
      }
    }

    emxFree_boolean_T(&b);
    if (nxout <= nxin) {
    } else {
      c_y = NULL;
      m55 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&c_y, m55);
      b_st.site = &jp_emlrtRSI;
      f_error(&b_st, c_y, &t_emlrtMCI);
    }

    if (1 > nxout) {
      i = 0;
    } else {
      i = nxout;
    }

    b_emxInit_real_T(&st, &c_x, 2, &xb_emlrtRTEI, true);
    nxout = c_x->size[0] * c_x->size[1];
    c_x->size[0] = 1;
    c_x->size[1] = i;
    emxEnsureCapacity(&st, (emxArray__common *)c_x, nxout, (int32_T)sizeof
                      (real_T), &xb_emlrtRTEI);
    for (nxout = 0; nxout < i; nxout++) {
      c_x->data[c_x->size[0] * nxout] = x->data[nxout];
    }

    nxout = x->size[0] * x->size[1];
    x->size[0] = 1;
    x->size[1] = c_x->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)x, nxout, (int32_T)sizeof(real_T),
                      &xb_emlrtRTEI);
    i = c_x->size[1];
    for (nxout = 0; nxout < i; nxout++) {
      x->data[x->size[0] * nxout] = c_x->data[c_x->size[0] * nxout];
    }

    emxFree_real_T(&c_x);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void eml_null_assignment(const emlrtStack *sp, emxArray_real_T *x, const
  emxArray_boolean_T *idx)
{
  int32_T i;
  const mxArray *y;
  static const int32_T iv140[2] = { 1, 31 };

  const mxArray *m54;
  char_T cv148[31];
  static const char_T cv149[31] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 's', 'u', 'b', 's', 'd', 'e', 'l', 'd', 'i', 'm', 'm',
    'i', 's', 'm', 'a', 't', 'c', 'h' };

  int32_T nxin;
  int32_T nxout;
  int32_T k0;
  boolean_T overflow;
  const mxArray *b_y;
  emxArray_real_T *b_x;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  st.site = &if_emlrtRSI;
  i = idx->size[1];
  while ((i >= 1) && (!idx->data[i - 1])) {
    i--;
  }

  if (i <= x->size[1]) {
  } else {
    y = NULL;
    m54 = emlrtCreateCharArray(2, iv140);
    for (i = 0; i < 31; i++) {
      cv148[i] = cv149[i];
    }

    emlrtInitCharArrayR2013a(&st, 31, m54, cv148);
    emlrtAssign(&y, m54);
    b_st.site = &kp_emlrtRSI;
    c_st.site = &nq_emlrtRSI;
    f_error(&b_st, b_message(&c_st, y, &r_emlrtMCI), &s_emlrtMCI);
  }

  st.site = &jf_emlrtRSI;
  nxin = x->size[1];
  b_st.site = &kf_emlrtRSI;
  i = num_true(&b_st, idx);
  nxout = x->size[1] - i;
  k0 = -1;
  b_st.site = &lf_emlrtRSI;
  if (1 > x->size[1]) {
    overflow = false;
  } else {
    overflow = (x->size[1] > 2147483646);
  }

  if (overflow) {
    d_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (i = 1; i <= nxin; i++) {
    if ((i > idx->size[1]) || (!idx->data[i - 1])) {
      k0++;
      x->data[k0] = x->data[i - 1];
    }
  }

  if (nxout <= nxin) {
  } else {
    b_y = NULL;
    m54 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m54);
    b_st.site = &jp_emlrtRSI;
    f_error(&b_st, b_y, &t_emlrtMCI);
  }

  if (1 > nxout) {
    i = 0;
  } else {
    i = nxout;
  }

  b_emxInit_real_T(&st, &b_x, 2, &xb_emlrtRTEI, true);
  nxout = b_x->size[0] * b_x->size[1];
  b_x->size[0] = 1;
  b_x->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_x, nxout, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  for (nxout = 0; nxout < i; nxout++) {
    b_x->data[b_x->size[0] * nxout] = x->data[nxout];
  }

  nxout = x->size[0] * x->size[1];
  x->size[0] = 1;
  x->size[1] = b_x->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)x, nxout, (int32_T)sizeof(real_T),
                    &xb_emlrtRTEI);
  i = b_x->size[1];
  for (nxout = 0; nxout < i; nxout++) {
    x->data[x->size[0] * nxout] = b_x->data[b_x->size[0] * nxout];
  }

  emxFree_real_T(&b_x);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void randomSubspace(const emlrtStack *sp, emxArray_real_T *iFeatureNum, real_T
                    lambda, real_T tol, const emxArray_real_T *XTrain,
                    emxArray_real_T *iIn)
{
  emxArray_real_T *iCanBeSelected;
  emxArray_real_T *iFeatIn;
  emxArray_boolean_T *bXVaries;
  emxArray_real_T *b_iFeatureNum;
  emxArray_real_T *b_XTrain;
  int32_T i12;
  int32_T loop_ub;
  emxArray_boolean_T *b_bXVaries;
  emxArray_real_T *b_iCanBeSelected;
  emxArray_real_T *indFeatIn;
  emxArray_real_T *c_iCanBeSelected;
  int32_T i13;
  real_T varargin_2;
  int32_T i14;
  emxArray_real_T *y;
  emxArray_real_T *b_y;
  int32_T b_iFeatIn[1];
  emxArray_real_T c_iFeatIn;
  emxArray_real_T *c_iFeatureNum;
  emxArray_boolean_T *bInMat;
  emxArray_boolean_T *b_bInMat;
  emxArray_boolean_T *c_bXVaries;
  emxArray_int32_T *ii;
  int32_T idx;
  boolean_T overflow;
  boolean_T exitg3;
  boolean_T guard2 = false;
  const mxArray *c_y;
  const mxArray *m12;
  emxArray_int32_T *b_ii;
  emxArray_real_T *c_ii;
  emxArray_real_T *c_XTrain;
  int32_T i15;
  emxArray_boolean_T *d_bXVaries;
  emxArray_real_T *iInNew;
  emxArray_real_T *b_iIn;
  real_T nSelected;
  emxArray_boolean_T *bRemainsSelected;
  emxArray_int32_T *r75;
  emxArray_int32_T *r76;
  emxArray_real_T *d_iCanBeSelected;
  emxArray_boolean_T *b_bRemainsSelected;
  emxArray_boolean_T *r77;
  emxArray_boolean_T *r78;
  emxArray_boolean_T *e_bXVaries;
  emxArray_real_T *r79;
  emxArray_real_T *r80;
  emxArray_boolean_T *f_bXVaries;
  emxArray_real_T *d_iFeatIn;
  emxArray_boolean_T *g_bXVaries;
  emxArray_real_T *d_XTrain;
  emxArray_real_T *d_ii;
  emxArray_boolean_T *h_bXVaries;
  emxArray_boolean_T *c_bInMat;
  emxArray_real_T *d_iFeatureNum;
  emxArray_real_T *e_iCanBeSelected;
  emxArray_int32_T *e_ii;
  boolean_T exitg1;
  int32_T e_iFeatIn[1];
  boolean_T exitg2;
  boolean_T guard1 = false;
  const mxArray *d_y;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  int32_T exitg11;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &iCanBeSelected, 2, &nc_emlrtRTEI, true);
  b_emxInit_real_T(sp, &iFeatIn, 2, &pc_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &bXVaries, 2, &rc_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_iFeatureNum, 2, &mc_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_XTrain, 2, &mc_emlrtRTEI, true);

  /* logging input variable 'iFeatureNum' for function 'randomSubspace' */
  emlrt_update_log_5(sp, iFeatureNum, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[117U], b_iFeatureNum);

  /* logging input variable 'lambda' for function 'randomSubspace' */
  emlrt_update_log_1(lambda, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[118U]);

  /* logging input variable 'tol' for function 'randomSubspace' */
  emlrt_update_log_1(tol, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[119U]);

  /* logging input variable 'XTrain' for function 'randomSubspace' */
  emlrt_update_log_2(sp, XTrain, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[120U], b_XTrain);
  st.site = &pg_emlrtRSI;
  fastUnique(&st, iFeatureNum, iFeatIn);
  emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[121U], iCanBeSelected);
  i12 = bXVaries->size[0] * bXVaries->size[1];
  bXVaries->size[0] = 1;
  bXVaries->size[1] = iCanBeSelected->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)bXVaries, i12, (int32_T)sizeof
                    (boolean_T), &mc_emlrtRTEI);
  loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
  emxFree_real_T(&b_XTrain);
  emxFree_real_T(&b_iFeatureNum);
  for (i12 = 0; i12 < loop_ub; i12++) {
    bXVaries->data[i12] = muDoubleScalarIsNaN(iCanBeSelected->data[i12]);
  }

  b_emxInit_boolean_T(sp, &b_bXVaries, 2, &mc_emlrtRTEI, true);
  i12 = b_bXVaries->size[0] * b_bXVaries->size[1];
  b_bXVaries->size[0] = 1;
  b_bXVaries->size[1] = bXVaries->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_bXVaries, i12, (int32_T)sizeof
                    (boolean_T), &mc_emlrtRTEI);
  loop_ub = bXVaries->size[0] * bXVaries->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_bXVaries->data[i12] = bXVaries->data[i12];
  }

  b_emxInit_real_T(sp, &b_iCanBeSelected, 2, &mc_emlrtRTEI, true);
  emlrt_update_log_28(sp, b_bXVaries, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[123U], bXVaries);
  st.site = &qg_emlrtRSI;
  eml_null_assignment(&st, iCanBeSelected, bXVaries);
  i12 = b_iCanBeSelected->size[0] * b_iCanBeSelected->size[1];
  b_iCanBeSelected->size[0] = 1;
  b_iCanBeSelected->size[1] = iCanBeSelected->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_iCanBeSelected, i12, (int32_T)
                    sizeof(real_T), &mc_emlrtRTEI);
  loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
  emxFree_boolean_T(&b_bXVaries);
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_iCanBeSelected->data[i12] = iCanBeSelected->data[i12];
  }

  b_emxInit_real_T(sp, &indFeatIn, 2, &oc_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_iCanBeSelected, 2, &mc_emlrtRTEI, true);
  emlrt_update_log_5(sp, b_iCanBeSelected, *(emlrtLocationLoggingDataType (*)
    [613])&emlrtLocationLoggingDataTables[122U], iCanBeSelected);
  lambda = emlrt_update_log_1(muDoubleScalarMin(iCanBeSelected->size[1], lambda),
    *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables[124U]);
  st.site = &rg_emlrtRSI;
  randperm(&st, iCanBeSelected->size[1], lambda, iFeatIn);
  emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[125U], indFeatIn);
  i12 = c_iCanBeSelected->size[0] * c_iCanBeSelected->size[1];
  c_iCanBeSelected->size[0] = 1;
  c_iCanBeSelected->size[1] = indFeatIn->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_iCanBeSelected, i12, (int32_T)
                    sizeof(real_T), &mc_emlrtRTEI);
  loop_ub = indFeatIn->size[0] * indFeatIn->size[1];
  emxFree_real_T(&b_iCanBeSelected);
  for (i12 = 0; i12 < loop_ub; i12++) {
    i13 = iCanBeSelected->size[1];
    varargin_2 = indFeatIn->data[i12];
    i14 = (int32_T)emlrtIntegerCheckFastR2012b(varargin_2, &q_emlrtDCI, sp);
    c_iCanBeSelected->data[i12] = iCanBeSelected->
      data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &se_emlrtBCI, sp) - 1];
  }

  emxInit_real_T(sp, &y, 1, &mc_emlrtRTEI, true);
  emxInit_real_T(sp, &b_y, 1, &mc_emlrtRTEI, true);
  emlrt_update_log_5(sp, c_iCanBeSelected, *(emlrtLocationLoggingDataType (*)
    [613])&emlrtLocationLoggingDataTables[126U], iFeatIn);
  st.site = &sg_emlrtRSI;
  b_iFeatIn[0] = iFeatIn->size[1];
  c_iFeatIn = *iFeatIn;
  c_iFeatIn.size = (int32_T *)&b_iFeatIn;
  c_iFeatIn.numDimensions = 1;
  b_st.site = &pe_emlrtRSI;
  b_eml_sort(&b_st, &c_iFeatIn, y);
  i12 = b_y->size[0];
  b_y->size[0] = y->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_y, i12, (int32_T)sizeof(real_T),
                    &mc_emlrtRTEI);
  loop_ub = y->size[0];
  emxFree_real_T(&c_iCanBeSelected);
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_y->data[i12] = y->data[i12];
  }

  b_emxInit_real_T(sp, &c_iFeatureNum, 2, &mc_emlrtRTEI, true);
  emlrt_update_log_20(sp, b_y, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[128U], y);
  loop_ub = iFeatureNum->size[1];
  i12 = c_iFeatureNum->size[0] * c_iFeatureNum->size[1];
  c_iFeatureNum->size[0] = 1;
  c_iFeatureNum->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)c_iFeatureNum, i12, (int32_T)sizeof
                    (real_T), &mc_emlrtRTEI);
  emxFree_real_T(&b_y);
  for (i12 = 0; i12 < loop_ub; i12++) {
    c_iFeatureNum->data[c_iFeatureNum->size[0] * i12] = iFeatureNum->data[i12];
  }

  b_emxInit_boolean_T(sp, &bInMat, 2, &qc_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_bInMat, 2, &mc_emlrtRTEI, true);
  st.site = &sg_emlrtRSI;
  b_bsxfun(&st, c_iFeatureNum, y, bInMat);
  i12 = b_bInMat->size[0] * b_bInMat->size[1];
  b_bInMat->size[0] = bInMat->size[0];
  b_bInMat->size[1] = bInMat->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_bInMat, i12, (int32_T)sizeof
                    (boolean_T), &mc_emlrtRTEI);
  loop_ub = bInMat->size[0] * bInMat->size[1];
  emxFree_real_T(&c_iFeatureNum);
  emxFree_real_T(&y);
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_bInMat->data[i12] = bInMat->data[i12];
  }

  b_emxInit_boolean_T(sp, &c_bXVaries, 2, &mc_emlrtRTEI, true);
  emlrt_update_log_30(sp, b_bInMat, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[127U], bInMat);
  st.site = &tg_emlrtRSI;
  b_any(&st, bInMat, bXVaries);
  i12 = c_bXVaries->size[0] * c_bXVaries->size[1];
  c_bXVaries->size[0] = 1;
  c_bXVaries->size[1] = bXVaries->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_bXVaries, i12, (int32_T)sizeof
                    (boolean_T), &mc_emlrtRTEI);
  loop_ub = bXVaries->size[0] * bXVaries->size[1];
  emxFree_boolean_T(&b_bInMat);
  for (i12 = 0; i12 < loop_ub; i12++) {
    c_bXVaries->data[i12] = bXVaries->data[i12];
  }

  b_emxInit_int32_T(sp, &ii, 2, &n_emlrtRTEI, true);
  emlrt_update_log_28(sp, c_bXVaries, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[130U], bXVaries);
  st.site = &tg_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  idx = 0;
  i12 = ii->size[0] * ii->size[1];
  ii->size[0] = 1;
  ii->size[1] = bXVaries->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)ii, i12, (int32_T)sizeof(int32_T),
                    &i_emlrtRTEI);
  c_st.site = &x_emlrtRSI;
  emxFree_boolean_T(&c_bXVaries);
  if (1 > bXVaries->size[1]) {
    overflow = false;
  } else {
    overflow = (bXVaries->size[1] > 2147483646);
  }

  if (overflow) {
    d_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  loop_ub = 1;
  exitg3 = false;
  while ((!exitg3) && (loop_ub <= bXVaries->size[1])) {
    guard2 = false;
    if (bXVaries->data[loop_ub - 1]) {
      idx++;
      ii->data[idx - 1] = loop_ub;
      if (idx >= bXVaries->size[1]) {
        exitg3 = true;
      } else {
        guard2 = true;
      }
    } else {
      guard2 = true;
    }

    if (guard2) {
      loop_ub++;
    }
  }

  if (idx <= bXVaries->size[1]) {
  } else {
    c_y = NULL;
    m12 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&c_y, m12);
    c_st.site = &bq_emlrtRSI;
    f_error(&c_st, c_y, &j_emlrtMCI);
  }

  if (bXVaries->size[1] == 1) {
    if (idx == 0) {
      i12 = ii->size[0] * ii->size[1];
      ii->size[0] = 1;
      ii->size[1] = 0;
      emxEnsureCapacity(&b_st, (emxArray__common *)ii, i12, (int32_T)sizeof
                        (int32_T), &mc_emlrtRTEI);
    }
  } else {
    if (1 > idx) {
      loop_ub = 0;
    } else {
      loop_ub = idx;
    }

    b_emxInit_int32_T(&b_st, &b_ii, 2, &mc_emlrtRTEI, true);
    i12 = b_ii->size[0] * b_ii->size[1];
    b_ii->size[0] = 1;
    b_ii->size[1] = loop_ub;
    emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i12, (int32_T)sizeof
                      (int32_T), &mc_emlrtRTEI);
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_ii->data[b_ii->size[0] * i12] = ii->data[i12];
    }

    i12 = ii->size[0] * ii->size[1];
    ii->size[0] = 1;
    ii->size[1] = b_ii->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)ii, i12, (int32_T)sizeof
                      (int32_T), &mc_emlrtRTEI);
    loop_ub = b_ii->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      ii->data[ii->size[0] * i12] = b_ii->data[b_ii->size[0] * i12];
    }

    emxFree_int32_T(&b_ii);
  }

  b_emxInit_real_T(&b_st, &c_ii, 2, &mc_emlrtRTEI, true);
  i12 = c_ii->size[0] * c_ii->size[1];
  c_ii->size[0] = 1;
  c_ii->size[1] = ii->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_ii, i12, (int32_T)sizeof(real_T),
                    &mc_emlrtRTEI);
  loop_ub = ii->size[0] * ii->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    c_ii->data[i12] = ii->data[i12];
  }

  b_emxInit_real_T(sp, &c_XTrain, 2, &mc_emlrtRTEI, true);
  emlrt_update_log_5(sp, c_ii, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[129U], iIn);

  /*  Check for variation along selected dimensions and resample features that */
  /*  have no variation */
  loop_ub = XTrain->size[0];
  i12 = c_XTrain->size[0] * c_XTrain->size[1];
  c_XTrain->size[0] = loop_ub;
  c_XTrain->size[1] = iIn->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_XTrain, i12, (int32_T)sizeof
                    (real_T), &mc_emlrtRTEI);
  idx = iIn->size[1];
  emxFree_real_T(&c_ii);
  for (i12 = 0; i12 < idx; i12++) {
    for (i13 = 0; i13 < loop_ub; i13++) {
      i14 = XTrain->size[1];
      i15 = (int32_T)iIn->data[iIn->size[0] * i12];
      c_XTrain->data[i13 + c_XTrain->size[0] * i12] = XTrain->data[i13 +
        XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i15, 1, i14,
        &te_emlrtBCI, sp) - 1)];
    }
  }

  b_emxInit_boolean_T(sp, &d_bXVaries, 2, &mc_emlrtRTEI, true);
  st.site = &ug_emlrtRSI;
  queryIfColumnsVary(&st, c_XTrain, tol, bXVaries);
  i12 = d_bXVaries->size[0] * d_bXVaries->size[1];
  d_bXVaries->size[0] = 1;
  d_bXVaries->size[1] = bXVaries->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_bXVaries, i12, (int32_T)sizeof
                    (boolean_T), &mc_emlrtRTEI);
  loop_ub = bXVaries->size[0] * bXVaries->size[1];
  emxFree_real_T(&c_XTrain);
  for (i12 = 0; i12 < loop_ub; i12++) {
    d_bXVaries->data[i12] = bXVaries->data[i12];
  }

  emlrt_update_log_28(sp, d_bXVaries, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[131U], bXVaries);
  emxFree_boolean_T(&d_bXVaries);
  st.site = &vg_emlrtRSI;
  if (!emlrt_update_log_31(all(&st, bXVaries), *(emlrtLocationLoggingDataType (*)
        [613])&emlrtLocationLoggingDataTables[132U])) {
    b_emxInit_real_T(sp, &iInNew, 2, &sc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &b_iIn, 2, &mc_emlrtRTEI, true);
    emlrt_update_log_5(sp, iIn, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[133U], iInNew);
    nSelected = emlrt_update_log_1(0.0, *(emlrtLocationLoggingDataType (*)[613])
      &emlrtLocationLoggingDataTables[134U]);
    st.site = &wg_emlrtRSI;
    eml_li_find(&st, bXVaries, ii);
    i12 = b_iIn->size[0] * b_iIn->size[1];
    b_iIn->size[0] = 1;
    b_iIn->size[1] = ii->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_iIn, i12, (int32_T)sizeof(real_T),
                      &mc_emlrtRTEI);
    loop_ub = ii->size[0] * ii->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      i13 = iIn->size[1];
      i14 = ii->data[i12];
      b_iIn->data[i12] = iIn->data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13,
        &ue_emlrtBCI, sp) - 1];
    }

    emlrt_update_log_5(sp, b_iIn, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[135U], iIn);
    emxFree_real_T(&b_iIn);
    emxInit_boolean_T(sp, &bRemainsSelected, 1, &tc_emlrtRTEI, true);
    b_emxInit_int32_T(sp, &r75, 2, &mc_emlrtRTEI, true);
    emxInit_int32_T(sp, &r76, 1, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &d_iCanBeSelected, 2, &mc_emlrtRTEI, true);
    emxInit_boolean_T(sp, &b_bRemainsSelected, 1, &mc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &r77, 2, &mc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &r78, 2, &mc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &e_bXVaries, 2, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &r79, 2, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &r80, 2, &mc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &f_bXVaries, 2, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &d_iFeatIn, 2, &mc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &g_bXVaries, 2, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &d_XTrain, 2, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &d_ii, 2, &mc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &h_bXVaries, 2, &mc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &c_bInMat, 2, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &d_iFeatureNum, 2, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &e_iCanBeSelected, 2, &mc_emlrtRTEI, true);
    b_emxInit_int32_T(sp, &e_ii, 2, &mc_emlrtRTEI, true);
    exitg1 = false;
    do {
      exitg11 = 0;
      st.site = &xg_emlrtRSI;
      if ((!exitg1) && ((!emlrt_update_log_31(all(&st, bXVaries),
             *(emlrtLocationLoggingDataType (*)[613])&
             emlrtLocationLoggingDataTables[136U])) && (lambda > 0.0))) {
        i12 = f_bXVaries->size[0] * f_bXVaries->size[1];
        f_bXVaries->size[0] = 1;
        f_bXVaries->size[1] = bXVaries->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)f_bXVaries, i12, (int32_T)
                          sizeof(boolean_T), &mc_emlrtRTEI);
        loop_ub = bXVaries->size[0] * bXVaries->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          f_bXVaries->data[i12] = !bXVaries->data[i12];
        }

        st.site = &yg_emlrtRSI;
        eml_li_find(&st, f_bXVaries, ii);
        i12 = r75->size[0] * r75->size[1];
        r75->size[0] = 1;
        r75->size[1] = ii->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r75, i12, (int32_T)sizeof
                          (int32_T), &mc_emlrtRTEI);
        loop_ub = ii->size[0] * ii->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          i13 = iFeatureNum->size[1];
          i14 = iInNew->size[1];
          i15 = ii->data[i12];
          i14 = (int32_T)iInNew->data[emlrtDynamicBoundsCheckFastR2012b(i15, 1,
            i14, &we_emlrtBCI, sp) - 1];
          r75->data[i12] = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13,
            &ve_emlrtBCI, sp);
        }

        i12 = r79->size[0] * r79->size[1];
        r79->size[0] = 1;
        r79->size[1] = r75->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r79, i12, (int32_T)sizeof
                          (real_T), &mc_emlrtRTEI);
        loop_ub = r75->size[0] * r75->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          r79->data[i12] = rtNaN;
        }

        emlrt_update_log_5(sp, r79, *(emlrtLocationLoggingDataType (*)[613])&
                           emlrtLocationLoggingDataTables[137U], r80);
        loop_ub = r80->size[0] * r80->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          iFeatureNum->data[r75->data[i12] - 1] = r80->data[i12];
        }

        i12 = e_bXVaries->size[0] * e_bXVaries->size[1];
        e_bXVaries->size[0] = 1;
        e_bXVaries->size[1] = bXVaries->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)e_bXVaries, i12, (int32_T)
                          sizeof(boolean_T), &mc_emlrtRTEI);
        loop_ub = bXVaries->size[0] * bXVaries->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          e_bXVaries->data[i12] = !bXVaries->data[i12];
        }

        st.site = &ah_emlrtRSI;
        eml_li_find(&st, e_bXVaries, ii);
        i12 = r76->size[0];
        r76->size[0] = ii->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)r76, i12, (int32_T)sizeof
                          (int32_T), &mc_emlrtRTEI);
        loop_ub = ii->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          i13 = bInMat->size[1];
          i14 = iInNew->size[1];
          i15 = ii->data[ii->size[0] * i12];
          i14 = (int32_T)iInNew->data[emlrtDynamicBoundsCheckFastR2012b(i15, 1,
            i14, &ye_emlrtBCI, sp) - 1];
          r76->data[i12] = emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13,
            &xe_emlrtBCI, sp);
        }

        i12 = bInMat->size[0];
        i13 = r77->size[0] * r77->size[1];
        r77->size[0] = i12;
        emxEnsureCapacity(sp, (emxArray__common *)r77, i13, (int32_T)sizeof
                          (boolean_T), &mc_emlrtRTEI);
        loop_ub = r76->size[0];
        i13 = r77->size[0] * r77->size[1];
        r77->size[1] = loop_ub;
        emxEnsureCapacity(sp, (emxArray__common *)r77, i13, (int32_T)sizeof
                          (boolean_T), &mc_emlrtRTEI);
        loop_ub = i12 * r76->size[0];
        for (i12 = 0; i12 < loop_ub; i12++) {
          r77->data[i12] = false;
        }

        emlrt_update_log_30(sp, r77, *(emlrtLocationLoggingDataType (*)[613])&
                            emlrtLocationLoggingDataTables[138U], r78);
        loop_ub = r78->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          idx = r78->size[0];
          for (i13 = 0; i13 < idx; i13++) {
            bInMat->data[i13 + bInMat->size[0] * (r76->data[i12] - 1)] =
              r78->data[i13 + r78->size[0] * i12];
          }
        }

        st.site = &bh_emlrtRSI;
        c_any(&st, bInMat, bRemainsSelected);
        i12 = b_bRemainsSelected->size[0];
        b_bRemainsSelected->size[0] = bRemainsSelected->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)b_bRemainsSelected, i12,
                          (int32_T)sizeof(boolean_T), &mc_emlrtRTEI);
        loop_ub = bRemainsSelected->size[0];
        for (i12 = 0; i12 < loop_ub; i12++) {
          b_bRemainsSelected->data[i12] = bRemainsSelected->data[i12];
        }

        emlrt_update_log_19(sp, b_bRemainsSelected,
                            *(emlrtLocationLoggingDataType (*)[613])&
                            emlrtLocationLoggingDataTables[139U],
                            bRemainsSelected);
        st.site = &ch_emlrtRSI;
        nSelected = emlrt_update_log_1(nSelected + emlrt_update_log_1(d_sum(&st,
          bRemainsSelected), *(emlrtLocationLoggingDataType (*)[613])&
          emlrtLocationLoggingDataTables[141U]), *(emlrtLocationLoggingDataType
                                        (*)[613])&
          emlrtLocationLoggingDataTables[140U]);
        st.site = &dh_emlrtRSI;
        b_eml_null_assignment(&st, iCanBeSelected, indFeatIn);
        i12 = d_iCanBeSelected->size[0] * d_iCanBeSelected->size[1];
        d_iCanBeSelected->size[0] = 1;
        d_iCanBeSelected->size[1] = iCanBeSelected->size[1];
        emxEnsureCapacity(sp, (emxArray__common *)d_iCanBeSelected, i12,
                          (int32_T)sizeof(real_T), &mc_emlrtRTEI);
        loop_ub = iCanBeSelected->size[0] * iCanBeSelected->size[1];
        for (i12 = 0; i12 < loop_ub; i12++) {
          d_iCanBeSelected->data[i12] = iCanBeSelected->data[i12];
        }

        emlrt_update_log_5(sp, d_iCanBeSelected, *(emlrtLocationLoggingDataType
                            (*)[613])&emlrtLocationLoggingDataTables[142U],
                           iCanBeSelected);
        varargin_2 = emlrt_update_log_1(lambda - nSelected,
          *(emlrtLocationLoggingDataType (*)[613])&
          emlrtLocationLoggingDataTables[144U]);
        lambda = emlrt_update_log_1(muDoubleScalarMin(iCanBeSelected->size[1],
          varargin_2), *(emlrtLocationLoggingDataType (*)[613])&
          emlrtLocationLoggingDataTables[143U]);
        if (lambda < 1.0) {
          exitg1 = true;
        } else {
          st.site = &eh_emlrtRSI;
          randperm(&st, iCanBeSelected->size[1], lambda, iFeatIn);
          emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)[613])
                             &emlrtLocationLoggingDataTables[145U], indFeatIn);
          i12 = e_iCanBeSelected->size[0] * e_iCanBeSelected->size[1];
          e_iCanBeSelected->size[0] = 1;
          e_iCanBeSelected->size[1] = indFeatIn->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)e_iCanBeSelected, i12,
                            (int32_T)sizeof(real_T), &mc_emlrtRTEI);
          loop_ub = indFeatIn->size[0] * indFeatIn->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            i13 = iCanBeSelected->size[1];
            varargin_2 = indFeatIn->data[i12];
            i14 = (int32_T)emlrtIntegerCheckFastR2012b(varargin_2, &r_emlrtDCI,
              sp);
            e_iCanBeSelected->data[i12] = iCanBeSelected->
              data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13, &af_emlrtBCI,
              sp) - 1];
          }

          emlrt_update_log_5(sp, e_iCanBeSelected,
                             *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[146U], iFeatIn);
          loop_ub = iFeatureNum->size[1];
          i12 = d_iFeatureNum->size[0] * d_iFeatureNum->size[1];
          d_iFeatureNum->size[0] = 1;
          d_iFeatureNum->size[1] = loop_ub;
          emxEnsureCapacity(sp, (emxArray__common *)d_iFeatureNum, i12, (int32_T)
                            sizeof(real_T), &mc_emlrtRTEI);
          for (i12 = 0; i12 < loop_ub; i12++) {
            d_iFeatureNum->data[d_iFeatureNum->size[0] * i12] =
              iFeatureNum->data[i12];
          }

          e_iFeatIn[0] = iFeatIn->size[1];
          c_iFeatIn = *iFeatIn;
          c_iFeatIn.size = (int32_T *)&e_iFeatIn;
          c_iFeatIn.numDimensions = 1;
          st.site = &fh_emlrtRSI;
          b_bsxfun(&st, d_iFeatureNum, &c_iFeatIn, bInMat);
          i12 = c_bInMat->size[0] * c_bInMat->size[1];
          c_bInMat->size[0] = bInMat->size[0];
          c_bInMat->size[1] = bInMat->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)c_bInMat, i12, (int32_T)
                            sizeof(boolean_T), &mc_emlrtRTEI);
          loop_ub = bInMat->size[0] * bInMat->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            c_bInMat->data[i12] = bInMat->data[i12];
          }

          emlrt_update_log_30(sp, c_bInMat, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[147U], bInMat);
          st.site = &gh_emlrtRSI;
          b_any(&st, bInMat, bXVaries);
          i12 = h_bXVaries->size[0] * h_bXVaries->size[1];
          h_bXVaries->size[0] = 1;
          h_bXVaries->size[1] = bXVaries->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)h_bXVaries, i12, (int32_T)
                            sizeof(boolean_T), &mc_emlrtRTEI);
          loop_ub = bXVaries->size[0] * bXVaries->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            h_bXVaries->data[i12] = bXVaries->data[i12];
          }

          emlrt_update_log_28(sp, h_bXVaries, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[149U], bXVaries);
          st.site = &gh_emlrtRSI;
          b_st.site = &w_emlrtRSI;
          idx = 0;
          i12 = ii->size[0] * ii->size[1];
          ii->size[0] = 1;
          ii->size[1] = bXVaries->size[1];
          emxEnsureCapacity(&b_st, (emxArray__common *)ii, i12, (int32_T)sizeof
                            (int32_T), &i_emlrtRTEI);
          c_st.site = &x_emlrtRSI;
          if (1 > bXVaries->size[1]) {
            overflow = false;
          } else {
            overflow = (bXVaries->size[1] > 2147483646);
          }

          if (overflow) {
            d_st.site = &v_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          loop_ub = 1;
          exitg2 = false;
          while ((!exitg2) && (loop_ub <= bXVaries->size[1])) {
            guard1 = false;
            if (bXVaries->data[loop_ub - 1]) {
              idx++;
              ii->data[idx - 1] = loop_ub;
              if (idx >= bXVaries->size[1]) {
                exitg2 = true;
              } else {
                guard1 = true;
              }
            } else {
              guard1 = true;
            }

            if (guard1) {
              loop_ub++;
            }
          }

          if (idx <= bXVaries->size[1]) {
          } else {
            d_y = NULL;
            m12 = emlrtCreateString("Assertion failed.");
            emlrtAssign(&d_y, m12);
            c_st.site = &bq_emlrtRSI;
            f_error(&c_st, d_y, &j_emlrtMCI);
          }

          if (bXVaries->size[1] == 1) {
            if (idx == 0) {
              i12 = ii->size[0] * ii->size[1];
              ii->size[0] = 1;
              ii->size[1] = 0;
              emxEnsureCapacity(&b_st, (emxArray__common *)ii, i12, (int32_T)
                                sizeof(int32_T), &mc_emlrtRTEI);
            }
          } else {
            if (1 > idx) {
              loop_ub = 0;
            } else {
              loop_ub = idx;
            }

            i12 = e_ii->size[0] * e_ii->size[1];
            e_ii->size[0] = 1;
            e_ii->size[1] = loop_ub;
            emxEnsureCapacity(&b_st, (emxArray__common *)e_ii, i12, (int32_T)
                              sizeof(int32_T), &mc_emlrtRTEI);
            for (i12 = 0; i12 < loop_ub; i12++) {
              e_ii->data[e_ii->size[0] * i12] = ii->data[i12];
            }

            i12 = ii->size[0] * ii->size[1];
            ii->size[0] = 1;
            ii->size[1] = e_ii->size[1];
            emxEnsureCapacity(&b_st, (emxArray__common *)ii, i12, (int32_T)
                              sizeof(int32_T), &mc_emlrtRTEI);
            loop_ub = e_ii->size[1];
            for (i12 = 0; i12 < loop_ub; i12++) {
              ii->data[ii->size[0] * i12] = e_ii->data[e_ii->size[0] * i12];
            }
          }

          i12 = d_ii->size[0] * d_ii->size[1];
          d_ii->size[0] = 1;
          d_ii->size[1] = ii->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)d_ii, i12, (int32_T)sizeof
                            (real_T), &mc_emlrtRTEI);
          loop_ub = ii->size[0] * ii->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            d_ii->data[i12] = ii->data[i12];
          }

          emlrt_update_log_5(sp, d_ii, *(emlrtLocationLoggingDataType (*)[613])&
                             emlrtLocationLoggingDataTables[148U], iInNew);
          loop_ub = XTrain->size[0];
          i12 = d_XTrain->size[0] * d_XTrain->size[1];
          d_XTrain->size[0] = loop_ub;
          d_XTrain->size[1] = iInNew->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)d_XTrain, i12, (int32_T)
                            sizeof(real_T), &mc_emlrtRTEI);
          idx = iInNew->size[1];
          for (i12 = 0; i12 < idx; i12++) {
            for (i13 = 0; i13 < loop_ub; i13++) {
              i14 = XTrain->size[1];
              i15 = (int32_T)iInNew->data[iInNew->size[0] * i12];
              d_XTrain->data[i13 + d_XTrain->size[0] * i12] = XTrain->data[i13 +
                XTrain->size[0] * (emlrtDynamicBoundsCheckFastR2012b(i15, 1, i14,
                &bf_emlrtBCI, sp) - 1)];
            }
          }

          st.site = &hh_emlrtRSI;
          queryIfColumnsVary(&st, d_XTrain, tol, bXVaries);
          i12 = g_bXVaries->size[0] * g_bXVaries->size[1];
          g_bXVaries->size[0] = 1;
          g_bXVaries->size[1] = bXVaries->size[1];
          emxEnsureCapacity(sp, (emxArray__common *)g_bXVaries, i12, (int32_T)
                            sizeof(boolean_T), &mc_emlrtRTEI);
          loop_ub = bXVaries->size[0] * bXVaries->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            g_bXVaries->data[i12] = bXVaries->data[i12];
          }

          emlrt_update_log_28(sp, g_bXVaries, *(emlrtLocationLoggingDataType (*)
            [613])&emlrtLocationLoggingDataTables[150U], bXVaries);
          st.site = &ih_emlrtRSI;
          b_st.site = &ih_emlrtRSI;
          eml_li_find(&b_st, bXVaries, ii);
          i12 = iFeatIn->size[0] * iFeatIn->size[1];
          iFeatIn->size[0] = 1;
          iFeatIn->size[1] = iIn->size[1] + ii->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)iFeatIn, i12, (int32_T)
                            sizeof(real_T), &mc_emlrtRTEI);
          loop_ub = iIn->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            iFeatIn->data[iFeatIn->size[0] * i12] = iIn->data[iIn->size[0] * i12];
          }

          loop_ub = ii->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            i13 = iInNew->size[1];
            i14 = ii->data[ii->size[0] * i12];
            iFeatIn->data[iFeatIn->size[0] * (i12 + iIn->size[1])] =
              iInNew->data[emlrtDynamicBoundsCheckFastR2012b(i14, 1, i13,
              &cf_emlrtBCI, &st) - 1];
          }

          i12 = d_iFeatIn->size[0] * d_iFeatIn->size[1];
          d_iFeatIn->size[0] = 1;
          d_iFeatIn->size[1] = iFeatIn->size[1];
          emxEnsureCapacity(&st, (emxArray__common *)d_iFeatIn, i12, (int32_T)
                            sizeof(real_T), &mc_emlrtRTEI);
          loop_ub = iFeatIn->size[0] * iFeatIn->size[1];
          for (i12 = 0; i12 < loop_ub; i12++) {
            d_iFeatIn->data[i12] = iFeatIn->data[i12];
          }

          b_st.site = &pe_emlrtRSI;
          eml_sort(&b_st, d_iFeatIn, iFeatIn);
          emlrt_update_log_5(sp, iFeatIn, *(emlrtLocationLoggingDataType (*)[613])
                             &emlrtLocationLoggingDataTables[151U], iIn);
          emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
        }
      } else {
        exitg11 = 1;
      }
    } while (exitg11 == 0);

    emxFree_int32_T(&e_ii);
    emxFree_real_T(&e_iCanBeSelected);
    emxFree_real_T(&d_iFeatureNum);
    emxFree_boolean_T(&c_bInMat);
    emxFree_boolean_T(&h_bXVaries);
    emxFree_real_T(&d_ii);
    emxFree_real_T(&d_XTrain);
    emxFree_boolean_T(&g_bXVaries);
    emxFree_real_T(&d_iFeatIn);
    emxFree_boolean_T(&f_bXVaries);
    emxFree_real_T(&r80);
    emxFree_real_T(&r79);
    emxFree_boolean_T(&e_bXVaries);
    emxFree_boolean_T(&r78);
    emxFree_boolean_T(&r77);
    emxFree_boolean_T(&b_bRemainsSelected);
    emxFree_real_T(&d_iCanBeSelected);
    emxFree_int32_T(&r76);
    emxFree_int32_T(&r75);
    emxFree_boolean_T(&bRemainsSelected);
    emxFree_real_T(&iInNew);
  }

  emxFree_int32_T(&ii);
  emxFree_boolean_T(&bXVaries);
  emxFree_boolean_T(&bInMat);
  emxFree_real_T(&iFeatIn);
  emxFree_real_T(&indFeatIn);
  emxFree_real_T(&iCanBeSelected);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (randomSubspace.c) */
