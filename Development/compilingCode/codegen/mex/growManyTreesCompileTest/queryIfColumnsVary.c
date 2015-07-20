/*
 * queryIfColumnsVary.c
 *
 * Code generation for function 'queryIfColumnsVary'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "queryIfColumnsVary.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "expandNode.h"
#include "abs.h"
#include "growCCTnotRecursive.h"
#include "eml_int_forloop_overflow_check.h"
#include "diff.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo yf_emlrtRSI = { 3, "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfColumnsVary.m" };

static emlrtRSInfo ag_emlrtRSI = { 4, "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfColumnsVary.m" };

static emlrtRSInfo eg_emlrtRSI = { 105, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo fg_emlrtRSI = { 108, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRTEInfo jc_emlrtRTEI = { 1, 17, "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfColumnsVary.m" };

static emlrtRTEInfo kc_emlrtRTEI = { 91, 1, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 3, 32, "XvarToTest",
  "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfColumnsVary.m", 0 };

static emlrtECInfo kb_emlrtECI = { -1, 4, 1, "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfColumnsVary.m" };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 4, 41, "XvarToTest",
  "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfColumnsVary.m", 0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 4, 1, "bVar", "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\queryIfColumnsVary.m", 0 };

/* Function Declarations */
static void b_emlrt_update_log_29(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
static void emlrt_update_log_29(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);

/* Function Definitions */
static void b_emlrt_update_log_29(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613])
{
  real_T localMin;
  real_T localMax;
  int32_T i;
  localMin = table[0U].SimMin;
  localMax = table[0U].SimMax;
  for (i = 0; i < in->size[0] * in->size[1]; i++) {
    /* Simulation Min-Max logging. */
    if (in->data[i] < localMin) {
      localMin = in->data[i];
    }

    if (in->data[i] > localMax) {
      localMax = in->data[i];
    }
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  i = 0;
  while (table[0U].IsAlwaysInteger && (i < in->size[0] * in->size[1])) {
    if (in->data[i] != muDoubleScalarFloor(in->data[i])) {
      table[0U].IsAlwaysInteger = false;
    }

    i++;
  }
}

static void emlrt_update_log_29(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i55;
  int32_T loop_ub;
  i55 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i55, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i55 = 0; i55 < loop_ub; i55++) {
    out->data[i55] = in->data[i55];
  }

  b_emlrt_update_log_29(out, table);
}

