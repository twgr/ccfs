/*
 * eml_sort.c
 *
 * Code generation for function 'eml_sort'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "eml_sort.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo pe_emlrtRSI = { 78, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRSInfo qe_emlrtRSI = { 69, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRSInfo re_emlrtRSI = { 66, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRSInfo se_emlrtRSI = { 62, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRSInfo te_emlrtRSI = { 50, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRSInfo xe_emlrtRSI = { 42, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo ye_emlrtRSI = { 134, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo af_emlrtRSI = { 138, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRSInfo bf_emlrtRSI = { 185, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo nb_emlrtRTEI = { 52, 1, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRTEInfo ob_emlrtRTEI = { 53, 1, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRTEInfo pb_emlrtRTEI = { 78, 13, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

static emlrtRTEInfo qb_emlrtRTEI = { 27, 5, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo rb_emlrtRTEI = { 1, 20, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo sb_emlrtRTEI = { 145, 5, "eml_sort_idx",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort_idx.m"
};

static emlrtRTEInfo rd_emlrtRTEI = { 61, 5, "eml_sort",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_sort.m"
};

/* Function Declarations */
static void eml_sort_idx(const emlrtStack *sp, const emxArray_real_T *x,
  emxArray_int32_T *idx);

/* Function Definitions */
static void eml_sort_idx(const emlrtStack *sp, const emxArray_real_T *x,
  emxArray_int32_T *idx)
{
  uint32_T unnamed_idx_0;
  int32_T k;
  boolean_T overflow;
  emxArray_int32_T *idx0;
  int32_T i;
  int32_T i2;
  int32_T j;
  int32_T pEnd;
  int32_T p;
  int32_T q;
  int32_T qEnd;
  int32_T kEnd;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  unnamed_idx_0 = (uint32_T)x->size[0];
  k = idx->size[0];
  idx->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)idx, k, (int32_T)sizeof(int32_T),
                    &qb_emlrtRTEI);
  if (x->size[0] == 0) {
    st.site = &xe_emlrtRSI;
  } else {
    st.site = &ye_emlrtRSI;
    overflow = (x->size[0] > 2147483646);
    if (overflow) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    for (k = 1; k <= x->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    st.site = &af_emlrtRSI;
    for (k = 1; k <= x->size[0] - 1; k += 2) {
      if ((x->data[k - 1] <= x->data[k]) || muDoubleScalarIsNaN(x->data[k])) {
        overflow = true;
      } else {
        overflow = false;
      }

      if (overflow) {
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    emxInit_int32_T(sp, &idx0, 1, &sb_emlrtRTEI, true);
    k = idx0->size[0];
    idx0->size[0] = x->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)idx0, k, (int32_T)sizeof(int32_T),
                      &rb_emlrtRTEI);
    i = x->size[0];
    for (k = 0; k < i; k++) {
      idx0->data[k] = 1;
    }

    i = 2;
    while (i < x->size[0]) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < x->size[0] + 1; pEnd = qEnd + i) {
        p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > x->size[0] + 1) {
          qEnd = x->size[0] + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if ((x->data[idx->data[p - 1] - 1] <= x->data[idx->data[q] - 1]) ||
              muDoubleScalarIsNaN(x->data[idx->data[q] - 1])) {
            overflow = true;
          } else {
            overflow = false;
          }

          if (overflow) {
            idx0->data[k] = idx->data[p - 1];
            p++;
            if (p == pEnd) {
              while (q + 1 < qEnd) {
                k++;
                idx0->data[k] = idx->data[q];
                q++;
              }
            }
          } else {
            idx0->data[k] = idx->data[q];
            q++;
            if (q + 1 == qEnd) {
              while (p < pEnd) {
                k++;
                idx0->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }

          k++;
        }

        st.site = &bf_emlrtRSI;
        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&idx0);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void b_eml_sort(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *
                y)
{
  int32_T dim;
  int32_T vlen;
  emxArray_real_T *vwork;
  int32_T i1;
  int32_T vstride;
  int32_T k;
  boolean_T b6;
  emxArray_int32_T *iidx;
  int32_T ix;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  dim = 2;
  if (x->size[0] != 1) {
    dim = 1;
  }

  st.site = &te_emlrtRSI;
  if (dim <= 1) {
    vlen = x->size[0];
  } else {
    vlen = 1;
  }

  b_emxInit_real_T(sp, &vwork, 1, &nb_emlrtRTEI, true);
  i1 = vwork->size[0];
  vwork->size[0] = vlen;
  emxEnsureCapacity(sp, (emxArray__common *)vwork, i1, (int32_T)sizeof(real_T),
                    &nb_emlrtRTEI);
  i1 = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, i1, (int32_T)sizeof(real_T),
                    &ob_emlrtRTEI);
  st.site = &se_emlrtRSI;
  vstride = 1;
  k = 1;
  while (k <= dim - 1) {
    vstride *= x->size[0];
    k = 2;
  }

  st.site = &re_emlrtRSI;
  i1 = 0;
  st.site = &qe_emlrtRSI;
  if (1 > vstride) {
    b6 = false;
  } else {
    b6 = (vstride > 2147483646);
  }

  if (b6) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  dim = 1;
  emxInit_int32_T(sp, &iidx, 1, &pb_emlrtRTEI, true);
  while (dim <= vstride) {
    i1++;
    ix = i1;
    for (k = 0; k < vlen; k++) {
      vwork->data[k] = x->data[ix - 1];
      ix += vstride;
    }

    st.site = &pe_emlrtRSI;
    eml_sort_idx(&st, vwork, iidx);
    ix = i1;
    for (k = 0; k < vlen; k++) {
      y->data[ix - 1] = vwork->data[iidx->data[k] - 1];
      ix += vstride;
    }

    dim++;
  }

  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void c_eml_sort(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *
                y, emxArray_int32_T *idx)
{
  int32_T dim;
  int32_T vlen;
  emxArray_real_T *vwork;
  int32_T i1;
  uint32_T unnamed_idx_0;
  int32_T vstride;
  int32_T k;
  boolean_T b19;
  emxArray_int32_T *iidx;
  int32_T ix;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  dim = 2;
  if (x->size[0] != 1) {
    dim = 1;
  }

  st.site = &te_emlrtRSI;
  if (dim <= 1) {
    vlen = x->size[0];
  } else {
    vlen = 1;
  }

  b_emxInit_real_T(sp, &vwork, 1, &nb_emlrtRTEI, true);
  i1 = vwork->size[0];
  vwork->size[0] = vlen;
  emxEnsureCapacity(sp, (emxArray__common *)vwork, i1, (int32_T)sizeof(real_T),
                    &nb_emlrtRTEI);
  i1 = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)y, i1, (int32_T)sizeof(real_T),
                    &ob_emlrtRTEI);
  unnamed_idx_0 = (uint32_T)x->size[0];
  i1 = idx->size[0];
  idx->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)idx, i1, (int32_T)sizeof(int32_T),
                    &rd_emlrtRTEI);
  st.site = &se_emlrtRSI;
  vstride = 1;
  k = 1;
  while (k <= dim - 1) {
    vstride *= x->size[0];
    k = 2;
  }

  st.site = &re_emlrtRSI;
  i1 = -1;
  st.site = &qe_emlrtRSI;
  if (1 > vstride) {
    b19 = false;
  } else {
    b19 = (vstride > 2147483646);
  }

  if (b19) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  dim = 1;
  emxInit_int32_T(sp, &iidx, 1, &pb_emlrtRTEI, true);
  while (dim <= vstride) {
    i1++;
    ix = i1 + 1;
    for (k = 0; k < vlen; k++) {
      vwork->data[k] = x->data[ix - 1];
      ix += vstride;
    }

    st.site = &pe_emlrtRSI;
    eml_sort_idx(&st, vwork, iidx);
    ix = i1;
    for (k = 0; k < vlen; k++) {
      y->data[ix] = vwork->data[iidx->data[k] - 1];
      idx->data[ix] = iidx->data[k];
      ix += vstride;
    }

    dim++;
  }

  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void eml_sort(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emxArray_real_T *vwork;
  uint32_T unnamed_idx_0;
  int32_T ix;
  int32_T k;
  emxArray_int32_T *iidx;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_emxInit_real_T(sp, &vwork, 1, &nb_emlrtRTEI, true);
  unnamed_idx_0 = (uint32_T)x->size[1];
  ix = vwork->size[0];
  vwork->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)vwork, ix, (int32_T)sizeof(real_T),
                    &nb_emlrtRTEI);
  for (ix = 0; ix < 2; ix++) {
    k = y->size[0] * y->size[1];
    y->size[ix] = x->size[ix];
    emxEnsureCapacity(sp, (emxArray__common *)y, k, (int32_T)sizeof(real_T),
                      &ob_emlrtRTEI);
  }

  ix = 0;
  for (k = 0; k < x->size[1]; k++) {
    vwork->data[k] = x->data[ix];
    ix++;
  }

  emxInit_int32_T(sp, &iidx, 1, &pb_emlrtRTEI, true);
  st.site = &pe_emlrtRSI;
  eml_sort_idx(&st, vwork, iidx);
  ix = 0;
  for (k = 0; k < x->size[1]; k++) {
    y->data[ix] = vwork->data[iidx->data[k] - 1];
    ix++;
  }

  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (eml_sort.c) */
