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
#include "expandNode.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growCCTnotRecursive.h"
#include "all.h"
#include "bsxfun.h"
#include "eml_int_forloop_overflow_check.h"
#include "twoPointMaxMarginSplit.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo mh_emlrtRSI = { 8, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRSInfo nh_emlrtRSI = { 9, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRSInfo oh_emlrtRSI = { 14, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRSInfo ph_emlrtRSI = { 15, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRSInfo qh_emlrtRSI = { 16, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRTEInfo vc_emlrtRTEI = { 1, 35, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRTEInfo wc_emlrtRTEI = { 8, 1, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtRTEInfo xc_emlrtRTEI = { 14, 1, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtBCInfo df_emlrtBCI = { -1, -1, 15, 45, "X",
  "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m", 0 };

static emlrtECInfo lb_emlrtECI = { -1, 14, 18, "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m" };

static emlrtBCInfo ef_emlrtBCI = { -1, -1, 14, 18, "bEqualFirst",
  "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m", 0 };

static emlrtBCInfo ff_emlrtBCI = { -1, -1, 8, 34, "X",
  "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m", 0 };

static emlrtBCInfo gf_emlrtBCI = { -1, -1, 15, 31, "X",
  "queryIfOnlyTwoUniqueRows",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfOnlyTwoUniqueRows.m", 0 };

/* Function Definitions */
boolean_T queryIfOnlyTwoUniqueRows(const emlrtStack *sp, const emxArray_real_T
  *X)
{
  boolean_T bLessThanTwoUniqueRows;
  emxArray_real_T *b_X;
  emxArray_real_T *c_X;
  int32_T i18;
  int32_T loop_ub;
  emxArray_boolean_T *r81;
  emxArray_boolean_T *r82;
  emxArray_boolean_T *bEqualFirst;
  emxArray_boolean_T *b_bEqualFirst;
  emxArray_boolean_T *x;
  int32_T k;
  const mxArray *y;
  const mxArray *m14;
  int32_T idx;
  int32_T ii_data[1];
  boolean_T overflow;
  int32_T ii;
  boolean_T exitg2;
  const mxArray *b_y;
  int32_T b_ii_data[1];
  real_T c_ii_data[1];
  int32_T ii_size[1];
  real_T iFirstNotEqual_data[1];
  emxArray_int32_T *b_ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  const mxArray *c_y;
  emxArray_int32_T *c_ii;
  emxArray_real_T *d_ii;
  emxArray_real_T *iToCheck;
  emxArray_real_T *b_iToCheck;
  emxArray_real_T *d_X;
  int32_T i19;
  emxArray_real_T *e_X;
  emxArray_boolean_T *r83;
  emxArray_boolean_T *c_bEqualFirst;
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
  b_emxInit_real_T(sp, &b_X, 2, &vc_emlrtRTEI, true);

  /* logging input variable 'X' for function 'queryIfOnlyTwoUniqueRows' */
  emlrt_update_log_2(sp, X, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[152U], b_X);

  /*  Function that checks if an array has only two unique rows as this can */
  /*  cause failure of for example LDA */
  emxFree_real_T(&b_X);
  if (X->size[0] == 2) {
    bLessThanTwoUniqueRows = emlrt_update_log_31(true,
      *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables
      [153U]);
  } else {
    b_emxInit_real_T(sp, &c_X, 2, &vc_emlrtRTEI, true);
    i18 = X->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i18, &ff_emlrtBCI, sp);
    loop_ub = X->size[1];
    i18 = c_X->size[0] * c_X->size[1];
    c_X->size[0] = 1;
    c_X->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)c_X, i18, (int32_T)sizeof(real_T),
                      &vc_emlrtRTEI);
    for (i18 = 0; i18 < loop_ub; i18++) {
      c_X->data[c_X->size[0] * i18] = X->data[X->size[0] * i18];
    }

    b_emxInit_boolean_T(sp, &r81, 2, &vc_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &r82, 2, &vc_emlrtRTEI, true);
    st.site = &mh_emlrtRSI;
    c_bsxfun(&st, X, c_X, r81);
    i18 = r82->size[0] * r82->size[1];
    r82->size[0] = r81->size[0];
    r82->size[1] = r81->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)r82, i18, (int32_T)sizeof
                      (boolean_T), &vc_emlrtRTEI);
    loop_ub = r81->size[0] * r81->size[1];
    emxFree_real_T(&c_X);
    for (i18 = 0; i18 < loop_ub; i18++) {
      r82->data[i18] = r81->data[i18];
    }

    emxInit_boolean_T(sp, &bEqualFirst, 1, &wc_emlrtRTEI, true);
    emxInit_boolean_T(sp, &b_bEqualFirst, 1, &vc_emlrtRTEI, true);
    emlrt_update_log_30(sp, r82, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[155U], r81);
    st.site = &mh_emlrtRSI;
    b_all(&st, r81, bEqualFirst);
    i18 = b_bEqualFirst->size[0];
    b_bEqualFirst->size[0] = bEqualFirst->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)b_bEqualFirst, i18, (int32_T)
                      sizeof(boolean_T), &vc_emlrtRTEI);
    loop_ub = bEqualFirst->size[0];
    emxFree_boolean_T(&r82);
    for (i18 = 0; i18 < loop_ub; i18++) {
      b_bEqualFirst->data[i18] = bEqualFirst->data[i18];
    }

    emxInit_boolean_T(sp, &x, 1, &vc_emlrtRTEI, true);
    emlrt_update_log_19(sp, b_bEqualFirst, *(emlrtLocationLoggingDataType (*)
      [613])&emlrtLocationLoggingDataTables[154U], bEqualFirst);
    st.site = &nh_emlrtRSI;
    i18 = x->size[0];
    x->size[0] = bEqualFirst->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)x, i18, (int32_T)sizeof(boolean_T),
                      &vc_emlrtRTEI);
    loop_ub = bEqualFirst->size[0];
    emxFree_boolean_T(&b_bEqualFirst);
    for (i18 = 0; i18 < loop_ub; i18++) {
      x->data[i18] = !bEqualFirst->data[i18];
    }

    b_st.site = &w_emlrtRSI;
    k = muIntScalarMin_sint32(1, x->size[0]);
    if (k <= x->size[0]) {
    } else {
      y = NULL;
      m14 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&y, m14);
      c_st.site = &cq_emlrtRSI;
      f_error(&c_st, y, &i_emlrtMCI);
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
      m14 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m14);
      c_st.site = &bq_emlrtRSI;
      f_error(&c_st, b_y, &j_emlrtMCI);
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

      i18 = 0;
      while (i18 <= loop_ub) {
        b_ii_data[0] = ii_data[0];
        i18 = 1;
      }

      k = loop_ub + 1;
      loop_ub++;
      i18 = 0;
      while (i18 <= loop_ub - 1) {
        ii_data[0] = b_ii_data[0];
        i18 = 1;
      }
    }

    ii_size[0] = k;
    for (i18 = 0; i18 < k; i18++) {
      c_ii_data[i18] = ii_data[i18];
    }

    emlrt_update_log_32(c_ii_data, ii_size, *(emlrtLocationLoggingDataType (*)
      [613])&emlrtLocationLoggingDataTables[156U], iFirstNotEqual_data, ii_data);
    if (ii_data[0] == 0) {
      bLessThanTwoUniqueRows = emlrt_update_log_31(true,
        *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables
        [157U]);
    } else {
      if (2 > bEqualFirst->size[0]) {
        i18 = 0;
        ii = 0;
      } else {
        i18 = 1;
        ii = bEqualFirst->size[0];
        idx = bEqualFirst->size[0];
        ii = emlrtDynamicBoundsCheckFastR2012b(idx, 1, ii, &ef_emlrtBCI, sp);
      }

      emlrtVectorVectorIndexCheckR2012b(bEqualFirst->size[0], 1, 1, ii - i18,
        &lb_emlrtECI, sp);
      st.site = &oh_emlrtRSI;
      idx = x->size[0];
      x->size[0] = ii - i18;
      emxEnsureCapacity(&st, (emxArray__common *)x, idx, (int32_T)sizeof
                        (boolean_T), &vc_emlrtRTEI);
      loop_ub = ii - i18;
      for (ii = 0; ii < loop_ub; ii++) {
        x->data[ii] = !bEqualFirst->data[i18 + ii];
      }

      emxInit_int32_T(&st, &b_ii, 1, &n_emlrtRTEI, true);
      b_st.site = &w_emlrtRSI;
      idx = 0;
      i18 = b_ii->size[0];
      b_ii->size[0] = x->size[0];
      emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i18, (int32_T)sizeof
                        (int32_T), &h_emlrtRTEI);
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
        m14 = emlrtCreateString("Assertion failed.");
        emlrtAssign(&c_y, m14);
        c_st.site = &bq_emlrtRSI;
        f_error(&c_st, c_y, &j_emlrtMCI);
      }

      if (x->size[0] == 1) {
        if (idx == 0) {
          i18 = b_ii->size[0];
          b_ii->size[0] = 0;
          emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i18, (int32_T)
                            sizeof(int32_T), &vc_emlrtRTEI);
        }
      } else {
        if (1 > idx) {
          loop_ub = 0;
        } else {
          loop_ub = idx;
        }

        emxInit_int32_T(&b_st, &c_ii, 1, &vc_emlrtRTEI, true);
        i18 = c_ii->size[0];
        c_ii->size[0] = loop_ub;
        emxEnsureCapacity(&b_st, (emxArray__common *)c_ii, i18, (int32_T)sizeof
                          (int32_T), &vc_emlrtRTEI);
        for (i18 = 0; i18 < loop_ub; i18++) {
          c_ii->data[i18] = b_ii->data[i18];
        }

        i18 = b_ii->size[0];
        b_ii->size[0] = c_ii->size[0];
        emxEnsureCapacity(&b_st, (emxArray__common *)b_ii, i18, (int32_T)sizeof
                          (int32_T), &vc_emlrtRTEI);
        loop_ub = c_ii->size[0];
        for (i18 = 0; i18 < loop_ub; i18++) {
          b_ii->data[i18] = c_ii->data[i18];
        }

        emxFree_int32_T(&c_ii);
      }

      emxInit_real_T(&b_st, &d_ii, 1, &vc_emlrtRTEI, true);
      i18 = d_ii->size[0];
      d_ii->size[0] = b_ii->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)d_ii, i18, (int32_T)sizeof
                        (real_T), &vc_emlrtRTEI);
      loop_ub = b_ii->size[0];
      for (i18 = 0; i18 < loop_ub; i18++) {
        d_ii->data[i18] = b_ii->data[i18];
      }

      emxFree_int32_T(&b_ii);
      emxInit_real_T(sp, &iToCheck, 1, &xc_emlrtRTEI, true);
      emxInit_real_T(sp, &b_iToCheck, 1, &vc_emlrtRTEI, true);
      emlrt_update_log_20(sp, d_ii, *(emlrtLocationLoggingDataType (*)[613])&
                          emlrtLocationLoggingDataTables[159U], iToCheck);
      i18 = b_iToCheck->size[0];
      b_iToCheck->size[0] = iToCheck->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)b_iToCheck, i18, (int32_T)sizeof
                        (real_T), &vc_emlrtRTEI);
      loop_ub = iToCheck->size[0];
      emxFree_real_T(&d_ii);
      for (i18 = 0; i18 < loop_ub; i18++) {
        b_iToCheck->data[i18] = iToCheck->data[i18] + 1.0;
      }

      b_emxInit_real_T(sp, &d_X, 2, &vc_emlrtRTEI, true);
      emlrt_update_log_20(sp, b_iToCheck, *(emlrtLocationLoggingDataType (*)[613])
                          &emlrtLocationLoggingDataTables[158U], iToCheck);
      loop_ub = X->size[1];
      i18 = d_X->size[0] * d_X->size[1];
      d_X->size[0] = iToCheck->size[0];
      d_X->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)d_X, i18, (int32_T)sizeof(real_T),
                        &vc_emlrtRTEI);
      emxFree_real_T(&b_iToCheck);
      for (i18 = 0; i18 < loop_ub; i18++) {
        k = iToCheck->size[0];
        for (ii = 0; ii < k; ii++) {
          idx = X->size[0];
          i19 = (int32_T)iToCheck->data[ii];
          d_X->data[ii + d_X->size[0] * i18] = X->data
            [(emlrtDynamicBoundsCheckFastR2012b(i19, 1, idx, &gf_emlrtBCI, sp) +
              X->size[0] * i18) - 1];
        }
      }

      emxFree_real_T(&iToCheck);
      b_emxInit_real_T(sp, &e_X, 2, &vc_emlrtRTEI, true);
      loop_ub = X->size[1];
      i18 = X->size[0];
      ii = (int32_T)iFirstNotEqual_data[0];
      ii = emlrtDynamicBoundsCheckFastR2012b(ii, 1, i18, &df_emlrtBCI, sp);
      i18 = e_X->size[0] * e_X->size[1];
      e_X->size[0] = 1;
      e_X->size[1] = loop_ub;
      emxEnsureCapacity(sp, (emxArray__common *)e_X, i18, (int32_T)sizeof(real_T),
                        &vc_emlrtRTEI);
      for (i18 = 0; i18 < loop_ub; i18++) {
        e_X->data[e_X->size[0] * i18] = X->data[(ii + X->size[0] * i18) - 1];
      }

      b_emxInit_boolean_T(sp, &r83, 2, &vc_emlrtRTEI, true);
      st.site = &ph_emlrtRSI;
      c_bsxfun(&st, d_X, e_X, r81);
      i18 = r83->size[0] * r83->size[1];
      r83->size[0] = r81->size[0];
      r83->size[1] = r81->size[1];
      emxEnsureCapacity(sp, (emxArray__common *)r83, i18, (int32_T)sizeof
                        (boolean_T), &vc_emlrtRTEI);
      loop_ub = r81->size[0] * r81->size[1];
      emxFree_real_T(&e_X);
      emxFree_real_T(&d_X);
      for (i18 = 0; i18 < loop_ub; i18++) {
        r83->data[i18] = r81->data[i18];
      }

      emxInit_boolean_T(sp, &c_bEqualFirst, 1, &vc_emlrtRTEI, true);
      emlrt_update_log_30(sp, r83, *(emlrtLocationLoggingDataType (*)[613])&
                          emlrtLocationLoggingDataTables[161U], r81);
      st.site = &ph_emlrtRSI;
      b_all(&st, r81, bEqualFirst);
      i18 = c_bEqualFirst->size[0];
      c_bEqualFirst->size[0] = bEqualFirst->size[0];
      emxEnsureCapacity(sp, (emxArray__common *)c_bEqualFirst, i18, (int32_T)
                        sizeof(boolean_T), &vc_emlrtRTEI);
      loop_ub = bEqualFirst->size[0];
      emxFree_boolean_T(&r83);
      for (i18 = 0; i18 < loop_ub; i18++) {
        c_bEqualFirst->data[i18] = bEqualFirst->data[i18];
      }

      emlrt_update_log_19(sp, c_bEqualFirst, *(emlrtLocationLoggingDataType (*)
        [613])&emlrtLocationLoggingDataTables[160U], bEqualFirst);
      st.site = &qh_emlrtRSI;
      bLessThanTwoUniqueRows = emlrt_update_log_31(c_all(&st, bEqualFirst),
        *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables
        [162U]);
      emxFree_boolean_T(&c_bEqualFirst);
    }

    emxFree_boolean_T(&r81);
    emxFree_boolean_T(&x);
    emxFree_boolean_T(&bEqualFirst);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
  return bLessThanTwoUniqueRows;
}

/* End of code generation (queryIfOnlyTwoUniqueRows.c) */
