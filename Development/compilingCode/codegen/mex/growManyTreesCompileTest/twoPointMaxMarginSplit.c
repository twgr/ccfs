/*
 * twoPointMaxMarginSplit.c
 *
 * Code generation for function 'twoPointMaxMarginSplit'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "twoPointMaxMarginSplit.h"
#include "abs.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growCCTnotRecursive.h"
#include "any.h"
#include "eml_int_forloop_overflow_check.h"
#include "all.h"
#include "sum.h"
#include "bsxfun.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo yg_emlrtRSI = { 4, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo ah_emlrtRSI = { 9, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo bh_emlrtRSI = { 10, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo ch_emlrtRSI = { 12, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo dh_emlrtRSI = { 26, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo eh_emlrtRSI = { 28, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo fh_emlrtRSI = { 29, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo gh_emlrtRSI = { 30, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRTEInfo oc_emlrtRTEI = { 1, 28, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRTEInfo pc_emlrtRTEI = { 4, 1, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRTEInfo qc_emlrtRTEI = { 6, 5, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtRTEInfo rc_emlrtRTEI = { 7, 5, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtECInfo mb_emlrtECI = { 2, 28, 12, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtBCInfo xe_emlrtBCI = { -1, -1, 28, 30, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m", 0 };

static emlrtECInfo nb_emlrtECI = { 2, 27, 8, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtBCInfo ye_emlrtBCI = { -1, -1, 27, 22, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m", 0 };

static emlrtECInfo ob_emlrtECI = { 2, 12, 8, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m" };

static emlrtBCInfo af_emlrtBCI = { -1, -1, 4, 36, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m", 0 };

static emlrtBCInfo bf_emlrtBCI = { -1, -1, 9, 15, "Y", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m", 0 };

static emlrtBCInfo cf_emlrtBCI = { -1, -1, 10, 16, "Y", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m", 0 };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 27, 10, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m", 0 };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 28, 14, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\twoPointMaxMarginSplit.m", 0 };

/* Function Definitions */
void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                   emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m18;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ef_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 0;
  b_st.site = &gf_emlrtRSI;
  if (1 > x->size[0]) {
    overflow = false;
  } else {
    overflow = (x->size[0] > 2147483646);
  }

  if (overflow) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&c_st);
  }

  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  if (k <= x->size[0]) {
  } else {
    b_y = NULL;
    m18 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m18);
    st.site = &uo_emlrtRSI;
    f_error(&st, b_y, &o_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &q_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &sc_emlrtRTEI);
  j = 0;
  st.site = &ff_emlrtRSI;
  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