void queryIfColumnsVary(const emlrtStack *sp, const emxArray_real_T *XvarToTest,
  real_T tol, emxArray_boolean_T *bVar)
{
  emxArray_real_T *b_XvarToTest;
  real_T mtmp;
  int32_T loop_ub;
  int32_T ixstart;
  int32_T ixstop;
  emxArray_real_T *c_XvarToTest;
  int32_T i;
  emxArray_real_T *varargin_1;
  emxArray_real_T *b_varargin_1;
  emxArray_real_T *r68;
  emxArray_real_T *r69;
  const mxArray *y;
  static const int32_T iv64[2] = { 1, 39 };

  const mxArray *m10;
  char_T cv39[39];
  static const char_T cv40[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  uint32_T outsz[2];
  emxArray_real_T *maxval;
  int32_T ix;
  int32_T iy;
  boolean_T overflow;
  boolean_T b_ix;
  boolean_T exitg2;
  boolean_T b_ixstart;
  emxArray_real_T *b_maxval;
  emxArray_boolean_T *c_maxval;
  emxArray_boolean_T *b_bVar;
  emxArray_int32_T *r70;
  emxArray_boolean_T *c_bVar;
  emxArray_int32_T *r71;
  emxArray_real_T *d_XvarToTest;
  emxArray_real_T *c_varargin_1;
  emxArray_real_T *r72;
  const mxArray *b_y;
  static const int32_T iv65[2] = { 1, 39 };

  boolean_T c_ix;
  boolean_T exitg1;
  boolean_T c_ixstart;
  emxArray_real_T *d_maxval;
  emxArray_boolean_T *r73;
  emxArray_boolean_T *r74;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  f_st.prev = &d_st;
  f_st.tls = d_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &b_XvarToTest, 2, &jc_emlrtRTEI, true);

  /* logging input variable 'XvarToTest' for function 'queryIfColumnsVary' */
  emlrt_update_log_2(sp, XvarToTest, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[106U], b_XvarToTest);

  /* logging input variable 'tol' for function 'queryIfColumnsVary' */
  emlrt_update_log_1(tol, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[107U]);

  /*  Function that says whether columns are constant or not */
  mtmp = emlrt_update_log_1(muDoubleScalarMin(5.0, XvarToTest->size[0]),
    *(emlrtLocationLoggingDataType (*)[613])&emlrtLocationLoggingDataTables[112U]);
  emxFree_real_T(&b_XvarToTest);
  if (1.0 > mtmp) {
    loop_ub = 0;
  } else {
    ixstart = XvarToTest->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, ixstart, &oe_emlrtBCI, sp);
    ixstart = XvarToTest->size[0];
    ixstop = (int32_T)mtmp;
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, ixstart, &oe_emlrtBCI,
      sp);
  }

  b_emxInit_real_T(sp, &c_XvarToTest, 2, &jc_emlrtRTEI, true);
  st.site = &yf_emlrtRSI;
  i = XvarToTest->size[1];
  ixstart = c_XvarToTest->size[0] * c_XvarToTest->size[1];
  c_XvarToTest->size[0] = loop_ub;
  c_XvarToTest->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)c_XvarToTest, ixstart, (int32_T)
                    sizeof(real_T), &jc_emlrtRTEI);
  for (ixstart = 0; ixstart < i; ixstart++) {
    for (ixstop = 0; ixstop < loop_ub; ixstop++) {
      c_XvarToTest->data[ixstop + c_XvarToTest->size[0] * ixstart] =
        XvarToTest->data[ixstop + XvarToTest->size[0] * ixstart];
    }
  }

  b_emxInit_real_T(&st, &varargin_1, 2, &jc_emlrtRTEI, true);
  b_emxInit_real_T(&st, &b_varargin_1, 2, &jc_emlrtRTEI, true);
  b_st.site = &yf_emlrtRSI;
  diff(&b_st, c_XvarToTest, varargin_1);
  ixstart = b_varargin_1->size[0] * b_varargin_1->size[1];
  b_varargin_1->size[0] = varargin_1->size[0];
  b_varargin_1->size[1] = varargin_1->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)b_varargin_1, ixstart, (int32_T)
                    sizeof(real_T), &jc_emlrtRTEI);
  loop_ub = varargin_1->size[0] * varargin_1->size[1];
  emxFree_real_T(&c_XvarToTest);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    b_varargin_1->data[ixstart] = varargin_1->data[ixstart];
  }

  b_emxInit_real_T(&st, &r68, 2, &jc_emlrtRTEI, true);
  b_emxInit_real_T(&st, &r69, 2, &jc_emlrtRTEI, true);
  emlrt_update_log_29(&st, b_varargin_1, *(emlrtLocationLoggingDataType (*)[613])
                      &emlrtLocationLoggingDataTables[111U], varargin_1);
  c_abs(&st, varargin_1, r68);
  ixstart = r69->size[0] * r69->size[1];
  r69->size[0] = r68->size[0];
  r69->size[1] = r68->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)r69, ixstart, (int32_T)sizeof
                    (real_T), &jc_emlrtRTEI);
  loop_ub = r68->size[0] * r68->size[1];
  emxFree_real_T(&b_varargin_1);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    r69->data[ixstart] = r68->data[ixstart];
  }

  emlrt_update_log_2(&st, r69, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[110U], r68);
  ixstart = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = r68->size[0];
  varargin_1->size[1] = r68->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)varargin_1, ixstart, (int32_T)
                    sizeof(real_T), &jc_emlrtRTEI);
  loop_ub = r68->size[0] * r68->size[1];
  emxFree_real_T(&r69);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    varargin_1->data[ixstart] = r68->data[ixstart];
  }

  b_st.site = &cg_emlrtRSI;
  c_st.site = &dg_emlrtRSI;
  if (varargin_1->size[0] > 0) {
  } else {
    y = NULL;
    m10 = emlrtCreateCharArray(2, iv64);
    for (i = 0; i < 39; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv39);
    emlrtAssign(&y, m10);
    d_st.site = &dq_emlrtRSI;
    e_st.site = &yq_emlrtRSI;
    f_error(&d_st, b_message(&e_st, y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  for (ixstart = 0; ixstart < 2; ixstart++) {
    outsz[ixstart] = (uint32_T)varargin_1->size[ixstart];
  }

  b_emxInit_real_T(&c_st, &maxval, 2, &jc_emlrtRTEI, true);
  ixstart = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = (int32_T)outsz[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)maxval, ixstart, (int32_T)sizeof
                    (real_T), &kc_emlrtRTEI);
  ix = 0;
  iy = -1;
  d_st.site = &eg_emlrtRSI;
  if (1 > varargin_1->size[1]) {
    overflow = false;
  } else {
    overflow = (varargin_1->size[1] > 2147483646);
  }

  if (overflow) {
    f_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (i = 1; i <= varargin_1->size[1]; i++) {
    d_st.site = &fg_emlrtRSI;
    ixstart = ix;
    ixstop = ix + varargin_1->size[0];
    mtmp = varargin_1->data[ix];
    if (varargin_1->size[0] > 1) {
      if (muDoubleScalarIsNaN(varargin_1->data[ix])) {
        f_st.site = &hg_emlrtRSI;
        if (ix + 2 > ixstop) {
          b_ix = false;
        } else {
          b_ix = (ixstop > 2147483646);
        }

        if (b_ix) {
          g_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        loop_ub = ix + 1;
        exitg2 = false;
        while ((!exitg2) && (loop_ub + 1 <= ixstop)) {
          ixstart = loop_ub;
          if (!muDoubleScalarIsNaN(varargin_1->data[loop_ub])) {
            mtmp = varargin_1->data[loop_ub];
            exitg2 = true;
          } else {
            loop_ub++;
          }
        }
      }

      if (ixstart + 1 < ixstop) {
        f_st.site = &gg_emlrtRSI;
        if (ixstart + 2 > ixstop) {
          b_ixstart = false;
        } else {
          b_ixstart = (ixstop > 2147483646);
        }

        if (b_ixstart) {
          g_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        for (loop_ub = ixstart + 1; loop_ub + 1 <= ixstop; loop_ub++) {
          if (varargin_1->data[loop_ub] > mtmp) {
            mtmp = varargin_1->data[loop_ub];
          }
        }
      }
    }

    iy++;
    maxval->data[iy] = mtmp;
    ix += varargin_1->size[0];
  }

  b_emxInit_real_T(&c_st, &b_maxval, 2, &jc_emlrtRTEI, true);
  ixstart = b_maxval->size[0] * b_maxval->size[1];
  b_maxval->size[0] = 1;
  b_maxval->size[1] = maxval->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_maxval, ixstart, (int32_T)sizeof
                    (real_T), &jc_emlrtRTEI);
  loop_ub = maxval->size[0] * maxval->size[1];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    b_maxval->data[ixstart] = maxval->data[ixstart];
  }

  b_emxInit_boolean_T(sp, &c_maxval, 2, &jc_emlrtRTEI, true);
  emlrt_update_log_5(sp, b_maxval, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[109U], maxval);
  ixstart = c_maxval->size[0] * c_maxval->size[1];
  c_maxval->size[0] = 1;
  c_maxval->size[1] = maxval->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_maxval, ixstart, (int32_T)sizeof
                    (boolean_T), &jc_emlrtRTEI);
  loop_ub = maxval->size[0] * maxval->size[1];
  emxFree_real_T(&b_maxval);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    c_maxval->data[ixstart] = (maxval->data[ixstart] > tol);
  }

  b_emxInit_boolean_T(sp, &b_bVar, 2, &jc_emlrtRTEI, true);
  emlrt_update_log_28(sp, c_maxval, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[108U], bVar);
  ixstart = b_bVar->size[0] * b_bVar->size[1];
  b_bVar->size[0] = 1;
  b_bVar->size[1] = bVar->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_bVar, ixstart, (int32_T)sizeof
                    (boolean_T), &jc_emlrtRTEI);
  loop_ub = bVar->size[0] * bVar->size[1];
  emxFree_boolean_T(&c_maxval);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    b_bVar->data[ixstart] = !bVar->data[ixstart];
  }

  b_emxInit_int32_T(sp, &r70, 2, &jc_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &c_bVar, 2, &jc_emlrtRTEI, true);
  st.site = &ag_emlrtRSI;
  eml_li_find(&st, b_bVar, r70);
  st.site = &ag_emlrtRSI;
  ixstart = c_bVar->size[0] * c_bVar->size[1];
  c_bVar->size[0] = 1;
  c_bVar->size[1] = bVar->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_bVar, ixstart, (int32_T)sizeof
                    (boolean_T), &jc_emlrtRTEI);
  loop_ub = bVar->size[0] * bVar->size[1];
  emxFree_boolean_T(&b_bVar);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    c_bVar->data[ixstart] = !bVar->data[ixstart];
  }

  b_emxInit_int32_T(&st, &r71, 2, &jc_emlrtRTEI, true);
  b_emxInit_real_T(&st, &d_XvarToTest, 2, &jc_emlrtRTEI, true);
  b_st.site = &ag_emlrtRSI;
  eml_li_find(&b_st, c_bVar, r71);
  loop_ub = XvarToTest->size[0];
  ixstart = d_XvarToTest->size[0] * d_XvarToTest->size[1];
  d_XvarToTest->size[0] = loop_ub;
  d_XvarToTest->size[1] = r71->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)d_XvarToTest, ixstart, (int32_T)
                    sizeof(real_T), &jc_emlrtRTEI);
  i = r71->size[1];
  emxFree_boolean_T(&c_bVar);
  for (ixstart = 0; ixstart < i; ixstart++) {
    for (ixstop = 0; ixstop < loop_ub; ixstop++) {
      ix = XvarToTest->size[1];
      iy = r71->data[r71->size[0] * ixstart];
      d_XvarToTest->data[ixstop + d_XvarToTest->size[0] * ixstart] =
        XvarToTest->data[ixstop + XvarToTest->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(iy, 1, ix, &pe_emlrtBCI, &st) - 1)];
    }
  }

  emxFree_int32_T(&r71);
  b_emxInit_real_T(&st, &c_varargin_1, 2, &jc_emlrtRTEI, true);
  b_st.site = &ag_emlrtRSI;
  diff(&b_st, d_XvarToTest, varargin_1);
  ixstart = c_varargin_1->size[0] * c_varargin_1->size[1];
  c_varargin_1->size[0] = varargin_1->size[0];
  c_varargin_1->size[1] = varargin_1->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_varargin_1, ixstart, (int32_T)
                    sizeof(real_T), &jc_emlrtRTEI);
  loop_ub = varargin_1->size[0] * varargin_1->size[1];
  emxFree_real_T(&d_XvarToTest);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    c_varargin_1->data[ixstart] = varargin_1->data[ixstart];
  }

  b_emxInit_real_T(&st, &r72, 2, &jc_emlrtRTEI, true);
  emlrt_update_log_29(&st, c_varargin_1, *(emlrtLocationLoggingDataType (*)[613])
                      &emlrtLocationLoggingDataTables[116U], varargin_1);
  c_abs(&st, varargin_1, r68);
  ixstart = r72->size[0] * r72->size[1];
  r72->size[0] = r68->size[0];
  r72->size[1] = r68->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)r72, ixstart, (int32_T)sizeof
                    (real_T), &jc_emlrtRTEI);
  loop_ub = r68->size[0] * r68->size[1];
  emxFree_real_T(&c_varargin_1);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    r72->data[ixstart] = r68->data[ixstart];
  }

  emlrt_update_log_2(&st, r72, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[115U], r68);
  ixstart = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = r68->size[0];
  varargin_1->size[1] = r68->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)varargin_1, ixstart, (int32_T)
                    sizeof(real_T), &jc_emlrtRTEI);
  loop_ub = r68->size[0] * r68->size[1];
  emxFree_real_T(&r72);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    varargin_1->data[ixstart] = r68->data[ixstart];
  }

  emxFree_real_T(&r68);
  b_st.site = &cg_emlrtRSI;
  c_st.site = &dg_emlrtRSI;
  if (varargin_1->size[0] > 0) {
  } else {
    b_y = NULL;
    m10 = emlrtCreateCharArray(2, iv65);
    for (i = 0; i < 39; i++) {
      cv39[i] = cv40[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv39);
    emlrtAssign(&b_y, m10);
    d_st.site = &dq_emlrtRSI;
    e_st.site = &yq_emlrtRSI;
    f_error(&d_st, b_message(&e_st, b_y, &bb_emlrtMCI), &cb_emlrtMCI);
  }

  for (ixstart = 0; ixstart < 2; ixstart++) {
    outsz[ixstart] = (uint32_T)varargin_1->size[ixstart];
  }

  ixstart = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = (int32_T)outsz[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)maxval, ixstart, (int32_T)sizeof
                    (real_T), &kc_emlrtRTEI);
  ix = 0;
  iy = -1;
  d_st.site = &eg_emlrtRSI;
  if (1 > varargin_1->size[1]) {
    overflow = false;
  } else {
    overflow = (varargin_1->size[1] > 2147483646);
  }

  if (overflow) {
    f_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&f_st);
  }

  for (i = 1; i <= varargin_1->size[1]; i++) {
    d_st.site = &fg_emlrtRSI;
    ixstart = ix;
    ixstop = ix + varargin_1->size[0];
    mtmp = varargin_1->data[ix];
    if (varargin_1->size[0] > 1) {
      if (muDoubleScalarIsNaN(varargin_1->data[ix])) {
        f_st.site = &hg_emlrtRSI;
        if (ix + 2 > ixstop) {
          c_ix = false;
        } else {
          c_ix = (ixstop > 2147483646);
        }

        if (c_ix) {
          g_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        loop_ub = ix + 1;
        exitg1 = false;
        while ((!exitg1) && (loop_ub + 1 <= ixstop)) {
          ixstart = loop_ub;
          if (!muDoubleScalarIsNaN(varargin_1->data[loop_ub])) {
            mtmp = varargin_1->data[loop_ub];
            exitg1 = true;
          } else {
            loop_ub++;
          }
        }
      }

      if (ixstart + 1 < ixstop) {
        f_st.site = &gg_emlrtRSI;
        if (ixstart + 2 > ixstop) {
          c_ixstart = false;
        } else {
          c_ixstart = (ixstop > 2147483646);
        }

        if (c_ixstart) {
          g_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&g_st);
        }

        for (loop_ub = ixstart + 1; loop_ub + 1 <= ixstop; loop_ub++) {
          if (varargin_1->data[loop_ub] > mtmp) {
            mtmp = varargin_1->data[loop_ub];
          }
        }
      }
    }

    iy++;
    maxval->data[iy] = mtmp;
    ix += varargin_1->size[0];
  }

  emxFree_real_T(&varargin_1);
  b_emxInit_real_T(&c_st, &d_maxval, 2, &jc_emlrtRTEI, true);
  ixstart = d_maxval->size[0] * d_maxval->size[1];
  d_maxval->size[0] = 1;
  d_maxval->size[1] = maxval->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)d_maxval, ixstart, (int32_T)sizeof
                    (real_T), &jc_emlrtRTEI);
  loop_ub = maxval->size[0] * maxval->size[1];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    d_maxval->data[ixstart] = maxval->data[ixstart];
  }

  b_emxInit_boolean_T(sp, &r73, 2, &jc_emlrtRTEI, true);
  emlrt_update_log_5(sp, d_maxval, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[114U], maxval);
  ixstart = r73->size[0] * r73->size[1];
  r73->size[0] = 1;
  r73->size[1] = maxval->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r73, ixstart, (int32_T)sizeof
                    (boolean_T), &jc_emlrtRTEI);
  loop_ub = maxval->size[0] * maxval->size[1];
  emxFree_real_T(&d_maxval);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    r73->data[ixstart] = (maxval->data[ixstart] > tol);
  }

  emxFree_real_T(&maxval);
  b_emxInit_boolean_T(sp, &r74, 2, &jc_emlrtRTEI, true);
  ixstart = r70->size[1];
  ixstop = r73->size[1];
  emlrtSizeEqCheck1DFastR2012b(ixstart, ixstop, &kb_emlrtECI, sp);
  emlrt_update_log_28(sp, r73, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[113U], r74);
  i = bVar->size[1];
  loop_ub = r74->size[0] * r74->size[1];
  emxFree_boolean_T(&r73);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    ixstop = r70->data[ixstart];
    bVar->data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i, &qe_emlrtBCI, sp)
      - 1] = r74->data[ixstart];
  }

  emxFree_boolean_T(&r74);
  emxFree_int32_T(&r70);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (queryIfColumnsVary.c) */
