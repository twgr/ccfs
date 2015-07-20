/*
 * diff.c
 *
 * Code generation for function 'diff'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "diff.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo bg_emlrtRSI = { 87, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

static emlrtRTEInfo lc_emlrtRTEI = { 1, 14, "diff",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\datafun\\diff.m"
};

/* Function Definitions */
void b_diff(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  int32_T ixLead;
  int32_T iyLead;
  real_T work;
  boolean_T overflow;
  int32_T m;
  real_T tmp2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x->size[0] <= 1) {
    ixLead = y->size[0];
    y->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y, ixLead, (int32_T)sizeof(real_T),
                      &lc_emlrtRTEI);
  } else {
    ixLead = y->size[0];
    y->size[0] = x->size[0] - 1;
    emxEnsureCapacity(sp, (emxArray__common *)y, ixLead, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    ixLead = 1;
    iyLead = 0;
    work = x->data[0];
    st.site = &ef_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (m = 2; m <= x->size[0]; m++) {
      tmp2 = work;
      work = x->data[ixLead];
      tmp2 = x->data[ixLead] - tmp2;
      ixLead++;
      y->data[iyLead] = tmp2;
      iyLead++;
    }
  }
}

void diff(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  uint32_T ySize[2];
  int32_T ixStart;
  int32_T iyStart;
  boolean_T overflow;
  int32_T r;
  int32_T ixLead;
  int32_T iyLead;
  real_T work;
  int32_T m;
  real_T tmp2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (x->size[0] <= 1) {
    for (ixStart = 0; ixStart < 2; ixStart++) {
      ySize[ixStart] = (uint32_T)x->size[ixStart];
    }

    ixStart = y->size[0] * y->size[1];
    y->size[0] = 0;
    emxEnsureCapacity(sp, (emxArray__common *)y, ixStart, (int32_T)sizeof(real_T),
                      &lc_emlrtRTEI);
    ixStart = y->size[0] * y->size[1];
    y->size[1] = (int32_T)ySize[1];
    emxEnsureCapacity(sp, (emxArray__common *)y, ixStart, (int32_T)sizeof(real_T),
                      &lc_emlrtRTEI);
  } else {
    for (ixStart = 0; ixStart < 2; ixStart++) {
      ySize[ixStart] = (uint32_T)x->size[ixStart];
    }

    ixStart = y->size[0] * y->size[1];
    y->size[0] = x->size[0] - 1;
    y->size[1] = (int32_T)ySize[1];
    emxEnsureCapacity(sp, (emxArray__common *)y, ixStart, (int32_T)sizeof(real_T),
                      &pb_emlrtRTEI);
    if (!((int32_T)ySize[1] == 0)) {
      ixStart = 1;
      iyStart = 0;
      st.site = &bg_emlrtRSI;
      if (1 > x->size[1]) {
        overflow = false;
      } else {
        overflow = (x->size[1] > 2147483646);
      }

      if (overflow) {
        b_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }

      for (r = 1; r <= x->size[1]; r++) {
        ixLead = ixStart;
        iyLead = iyStart;
        work = x->data[ixStart - 1];
        st.site = &ef_emlrtRSI;
        overflow = (x->size[0] > 2147483646);
        if (overflow) {
          b_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (m = 2; m <= x->size[0]; m++) {
          tmp2 = work;
          work = x->data[ixLead];
          tmp2 = x->data[ixLead] - tmp2;
          ixLead++;
          y->data[iyLead] = tmp2;
          iyLead++;
        }

        ixStart += x->size[0];
        iyStart = (iyStart + x->size[0]) - 1;
      }
    }
  }
}

/* End of code generation (diff.c) */
