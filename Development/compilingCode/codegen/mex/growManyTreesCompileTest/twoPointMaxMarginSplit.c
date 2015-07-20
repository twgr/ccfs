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
static emlrtRSInfo th_emlrtRSI = { 3, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo uh_emlrtRSI = { 8, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo vh_emlrtRSI = { 9, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo wh_emlrtRSI = { 11, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo xh_emlrtRSI = { 25, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo yh_emlrtRSI = { 27, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo ai_emlrtRSI = { 28, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRSInfo bi_emlrtRSI = { 29, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRTEInfo bd_emlrtRTEI = { 1, 28, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRTEInfo cd_emlrtRTEI = { 3, 1, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRTEInfo dd_emlrtRTEI = { 5, 5, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtRTEInfo ed_emlrtRTEI = { 6, 5, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtBCInfo if_emlrtBCI = { -1, -1, 3, 36, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m", 0 };

static emlrtECInfo mb_emlrtECI = { 2, 11, 8, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtBCInfo jf_emlrtBCI = { -1, -1, 26, 22, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m", 0 };

static emlrtECInfo nb_emlrtECI = { 2, 26, 8, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 27, 30, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m", 0 };

static emlrtECInfo ob_emlrtECI = { 2, 27, 12, "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m" };

static emlrtBCInfo lf_emlrtBCI = { -1, -1, 8, 15, "Y", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m", 0 };

static emlrtBCInfo mf_emlrtBCI = { -1, -1, 9, 16, "Y", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m", 0 };

static emlrtBCInfo nf_emlrtBCI = { -1, -1, 26, 10, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m", 0 };

static emlrtBCInfo of_emlrtBCI = { -1, -1, 27, 14, "X", "twoPointMaxMarginSplit",
  "C:\\Users\\Tom\\Documents\\Git\\CCF\\twoPointMaxMarginSplit.m", 0 };

/* Function Declarations */
static void b_emlrt_update_log_33(const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613]);
static void b_emlrt_update_log_36(const boolean_T in_data[],
  emlrtLocationLoggingDataType table[613]);
static void emlrt_update_log_33(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out);
static void emlrt_update_log_36(const boolean_T in_data[],
  emlrtLocationLoggingDataType table[613], boolean_T out_data[], int32_T
  out_size[1]);

/* Function Definitions */
static void b_emlrt_update_log_33(const emxArray_real_T *in,
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

static void b_emlrt_update_log_36(const boolean_T in_data[],
  emlrtLocationLoggingDataType table[613])
{
  boolean_T localMin;
  boolean_T localMax;
  localMin = (table[0U].SimMin > 0.0);
  localMax = (table[0U].SimMax > 0.0);

  /* Simulation Min-Max logging. */
  if ((int32_T)in_data[0] < (int32_T)localMin) {
    localMin = in_data[0];
  }

  if ((int32_T)in_data[0] > (int32_T)localMax) {
    localMax = in_data[0];
  }

  table[0U].SimMin = localMin;
  table[0U].SimMax = localMax;

  /* IsAlwaysInteger logging. */
  /* Data type is always integer. */
}

static void emlrt_update_log_33(const emlrtStack *sp, const emxArray_real_T *in,
  emlrtLocationLoggingDataType table[613], emxArray_real_T *out)
{
  int32_T i58;
  int32_T loop_ub;
  i58 = out->size[0] * out->size[1];
  out->size[0] = in->size[0];
  out->size[1] = in->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)out, i58, (int32_T)sizeof(real_T),
                    (emlrtRTEInfo *)NULL);
  loop_ub = in->size[0] * in->size[1];
  for (i58 = 0; i58 < loop_ub; i58++) {
    out->data[i58] = in->data[i58];
  }

  b_emlrt_update_log_33(out, table);
}

static void emlrt_update_log_36(const boolean_T in_data[],
  emlrtLocationLoggingDataType table[613], boolean_T out_data[], int32_T
  out_size[1])
{
  out_size[0] = 1;
  out_data[0] = in_data[0];
  b_emlrt_update_log_36(out_data, table);
}

void b_eml_li_find(const emlrtStack *sp, const emxArray_boolean_T *x,
                   emxArray_int32_T *y)
{
  int32_T k;
  boolean_T overflow;
  int32_T i;
  const mxArray *b_y;
  const mxArray *m19;
  int32_T j;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ff_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  k = 0;
  b_st.site = &hf_emlrtRSI;
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
    m19 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&b_y, m19);
    st.site = &pp_emlrtRSI;
    f_error(&st, b_y, &q_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &s_emlrtDCI, sp);
  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity(sp, (emxArray__common *)y, j, (int32_T)sizeof(int32_T),
                    &fd_emlrtRTEI);
  j = 0;
  st.site = &gf_emlrtRSI;
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
  emxArray_real_T *c_X;
  emxArray_boolean_T *b_Y;
  int32_T i22;
  int32_T loop_ub;
  emxArray_real_T *r84;
  emxArray_real_T *r85;
  emxArray_real_T *r86;
  emxArray_real_T *r87;
  emxArray_boolean_T *r88;
  emxArray_boolean_T *bType1;
  emxArray_boolean_T *b_bType1;
  emxArray_boolean_T *YLeft;
  emxArray_boolean_T *YRight;
  emxArray_boolean_T *c_Y;
  emxArray_int32_T *r89;
  emxArray_boolean_T *d_Y;
  int32_T b_loop_ub;
  int32_T k;
  int32_T i23;
  int32_T idx;
  emxArray_boolean_T *c_bType1;
  emxArray_boolean_T *e_Y;
  emxArray_real_T *a;
  emxArray_real_T *b_a;
  emxArray_real_T *r90;
  emxArray_real_T *c_a;
  emxArray_real_T *r91;
  int32_T iv74[2];
  int32_T d_X[2];
  boolean_T tmp_data[10000];
  int32_T tmp_size[2];
  emxArray_boolean_T b_tmp_data;
  emxArray_real_T r92;
  int32_T iv75[2];
  static int32_T iv76[2] = { 0, 0 };

  const mxArray *y;
  const mxArray *m17;
  int32_T ii_data[1];
  boolean_T overflow;
  boolean_T exitg1;
  const mxArray *b_y;
  int32_T b_ii_data[1];
  real_T c_ii_data[1];
  int32_T ii_size[1];
  real_T iType2_data[1];
  emxArray_real_T *e_X;
  emxArray_real_T *f_X;
  int32_T g_X[2];
  emxArray_real_T *h_X;
  emxArray_real_T *d_a;
  emxArray_real_T *e_a;
  emxArray_real_T *f_a;
  emxArray_real_T *b;
  const mxArray *c_y;
  static const int32_T iv77[2] = { 1, 45 };

  char_T cv57[45];
  static const char_T cv58[45] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'm', 't', 'i', 'm', 'e', 's', '_', 'n', 'o', 'D',
    'y', 'n', 'a', 'm', 'i', 'c', 'S', 'c', 'a', 'l', 'a', 'r', 'E', 'x', 'p',
    'a', 'n', 's', 'i', 'o', 'n' };

  const mxArray *d_y;
  static const int32_T iv78[2] = { 1, 21 };

  char_T cv59[21];
  static const char_T cv60[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'i', 'n', 'n', 'e', 'r', 'd', 'i', 'm' };

  emxArray_real_T *e_y;
  int8_T unnamed_idx_0;
  int8_T unnamed_idx_1;
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
  int32_T b_tmp_size[2];
  real_T c_tmp_data[1];
  emxArray_real_T *b_b;
  const mxArray *f_y;
  static const int32_T iv79[2] = { 1, 45 };

  const mxArray *g_y;
  static const int32_T iv80[2] = { 1, 21 };

  real_T y_data[1];
  real_T b_y_data[1];
  real_T d_tmp_data[1];
  int32_T c_tmp_size[1];
  boolean_T e_tmp_data[1];
  boolean_T f_tmp_data[1];
  emxArray_boolean_T g_tmp_data;
  boolean_T guard1 = false;
  boolean_T h_tmp_data[1];
  emxArray_boolean_T i_tmp_data;
  const mxArray *h_y;
  static const int32_T iv81[2] = { 1, 39 };

  char_T cv61[39];
  static const char_T cv62[39] = { 'S', 'u', 'g', 'g', 'e', 's', 't', 'e', 'd',
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
  b_emxInit_real_T(sp, &b_X, 2, &bd_emlrtRTEI, true);
  b_emxInit_real_T(sp, &c_X, 2, &bd_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &b_Y, 2, &bd_emlrtRTEI, true);

  /* logging input variable 'X' for function 'twoPointMaxMarginSplit' */
  emlrt_update_log_2(sp, X, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[163U], c_X);

  /* logging input variable 'Y' for function 'twoPointMaxMarginSplit' */
  emlrt_update_log_3(sp, Y, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[164U], b_Y);

  /* logging input variable 'tol' for function 'twoPointMaxMarginSplit' */
  emlrt_update_log_1(tol, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[165U]);

  /*  This should only be done if X has exactly 2 unique rows */
  i22 = X->size[0];
  emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &if_emlrtBCI, sp);
  loop_ub = X->size[1];
  i22 = b_X->size[0] * b_X->size[1];
  b_X->size[0] = 1;
  b_X->size[1] = loop_ub;
  emxEnsureCapacity(sp, (emxArray__common *)b_X, i22, (int32_T)sizeof(real_T),
                    &bd_emlrtRTEI);
  emxFree_boolean_T(&b_Y);
  emxFree_real_T(&c_X);
  for (i22 = 0; i22 < loop_ub; i22++) {
    b_X->data[b_X->size[0] * i22] = X->data[X->size[0] * i22];
  }

  b_emxInit_real_T(sp, &r84, 2, &bd_emlrtRTEI, true);
  b_emxInit_real_T(sp, &r85, 2, &bd_emlrtRTEI, true);
  st.site = &th_emlrtRSI;
  d_bsxfun(&st, X, b_X, r84);
  i22 = r85->size[0] * r85->size[1];
  r85->size[0] = r84->size[0];
  r85->size[1] = r84->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r85, i22, (int32_T)sizeof(real_T),
                    &bd_emlrtRTEI);
  loop_ub = r84->size[0] * r84->size[1];
  emxFree_real_T(&b_X);
  for (i22 = 0; i22 < loop_ub; i22++) {
    r85->data[i22] = r84->data[i22];
  }

  b_emxInit_real_T(sp, &r86, 2, &bd_emlrtRTEI, true);
  emlrt_update_log_2(sp, r85, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[168U], r84);
  i22 = r86->size[0] * r86->size[1];
  r86->size[0] = r84->size[0];
  r86->size[1] = r84->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r86, i22, (int32_T)sizeof(real_T),
                    &bd_emlrtRTEI);
  loop_ub = r84->size[0] * r84->size[1];
  emxFree_real_T(&r85);
  for (i22 = 0; i22 < loop_ub; i22++) {
    r86->data[i22] = r84->data[i22];
  }

  b_emxInit_real_T(sp, &r87, 2, &bd_emlrtRTEI, true);
  c_abs(sp, r86, r84);
  i22 = r87->size[0] * r87->size[1];
  r87->size[0] = r84->size[0];
  r87->size[1] = r84->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r87, i22, (int32_T)sizeof(real_T),
                    &bd_emlrtRTEI);
  loop_ub = r84->size[0] * r84->size[1];
  emxFree_real_T(&r86);
  for (i22 = 0; i22 < loop_ub; i22++) {
    r87->data[i22] = r84->data[i22];
  }

  b_emxInit_boolean_T(sp, &r88, 2, &bd_emlrtRTEI, true);
  emlrt_update_log_2(sp, r87, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[167U], r84);
  i22 = r88->size[0] * r88->size[1];
  r88->size[0] = r84->size[0];
  r88->size[1] = r84->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r88, i22, (int32_T)sizeof(boolean_T),
                    &bd_emlrtRTEI);
  loop_ub = r84->size[0] * r84->size[1];
  emxFree_real_T(&r87);
  for (i22 = 0; i22 < loop_ub; i22++) {
    r88->data[i22] = (r84->data[i22] < tol);
  }

  emxInit_boolean_T(sp, &bType1, 1, &cd_emlrtRTEI, true);
  emxInit_boolean_T(sp, &b_bType1, 1, &bd_emlrtRTEI, true);
  st.site = &th_emlrtRSI;
  b_all(&st, r88, bType1);
  i22 = b_bType1->size[0];
  b_bType1->size[0] = bType1->size[0];
  emxEnsureCapacity(sp, (emxArray__common *)b_bType1, i22, (int32_T)sizeof
                    (boolean_T), &bd_emlrtRTEI);
  loop_ub = bType1->size[0];
  emxFree_boolean_T(&r88);
  for (i22 = 0; i22 < loop_ub; i22++) {
    b_bType1->data[i22] = bType1->data[i22];
  }

  emlrt_update_log_19(sp, b_bType1, *(emlrtLocationLoggingDataType (*)[613])&
                      emlrtLocationLoggingDataTables[166U], bType1);
  emxFree_boolean_T(&b_bType1);
  b_emxInit_boolean_T(sp, &YLeft, 2, &dd_emlrtRTEI, true);
  b_emxInit_boolean_T(sp, &YRight, 2, &ed_emlrtRTEI, true);
  if (Y->size[1] == 1) {
    b_emxInit_boolean_T(sp, &c_Y, 2, &bd_emlrtRTEI, true);
    emlrt_update_log_3(sp, Y, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[169U], YLeft);
    i22 = c_Y->size[0] * c_Y->size[1];
    c_Y->size[0] = Y->size[0];
    c_Y->size[1] = Y->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)c_Y, i22, (int32_T)sizeof
                      (boolean_T), &bd_emlrtRTEI);
    loop_ub = Y->size[0] * Y->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      c_Y->data[i22] = !Y->data[i22];
    }

    emlrt_update_log_3(sp, c_Y, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[170U], YRight);
    emxFree_boolean_T(&c_Y);
  } else {
    emxInit_int32_T(sp, &r89, 1, &bd_emlrtRTEI, true);
    b_emxInit_boolean_T(sp, &d_Y, 2, &bd_emlrtRTEI, true);
    st.site = &uh_emlrtRSI;
    b_eml_li_find(&st, bType1, r89);
    loop_ub = Y->size[1];
    i22 = d_Y->size[0] * d_Y->size[1];
    d_Y->size[0] = r89->size[0];
    d_Y->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)d_Y, i22, (int32_T)sizeof
                      (boolean_T), &bd_emlrtRTEI);
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_loop_ub = r89->size[0];
      for (k = 0; k < b_loop_ub; k++) {
        i23 = Y->size[0];
        idx = r89->data[k];
        d_Y->data[k + d_Y->size[0] * i22] = Y->data
          [(emlrtDynamicBoundsCheckFastR2012b(idx, 1, i23, &lf_emlrtBCI, sp) +
            Y->size[0] * i22) - 1];
      }
    }

    emxInit_boolean_T(sp, &c_bType1, 1, &bd_emlrtRTEI, true);
    emlrt_update_log_3(sp, d_Y, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[171U], YLeft);
    i22 = c_bType1->size[0];
    c_bType1->size[0] = bType1->size[0];
    emxEnsureCapacity(sp, (emxArray__common *)c_bType1, i22, (int32_T)sizeof
                      (boolean_T), &bd_emlrtRTEI);
    loop_ub = bType1->size[0];
    emxFree_boolean_T(&d_Y);
    for (i22 = 0; i22 < loop_ub; i22++) {
      c_bType1->data[i22] = !bType1->data[i22];
    }

    b_emxInit_boolean_T(sp, &e_Y, 2, &bd_emlrtRTEI, true);
    st.site = &vh_emlrtRSI;
    b_eml_li_find(&st, c_bType1, r89);
    loop_ub = Y->size[1];
    i22 = e_Y->size[0] * e_Y->size[1];
    e_Y->size[0] = r89->size[0];
    e_Y->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)e_Y, i22, (int32_T)sizeof
                      (boolean_T), &bd_emlrtRTEI);
    emxFree_boolean_T(&c_bType1);
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_loop_ub = r89->size[0];
      for (k = 0; k < b_loop_ub; k++) {
        i23 = Y->size[0];
        idx = r89->data[k];
        e_Y->data[k + e_Y->size[0] * i22] = Y->data
          [(emlrtDynamicBoundsCheckFastR2012b(idx, 1, i23, &mf_emlrtBCI, sp) +
            Y->size[0] * i22) - 1];
      }
    }

    emxFree_int32_T(&r89);
    emlrt_update_log_3(sp, e_Y, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[172U], YRight);
    emxFree_boolean_T(&e_Y);
  }

  b_emxInit_real_T(sp, &a, 2, &bd_emlrtRTEI, true);
  b_emxInit_real_T(sp, &b_a, 2, &bd_emlrtRTEI, true);
  st.site = &wh_emlrtRSI;
  b_sum(&st, YLeft, a);
  i22 = b_a->size[0] * b_a->size[1];
  b_a->size[0] = 1;
  b_a->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)b_a, i22, (int32_T)sizeof(real_T),
                    &bd_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  emxFree_boolean_T(&YLeft);
  for (i22 = 0; i22 < loop_ub; i22++) {
    b_a->data[i22] = a->data[i22];
  }

  b_emxInit_real_T(sp, &r90, 2, &bd_emlrtRTEI, true);
  emlrt_update_log_5(sp, b_a, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[174U], a);
  i22 = r90->size[0] * r90->size[1];
  r90->size[0] = 1;
  r90->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r90, i22, (int32_T)sizeof(real_T),
                    &bd_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  emxFree_real_T(&b_a);
  for (i22 = 0; i22 < loop_ub; i22++) {
    r90->data[i22] = a->data[i22];
  }

  b_emxInit_real_T(sp, &c_a, 2, &bd_emlrtRTEI, true);
  st.site = &wh_emlrtRSI;
  b_sum(&st, YRight, a);
  i22 = c_a->size[0] * c_a->size[1];
  c_a->size[0] = 1;
  c_a->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c_a, i22, (int32_T)sizeof(real_T),
                    &bd_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  emxFree_boolean_T(&YRight);
  for (i22 = 0; i22 < loop_ub; i22++) {
    c_a->data[i22] = a->data[i22];
  }

  b_emxInit_real_T(sp, &r91, 2, &bd_emlrtRTEI, true);
  emlrt_update_log_5(sp, c_a, *(emlrtLocationLoggingDataType (*)[613])&
                     emlrtLocationLoggingDataTables[175U], a);
  i22 = r91->size[0] * r91->size[1];
  r91->size[0] = 1;
  r91->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)r91, i22, (int32_T)sizeof(real_T),
                    &bd_emlrtRTEI);
  loop_ub = a->size[0] * a->size[1];
  emxFree_real_T(&c_a);
  for (i22 = 0; i22 < loop_ub; i22++) {
    r91->data[i22] = a->data[i22];
  }

  for (i22 = 0; i22 < 2; i22++) {
    iv74[i22] = r90->size[i22];
  }

  for (i22 = 0; i22 < 2; i22++) {
    d_X[i22] = r91->size[i22];
  }

  emlrtSizeEqCheck2DFastR2012b(iv74, d_X, &mb_emlrtECI, sp);
  tmp_size[0] = 1;
  tmp_size[1] = r90->size[1];
  loop_ub = r90->size[0] * r90->size[1];
  for (i22 = 0; i22 < loop_ub; i22++) {
    tmp_data[i22] = (r90->data[i22] == r91->data[i22]);
  }

  emxFree_real_T(&r91);
  emxFree_real_T(&r90);
  b_tmp_data.data = (boolean_T *)&tmp_data;
  b_tmp_data.size = (int32_T *)&tmp_size;
  b_tmp_data.allocatedSize = 10000;
  b_tmp_data.numDimensions = 2;
  b_tmp_data.canFreeData = false;
  st.site = &wh_emlrtRSI;
  if (emlrt_update_log_31(all(&st, &b_tmp_data), *(emlrtLocationLoggingDataType
        (*)[613])&emlrtLocationLoggingDataTables[173U])) {
    /*  Here the two unique points have identical sets of class */
    /*  labels and so we can't split */
    *bSp = emlrt_update_log_31(false, *(emlrtLocationLoggingDataType (*)[613])&
      emlrtLocationLoggingDataTables[176U]);
    r92.numDimensions = 2;
    iv75[0] = 0;
    iv75[1] = 0;
    r92.size = (int32_T *)&iv75;
    r92.allocatedSize = 0;
    r92.data = NULL;
    emlrt_update_log_33(sp, &r92, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[177U], rmm);
    emlrt_update_log_34(NULL, iv76, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[178U], cmm_data, cmm_size);
  } else {
    *bSp = emlrt_update_log_31(true, *(emlrtLocationLoggingDataType (*)[613])&
      emlrtLocationLoggingDataTables[179U]);

    /*  Otherwise the optimal spliting plane is the plane perpendicular */
    /*  to the vector between the two points (rmm) and the maximal */
    /*  marginal split point (cmm) is halway between the two points on */
    /*  this line. */
    st.site = &xh_emlrtRSI;
    i22 = bType1->size[0];
    emxEnsureCapacity(&st, (emxArray__common *)bType1, i22, (int32_T)sizeof
                      (boolean_T), &bd_emlrtRTEI);
    loop_ub = bType1->size[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      bType1->data[i22] = !bType1->data[i22];
    }

    b_st.site = &w_emlrtRSI;
    k = muIntScalarMin_sint32(1, bType1->size[0]);
    if (k <= bType1->size[0]) {
    } else {
      y = NULL;
      m17 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&y, m17);
      c_st.site = &cq_emlrtRSI;
      f_error(&c_st, y, &i_emlrtMCI);
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

    b_loop_ub = 1;
    exitg1 = false;
    while ((!exitg1) && (b_loop_ub <= bType1->size[0])) {
      if (bType1->data[b_loop_ub - 1]) {
        idx = 1;
        ii_data[0] = b_loop_ub;
        exitg1 = true;
      } else {
        b_loop_ub++;
      }
    }

    if (idx <= k) {
    } else {
      b_y = NULL;
      m17 = emlrtCreateString("Assertion failed.");
      emlrtAssign(&b_y, m17);
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

      i22 = 0;
      while (i22 <= loop_ub) {
        b_ii_data[0] = ii_data[0];
        i22 = 1;
      }

      k = loop_ub + 1;
      loop_ub++;
      i22 = 0;
      while (i22 <= loop_ub - 1) {
        ii_data[0] = b_ii_data[0];
        i22 = 1;
      }
    }

    ii_size[0] = k;
    for (i22 = 0; i22 < k; i22++) {
      c_ii_data[i22] = ii_data[i22];
    }

    emlrt_update_log_32(c_ii_data, ii_size, *(emlrtLocationLoggingDataType (*)
      [613])&emlrtLocationLoggingDataTables[180U], iType2_data, ii_data);
    loop_ub = ii_data[0];
    for (i22 = 0; i22 < loop_ub; i22++) {
      k = X->size[0];
      i23 = (int32_T)iType2_data[i22];
      emlrtDynamicBoundsCheckFastR2012b(i23, 1, k, &nf_emlrtBCI, sp);
    }

    b_emxInit_real_T(sp, &e_X, 2, &bd_emlrtRTEI, true);
    i22 = X->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &jf_emlrtBCI, sp);
    loop_ub = X->size[1];
    i22 = e_X->size[0] * e_X->size[1];
    e_X->size[0] = ii_data[0];
    e_X->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)e_X, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_loop_ub = ii_data[0];
      for (k = 0; k < b_loop_ub; k++) {
        e_X->data[k + e_X->size[0] * i22] = X->data[((int32_T)iType2_data[k] +
          X->size[0] * i22) - 1];
      }
    }

    for (i22 = 0; i22 < 2; i22++) {
      d_X[i22] = e_X->size[i22];
    }

    emxFree_real_T(&e_X);
    b_emxInit_real_T(sp, &f_X, 2, &bd_emlrtRTEI, true);
    loop_ub = X->size[1];
    i22 = f_X->size[0] * f_X->size[1];
    f_X->size[0] = 1;
    f_X->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)f_X, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    for (i22 = 0; i22 < loop_ub; i22++) {
      f_X->data[f_X->size[0] * i22] = X->data[X->size[0] * i22];
    }

    for (i22 = 0; i22 < 2; i22++) {
      g_X[i22] = f_X->size[i22];
    }

    emxFree_real_T(&f_X);
    b_emxInit_real_T(sp, &h_X, 2, &bd_emlrtRTEI, true);
    emlrtSizeEqCheck2DFastR2012b(d_X, g_X, &nb_emlrtECI, sp);
    loop_ub = X->size[1];
    i22 = h_X->size[0] * h_X->size[1];
    h_X->size[0] = ii_data[0];
    h_X->size[1] = loop_ub;
    emxEnsureCapacity(sp, (emxArray__common *)h_X, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_loop_ub = ii_data[0];
      for (k = 0; k < b_loop_ub; k++) {
        h_X->data[k + h_X->size[0] * i22] = X->data[((int32_T)iType2_data[k] +
          X->size[0] * i22) - 1] - X->data[X->size[0] * i22];
      }
    }

    b_emxInit_real_T(sp, &d_a, 2, &bd_emlrtRTEI, true);
    emxInit_real_T(sp, &e_a, 1, &bd_emlrtRTEI, true);
    emlrt_update_log_5(sp, h_X, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[182U], a);
    loop_ub = X->size[1];
    i22 = e_a->size[0];
    e_a->size[0] = a->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)e_a, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    b_loop_ub = a->size[1];
    emxFree_real_T(&h_X);
    for (i22 = 0; i22 < b_loop_ub; i22++) {
      e_a->data[i22] = a->data[a->size[0] * i22];
    }

    i22 = d_a->size[0] * d_a->size[1];
    d_a->size[0] = loop_ub;
    d_a->size[1] = 1;
    emxEnsureCapacity(sp, (emxArray__common *)d_a, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    i22 = 0;
    while (i22 <= 0) {
      for (i22 = 0; i22 < loop_ub; i22++) {
        d_a->data[i22] = e_a->data[i22];
      }

      i22 = 1;
    }

    emxFree_real_T(&e_a);
    b_emxInit_real_T(sp, &f_a, 2, &bd_emlrtRTEI, true);
    emlrt_update_log_33(sp, d_a, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[181U], rmm);
    st.site = &yh_emlrtRSI;
    loop_ub = X->size[1];
    i22 = f_a->size[0] * f_a->size[1];
    f_a->size[0] = ii_data[0];
    f_a->size[1] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)f_a, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    emxFree_real_T(&d_a);
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_loop_ub = ii_data[0];
      for (k = 0; k < b_loop_ub; k++) {
        i23 = X->size[0];
        idx = (int32_T)iType2_data[k];
        f_a->data[k + f_a->size[0] * i22] = X->data
          [(emlrtDynamicBoundsCheckFastR2012b(idx, 1, i23, &of_emlrtBCI, &st) +
            X->size[0] * i22) - 1];
      }
    }

    b_emxInit_real_T(&st, &b, 2, &bd_emlrtRTEI, true);
    i22 = b->size[0] * b->size[1];
    b->size[0] = rmm->size[0];
    b->size[1] = rmm->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    loop_ub = rmm->size[0] * rmm->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      b->data[i22] = rmm->data[i22];
    }

    b_st.site = &di_emlrtRSI;
    if (!(f_a->size[1] == rmm->size[0])) {
      if (((f_a->size[0] == 1) && (f_a->size[1] == 1)) || ((rmm->size[0] == 1) &&
           (rmm->size[1] == 1))) {
        c_y = NULL;
        m17 = emlrtCreateCharArray(2, iv77);
        for (idx = 0; idx < 45; idx++) {
          cv57[idx] = cv58[idx];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m17, cv57);
        emlrtAssign(&c_y, m17);
        c_st.site = &yp_emlrtRSI;
        e_st.site = &wq_emlrtRSI;
        f_error(&c_st, b_message(&e_st, c_y, &jb_emlrtMCI), &kb_emlrtMCI);
      } else {
        d_y = NULL;
        m17 = emlrtCreateCharArray(2, iv78);
        for (idx = 0; idx < 21; idx++) {
          cv59[idx] = cv60[idx];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m17, cv59);
        emlrtAssign(&d_y, m17);
        c_st.site = &aq_emlrtRSI;
        e_st.site = &xq_emlrtRSI;
        f_error(&c_st, b_message(&e_st, d_y, &lb_emlrtMCI), &mb_emlrtMCI);
      }
    }

    b_emxInit_real_T(&st, &e_y, 2, &bd_emlrtRTEI, true);
    if ((f_a->size[1] == 1) || (rmm->size[0] == 1)) {
      i22 = e_y->size[0] * e_y->size[1];
      e_y->size[0] = f_a->size[0];
      e_y->size[1] = rmm->size[1];
      emxEnsureCapacity(&st, (emxArray__common *)e_y, i22, (int32_T)sizeof
                        (real_T), &bd_emlrtRTEI);
      loop_ub = f_a->size[0];
      for (i22 = 0; i22 < loop_ub; i22++) {
        b_loop_ub = rmm->size[1];
        for (k = 0; k < b_loop_ub; k++) {
          e_y->data[i22 + e_y->size[0] * k] = 0.0;
          idx = f_a->size[1];
          for (i23 = 0; i23 < idx; i23++) {
            e_y->data[i22 + e_y->size[0] * k] += f_a->data[i22 + f_a->size[0] *
              i23] * rmm->data[i23 + rmm->size[0] * k];
          }
        }
      }
    } else {
      unnamed_idx_0 = (int8_T)f_a->size[0];
      unnamed_idx_1 = (int8_T)rmm->size[1];
      i22 = r84->size[0] * r84->size[1];
      r84->size[0] = unnamed_idx_0;
      emxEnsureCapacity(&st, (emxArray__common *)r84, i22, (int32_T)sizeof
                        (real_T), &bd_emlrtRTEI);
      i22 = r84->size[0] * r84->size[1];
      r84->size[1] = unnamed_idx_1;
      emxEnsureCapacity(&st, (emxArray__common *)r84, i22, (int32_T)sizeof
                        (real_T), &bd_emlrtRTEI);
      loop_ub = unnamed_idx_0 * unnamed_idx_1;
      for (i22 = 0; i22 < loop_ub; i22++) {
        r84->data[i22] = 0.0;
      }

      b_st.site = &ci_emlrtRSI;
      c_st.site = &ei_emlrtRSI;
      i22 = e_y->size[0] * e_y->size[1];
      e_y->size[0] = unnamed_idx_0;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i22, (int32_T)sizeof
                        (real_T), &bd_emlrtRTEI);
      i22 = e_y->size[0] * e_y->size[1];
      e_y->size[1] = unnamed_idx_1;
      emxEnsureCapacity(&c_st, (emxArray__common *)e_y, i22, (int32_T)sizeof
                        (real_T), &bd_emlrtRTEI);
      loop_ub = unnamed_idx_0 * unnamed_idx_1;
      for (i22 = 0; i22 < loop_ub; i22++) {
        e_y->data[i22] = 0.0;
      }

      if ((f_a->size[0] < 1) || (rmm->size[1] < 1) || (f_a->size[1] < 1)) {
      } else {
        d_st.site = &fi_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(1);
        n_t = (ptrdiff_t)(rmm->size[1]);
        k_t = (ptrdiff_t)(f_a->size[1]);
        lda_t = (ptrdiff_t)(1);
        ldb_t = (ptrdiff_t)(f_a->size[1]);
        ldc_t = (ptrdiff_t)(1);
        alpha1_t = (double *)(&alpha1);
        Aia0_t = (double *)(&f_a->data[0]);
        i22 = rmm->size[0] * rmm->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &hc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&b->data[0]);
        beta1_t = (double *)(&beta1);
        i22 = r84->size[0] * r84->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &hc_emlrtBCI, &d_st);
        Cic0_t = (double *)(&e_y->data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    emxFree_real_T(&b);
    emxFree_real_T(&f_a);
    emlrt_update_log_2(sp, e_y, *(emlrtLocationLoggingDataType (*)[613])&
                       emlrtLocationLoggingDataTables[186U], r84);
    b_tmp_size[0] = r84->size[0];
    b_tmp_size[1] = r84->size[1];
    loop_ub = r84->size[0] * r84->size[1];
    emxFree_real_T(&e_y);
    for (i22 = 0; i22 < loop_ub; i22++) {
      c_tmp_data[i22] = r84->data[i22];
    }

    i22 = X->size[0];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &kf_emlrtBCI, sp);
    st.site = &yh_emlrtRSI;
    loop_ub = X->size[1];
    i22 = a->size[0] * a->size[1];
    a->size[0] = 1;
    a->size[1] = loop_ub;
    emxEnsureCapacity(&st, (emxArray__common *)a, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    for (i22 = 0; i22 < loop_ub; i22++) {
      a->data[a->size[0] * i22] = X->data[X->size[0] * i22];
    }

    b_emxInit_real_T(&st, &b_b, 2, &bd_emlrtRTEI, true);
    i22 = b_b->size[0] * b_b->size[1];
    b_b->size[0] = rmm->size[0];
    b_b->size[1] = rmm->size[1];
    emxEnsureCapacity(&st, (emxArray__common *)b_b, i22, (int32_T)sizeof(real_T),
                      &bd_emlrtRTEI);
    loop_ub = rmm->size[0] * rmm->size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      b_b->data[i22] = rmm->data[i22];
    }

    b_st.site = &di_emlrtRSI;
    i22 = X->size[1];
    if (!(i22 == rmm->size[0])) {
      i22 = X->size[1];
      if ((i22 == 1) || (rmm->size[0] == 1)) {
        f_y = NULL;
        m17 = emlrtCreateCharArray(2, iv79);
        for (idx = 0; idx < 45; idx++) {
          cv57[idx] = cv58[idx];
        }

        emlrtInitCharArrayR2013a(&b_st, 45, m17, cv57);
        emlrtAssign(&f_y, m17);
        c_st.site = &yp_emlrtRSI;
        e_st.site = &wq_emlrtRSI;
        f_error(&c_st, b_message(&e_st, f_y, &jb_emlrtMCI), &kb_emlrtMCI);
      } else {
        g_y = NULL;
        m17 = emlrtCreateCharArray(2, iv80);
        for (idx = 0; idx < 21; idx++) {
          cv59[idx] = cv60[idx];
        }

        emlrtInitCharArrayR2013a(&b_st, 21, m17, cv59);
        emlrtAssign(&g_y, m17);
        c_st.site = &aq_emlrtRSI;
        e_st.site = &xq_emlrtRSI;
        f_error(&c_st, b_message(&e_st, g_y, &lb_emlrtMCI), &mb_emlrtMCI);
      }
    }

    i22 = X->size[1];
    if ((i22 == 1) || (rmm->size[0] == 1)) {
      loop_ub = rmm->size[1];
      for (i22 = 0; i22 < loop_ub; i22++) {
        y_data[i22] = 0.0;
        b_loop_ub = a->size[1];
        for (k = 0; k < b_loop_ub; k++) {
          y_data[i22] += a->data[a->size[0] * k] * rmm->data[k + rmm->size[0] *
            i22];
        }
      }
    } else {
      b_st.site = &ci_emlrtRSI;
      c_st.site = &ei_emlrtRSI;
      y_data[0] = 0.0;
      i22 = X->size[1];
      if (i22 < 1) {
      } else {
        d_st.site = &fi_emlrtRSI;
        alpha1 = 1.0;
        beta1 = 0.0;
        TRANSB = 'N';
        TRANSA = 'N';
        m_t = (ptrdiff_t)(1);
        n_t = (ptrdiff_t)(1);
        i22 = X->size[1];
        k_t = (ptrdiff_t)(i22);
        lda_t = (ptrdiff_t)(1);
        i22 = X->size[1];
        ldb_t = (ptrdiff_t)(i22);
        ldc_t = (ptrdiff_t)(1);
        alpha1_t = (double *)(&alpha1);
        i22 = X->size[1];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &hc_emlrtBCI, &d_st);
        Aia0_t = (double *)(&a->data[0]);
        i22 = rmm->size[0];
        emlrtDynamicBoundsCheckFastR2012b(1, 1, i22, &hc_emlrtBCI, &d_st);
        Bib0_t = (double *)(&b_b->data[0]);
        beta1_t = (double *)(&beta1);
        Cic0_t = (double *)(&y_data[0]);
        dgemm(&TRANSA, &TRANSB, &m_t, &n_t, &k_t, alpha1_t, Aia0_t, &lda_t,
              Bib0_t, &ldb_t, beta1_t, Cic0_t, &ldc_t);
      }
    }

    emxFree_real_T(&b_b);
    b_y_data[0] = y_data[0];
    emlrt_update_log_35(b_y_data, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[187U], y_data, d_X);
    for (i22 = 0; i22 < 2; i22++) {
      iv74[i22] = b_tmp_size[i22];
      g_X[i22] = d_X[i22];
    }

    emlrtSizeEqCheck2DFastR2012b(iv74, g_X, &ob_emlrtECI, sp);
    loop_ub = b_tmp_size[0] * b_tmp_size[1];
    for (i22 = 0; i22 < loop_ub; i22++) {
      c_ii_data[i22] = c_tmp_data[i22] + y_data[i22];
    }

    emlrt_update_log_35(c_ii_data, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[185U], y_data, d_X);
    d_tmp_data[0] = 0.5 * y_data[0];
    emlrt_update_log_35(d_tmp_data, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[184U], y_data, d_X);
    emlrt_update_log_34(y_data, d_X, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[183U], cmm_data, cmm_size);
    c_tmp_size[0] = 1;
    e_tmp_data[0] = muDoubleScalarIsNaN(cmm_data[0]);
    f_tmp_data[0] = e_tmp_data[0];
    emlrt_update_log_36(f_tmp_data, *(emlrtLocationLoggingDataType (*)[613])&
                        emlrtLocationLoggingDataTables[189U], e_tmp_data,
                        c_tmp_size);
    g_tmp_data.data = (boolean_T *)&e_tmp_data;
    g_tmp_data.size = (int32_T *)&c_tmp_size;
    g_tmp_data.allocatedSize = 1;
    g_tmp_data.numDimensions = 1;
    g_tmp_data.canFreeData = false;
    guard1 = false;
    st.site = &ai_emlrtRSI;
    if (emlrt_update_log_31(e_any(&st, &g_tmp_data),
                            *(emlrtLocationLoggingDataType (*)[613])&
                            emlrtLocationLoggingDataTables[188U])) {
      guard1 = true;
    } else {
      c_tmp_size[0] = 1;
      e_tmp_data[0] = muDoubleScalarIsInf(cmm_data[0]);
      h_tmp_data[0] = e_tmp_data[0];
      emlrt_update_log_36(h_tmp_data, *(emlrtLocationLoggingDataType (*)[613])&
                          emlrtLocationLoggingDataTables[191U], e_tmp_data,
                          c_tmp_size);
      i_tmp_data.data = (boolean_T *)&e_tmp_data;
      i_tmp_data.size = (int32_T *)&c_tmp_size;
      i_tmp_data.allocatedSize = 1;
      i_tmp_data.numDimensions = 1;
      i_tmp_data.canFreeData = false;
      st.site = &ai_emlrtRSI;
      if (emlrt_update_log_31(e_any(&st, &i_tmp_data),
                              *(emlrtLocationLoggingDataType (*)[613])&
                              emlrtLocationLoggingDataTables[190U])) {
        guard1 = true;
      }
    }

    if (guard1) {
      st.site = &bi_emlrtRSI;
      h_y = NULL;
      m17 = emlrtCreateCharArray(2, iv81);
      for (idx = 0; idx < 39; idx++) {
        cv61[idx] = cv62[idx];
      }

      emlrtInitCharArrayR2013a(&st, 39, m17, cv61);
      emlrtAssign(&h_y, m17);
      b_st.site = &np_emlrtRSI;
      f_error(&b_st, h_y, &nb_emlrtMCI);
    }
  }

  emxFree_real_T(&r84);
  emxFree_real_T(&a);
  emxFree_boolean_T(&bType1);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (twoPointMaxMarginSplit.c) */
