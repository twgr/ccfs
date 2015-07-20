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
static emlrtRSInfo ne_emlrtRSI = { 3, "fastUnique",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\fastUnique.m" };

static emlrtRSInfo oe_emlrtRSI = { 5, "fastUnique",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\fastUnique.m" };

static emlrtRSInfo df_emlrtRSI = { 108, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtMCInfo o_emlrtMCI = { 52, 9, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtMCInfo p_emlrtMCI = { 51, 19, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 1, 15, "fastUnique",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\fastUnique.m" };

static emlrtBCInfo ke_emlrtBCI = { -1, -1, 5, 10, "uX", "fastUnique",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\fastUnique.m", 0 };

static emlrtRSInfo hq_emlrtRSI = { 51, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtRSInfo cr_emlrtRSI = { 52, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

/* Function Definitions */
void fastUnique(const emlrtStack *sp, const emxArray_real_T *X, emxArray_real_T *
                uX)
{
  emxArray_real_T *b_y1;
  emxArray_real_T *b_X;
  int32_T i;
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv60[2] = { 1, 36 };

  const mxArray *m7;
  char_T cv33[36];
  static const char_T cv34[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  int32_T iyLead;
  real_T work_data_idx_0;
  int32_T m;
  real_T tmp1;
  real_T tmp2;
  emxArray_real_T *c_y1;
  emxArray_boolean_T *r66;
  emxArray_int32_T *r67;
  emxArray_real_T *b_uX;
  int32_T i7;
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
  b_emxInit_real_T(sp, &b_y1, 2, &pb_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_X, 2, &ob_emlrtRTEI, true);

  /* logging input variable 'X' for function 'fastUnique' */
  emlrt_update_log_5(sp, X, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[102U], b_X);
  st.site = &ne_emlrtRSI;
  b_st.site = &pe_emlrtRSI;
  eml_sort(&b_st, X, b_y1);
  emlrt_update_log_5(sp, b_y1, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[103U], uX);
  st.site = &oe_emlrtRSI;
  emxFree_real_T(&b_X);
  if (X->size[1] == 0) {
    i = b_y1->size[0] * b_y1->size[1];
    b_y1->size[0] = 1;
    b_y1->size[1] = 0;
    emxEnsureCapacity(&st, (emxArray__common *)b_y1, i, (int32_T)sizeof(real_T),
                      &ob_emlrtRTEI);
  } else {
    i = X->size[1] - 1;
    if (muIntScalarMin_sint32(i, 1) < 1) {
      i = b_y1->size[0] * b_y1->size[1];
      b_y1->size[0] = 1;
      b_y1->size[1] = 0;
      emxEnsureCapacity(&st, (emxArray__common *)b_y1, i, (int32_T)sizeof(real_T),
                        &ob_emlrtRTEI);
    } else {
      overflow = (X->size[1] != 1);
      if (overflow) {
      } else {
        y = NULL;
        m7 = emlrtCreateCharArray(2, iv60);
        for (i = 0; i < 36; i++) {
          cv33[i] = cv34[i];
        }

        emlrtInitCharArrayR2013a(&st, 36, m7, cv33);
        emlrtAssign(&y, m7);
        b_st.site = &hq_emlrtRSI;
        c_st.site = &cr_emlrtRSI;
        f_error(&b_st, b_message(&c_st, y, &o_emlrtMCI), &p_emlrtMCI);
      }

      i = b_y1->size[0] * b_y1->size[1];
      b_y1->size[0] = 1;
      b_y1->size[1] = X->size[1] - 1;
      emxEnsureCapacity(&st, (emxArray__common *)b_y1, i, (int32_T)sizeof(real_T),
                        &pb_emlrtRTEI);
      i = X->size[1] - 1;
      if (!(i == 0)) {
        i = 1;
        iyLead = 0;
        work_data_idx_0 = X->data[0];
        b_st.site = &ef_emlrtRSI;
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
          b_st.site = &df_emlrtRSI;
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

  b_emxInit_real_T(&st, &c_y1, 2, &ob_emlrtRTEI, true);
  i = c_y1->size[0] * c_y1->size[1];
  c_y1->size[0] = 1;
  c_y1->size[1] = b_y1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_y1, i, (int32_T)sizeof(real_T),
                    &ob_emlrtRTEI);
  iyLead = b_y1->size[0] * b_y1->size[1];
  for (i = 0; i < iyLead; i++) {
    c_y1->data[i] = b_y1->data[i];
  }

  b_emxInit_boolean_T(sp, &r66, 2, &ob_emlrtRTEI, true);
  emlrt_update_log_5(sp, c_y1, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[105U], b_y1);
  i = r66->size[0] * r66->size[1];
  r66->size[0] = 1;
  r66->size[1] = 1 + b_y1->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r66, i, (int32_T)sizeof(boolean_T),
                    &ob_emlrtRTEI);
  r66->data[0] = true;
  iyLead = b_y1->size[1];
  emxFree_real_T(&c_y1);
  for (i = 0; i < iyLead; i++) {
    r66->data[r66->size[0] * (i + 1)] = (b_y1->data[b_y1->size[0] * i] != 0.0);
  }

  emxFree_real_T(&b_y1);
  b_emxInit_int32_T(sp, &r67, 2, &ob_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_uX, 2, &ob_emlrtRTEI, true);
  st.site = &oe_emlrtRSI;
  eml_li_find(&st, r66, r67);
  i = b_uX->size[0] * b_uX->size[1];
  b_uX->size[0] = 1;
  b_uX->size[1] = r67->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_uX, i, (int32_T)sizeof(real_T),
                    &ob_emlrtRTEI);
  iyLead = r67->size[0] * r67->size[1];
  emxFree_boolean_T(&r66);
  for (i = 0; i < iyLead; i++) {
    m = uX->size[1];
    i7 = r67->data[i];
    b_uX->data[i] = uX->data[emlrtDynamicBoundsCheckFastR2012b(i7, 1, m,
      &ke_emlrtBCI, sp) - 1];
  }

  emxFree_int32_T(&r67);
  emlrt_update_log_5(sp, b_uX, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[104U], uX);
  emxFree_real_T(&b_uX);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (fastUnique.c) */
