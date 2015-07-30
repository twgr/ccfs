/*
 * queryIfOnlyTwoUniqueRows.c
 *
 * Code generation for function 'queryIfOnlyTwoUniqueRows'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "queryIfOnlyTwoUniqueRows.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growCCTnotRecursive.h"
#include "all.h"
#include "bsxfun.h"
#include "eml_int_forloop_overflow_check.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo rg_emlrtRSI = { 8, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRSInfo sg_emlrtRSI = { 9, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRSInfo tg_emlrtRSI = { 14, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRSInfo ug_emlrtRSI = { 15, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRSInfo vg_emlrtRSI = { 16, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRTEInfo kc_emlrtRTEI = { 1, 35, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRTEInfo lc_emlrtRTEI = { 8, 1, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m" };

static emlrtBCInfo se_emlrtBCI = { -1, -1, 15, 45, "X",
  "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m", 0
};

static emlrtECInfo lb_emlrtECI = { -1, 14, 18, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m" };

static emlrtBCInfo te_emlrtBCI = { -1, -1, 14, 18, "bEqualFirst",
  "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m", 0
};

static emlrtBCInfo ue_emlrtBCI = { -1, -1, 8, 34, "X",
  "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m", 0
};

static emlrtBCInfo ve_emlrtBCI = { -1, -1, 15, 31, "X",
  "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfOnlyTwoUniqueRows.m", 0
};

/* Function Definitions */
boolean_T queryIfOnlyTwoUniqueRows(const emlrtStack *sp, const emxArray_real_T
  *X)
{
  boolean_T bLessThanTwoUniqueRows;
  emxArray_real_T *b_X;
  int32_T i15;
  int32_T loop_ub;
  emxArray_boolean_T *bEqualFirst;
  emxArray_boolean_T *r12;
  emxArray_boolean_T *x;
  int32_T k;
  const mxArray *y;
  const mxArray *m13;
  int32_T idx;
  int32_T ii_data[1];
  boolean_T overflow;
  int32_T ii;
  boolean_T exitg2;
  const mxArray *b_y;
  int32_T b_ii_data[1];
  int32_T iFirstNotEqual_data[1];
  emxArray_int32_T *b_ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  const mxArray *c_y;
  emxArray_int32_T *c_ii;
  emxArray_real_T *c_X;
  int32_T i16;
  emxArray_real_T *d_X;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);

  /*  Function that checks if an array has only two unique rows as this can */
  /*  cause failure of for example LDA */
  if (X->size[0] == 2) {
    bLessThanTwoUniqueRows = true;
  } else {
    emxInit_real_T(sp, &b_X, 2, &kc_emlrtRTEI, true);
    i15 = X->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i15, &ue_emlrtBCI, sp);
    loop_ub = X->size[1];
    i15 = b_X->size[0] * b_X->size[1];
    b_X->size[0] = 1;
    b_X->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)b_X, i15, (int32_T)sizeof(real_T),
                      &kc_emlrtRTEI);
    for (i15 = 0; i15 < loop_ub; i15++) {
      b_X->data[b_X->size[0] * i15] = X->data[X->size[0] * i15];
    }

    emxInit_boolean_T(sp, &bEqualFirst, 1, &lc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &r12, 2, &kc_emlrtRTEI, true);
    emxInit_boolean_T(sp, &x, 1, &kc_emlrtRTEI, true);
    st.site = &rg_emlrtRSI;
    c_bsxfun(&st, X, b_X, r12);
    st.site = &rg_emlrtRSI;
    b_all(&st, r12, bEqualFirst);
    st.site = &sg_emlrtRSI;
    i15 = x->size[0];
    x->size[0] = bEqualFirst->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)x, i15, (int32_T)sizeof(boolean_T),
                      &kc_emlrtRTEI);
    loop_ub = bEqualFirst->size[0];
    emxFree_real_T(&b_X);
    for (i15 = 0; i15 < loop_ub; i15++) {
      x->data[i15] = !bEqualFirst->data[i15];
    }

    b_st.site = &w_emlrtRSI;
    k = muIntScalarMin_sint32(1, x->size[0]);
    if (k <= x->size[0]) {
    } else {
      y = NULL;
      m13 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&y, m13);
      c_st.site = &gp_emlrtRSI;
      f_error(&c_st, y, &g_emlrtMCI);
    }

    idx = 0;
    c_st.site = &x_emlrtRSI;
    if (1 > x->size[0]) {
      overflow = false;
    } else {
      overflow = (x->size[0] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    ii = 1;
    exitg2 = false;
    while ((!exitg2) && (ii <= x->size[0])) {
      if (x->data[ii - 1]) {
        idx = 1;
        ii_data[0] = ii;
        exitg2 = true;
      } else {
        ii++;
      }
    }

    if (idx <= k) {
    } else {
      b_y = NULL;
      m13 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m13);
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

      i15 = 0;
      while (i15 <= loop_ub) {
        b_ii_data[0] = ii_data[0];
        i15 = 1;
      }

      k = loop_ub + 1;
      loop_ub++;
      i15 = 0;
      while (i15 <= loop_ub - 1) {
        ii_data[0] = b_ii_data[0];
        i15 = 1;
      }
    }

    for (i15 = 0; i15 < k; i15++) {
      iFirstNotEqual_data[i15] = ii_data[i15];
    }

    if (k == 0) {
      bLessThanTwoUniqueRows = true;
    } else {
      if (2 > bEqualFirst->size[0]) {
        i15 = 0;
        ii = 0;
      } else {
        i15 = 1;
        ii = bEqualFirst->size[0];
        idx = bEqualFirst->size[0];
        ii = emlrtDynamicBoundsCheckFastR2012b(idx, 1, ii, &te_emlrtBCI, sp);
      }

      emlrtVectorVectorIndexCheckR2012b(bEqualFirst->size[0], 1, 1, ii - i15,
        &lb_emlrtECI, sp);
      st.site = &tg_emlrtRSI;
      idx = x->size[0];
      x->size[0] = ii - i15;
      emxEnsureCapacity(&st, (emxArray__common *)x, idx, (int32_T)sizeof
                        (boolean_T), &kc_emlrtRTEI);
      loop_ub = ii - i15;
      for (ii = 0; ii < loop_ub; ii++) {
        x->data[ii] = !bEqualFirst->data[i15 + ii];
      }

      emxInit_int32_T(&st, &b_ii, 1, &j_emlrtRTEI, true);
      b_st.site = &w_emlrtRSI;
      idx = 0;
      i15 = b_ii->size[0];
      b_ii->size[0] = x->size[0];
      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i15, (int32_T)sizeof
                        (int32_T), &g_emlrtRTEI);
      c_st.site = &x_emlrtRSI;
      if (1 > x->size[0]) {
        overflow = false;
      } else {
        overflow = (x->size[0] > 2147483646);
      }

      if (overflow) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      ii = 1;
      exitg1 = false;
      while ((!exitg1) && (ii <= x->size[0])) {
        guard1 = false;
        if (x->data[ii - 1]) {
          idx++;
          b_ii->data[idx - 1] = ii;
          if (idx >= x->size[0]) {
            exitg1 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          ii++;
        }
      }

      if (idx <= x->size[0]) {
      } else {
        c_y = NULL;
        m13 = emlrtCreateString("Assertion failed.");
        emlrtAssign(&c_y, m13);
        c_st.site = &fp_emlrtRSI;
        f_error(&c_st, c_y, &h_emlrtMCI);
      }

      if (x->size[0] == 1) {
        if (idx == 0) {
          i15 = b_ii->size[0];
          b_ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i15, (int32_T)
                            sizeof(int32_T), &kc_emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        emxInit_int32_T(&b_st, &c_ii, 1, &kc_emlrtRTEI, true);
        i15 = c_ii->size[0];
        c_ii->size[0] = loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i15, (int32_T)sizeof
                          (int32_T), &kc_emlrtRTEI);
        for (i15 = 0; i15 < loop_ub; i15++) {
          c_ii->data[i15] = b_ii->data[i15];
        }

        i15 = b_ii->size[0];
        b_ii->size[0] = c_ii->size[0];
        emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i15, (int32_T)sizeof
                          (int32_T), &kc_emlrtRTEI);
        loop_ub = c_ii->size[0];
        for (i15 = 0; i15 < loop_ub; i15++) {
          b_ii->data[i15] = c_ii->data[i15];
        }

        emxFree_int32_T(&c_ii);
      }

      emxInit_real_T(&b_st, &c_X, 2, &kc_emlrtRTEI, true);
      loop_ub = X->size[1];
      i15 = c_X->size[0] * c_X->size[1];
      c_X->size[0] = b_ii->size[0];
      c_X->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)c_X, i15, (int32_T)sizeof(real_T),
                        &kc_emlrtRTEI);
      for (i15 = 0; i15 < loop_ub; i15++) {
        k = b_ii->size[0];
        for (ii = 0; ii < k; ii++) {
          idx = X->size[0];
          i16 = b_ii->data[ii] + 1;
          c_X->data[ii + c_X->size[0] * i15] = X->data
            [(emlrtDynamicBoundsCheckFastR2012b(i16, 1, idx, &ve_emlrtBCI, sp) +
              X->size[0] * i15) - 1];
        }
      }

      emxFree_int32_T(&b_ii);
      emxInit_real_T(sp, &d_X, 2, &kc_emlrtRTEI, true);
      loop_ub = X->size[1];
      i15 = X->size[0];
      ii = iFirstNotEqual_data[0];
      ii = emlrtDynamicBoundsCheckFastR2012b(ii, 1, i15, &se_emlrtBCI, sp);
      i15 = d_X->size[0] * d_X->size[1];
      d_X->size[0] = 1;
      d_X->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)d_X, i15, (int32_T)sizeof(real_T),
                        &kc_emlrtRTEI);
      for (i15 = 0; i15 < loop_ub; i15++) {
        d_X->data[d_X->size[0] * i15] = X->data[(ii + X->size[0] * i15) - 1];
      }

      st.site = &ug_emlrtRSI;
      c_bsxfun(&st, c_X, d_X, r12);
      st.site = &ug_emlrtRSI;
      b_all(&st, r12, bEqualFirst);
      st.site = &vg_emlrtRSI;
      bLessThanTwoUniqueRows = c_all(&st, bEqualFirst);
      emxFree_real_T(&d_X);
      emxFree_real_T(&c_X);
    }

    emxFree_boolean_T(&x);
    emxFree_boolean_T(&r12);
    emxFree_boolean_T(&bEqualFirst);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return bLessThanTwoUniqueRows;
}

/* End of code generation (queryIfOnlyTwoUniqueRows.c) */