void twoPointMaxMarginSplit(const emlrtStack *sp, const emxArray_real_T *X,
  const emxArray_boolean_T *Y, real_T tol, boolean_T *bSp, emxArray_real_T *rmm,
  real_T cmm_data[], int32_T cmm_size[2])
{
  emxArray_real_T *b_X;
  int32_T ii;
  int32_T loop_ub;
  emxArray_real_T *r13;
  emxArray_real_T *r14;
  emxArray_boolean_T *r15;
  emxArray_boolean_T *bType1;
  emxArray_boolean_T *YLeft;
  emxArray_boolean_T *YRight;
  emxArray_int32_T *r16;
  int32_T b_loop_ub;
  int32_T i19;
  int32_T i20;
  int32_T idx;
  emxArray_boolean_T *b_bType1;
  emxArray_real_T *r17;
  emxArray_real_T *a;
  emxArray_real_T *r18;
  int32_T c_X[2];
  int32_T d_X[2];
  boolean_T tmp_data[10000];
  int32_T tmp_size[2];
  emxArray_boolean_T b_tmp_data;
  int32_T k;
  const mxArray *y;
  const mxArray *m16;
  int32_T ii_data[1];
  boolean_T overflow;
  boolean_T exitg1;
  const mxArray *b_y;
  int32_T b_ii_data[1];
  int32_T iType2_data[1];
  emxArray_real_T *e_X;
  emxArray_real_T *f_X;
  emxArray_real_T *g_X;
  emxArray_real_T *b_a;
  emxArray_real_T *b;
  const mxArray *c_y;
  static const int32_T iv46[2] = { 1, 45 };

  char_T cv56[45];
  static const char_T cv57[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *d_y;
  static const int32_T iv47[2] = { 1, 21 };

  char_T cv58[21];
  static const char_T cv59[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *e_y;
  int8_T unnamed_idx_0;
  real_T alpha1;
  real_T beta1;
  char_T TRANSB;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Bib0_t;
  double * beta1_t;
  double * Cic0_t;
  emxArray_real_T *b_b;
  const mxArray *f_y;
  static const int32_T iv48[2] = { 1, 45 };

  const mxArray *g_y;
  static const int32_T iv49[2] = { 1, 21 };

  int32_T C_size[2];
  real_T C_data[1];
  real_T y_data[1];
  int32_T b_tmp_size[1];
  boolean_T c_tmp_data[1];
  emxArray_boolean_T d_tmp_data;
  boolean_T guard1 = false;
  emxArray_boolean_T e_tmp_data;
  const mxArray *h_y;
  static const int32_T iv50[2] = { 1, 39 };

  char_T cv60[39];
  static const char_T cv61[39] = { 'S', 'u', 'g', 'g', 'e', 's', 't', 'e', 'd',
    ' ', 's', 'p', 'l', 'i', 't', ' ', 'p', 'o', 'i', 'n', 't', ' ', 'a', 't',
    ' ', 'i', 'n', 'f', 'i', 't', 'i', 't', 'y', ' ', '/', ' ', 'n', 'a', 'n' };

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
  e_st.prev = &b_st;
  e_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_X, 2, &oc_emlrtRTEI, true);

  /*  This should only be done if X has exactly 2 unique rows in which case it */
  /*  produces the optimal split */
  ii = X->size[0];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, ii, &af_emlrtBCI, sp);
  loop_ub = X->size[1];
  ii = b_X->size[0] * b_X->size[1];
  b_X->size[0] = 1;
  b_X->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_X, ii, (int32_T)sizeof(real_T),
                    &oc_emlrtRTEI);
  for (ii = 0; ii < loop_ub; ii++) {
    b_X->data[b_X->size[0] * ii] = X->data[X->size[0] * ii];
  }

  emxInit_real_T(sp, &r13, 2, &oc_emlrtRTEI, true);
  emxInit_real_T(sp, &r14, 2, &oc_emlrtRTEI, true);
  st.site = &yg_emlrtRSI;
  d_bsxfun(&st, X, b_X, r13);
  ii = r14->size[0] * r14->size[1];
  r14->size[0] = r13->size[0];
  r14->size[1] = r13->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r14, ii, (int32_T)sizeof(real_T),
                    &oc_emlrtRTEI);
  loop_ub = r13->size[0] * r13->size[1];
  emxFree_real_T(&b_X);
  for (ii = 0; ii < loop_ub; ii++) {
    r14->data[ii] = r13->data[ii];
  }

  b_emxInit_boolean_T(sp, &r15, 2, &oc_emlrtRTEI, true);
  c_abs(sp, r14, r13);
  ii = r15->size[0] * r15->size[1];
  r15->size[0] = r13->size[0];
  r15->size[1] = r13->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r15, ii, (int32_T)sizeof(boolean_T),
                    &oc_emlrtRTEI);
  loop_ub = r13->size[0] * r13->size[1];
  emxFree_real_T(&r14);
  for (ii = 0; ii < loop_ub; ii++) {
    r15->data[ii] = (r13->data[ii] < tol);
  }

  emxInit_boolean_T(sp, &bType1, 1, &pc_emlrtRTEI, true);
  st.site = &yg_emlrtRSI;
  b_all(&st, r15, bType1);
  emxFree_boolean_T(&r15);
  b_emxInit_boolean_T(sp, &YLeft, 2, &qc_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &YRight, 2, &rc_emlrtRTEI, true);
  if (Y->size[1] == 1) {
    ii = YLeft->size[0] * YLeft->size[1];
    YLeft->size[0] = Y->size[0];
    YLeft->size[1] = Y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)YLeft, ii, (int32_T)sizeof
                      (boolean_T), &oc_emlrtRTEI);
    loop_ub = Y->size[0] * Y->size[1];
    for (ii = 0; ii < loop_ub; ii++) {
      YLeft->data[ii] = Y->data[ii];
    }

    ii = YRight->size[0] * YRight->size[1];
    YRight->size[0] = Y->size[0];
    YRight->size[1] = Y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)YRight, ii, (int32_T)sizeof
                      (boolean_T), &oc_emlrtRTEI);
    loop_ub = Y->size[0] * Y->size[1];
    for (ii = 0; ii < loop_ub; ii++) {
      YRight->data[ii] = !Y->data[ii];
    }
  } else {
    emxInit_int32_T(sp, &r16, 1, &oc_emlrtRTEI, true);
    st.site = &ah_emlrtRSI;
    b_eml_li_find(&st, bType1, r16);
    loop_ub = Y->size[1];
    ii = YLeft->size[0] * YLeft->size[1];
    YLeft->size[0] = r16->size[0];
    YLeft->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)YLeft, ii, (int32_T)sizeof
                      (boolean_T), &oc_emlrtRTEI);
    for (ii = 0; ii < loop_ub; ii++) {
      b_loop_ub = r16->size[0];
      for (i19 = 0; i19 < b_loop_ub; i19++) {
        i20 = Y->size[0];
        idx = r16->data[i19];
        YLeft->data[i19 + YLeft->size[0] * ii] = Y->data
          [(emlrtDynamicBoundsCheckFastR2012b(idx, 1, i20, &bf_emlrtBCI, sp) +
            Y->size[0] * ii) - 1];
      }
    }

    emxInit_boolean_T(sp, &b_bType1, 1, &oc_emlrtRTEI, true);
    ii = b_bType1->size[0];
    b_bType1->size[0] = bType1->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_bType1, ii, (int32_T)sizeof
                      (boolean_T), &oc_emlrtRTEI);
    loop_ub = bType1->size[0];
    for (ii = 0; ii < loop_ub; ii++) {
      b_bType1->data[ii] = !bType1->data[ii];
    }

    st.site = &bh_emlrtRSI;
    b_eml_li_find(&st, b_bType1, r16);
    loop_ub = Y->size[1];
    ii = YRight->size[0] * YRight->size[1];
    YRight->size[0] = r16->size[0];
    YRight->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)YRight, ii, (int32_T)sizeof
                      (boolean_T), &oc_emlrtRTEI);
    emxFree_boolean_T(&b_bType1);
    for (ii = 0; ii < loop_ub; ii++) {
      b_loop_ub = r16->size[0];
      for (i19 = 0; i19 < b_loop_ub; i19++) {
        i20 = Y->size[0];
        idx = r16->data[i19];
        YRight->data[i19 + YRight->size[0] * ii] = Y->data
          [(emlrtDynamicBoundsCheckFastR2012b(idx, 1, i20, &cf_emlrtBCI, sp) +
            Y->size[0] * ii) - 1];
      }
    }

    emxFree_int32_T(&r16);
  }

  emxInit_real_T(sp, &r17, 2, &oc_emlrtRTEI, true);
  emxInit_real_T(sp, &a, 2, &oc_emlrtRTEI, true);
  st.site = &ch_emlrtRSI;
  b_sum(&st, YLeft, a);
  ii = r17->size[0] * r17->size[1];
  r17->size[0] = 1;
  r17->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r17, ii, (int32_T)sizeof(real_T),
                    &oc_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  emxFree_boolean_T(&YLeft);
  for (ii = 0; ii < loop_ub; ii++) {
    r17->data[ii] = a->data[ii];
  }

  emxInit_real_T(sp, &r18, 2, &oc_emlrtRTEI, true);
  st.site = &ch_emlrtRSI;
  b_sum(&st, YRight, a);
  ii = r18->size[0] * r18->size[1];
  r18->size[0] = 1;
  r18->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r18, ii, (int32_T)sizeof(real_T),
                    &oc_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  emxFree_boolean_T(&YRight);
  for (ii = 0; ii < loop_ub; ii++) {
    r18->data[ii] = a->data[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    c_X[ii] = r17->size[ii];
  }

  for (ii = 0; ii < 2; ii++) {
    d_X[ii] = r18->size[ii];
  }

  emlrtSizeEqCheck2DFastR2012b(c_X, d_X, &ob_emlrtECI, sp);
  tmp_size[0] = 1;
  tmp_size[1] = r17->size[1];
  loop_ub = r17->size[0] * r17->size[1];
  for (ii = 0; ii < loop_ub; ii++) {
    tmp_data[ii] = (r17->data[ii] == r18->data[ii]);
  }

  emxFree_real_T(&r18);
  emxFree_real_T(&r17);
  b_tmp_data.data = (boolean_T *)&tmp_data;
  b_tmp_data.size = (int32_T *)&tmp_size;
  b_tmp_data.allocatedSize = 10000;
  b_tmp_data.numDimensions = 2;
  b_tmp_data.canFreeData = false;
  st.site = &ch_emlrtRSI;
  if (all(&st, &b_tmp_data)) {
    /*  Here the two unique points have identical sets of class */
    /*  labels and so we can't split */
    *bSp = false;
    ii = rmm->size[0] * rmm->size[1];
    rmm->size[0] = 0;
    rmm->size[1] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)rmm, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    cmm_size[0] = 0;
    cmm_size[1] = 0;
  } else {
    *bSp = true;

    /*  Otherwise the optimal spliting plane is the plane perpendicular */
    /*  to the vector between the two points (rmm) and the maximal */
    /*  marginal split point (cmm) is halway between the two points on */
    /*  this line. */
    st.site = &dh_emlrtRSI;
    ii = bType1->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)bType1, ii, (int32_T)sizeof
                      (boolean_T), &oc_emlrtRTEI);
    loop_ub = bType1->size[0];
    for (ii = 0; ii < loop_ub; ii++) {
      bType1->data[ii] = !bType1->data[ii];
    }

    b_st.site = &w_emlrtRSI;
    k = muIntScalarMin_sint32(1, bType1->size[0]);
    if (k <= bType1->size[0]) {
    } else {
      y = NULL;
      m16 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&y, m16);
      c_st.site = &gp_emlrtRSI;
      f_error(&c_st, y, &g_emlrtMCI);
    }

    idx = 0;
    c_st.site = &x_emlrtRSI;
    if (1 > bType1->size[0]) {
      overflow = false;
    } else {
      overflow = (bType1->size[0] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    ii = 1;
    exitg1 = false;
    while ((!exitg1) && (ii <= bType1->size[0])) {
      if (bType1->data[ii - 1]) {
        idx = 1;
        ii_data[0] = ii;
        exitg1 = true;
      } else {
        ii++;
      }
    }

    if (idx <= k) {
    } else {
      b_y = NULL;
      m16 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m16);
      c_st.site = &fp_emlrtRSI;
      f_error(&c_st, b_y, &h_emlrtMCI);
    }

    if (k == 1) {
      if (idx == 0) {
        k = 0;
      }
    } else {
      if (1 > idx) {
        loop_ub = -1;
      } else {
        loop_ub = 0;
      }

      ii = 0;
      while (ii <= loop_ub) {
        b_ii_data[0] = ii_data[0];
        ii = 1;
      }

      k = loop_ub + 1;
      loop_ub++;
      ii = 0;
      while (ii <= loop_ub - 1) {
        ii_data[0] = b_ii_data[0];
        ii = 1;
      }
    }

    for (ii = 0; ii < k; ii++) {
      iType2_data[ii] = ii_data[ii];
    }

    for (ii = 0; ii < k; ii++) {
      i19 = X->size[0];
      i20 = iType2_data[ii];
      emlrtDynamicBoundsCheckFastR2012b(i20, 1, i19, &df_emlrtBCI, sp);
    }

    emxInit_real_T(sp, &e_X, 2, &oc_emlrtRTEI, true);
    ii = X->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, ii, &ye_emlrtBCI, sp);
    loop_ub = X->size[1];
    ii = e_X->size[0] * e_X->size[1];
    e_X->size[0] = k;
    e_X->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)e_X, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    for (ii = 0; ii < loop_ub; ii++) {
      for (i19 = 0; i19 < k; i19++) {
        e_X->data[i19 + e_X->size[0] * ii] = X->data[(iType2_data[i19] + X->
          size[0] * ii) - 1];
      }
    }

    for (ii = 0; ii < 2; ii++) {
      c_X[ii] = e_X->size[ii];
    }

    emxFree_real_T(&e_X);
    emxInit_real_T(sp, &f_X, 2, &oc_emlrtRTEI, true);
    loop_ub = X->size[1];
    ii = f_X->size[0] * f_X->size[1];
    f_X->size[0] = 1;
    f_X->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)f_X, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    for (ii = 0; ii < loop_ub; ii++) {
      f_X->data[f_X->size[0] * ii] = X->data[X->size[0] * ii];
    }

    for (ii = 0; ii < 2; ii++) {
      d_X[ii] = f_X->size[ii];
    }

    emxFree_real_T(&f_X);
    b_emxInit_real_T(sp, &g_X, 1, &oc_emlrtRTEI, true);
    emlrtSizeEqCheck2DFastR2012b(c_X, d_X, &nb_emlrtECI, sp);
    loop_ub = X->size[1];
    b_loop_ub = X->size[1];
    ii = g_X->size[0];
    g_X->size[0] = b_loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)g_X, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    for (ii = 0; ii < k; ii++) {
      for (i19 = 0; i19 < b_loop_ub; i19++) {
        g_X->data[i19] = X->data[(iType2_data[ii] + X->size[0] * i19) - 1] -
          X->data[X->size[0] * i19];
      }
    }

    ii = rmm->size[0] * rmm->size[1];
    rmm->size[0] = loop_ub;
    rmm->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)rmm, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    ii = 0;
    while (ii <= 0) {
      for (ii = 0; ii < loop_ub; ii++) {
        rmm->data[ii] = g_X->data[ii];
      }

      ii = 1;
    }

    emxFree_real_T(&g_X);
    emxInit_real_T(sp, &b_a, 2, &oc_emlrtRTEI, true);
    st.site = &eh_emlrtRSI;
    loop_ub = X->size[1];
    ii = b_a->size[0] * b_a->size[1];
    b_a->size[0] = k;
    b_a->size[1] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)b_a, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    for (ii = 0; ii < loop_ub; ii++) {
      for (i19 = 0; i19 < k; i19++) {
        i20 = X->size[0];
        idx = iType2_data[i19];
        b_a->data[i19 + b_a->size[0] * ii] = X->data
          [(emlrtDynamicBoundsCheckFastR2012b(idx, 1, i20, &ef_emlrtBCI, &st) +
            X->size[0] * ii) - 1];
      }
    }

    emxInit_real_T(&st, &b, 2, &oc_emlrtRTEI, true);
    ii = b->size[0] * b->size[1];
    b->size[0] = rmm->size[0];
    b->size[1] = rmm->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    loop_ub = rmm->size[0] * rmm->size[1];
    for (ii = 0; ii < loop_ub; ii++) {
      b->data[ii] = rmm->data[ii];
    }

    b_st.site = &ih_emlrtRSI;
    if (!(b_a->size[1] == rmm->size[0])) {
      if (((b_a->size[0] == 1) && (b_a->size[1] == 1)) || (rmm->size[0] == 1)) {
        c_y = NULL;
        m16 = emlrtCreateCharArray(2, iv46);
        for (idx = 0; idx < 45; idx++) {
          cv56[idx] = cv57[idx];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m16, cv56);
        emlrtAssign(&c_y, m16);
        c_st.site = &dp_emlrtRSI;
        e_st.site = &aq_emlrtRSI;
        f_error(&c_st, b_message(&e_st, c_y, &hb_emlrtMCI), &ib_emlrtMCI);
      } else {
        d_y = NULL;
        m16 = emlrtCreateCharArray(2, iv47);
        for (idx = 0; idx < 21; idx++) {
          cv58[idx] = cv59[idx];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m16, cv58);
        emlrtAssign(&d_y, m16);
        c_st.site = &ep_emlrtRSI;
        e_st.site = &bq_emlrtRSI;
        f_error(&c_st, b_message(&e_st, d_y, &jb_emlrtMCI), &kb_emlrtMCI);
      }
    }

    emxInit_real_T(&st, &e_y, 2, &oc_emlrtRTEI, true);
    if ((b_a->size[1] == 1) || (rmm->size[0] == 1)) {
      ii = e_y->size[0] * e_y->size[1];
      e_y->size[0] = b_a->size[0];
      e_y->size[1] = rmm->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)e_y, ii, (int32_T)sizeof(real_T),
                        &oc_emlrtRTEI);
      loop_ub = b_a->size[0];
      for (ii = 0; ii < loop_ub; ii++) {
        b_loop_ub = rmm->size[1];
        for (i19 = 0; i19 < b_loop_ub; i19++) {
          e_y->data[ii + e_y->size[0] * i19] = 0.0;
          idx = b_a->size[1];
          for (i20 = 0; i20 < idx; i20++) {
            e_y->data[ii + e_y->size[0] * i19] += b_a->data[ii + b_a->size[0] *
              i20] * rmm->data[i20 + rmm->size[0] * i19];
          }
        }
      }
    } else {
      unnamed_idx_0 = (int8_T)b_a->size[0];
      ii = r13->size[0] * r13->size[1];
      r13->size[0] = unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r13, ii, (int32_T)sizeof(real_T),
                        &oc_emlrtRTEI);
      ii = r13->size[0] * r13->size[1];
      r13->size[1] = 1;
      emxEnsureCapacity(&st, (emxArray__common *)r13, ii, (int32_T)sizeof(real_T),
                        &oc_emlrtRTEI);
      loop_ub = unnamed_idx_0;
      for (ii = 0; ii < loop_ub; ii++) {
        r13->data[ii] = 0.0;
      }

      b_st.site = &hh_emlrtRSI;
      c_st.site = &jh_emlrtRSI;
      ii = e_y->size[0] * e_y->size[1];
      e_y->size[0] = unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, ii, (int32_T)sizeof
                        (real_T), &oc_emlrtRTEI);
      ii = e_y->size[0] * e_y->size[1];
      e_y->size[1] = 1;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, ii, (int32_T)sizeof
                        (real_T), &oc_emlrtRTEI);
      loop_ub = unnamed_idx_0;
      for (ii = 0; ii < loop_ub; ii++) {
        e_y->data[ii] = 0.0;
      }

      if ((b_a->size[0] < 1) || (b_a->size[1] < 1)) {
      } else {
        d_st.site = &kh_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(1);
        n_t = (ptrdiff_t)(1);
        k_t = (ptrdiff_t)(b_a->size[1]);
        lda_t = (ptrdiff_t)(1);
        ldb_t = (ptrdiff_t)(b_a->size[1]);
        ldc_t = (ptrdiff_t)(1);
        alpha1_t = (double *)(&alpha1);
        Aia0_t = (double *)(&b_a->data[0]);
        ii = rmm->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, ii, &hc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&b->data[0]);
        beta1_t = (double *)(&beta1);
        ii = r13->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, ii, &hc_emlrtBCI, &d_st);
        Cic0_t = (double *)(&e_y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    emxFree_real_T(&b);
    emxFree_real_T(&b_a);
    ii = X->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, ii, &xe_emlrtBCI, sp);
    st.site = &eh_emlrtRSI;
    loop_ub = X->size[1];
    ii = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)a, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    for (ii = 0; ii < loop_ub; ii++) {
      a->data[a->size[0] * ii] = X->data[X->size[0] * ii];
    }

    emxInit_real_T(&st, &b_b, 2, &oc_emlrtRTEI, true);
    ii = b_b->size[0] * b_b->size[1];
    b_b->size[0] = rmm->size[0];
    b_b->size[1] = rmm->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_b, ii, (int32_T)sizeof(real_T),
                      &oc_emlrtRTEI);
    loop_ub = rmm->size[0] * rmm->size[1];
    for (ii = 0; ii < loop_ub; ii++) {
      b_b->data[ii] = rmm->data[ii];
    }

    b_st.site = &ih_emlrtRSI;
    ii = X->size[1];
    if (!(ii == rmm->size[0])) {
      ii = X->size[1];
      if ((ii == 1) || (rmm->size[0] == 1)) {
        f_y = NULL;
        m16 = emlrtCreateCharArray(2, iv48);
        for (idx = 0; idx < 45; idx++) {
          cv56[idx] = cv57[idx];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m16, cv56);
        emlrtAssign(&f_y, m16);
        c_st.site = &dp_emlrtRSI;
        e_st.site = &aq_emlrtRSI;
        f_error(&c_st, b_message(&e_st, f_y, &hb_emlrtMCI), &ib_emlrtMCI);
      } else {
        g_y = NULL;
        m16 = emlrtCreateCharArray(2, iv49);
        for (idx = 0; idx < 21; idx++) {
          cv58[idx] = cv59[idx];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m16, cv58);
        emlrtAssign(&g_y, m16);
        c_st.site = &ep_emlrtRSI;
        e_st.site = &bq_emlrtRSI;
        f_error(&c_st, b_message(&e_st, g_y, &jb_emlrtMCI), &kb_emlrtMCI);
      }
    }

    ii = X->size[1];
    if ((ii == 1) || (rmm->size[0] == 1)) {
      C_size[0] = 1;
      C_size[1] = rmm->size[1];
      loop_ub = rmm->size[1];
      for (ii = 0; ii < loop_ub; ii++) {
        C_data[ii] = 0.0;
        b_loop_ub = a->size[1];
        for (i19 = 0; i19 < b_loop_ub; i19++) {
          C_data[ii] += a->data[a->size[0] * i19] * rmm->data[i19 + rmm->size[0]
            * ii];
        }
      }
    } else {
      b_st.site = &hh_emlrtRSI;
      c_st.site = &jh_emlrtRSI;
      C_size[0] = 1;
      C_size[1] = 1;
      C_data[0] = 0.0;
      ii = X->size[1];
      if (ii < 1) {
      } else {
        d_st.site = &kh_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(1);
        n_t = (ptrdiff_t)(1);
        ii = X->size[1];
        k_t = (ptrdiff_t)(ii);
        lda_t = (ptrdiff_t)(1);
        ii = X->size[1];
        ldb_t = (ptrdiff_t)(ii);
        ldc_t = (ptrdiff_t)(1);
        alpha1_t = (double *)(&alpha1);
        ii = X->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, ii, &hc_emlrtBCI, &d_st);
        Aia0_t = (double *)(&a->data[0]);
        ii = rmm->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, ii, &hc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&b_b->data[0]);
        beta1_t = (double *)(&beta1);
        Cic0_t = (double *)(&C_data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    emxFree_real_T(&b_b);
    for (ii = 0; ii < 2; ii++) {
      c_X[ii] = e_y->size[ii];
    }

    for (ii = 0; ii < 2; ii++) {
      d_X[ii] = C_size[ii];
    }

    emlrtSizeEqCheck2DFastR2012b(c_X, d_X, &mb_emlrtECI, sp);
    loop_ub = e_y->size[0] * e_y->size[1];
    for (ii = 0; ii < loop_ub; ii++) {
      y_data[ii] = 0.5 * (e_y->data[ii] + C_data[ii]);
    }

    cmm_size[0] = e_y->size[0];
    cmm_size[1] = e_y->size[1];
    loop_ub = e_y->size[0] * e_y->size[1];
    for (ii = 0; ii < loop_ub; ii++) {
      cmm_data[ii] = 0.5 * (e_y->data[ii] + C_data[ii]);
    }

    emxFree_real_T(&e_y);
    b_tmp_size[0] = 1;
    c_tmp_data[0] = muDoubleScalarIsNaN(y_data[0]);
    d_tmp_data.data = (boolean_T *)&c_tmp_data;
    d_tmp_data.size = (int32_T *)&b_tmp_size;
    d_tmp_data.allocatedSize = 1;
    d_tmp_data.numDimensions = 1;
    d_tmp_data.canFreeData = false;
    guard1 = false;
    st.site = &fh_emlrtRSI;
    if (e_any(&st, &d_tmp_data)) {
      guard1 = true;
    } else {
      b_tmp_size[0] = 1;
      c_tmp_data[0] = muDoubleScalarIsInf(y_data[0]);
      e_tmp_data.data = (boolean_T *)&c_tmp_data;
      e_tmp_data.size = (int32_T *)&b_tmp_size;
      e_tmp_data.allocatedSize = 1;
      e_tmp_data.numDimensions = 1;
      e_tmp_data.canFreeData = false;
      st.site = &fh_emlrtRSI;
      if (e_any(&st, &e_tmp_data)) {
        guard1 = true;
      }
    }

    if (guard1) {
      st.site = &gh_emlrtRSI;
      h_y = NULL;
      m16 = emlrtCreateCharArray(2, iv50);
      for (idx = 0; idx < 39; idx++) {
        cv60[idx] = cv61[idx];
      }

      emlrtInitCharArrayR2013a(&st, 39, m16, cv60);
      emlrtAssign(&h_y, m16);
      b_st.site = &so_emlrtRSI;
      f_error(&b_st, h_y, &lb_emlrtMCI);
    }
  }

  emxFree_real_T(&r13);
  emxFree_real_T(&a);
  emxFree_boolean_T(&bType1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (twoPointMaxMarginSplit.c) */
