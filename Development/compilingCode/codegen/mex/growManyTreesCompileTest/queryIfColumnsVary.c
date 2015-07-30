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
#include "abs.h"
#include "growCCTnotRecursive.h"
#include "eml_int_forloop_overflow_check.h"
#include "diff.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo xf_emlrtRSI = { 3, "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfColumnsVary.m" };

static emlrtRSInfo yf_emlrtRSI = { 4, "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfColumnsVary.m" };

static emlrtRSInfo dg_emlrtRSI = { 105, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRSInfo eg_emlrtRSI = { 108, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtRTEInfo gc_emlrtRTEI = { 1, 17, "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfColumnsVary.m" };

static emlrtRTEInfo hc_emlrtRTEI = { 91, 1, "eml_min_or_max",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_min_or_max.m"
};

static emlrtBCInfo oe_emlrtBCI = { -1, -1, 3, 32, "XvarToTest",
  "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfColumnsVary.m", 0 };

static emlrtECInfo kb_emlrtECI = { -1, 4, 1, "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfColumnsVary.m" };

static emlrtBCInfo pe_emlrtBCI = { -1, -1, 4, 41, "XvarToTest",
  "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfColumnsVary.m", 0 };

static emlrtBCInfo qe_emlrtBCI = { -1, -1, 4, 1, "bVar", "queryIfColumnsVary",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\queryIfColumnsVary.m", 0 };

/* Function Definitions */
void queryIfColumnsVary(const emlrtStack *sp, const emxArray_real_T *XvarToTest,
  real_T tol, emxArray_boolean_T *bVar)
{
  int32_T ixstart;
  int32_T loop_ub;
  int32_T ixstop;
  emxArray_real_T *b_XvarToTest;
  int32_T i;
  emxArray_real_T *varargin_1;
  emxArray_real_T *r8;
  const mxArray *y;
  static const int32_T iv36[2] = { 1, 39 };

  const mxArray *m10;
  char_T cv38[39];
  static const char_T cv39[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  uint32_T outsz[2];
  emxArray_real_T *maxval;
  int32_T ix;
  int32_T iy;
  boolean_T overflow;
  real_T mtmp;
  boolean_T b_ix;
  boolean_T exitg2;
  boolean_T b_ixstart;
  emxArray_boolean_T *b_bVar;
  emxArray_int32_T *r9;
  emxArray_boolean_T *c_bVar;
  emxArray_int32_T *r10;
  emxArray_real_T *c_XvarToTest;
  const mxArray *b_y;
  static const int32_T iv37[2] = { 1, 39 };

  boolean_T c_ix;
  boolean_T exitg1;
  boolean_T c_ixstart;
  emxArray_boolean_T *r11;
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

  /*  Function that says whether columns are constant or not */
  ixstart = (int32_T)muDoubleScalarMin(5.0, XvarToTest->size[0]);
  if (1 > ixstart) {
    loop_ub = 0;
  } else {
    ixstop = XvarToTest->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, ixstop, &oe_emlrtBCI, sp);
    ixstop = XvarToTest->size[0];
    loop_ub = emlrtDynamicBoundsCheckFastR2012b(ixstart, 1, ixstop, &oe_emlrtBCI,
      sp);
  }

  emxInit_real_T(sp, &b_XvarToTest, 2, &gc_emlrtRTEI, true);
  st.site = &xf_emlrtRSI;
  i = XvarToTest->size[1];
  ixstart = b_XvarToTest->size[0] * b_XvarToTest->size[1];
  b_XvarToTest->size[0] = loop_ub;
  b_XvarToTest->size[1] = i;
  emxEnsureCapacity(&st, (emxArray__common *)b_XvarToTest, ixstart, (int32_T)
                    sizeof(real_T), &gc_emlrtRTEI);
  for (ixstart = 0; ixstart < i; ixstart++) {
    for (ixstop = 0; ixstop < loop_ub; ixstop++) {
      b_XvarToTest->data[ixstop + b_XvarToTest->size[0] * ixstart] =
        XvarToTest->data[ixstop + XvarToTest->size[0] * ixstart];
    }
  }

  emxInit_real_T(&st, &varargin_1, 2, &gc_emlrtRTEI, true);
  emxInit_real_T(&st, &r8, 2, &gc_emlrtRTEI, true);
  b_st.site = &xf_emlrtRSI;
  diff(&b_st, b_XvarToTest, varargin_1);
  c_abs(&st, varargin_1, r8);
  ixstart = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = r8->size[0];
  varargin_1->size[1] = r8->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)varargin_1, ixstart, (int32_T)
                    sizeof(real_T), &gc_emlrtRTEI);
  loop_ub = r8->size[0] * r8->size[1];
  emxFree_real_T(&b_XvarToTest);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    varargin_1->data[ixstart] = r8->data[ixstart];
  }

  b_st.site = &bg_emlrtRSI;
  c_st.site = &cg_emlrtRSI;
  if (varargin_1->size[0] > 0) {
  } else {
    y = NULL;
    m10 = emlrtCreateCharArray(2, iv36);
    for (i = 0; i < 39; i++) {
      cv38[i] = cv39[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv38);
    emlrtAssign(&y, m10);
    d_st.site = &hp_emlrtRSI;
    e_st.site = &cq_emlrtRSI;
    f_error(&d_st, b_message(&e_st, y, &y_emlrtMCI), &ab_emlrtMCI);
  }

  for (ixstart = 0; ixstart < 2; ixstart++) {
    outsz[ixstart] = (uint32_T)varargin_1->size[ixstart];
  }

  emxInit_real_T(&c_st, &maxval, 2, &gc_emlrtRTEI, true);
  ixstart = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = (int32_T)outsz[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)maxval, ixstart, (int32_T)sizeof
                    (real_T), &hc_emlrtRTEI);
  ix = 0;
  iy = -1;
  d_st.site = &dg_emlrtRSI;
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
    d_st.site = &eg_emlrtRSI;
    ixstart = ix;
    ixstop = ix + varargin_1->size[0];
    mtmp = varargin_1->data[ix];
    if (varargin_1->size[0] > 1) {
      if (muDoubleScalarIsNaN(varargin_1->data[ix])) {
        f_st.site = &gg_emlrtRSI;
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
        f_st.site = &fg_emlrtRSI;
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

  ixstart = bVar->size[0] * bVar->size[1];
  bVar->size[0] = 1;
  bVar->size[1] = maxval->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)bVar, ixstart, (int32_T)sizeof
                    (boolean_T), &gc_emlrtRTEI);
  loop_ub = maxval->size[0] * maxval->size[1];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    bVar->data[ixstart] = (maxval->data[ixstart] > tol);
  }

  b_emxInit_boolean_T(sp, &b_bVar, 2, &gc_emlrtRTEI, true);
  ixstart = b_bVar->size[0] * b_bVar->size[1];
  b_bVar->size[0] = 1;
  b_bVar->size[1] = bVar->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_bVar, ixstart, (int32_T)sizeof
                    (boolean_T), &gc_emlrtRTEI);
  loop_ub = bVar->size[0] * bVar->size[1];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    b_bVar->data[ixstart] = !bVar->data[ixstart];
  }

  b_emxInit_int32_T(sp, &r9, 2, &gc_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &c_bVar, 2, &gc_emlrtRTEI, true);
  st.site = &yf_emlrtRSI;
  eml_li_find(&st, b_bVar, r9);
  st.site = &yf_emlrtRSI;
  ixstart = c_bVar->size[0] * c_bVar->size[1];
  c_bVar->size[0] = 1;
  c_bVar->size[1] = bVar->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_bVar, ixstart, (int32_T)sizeof
                    (boolean_T), &gc_emlrtRTEI);
  loop_ub = bVar->size[0] * bVar->size[1];
  emxFree_boolean_T(&b_bVar);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    c_bVar->data[ixstart] = !bVar->data[ixstart];
  }

  b_emxInit_int32_T(&st, &r10, 2, &gc_emlrtRTEI, true);
  emxInit_real_T(&st, &c_XvarToTest, 2, &gc_emlrtRTEI, true);
  b_st.site = &yf_emlrtRSI;
  eml_li_find(&b_st, c_bVar, r10);
  loop_ub = XvarToTest->size[0];
  ixstart = c_XvarToTest->size[0] * c_XvarToTest->size[1];
  c_XvarToTest->size[0] = loop_ub;
  c_XvarToTest->size[1] = r10->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)c_XvarToTest, ixstart, (int32_T)
                    sizeof(real_T), &gc_emlrtRTEI);
  i = r10->size[1];
  emxFree_boolean_T(&c_bVar);
  for (ixstart = 0; ixstart < i; ixstart++) {
    for (ixstop = 0; ixstop < loop_ub; ixstop++) {
      ix = XvarToTest->size[1];
      iy = r10->data[r10->size[0] * ixstart];
      c_XvarToTest->data[ixstop + c_XvarToTest->size[0] * ixstart] =
        XvarToTest->data[ixstop + XvarToTest->size[0] *
        (emlrtDynamicBoundsCheckFastR2012b(iy, 1, ix, &pe_emlrtBCI, &st) - 1)];
    }
  }

  emxFree_int32_T(&r10);
  b_st.site = &yf_emlrtRSI;
  diff(&b_st, c_XvarToTest, varargin_1);
  c_abs(&st, varargin_1, r8);
  ixstart = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = r8->size[0];
  varargin_1->size[1] = r8->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)varargin_1, ixstart, (int32_T)
                    sizeof(real_T), &gc_emlrtRTEI);
  loop_ub = r8->size[0] * r8->size[1];
  emxFree_real_T(&c_XvarToTest);
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    varargin_1->data[ixstart] = r8->data[ixstart];
  }

  emxFree_real_T(&r8);
  b_st.site = &bg_emlrtRSI;
  c_st.site = &cg_emlrtRSI;
  if (varargin_1->size[0] > 0) {
  } else {
    b_y = NULL;
    m10 = emlrtCreateCharArray(2, iv37);
    for (i = 0; i < 39; i++) {
      cv38[i] = cv39[i];
    }

    emlrtInitCharArrayR2013a(&c_st, 39, m10, cv38);
    emlrtAssign(&b_y, m10);
    d_st.site = &hp_emlrtRSI;
    e_st.site = &cq_emlrtRSI;
    f_error(&d_st, b_message(&e_st, b_y, &y_emlrtMCI), &ab_emlrtMCI);
  }

  for (ixstart = 0; ixstart < 2; ixstart++) {
    outsz[ixstart] = (uint32_T)varargin_1->size[ixstart];
  }

  ixstart = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = (int32_T)outsz[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)maxval, ixstart, (int32_T)sizeof
                    (real_T), &hc_emlrtRTEI);
  ix = 0;
  iy = -1;
  d_st.site = &dg_emlrtRSI;
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
    d_st.site = &eg_emlrtRSI;
    ixstart = ix;
    ixstop = ix + varargin_1->size[0];
    mtmp = varargin_1->data[ix];
    if (varargin_1->size[0] > 1) {
      if (muDoubleScalarIsNaN(varargin_1->data[ix])) {
        f_st.site = &gg_emlrtRSI;
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
        f_st.site = &fg_emlrtRSI;
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
  b_emxInit_boolean_T(&c_st, &r11, 2, &gc_emlrtRTEI, true);
  ixstart = r11->size[0] * r11->size[1];
  r11->size[0] = 1;
  r11->size[1] = maxval->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r11, ixstart, (int32_T)sizeof
                    (boolean_T), &gc_emlrtRTEI);
  loop_ub = maxval->size[0] * maxval->size[1];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    r11->data[ixstart] = (maxval->data[ixstart] > tol);
  }

  emxFree_real_T(&maxval);
  ixstart = r9->size[1];
  ixstop = r11->size[1];
  emlrtSizeEqCheck1DFastR2012b(ixstart, ixstop, &kb_emlrtECI, sp);
  i = bVar->size[1];
  loop_ub = r11->size[0] * r11->size[1];
  for (ixstart = 0; ixstart < loop_ub; ixstart++) {
    ixstop = r9->data[ixstart];
    bVar->data[emlrtDynamicBoundsCheckFastR2012b(ixstop, 1, i, &qe_emlrtBCI, sp)
      - 1] = r11->data[ixstart];
  }

  emxFree_boolean_T(&r11);
  emxFree_int32_T(&r9);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (queryIfColumnsVary.c) */
