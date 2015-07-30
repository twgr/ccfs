/*
 * fastUnique.c
 *
 * Code generation for function 'fastUnique'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "fastUnique.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growCCTnotRecursive.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_sort.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo me_emlrtRSI = { 4, "fastUnique",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\fastUnique.m" };

static emlrtRSInfo ne_emlrtRSI = { 6, "fastUnique",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\fastUnique.m" };

static emlrtRSInfo cf_emlrtRSI = { 108, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtMCInfo m_emlrtMCI = { 52, 9, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtMCInfo n_emlrtMCI = { 51, 19, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtRTEInfo lb_emlrtRTEI = { 1, 15, "fastUnique",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\fastUnique.m" };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 6, 10, "uX", "fastUnique",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\toolbox\\fastUnique.m", 0 };

static emlrtRSInfo lp_emlrtRSI = { 51, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtRSInfo fq_emlrtRSI = { 52, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

/* Function Definitions */
void fastUnique(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T *
                uX)
{
  emxArray_real_T *b_y1;
  int32_T i;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv32[2] = { 1, 36 };

  const mxArray *m7;
  char_T cv32[36];
  static const char_T cv33[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  int32_T iyLead;
  real_T work_data_idx_0;
  int32_T m;
  real_T tmp1;
  real_T tmp2;
  emxArray_boolean_T *r6;
  emxArray_int32_T *r7;
  emxArray_real_T *b_uX;
  int32_T i8;
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

  /*  Lite version of matlabs unique that is faster */
  st.site = &me_emlrtRSI;
  b_st.site = &oe_emlrtRSI;
  eml_sort(&b_st, X, uX);
  st.site = &ne_emlrtRSI;
  emxInit_real_T(&st, &b_y1, 2, &mb_emlrtRTEI, true);
  if (X->size[1] == 0) {
    i = b_y1->size[0] * b_y1->size[1];
    b_y1->size[0] = 1;
    b_y1->size[1] = 0;
    emxEnsureCapacity(&st, (emxArray__common *)b_y1, i, (int32_T)sizeof(real_T),
                      &lb_emlrtRTEI);
  } else {
    i = X->size[1] - 1;
    if (muIntScalarMin_sint32(i, 1) < 1) {
      i = b_y1->size[0] * b_y1->size[1];
      b_y1->size[0] = 1;
      b_y1->size[1] = 0;
      emxEnsureCapacity(&st, (emxArray__common *)b_y1, i, (int32_T)sizeof(real_T),
                        &lb_emlrtRTEI);
    } else {
      overflow = (X->size[1] != 1);
      if (overflow) {
      } else {
        y = NULL;
        m7 = emlrtCreateCharArray(2, iv32);
        for (i = 0; i < 36; i++) {
          cv32[i] = cv33[i];
        }

        emlrtInitCharArrayR2013a(&st, 36, m7, cv32);
        emlrtAssign(&y, m7);
        b_st.site = &lp_emlrtRSI;
        c_st.site = &fq_emlrtRSI;
        f_error(&b_st, b_message(&c_st, y, &m_emlrtMCI), &n_emlrtMCI);
      }

      i = b_y1->size[0] * b_y1->size[1];
      b_y1->size[0] = 1;
      b_y1->size[1] = X->size[1] - 1;
      emxEnsureCapacity(&st, (emxArray__common *)b_y1, i, (int32_T)sizeof(real_T),
                        &mb_emlrtRTEI);
      i = X->size[1] - 1;
      if (!(i == 0)) {
        i = 1;
        iyLead = 0;
        work_data_idx_0 = X->data[0];
        b_st.site = &df_emlrtRSI;
        if (2 > X->size[1]) {
          overflow = false;
        } else {
          overflow = (X->size[1] > 2147483646);
        }

        if (overflow) {
          d_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (m = 2; m <= X->size[1]; m++) {
          tmp1 = X->data[i];
          b_st.site = &cf_emlrtRSI;
          tmp2 = work_data_idx_0;
          work_data_idx_0 = tmp1;
          tmp1 -= tmp2;
          i++;
          b_y1->data[iyLead] = tmp1;
          iyLead++;
        }
      }
    }
  }

  b_emxInit_boolean_T(&st, &r6, 2, &lb_emlrtRTEI, true);
  i = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = 1 + b_y1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r6, i, (int32_T)sizeof(boolean_T),
                    &lb_emlrtRTEI);
  r6->data[0] = true;
  iyLead = b_y1->size[1];
  for (i = 0; i < iyLead; i++) {
    r6->data[r6->size[0] * (i + 1)] = (b_y1->data[b_y1->size[0] * i] != 0.0);
  }

  emxFree_real_T(&b_y1);
  b_emxInit_int32_T(sp, &r7, 2, &lb_emlrtRTEI, true);
  emxInit_real_T(sp, &b_uX, 2, &lb_emlrtRTEI, true);
  st.site = &ne_emlrtRSI;
  eml_li_find(&st, r6, r7);
  m = uX->size[1];
  i = b_uX->size[0] * b_uX->size[1];
  b_uX->size[0] = 1;
  b_uX->size[1] = r7->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_uX, i, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  iyLead = r7->size[1];
  emxFree_boolean_T(&r6);
  for (i = 0; i < iyLead; i++) {
    i8 = r7->data[r7->size[0] * i];
    b_uX->data[b_uX->size[0] * i] = uX->data[emlrtDynamicBoundsCheckFastR2012b
      (i8, 1, m, &ke_emlrtBCI, sp) - 1];
  }

  emxFree_int32_T(&r7);
  i = uX->size[0] * uX->size[1];
  uX->size[0] = 1;
  uX->size[1] = b_uX->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)uX, i, (int32_T)sizeof(real_T),
                    &lb_emlrtRTEI);
  iyLead = b_uX->size[1];
  for (i = 0; i < iyLead; i++) {
    uX->data[uX->size[0] * i] = b_uX->data[b_uX->size[0] * i];
  }

  emxFree_real_T(&b_uX);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (fastUnique.c) */
