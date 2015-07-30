/*
 * mldivide.c
 *
 * Code generation for function 'mldivide'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "mldivide.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_warning.h"
#include "colon.h"
#include "sqrt.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo cj_emlrtRSI = { 26, "eml_xswap",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xswap.m"
};

static emlrtRSInfo dj_emlrtRSI = { 1, "xswap",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xswap.p"
};

static emlrtRSInfo ej_emlrtRSI = { 1, "xswap",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xswap.p"
};

static emlrtRSInfo nj_emlrtRSI = { 103, "eml_matlab_zlarf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zlarf.m"
};

static emlrtRSInfo rm_emlrtRSI = { 1, "mldivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRSInfo sm_emlrtRSI = { 42, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo tm_emlrtRSI = { 92, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo um_emlrtRSI = { 90, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo vm_emlrtRSI = { 117, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo wm_emlrtRSI = { 120, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo xm_emlrtRSI = { 128, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo ym_emlrtRSI = { 130, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo an_emlrtRSI = { 8, "eml_xgetrf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xgetrf.m"
};

static emlrtRSInfo bn_emlrtRSI = { 8, "eml_lapack_xgetrf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\internal\\eml_lapack_xgetrf.m"
};

static emlrtRSInfo cn_emlrtRSI = { 23, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo dn_emlrtRSI = { 30, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo en_emlrtRSI = { 36, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo fn_emlrtRSI = { 44, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo gn_emlrtRSI = { 50, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo hn_emlrtRSI = { 58, "eml_matlab_zgetrf",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zgetrf.m"
};

static emlrtRSInfo in_emlrtRSI = { 41, "eml_xgeru",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xgeru.m"
};

static emlrtRSInfo jn_emlrtRSI = { 1, "xgeru",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xgeru.p"
};

static emlrtRSInfo kn_emlrtRSI = { 76, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRSInfo ln_emlrtRSI = { 54, "eml_xtrsm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xtrsm.m"
};

static emlrtRSInfo mn_emlrtRSI = { 1, "xtrsm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xtrsm.p"
};

static emlrtRSInfo nn_emlrtRSI = { 29, "eml_qrsolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRSInfo on_emlrtRSI = { 38, "eml_qrsolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRSInfo pn_emlrtRSI = { 37, "eml_qrsolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtMCInfo ob_emlrtMCI = { 1, 1, "mldivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtMCInfo rb_emlrtMCI = { 29, 23, "eml_flt2str",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

static emlrtMCInfo sb_emlrtMCI = { 29, 15, "eml_flt2str",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

static emlrtRTEInfo ld_emlrtRTEI = { 1, 2, "mldivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\mldivide.p"
};

static emlrtRTEInfo md_emlrtRTEI = { 1, 19, "eml_lusolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_lusolve.m"
};

static emlrtRTEInfo nd_emlrtRTEI = { 1, 24, "eml_qrsolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtBCInfo if_emlrtBCI = { -1, -1, 1, 1, "", "xtrsm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xtrsm.p",
  0 };

static emlrtBCInfo kf_emlrtBCI = { -1, -1, 1, 1, "", "xswap",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+refblas\\xswap.p",
  0 };

static emlrtRTEInfo ae_emlrtRTEI = { 106, 5, "eml_qrsolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRTEInfo be_emlrtRTEI = { 99, 5, "eml_qrsolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRTEInfo ce_emlrtRTEI = { 82, 21, "eml_qrsolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRTEInfo de_emlrtRTEI = { 76, 17, "eml_qrsolve",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_qrsolve.m"
};

static emlrtRSInfo iq_emlrtRSI = { 29, "eml_flt2str",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_flt2str.m"
};

/* Function Declarations */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14]);
static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location);
static void eml_lusolve(const emlrtStack *sp, const emxArray_real_T *A, const
  emxArray_real_T *B, emxArray_real_T *X);
static void eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B, emxArray_real_T *Y);
static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_sprintf,
  const char_T *identifier, char_T y[14]);
static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14]);
static void warn_singular(const emlrtStack *sp);

/* Function Definitions */
static void b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, char_T y[14])
{
  s_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

static const mxArray *b_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m47;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m47, 3, pArrays, "sprintf", true,
    location);
}

static const mxArray *c_sprintf(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m48;
  pArrays[0] = b;
  pArrays[1] = c;
  return emlrtCallMATLABR2012b(sp, 1, &m48, 2, pArrays, "sprintf", true,
    location);
}

static void eml_lusolve(const emlrtStack *sp, const emxArray_real_T *A, const
  emxArray_real_T *B, emxArray_real_T *X)
{
  emxArray_real_T *b_A;
  int32_T i30;
  int32_T iy;
  emxArray_int32_T *ipiv;
  int32_T info;
  int32_T i31;
  int32_T b;
  int32_T j;
  int32_T mmj;
  int32_T c;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  int32_T ix;
  boolean_T overflow;
  int32_T k;
  real_T temp;
  int32_T i32;
  boolean_T b_c;
  ptrdiff_t m_t;
  ptrdiff_t incy_t;
  ptrdiff_t lda_t;
  double * alpha1_t;
  double * Aia0_t;
  double * Aiy0_t;
  char_T DIAGA;
  char_T TRANSA;
  char_T UPLO;
  char_T SIDE;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &md_emlrtRTEI, true);
  st.site = &sm_emlrtRSI;
  b_st.site = &um_emlrtRSI;
  c_st.site = &an_emlrtRSI;
  d_st.site = &bn_emlrtRSI;
  i30 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&d_st, (emxArray__common *)b_A, i30, (int32_T)sizeof(real_T),
                    &md_emlrtRTEI);
  iy = A->size[0] * A->size[1];
  for (i30 = 0; i30 < iy; i30++) {
    b_A->data[i30] = A->data[i30];
  }

  b_emxInit_int32_T(&d_st, &ipiv, 2, &md_emlrtRTEI, true);
  e_st.site = &cn_emlrtRSI;
  f_st.site = &r_emlrtRSI;
  g_st.site = &qi_emlrtRSI;
  h_st.site = &ri_emlrtRSI;
  eml_signed_integer_colon(&h_st, muIntScalarMin_sint32(A->size[1], A->size[1]),
    ipiv);
  info = 0;
  if (A->size[1] < 1) {
  } else {
    i31 = A->size[1] - 1;
    b = muIntScalarMin_sint32(i31, A->size[1]);
    e_st.site = &dn_emlrtRSI;
    for (j = 1; j <= b; j++) {
      mmj = A->size[1] - j;
      c = (j - 1) * (A->size[1] + 1) + 1;
      e_st.site = &en_emlrtRSI;
      f_st.site = &aj_emlrtRSI;
      if (mmj + 1 < 1) {
        iy = -1;
      } else {
        g_st.site = &bj_emlrtRSI;
        h_st.site = &bj_emlrtRSI;
        n_t = (ptrdiff_t)(mmj + 1);
        h_st.site = &bj_emlrtRSI;
        incx_t = (ptrdiff_t)(1);
        i30 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c, 1,
          i30, &ff_emlrtBCI, &g_st) - 1]);
        incx_t = idamax(&n_t, xix0_t, &incx_t);
        iy = (int32_T)incx_t - 1;
      }

      if (b_A->data[(c + iy) - 1] != 0.0) {
        if (iy != 0) {
          ipiv->data[j - 1] = j + iy;
          e_st.site = &fn_emlrtRSI;
          f_st.site = &cj_emlrtRSI;
          g_st.site = &dj_emlrtRSI;
          ix = j;
          iy += j;
          h_st.site = &ej_emlrtRSI;
          overflow = (A->size[1] > 2147483646);
          if (overflow) {
            i_st.site = &v_emlrtRSI;
            check_forloop_overflow_error(&i_st);
          }

          for (k = 1; k <= A->size[1]; k++) {
            i30 = b_A->size[0] * b_A->size[1];
            temp = b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i30,
              &kf_emlrtBCI, &g_st) - 1];
            i30 = b_A->size[0] * b_A->size[1];
            i32 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i30, &kf_emlrtBCI,
              &g_st) - 1] = b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1,
              i32, &kf_emlrtBCI, &g_st) - 1];
            i30 = b_A->size[0] * b_A->size[1];
            b_A->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i30, &kf_emlrtBCI,
              &g_st) - 1] = temp;
            ix += A->size[1];
            iy += A->size[1];
          }
        }

        iy = c + mmj;
        e_st.site = &gn_emlrtRSI;
        if (c + 1 > iy) {
          b_c = false;
        } else {
          b_c = (iy > 2147483646);
        }

        if (b_c) {
          f_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&f_st);
        }

        for (k = c; k + 1 <= iy; k++) {
          b_A->data[k] /= b_A->data[c - 1];
        }
      } else {
        info = j;
      }

      iy = A->size[1] - j;
      e_st.site = &hn_emlrtRSI;
      f_st.site = &in_emlrtRSI;
      g_st.site = &jn_emlrtRSI;
      if ((mmj < 1) || (iy < 1)) {
      } else {
        h_st.site = &vj_emlrtRSI;
        temp = -1.0;
        m_t = (ptrdiff_t)(mmj);
        n_t = (ptrdiff_t)(iy);
        incx_t = (ptrdiff_t)(1);
        incy_t = (ptrdiff_t)(A->size[1]);
        lda_t = (ptrdiff_t)(A->size[1]);
        alpha1_t = (double *)(&temp);
        i30 = b_A->size[0] * b_A->size[1];
        i32 = (c + A->size[1]) + 1;
        Aia0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i32, 1,
          i30, &jf_emlrtBCI, &h_st) - 1]);
        i30 = b_A->size[0] * b_A->size[1];
        xix0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(c + 1,
          1, i30, &jf_emlrtBCI, &h_st) - 1]);
        i30 = b_A->size[0] * b_A->size[1];
        i32 = c + A->size[1];
        Aiy0_t = (double *)(&b_A->data[emlrtDynamicBoundsCheckFastR2012b(i32, 1,
          i30, &jf_emlrtBCI, &h_st) - 1]);
        dger(&m_t, &n_t, alpha1_t, xix0_t, &incx_t, Aiy0_t, &incy_t, Aia0_t,
             &lda_t);
      }
    }

    if ((info == 0) && (!(b_A->data[(A->size[1] + b_A->size[0] * (A->size[1] - 1))
                          - 1] != 0.0))) {
      info = A->size[1];
    }
  }

  if (info > 0) {
    b_st.site = &tm_emlrtRSI;
    warn_singular(&b_st);
  }

  i30 = X->size[0] * X->size[1];
  X->size[0] = B->size[0];
  X->size[1] = B->size[1];
  emxEnsureCapacity(&st, (emxArray__common *)X, i30, (int32_T)sizeof(real_T),
                    &md_emlrtRTEI);
  iy = B->size[0] * B->size[1];
  for (i30 = 0; i30 < iy; i30++) {
    X->data[i30] = B->data[i30];
  }

  b_st.site = &vm_emlrtRSI;
  for (iy = 0; iy + 1 < A->size[1]; iy++) {
    if (ipiv->data[iy] != iy + 1) {
      b_st.site = &wm_emlrtRSI;
      if (1 > B->size[1]) {
        overflow = false;
      } else {
        overflow = (B->size[1] > 2147483646);
      }

      if (overflow) {
        c_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&c_st);
      }

      for (k = 0; k + 1 <= B->size[1]; k++) {
        temp = X->data[iy + X->size[0] * k];
        X->data[iy + X->size[0] * k] = X->data[(ipiv->data[iy] + X->size[0] * k)
          - 1];
        X->data[(ipiv->data[iy] + X->size[0] * k) - 1] = temp;
      }
    }
  }

  emxFree_int32_T(&ipiv);
  b_st.site = &xm_emlrtRSI;
  c_st.site = &ln_emlrtRSI;
  if (A->size[1] < 1) {
  } else {
    d_st.site = &mn_emlrtRSI;
    temp = 1.0;
    DIAGA = 'U';
    TRANSA = 'N';
    UPLO = 'L';
    SIDE = 'L';
    e_st.site = &mn_emlrtRSI;
    m_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &mn_emlrtRSI;
    n_t = (ptrdiff_t)(B->size[1]);
    e_st.site = &mn_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &mn_emlrtRSI;
    incx_t = (ptrdiff_t)(A->size[1]);
    i30 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &if_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    i30 = X->size[0] * X->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &if_emlrtBCI, &d_st);
    xix0_t = (double *)(&X->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  b_st.site = &ym_emlrtRSI;
  c_st.site = &ln_emlrtRSI;
  if (A->size[1] < 1) {
  } else {
    d_st.site = &mn_emlrtRSI;
    temp = 1.0;
    DIAGA = 'N';
    TRANSA = 'N';
    UPLO = 'U';
    SIDE = 'L';
    e_st.site = &mn_emlrtRSI;
    m_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &mn_emlrtRSI;
    n_t = (ptrdiff_t)(B->size[1]);
    e_st.site = &mn_emlrtRSI;
    lda_t = (ptrdiff_t)(A->size[1]);
    e_st.site = &mn_emlrtRSI;
    incx_t = (ptrdiff_t)(A->size[1]);
    i30 = b_A->size[0] * b_A->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &if_emlrtBCI, &d_st);
    Aia0_t = (double *)(&b_A->data[0]);
    i30 = X->size[0] * X->size[1];
    emlrtDynamicBoundsCheckFastR2012b(1, 1, i30, &if_emlrtBCI, &d_st);
    xix0_t = (double *)(&X->data[0]);
    alpha1_t = (double *)(&temp);
    dtrsm(&SIDE, &UPLO, &TRANSA, &DIAGA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t,
          xix0_t, &incx_t);
  }

  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_qrsolve(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *B, emxArray_real_T *Y)
{
  emxArray_real_T *b_A;
  emxArray_real_T *work;
  int32_T nb;
  int32_T mn;
  int32_T i33;
  int32_T itemp;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  int32_T b_mn;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  int32_T k;
  boolean_T overflow;
  boolean_T b16;
  int32_T i;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  real_T atmp;
  real_T d1;
  real_T xnorm;
  boolean_T b17;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv62[2] = { 1, 8 };

  const mxArray *m26;
  char_T cv85[8];
  static const char_T cv86[8] = { '%', '%', '%', 'd', '.', '%', 'd', 'e' };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  char_T cv87[14];
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
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
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  emxInit_real_T(sp, &b_A, 2, &nd_emlrtRTEI, true);
  b_emxInit_real_T(sp, &work, 1, &bd_emlrtRTEI, true);
  nb = B->size[1] - 1;
  mn = (int32_T)muDoubleScalarMin(A->size[0], A->size[1]);
  st.site = &nn_emlrtRSI;
  b_st.site = &bi_emlrtRSI;
  c_st.site = &ci_emlrtRSI;
  i33 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&c_st, (emxArray__common *)b_A, i33, (int32_T)sizeof(real_T),
                    &nd_emlrtRTEI);
  itemp = A->size[0] * A->size[1];
  for (i33 = 0; i33 < itemp; i33++) {
    b_A->data[i33] = A->data[i33];
  }

  b_emxInit_real_T(&c_st, &tau, 1, &nd_emlrtRTEI, true);
  b_emxInit_int32_T(&c_st, &jpvt, 2, &nd_emlrtRTEI, true);
  b_mn = muIntScalarMin_sint32(A->size[0], A->size[1]);
  i33 = tau->size[0];
  tau->size[0] = b_mn;
  emxEnsureCapacity(&c_st, (emxArray__common *)tau, i33, (int32_T)sizeof(real_T),
                    &uc_emlrtRTEI);
  d_st.site = &di_emlrtRSI;
  e_st.site = &r_emlrtRSI;
  f_st.site = &qi_emlrtRSI;
  g_st.site = &ri_emlrtRSI;
  eml_signed_integer_colon(&g_st, A->size[1], jpvt);
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
  } else {
    itemp = A->size[1];
    i33 = work->size[0];
    work->size[0] = itemp;
    emxEnsureCapacity(&c_st, (emxArray__common *)work, i33, (int32_T)sizeof
                      (real_T), &nd_emlrtRTEI);
    for (i33 = 0; i33 < itemp; i33++) {
      work->data[i33] = 0.0;
    }

    b_emxInit_real_T(&c_st, &vn1, 1, &xc_emlrtRTEI, true);
    b_emxInit_real_T(&c_st, &vn2, 1, &yc_emlrtRTEI, true);
    d_st.site = &ei_emlrtRSI;
    b_sqrt(&d_st, 2.2204460492503131E-16);
    itemp = A->size[1];
    i33 = vn1->size[0];
    vn1->size[0] = itemp;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn1, i33, (int32_T)sizeof
                      (real_T), &xc_emlrtRTEI);
    i33 = vn2->size[0];
    vn2->size[0] = itemp;
    emxEnsureCapacity(&c_st, (emxArray__common *)vn2, i33, (int32_T)sizeof
                      (real_T), &yc_emlrtRTEI);
    k = 1;
    d_st.site = &fi_emlrtRSI;
    overflow = (A->size[1] > 2147483646);
    if (overflow) {
      e_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (itemp = 0; itemp + 1 <= A->size[1]; itemp++) {
      d_st.site = &gi_emlrtRSI;
      vn1->data[itemp] = eml_xnrm2(&d_st, A->size[0], A, k);
      vn2->data[itemp] = vn1->data[itemp];
      k += A->size[0];
    }

    d_st.site = &hi_emlrtRSI;
    if (1 > b_mn) {
      b16 = false;
    } else {
      b16 = (b_mn > 2147483646);
    }

    if (b16) {
      e_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&e_st);
    }

    for (i = 0; i + 1 <= b_mn; i++) {
      i_i = i + i * A->size[0];
      nmi = A->size[1] - i;
      mmi = (A->size[0] - i) - 1;
      d_st.site = &ii_emlrtRSI;
      e_st.site = &aj_emlrtRSI;
      if (nmi < 1) {
        itemp = 0;
      } else {
        f_st.site = &bj_emlrtRSI;
        n_t = (ptrdiff_t)(nmi);
        incx_t = (ptrdiff_t)(1);
        i33 = vn1->size[0];
        xix0_t = (double *)(&vn1->data[emlrtDynamicBoundsCheckFastR2012b(i + 1,
          1, i33, &ff_emlrtBCI, &f_st) - 1]);
        n_t = idamax(&n_t, xix0_t, &incx_t);
        itemp = (int32_T)n_t;
      }

      k = (i + itemp) - 1;
      if (k + 1 != i + 1) {
        i33 = A->size[0] * k + 1;
        itemp = A->size[0] * i + 1;
        d_st.site = &ji_emlrtRSI;
        eml_xswap(&d_st, A->size[0], b_A, i33, itemp);
        itemp = jpvt->data[k];
        jpvt->data[k] = jpvt->data[i];
        jpvt->data[i] = itemp;
        vn1->data[k] = vn1->data[i];
        vn2->data[k] = vn2->data[i];
      }

      if (i + 1 < A->size[0]) {
        d_st.site = &ki_emlrtRSI;
        atmp = b_A->data[i_i];
        d1 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          e_st.site = &fj_emlrtRSI;
          xnorm = eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
          if (xnorm != 0.0) {
            xnorm = muDoubleScalarHypot(b_A->data[i_i], xnorm);
            if (b_A->data[i_i] >= 0.0) {
              xnorm = -xnorm;
            }

            if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
              itemp = 0;
              do {
                itemp++;
                e_st.site = &gj_emlrtRSI;
                eml_xscal(&e_st, mmi, 9.9792015476736E+291, b_A, i_i + 2);
                xnorm *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

              e_st.site = &hj_emlrtRSI;
              xnorm = eml_xnrm2(&e_st, mmi, b_A, i_i + 2);
              xnorm = muDoubleScalarHypot(atmp, xnorm);
              if (atmp >= 0.0) {
                xnorm = -xnorm;
              }

              d1 = (xnorm - atmp) / xnorm;
              e_st.site = &ij_emlrtRSI;
              eml_xscal(&e_st, mmi, 1.0 / (atmp - xnorm), b_A, i_i + 2);
              e_st.site = &jj_emlrtRSI;
              if (1 > itemp) {
                b17 = false;
              } else {
                b17 = (itemp > 2147483646);
              }

              if (b17) {
                f_st.site = &v_emlrtRSI;
                check_forloop_overflow_error(&f_st);
              }

              for (k = 1; k <= itemp; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d1 = (xnorm - b_A->data[i_i]) / xnorm;
              atmp = 1.0 / (b_A->data[i_i] - xnorm);
              e_st.site = &kj_emlrtRSI;
              eml_xscal(&e_st, mmi, atmp, b_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i] = d1;
      } else {
        d_st.site = &li_emlrtRSI;
        xnorm = b_A->data[i_i];
        atmp = b_A->data[i_i];
        b_A->data[i_i] = xnorm;
        tau->data[i] = 0.0;
      }

      b_A->data[i_i] = atmp;
      if (i + 1 < A->size[1]) {
        atmp = b_A->data[i_i];
        b_A->data[i_i] = 1.0;
        d_st.site = &mi_emlrtRSI;
        eml_matlab_zlarf(&d_st, mmi + 1, nmi - 1, i_i + 1, tau->data[i], b_A, (i
          + (i + 1) * A->size[0]) + 1, A->size[0], work);
        b_A->data[i_i] = atmp;
      }

      d_st.site = &ni_emlrtRSI;
      for (itemp = i + 1; itemp + 1 <= A->size[1]; itemp++) {
        if (vn1->data[itemp] != 0.0) {
          xnorm = muDoubleScalarAbs(b_A->data[i + b_A->size[0] * itemp]) /
            vn1->data[itemp];
          xnorm = 1.0 - xnorm * xnorm;
          if (xnorm < 0.0) {
            xnorm = 0.0;
          }

          atmp = vn1->data[itemp] / vn2->data[itemp];
          atmp = xnorm * (atmp * atmp);
          if (atmp <= 1.4901161193847656E-8) {
            if (i + 1 < A->size[0]) {
              d_st.site = &oi_emlrtRSI;
              vn1->data[itemp] = b_eml_xnrm2(&d_st, mmi, b_A, (i + A->size[0] *
                itemp) + 2);
              vn2->data[itemp] = vn1->data[itemp];
            } else {
              vn1->data[itemp] = 0.0;
              vn2->data[itemp] = 0.0;
            }
          } else {
            d_st.site = &pi_emlrtRSI;
            vn1->data[itemp] *= muDoubleScalarSqrt(xnorm);
          }
        }
      }
    }

    emxFree_real_T(&vn2);
    emxFree_real_T(&vn1);
  }

  atmp = 0.0;
  if (mn > 0) {
    xnorm = muDoubleScalarMax(A->size[0], A->size[1]) * muDoubleScalarAbs
      (b_A->data[0]) * 2.2204460492503131E-16;
    k = 0;
    exitg1 = false;
    while ((!exitg1) && (k <= mn - 1)) {
      if (muDoubleScalarAbs(b_A->data[k + b_A->size[0] * k]) <= xnorm) {
        st.site = &on_emlrtRSI;
        y = NULL;
        m26 = emlrtCreateCharArray(2, iv62);
        for (i = 0; i < 8; i++) {
          cv85[i] = cv86[i];
        }

        emlrtInitCharArrayR2013a(&st, 8, m26, cv85);
        emlrtAssign(&y, m26);
        b_y = NULL;
        m26 = emlrtCreateDoubleScalar(14.0);
        emlrtAssign(&b_y, m26);
        c_y = NULL;
        m26 = emlrtCreateDoubleScalar(6.0);
        emlrtAssign(&c_y, m26);
        d_y = NULL;
        m26 = emlrtCreateDoubleScalar(xnorm);
        emlrtAssign(&d_y, m26);
        b_st.site = &iq_emlrtRSI;
        emlrt_marshallIn(&b_st, c_sprintf(&b_st, b_sprintf(&b_st, y, b_y, c_y,
          &rb_emlrtMCI), d_y, &sb_emlrtMCI), "sprintf", cv87);
        st.site = &pn_emlrtRSI;
        b_eml_warning(&st, atmp, cv87);
        exitg1 = true;
      } else {
        atmp++;
        k++;
      }
    }
  }

  unnamed_idx_0 = (uint32_T)A->size[1];
  unnamed_idx_1 = (uint32_T)B->size[1];
  i33 = Y->size[0] * Y->size[1];
  Y->size[0] = (int32_T)unnamed_idx_0;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i33, (int32_T)sizeof(real_T),
                    &nd_emlrtRTEI);
  i33 = Y->size[0] * Y->size[1];
  Y->size[1] = (int32_T)unnamed_idx_1;
  emxEnsureCapacity(sp, (emxArray__common *)Y, i33, (int32_T)sizeof(real_T),
                    &nd_emlrtRTEI);
  itemp = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
  for (i33 = 0; i33 < itemp; i33++) {
    Y->data[i33] = 0.0;
  }

  for (itemp = 0; itemp < mn; itemp++) {
    if (tau->data[itemp] != 0.0) {
      for (k = 0; k <= nb; k++) {
        xnorm = B->data[itemp + B->size[0] * k];
        i33 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)itemp) + 1.0));
        emlrtForLoopVectorCheckR2012b((1.0 + (real_T)itemp) + 1.0, 1.0, A->size
          [0], mxDOUBLE_CLASS, i33, &de_emlrtRTEI, sp);
        for (i = 0; i < i33; i++) {
          unnamed_idx_0 = ((uint32_T)itemp + i) + 2U;
          xnorm += b_A->data[((int32_T)unnamed_idx_0 + b_A->size[0] * itemp) - 1]
            * B->data[((int32_T)unnamed_idx_0 + B->size[0] * k) - 1];
        }

        xnorm *= tau->data[itemp];
        if (xnorm != 0.0) {
          B->data[itemp + B->size[0] * k] -= xnorm;
          i33 = A->size[0] + (int32_T)(1.0 - ((1.0 + (real_T)itemp) + 1.0));
          emlrtForLoopVectorCheckR2012b((1.0 + (real_T)itemp) + 1.0, 1.0,
            A->size[0], mxDOUBLE_CLASS, i33, &ce_emlrtRTEI, sp);
          for (i = 0; i < i33; i++) {
            unnamed_idx_0 = ((uint32_T)itemp + i) + 2U;
            B->data[((int32_T)unnamed_idx_0 + B->size[0] * k) - 1] -= b_A->data
              [((int32_T)unnamed_idx_0 + b_A->size[0] * itemp) - 1] * xnorm;
          }
        }
      }
    }
  }

  emxFree_real_T(&tau);
  for (k = 0; k <= nb; k++) {
    emlrtForLoopVectorCheckR2012b(1.0, 1.0, atmp, mxDOUBLE_CLASS, (int32_T)atmp,
      &be_emlrtRTEI, sp);
    for (i = 0; i < (int32_T)atmp; i++) {
      Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] = B->data[i + B->size[0] * k];
    }

    emlrtForLoopVectorCheckR2012b(atmp, -1.0, 1.0, mxDOUBLE_CLASS, (int32_T)
      -(1.0 + (-1.0 - atmp)), &ae_emlrtRTEI, sp);
    for (itemp = 0; itemp < (int32_T)-(1.0 + (-1.0 - atmp)); itemp++) {
      xnorm = atmp + -(real_T)itemp;
      Y->data[(jpvt->data[(int32_T)xnorm - 1] + Y->size[0] * k) - 1] = eml_div
        (Y->data[(jpvt->data[(int32_T)xnorm - 1] + Y->size[0] * k) - 1],
         b_A->data[((int32_T)xnorm + b_A->size[0] * ((int32_T)xnorm - 1)) - 1]);
      for (i = 0; i < (int32_T)(xnorm - 1.0); i++) {
        Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] -= Y->data[(jpvt->data
          [(int32_T)xnorm - 1] + Y->size[0] * k) - 1] * b_A->data[i + b_A->size
          [0] * ((int32_T)xnorm - 1)];
      }
    }
  }

  emxFree_int32_T(&jpvt);
  emxFree_real_T(&work);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void emlrt_marshallIn(const emlrtStack *sp, const mxArray *d_sprintf,
  const char_T *identifier, char_T y[14])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  b_emlrt_marshallIn(sp, emlrtAlias(d_sprintf), &thisId, y);
  emlrtDestroyArray(&d_sprintf);
}

static void s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, char_T ret[14])
{
  int32_T iv88[2];
  int32_T i43;
  for (i43 = 0; i43 < 2; i43++) {
    iv88[i43] = 1 + 13 * i43;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "char", false, 2U, iv88);
  emlrtImportCharArray(src, ret, 14);
  emlrtDestroyArray(&src);
}

static void warn_singular(const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &kn_emlrtRSI;
  eml_warning(&st);
}

real_T b_eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T *x,
                   int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i24;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xi_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
    y = 0.0;
  } else {
    b_st.site = &yi_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i24 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i24,
      &gf_emlrtBCI, &b_st) - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

real_T eml_div(real_T x, real_T y)
{
  return x / y;
}

void eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n, int32_T iv0,
                      real_T tau, emxArray_real_T *C, int32_T ic0, int32_T ldc,
                      emxArray_real_T *work)
{
  int32_T lastv;
  int32_T lastc;
  real_T alpha1;
  real_T beta1;
  char_T TRANSA;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  ptrdiff_t lda_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * alpha1_t;
  double * beta1_t;
  int32_T i53;
  double * yiy0_t;
  double * Aia0_t;
  double * xix0_t;
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
  if (tau != 0.0) {
    lastv = m;
    lastc = iv0 + m;
    while ((lastv > 0) && (C->data[lastc - 2] == 0.0)) {
      lastv--;
      lastc--;
    }

    st.site = &oj_emlrtRSI;
    lastc = ilazlc(&st, lastv, n, C, ic0, ldc);
  } else {
    lastv = 0;
    lastc = 0;
  }

  if (lastv > 0) {
    st.site = &pj_emlrtRSI;
    b_st.site = &rj_emlrtRSI;
    if (lastc < 1) {
    } else {
      c_st.site = &sj_emlrtRSI;
      alpha1 = 1.0;
      beta1 = 0.0;
      TRANSA = 'C';
      d_st.site = &sj_emlrtRSI;
      m_t = (ptrdiff_t)(lastv);
      d_st.site = &sj_emlrtRSI;
      n_t = (ptrdiff_t)(lastc);
      d_st.site = &sj_emlrtRSI;
      lda_t = (ptrdiff_t)(ldc);
      d_st.site = &sj_emlrtRSI;
      incx_t = (ptrdiff_t)(1);
      d_st.site = &sj_emlrtRSI;
      incy_t = (ptrdiff_t)(1);
      alpha1_t = (double *)(&alpha1);
      beta1_t = (double *)(&beta1);
      i53 = work->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i53, &mf_emlrtBCI, &c_st);
      yiy0_t = (double *)(&work->data[0]);
      i53 = C->size[0] * C->size[1];
      Aia0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(ic0, 1, i53,
        &mf_emlrtBCI, &c_st) - 1]);
      i53 = C->size[0] * C->size[1];
      xix0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(iv0, 1, i53,
        &mf_emlrtBCI, &c_st) - 1]);
      dgemv(&TRANSA, &m_t, &n_t, alpha1_t, Aia0_t, &lda_t, xix0_t, &incx_t,
            beta1_t, yiy0_t, &incy_t);
    }

    st.site = &qj_emlrtRSI;
    alpha1 = -tau;
    b_st.site = &tj_emlrtRSI;
    c_st.site = &uj_emlrtRSI;
    if (lastc < 1) {
    } else {
      d_st.site = &vj_emlrtRSI;
      m_t = (ptrdiff_t)(lastv);
      n_t = (ptrdiff_t)(lastc);
      incx_t = (ptrdiff_t)(1);
      incy_t = (ptrdiff_t)(1);
      lda_t = (ptrdiff_t)(ldc);
      alpha1_t = (double *)(&alpha1);
      i53 = C->size[0] * C->size[1];
      Aia0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(ic0, 1, i53,
        &jf_emlrtBCI, &d_st) - 1]);
      i53 = C->size[0] * C->size[1];
      beta1_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(iv0, 1,
        i53, &jf_emlrtBCI, &d_st) - 1]);
      i53 = work->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i53, &jf_emlrtBCI, &d_st);
      yiy0_t = (double *)(&work->data[0]);
      dger(&m_t, &n_t, alpha1_t, beta1_t, &incx_t, yiy0_t, &incy_t, Aia0_t,
           &lda_t);
    }
  }
}

real_T eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T *x,
                 int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i23;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &xi_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
    y = 0.0;
  } else {
    b_st.site = &yi_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i23 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i23,
      &gf_emlrtBCI, &b_st) - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

void eml_xscal(const emlrtStack *sp, int32_T n, real_T a, emxArray_real_T *x,
               int32_T ix0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i52;
  double * xix0_t;
  double * a_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &mj_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    i52 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i52,
      &lf_emlrtBCI, &b_st) - 1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

void eml_xswap(const emlrtStack *sp, int32_T n, emxArray_real_T *x, int32_T ix0,
               int32_T iy0)
{
  int32_T ix;
  int32_T iy;
  boolean_T b22;
  int32_T k;
  int32_T i50;
  real_T temp;
  int32_T i51;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &cj_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  b_st.site = &dj_emlrtRSI;
  ix = ix0;
  iy = iy0;
  c_st.site = &ej_emlrtRSI;
  if (1 > n) {
    b22 = false;
  } else {
    b22 = (n > 2147483646);
  }

  if (b22) {
    d_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (k = 1; k <= n; k++) {
    i50 = x->size[0] * x->size[1];
    temp = x->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i50, &kf_emlrtBCI,
      &b_st) - 1];
    i50 = x->size[0] * x->size[1];
    i51 = x->size[0] * x->size[1];
    x->data[emlrtDynamicBoundsCheckFastR2012b(ix, 1, i50, &kf_emlrtBCI, &b_st) -
      1] = x->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i51, &kf_emlrtBCI,
      &b_st) - 1];
    i50 = x->size[0] * x->size[1];
    x->data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, i50, &kf_emlrtBCI, &b_st) -
      1] = temp;
    ix++;
    iy++;
  }
}

int32_T ilazlc(const emlrtStack *sp, int32_T m, int32_T n, const emxArray_real_T
               *A, int32_T ia0, int32_T lda)
{
  int32_T j;
  boolean_T exitg2;
  int32_T coltop;
  int32_T colbottom;
  boolean_T b_coltop;
  int32_T exitg1;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  j = n;
  exitg2 = false;
  while ((!exitg2) && (j > 0)) {
    coltop = ia0 + (j - 1) * lda;
    colbottom = (coltop + m) - 1;
    st.site = &nj_emlrtRSI;
    if (coltop > colbottom) {
      b_coltop = false;
    } else {
      b_coltop = (colbottom > 2147483646);
    }

    if (b_coltop) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    do {
      exitg1 = 0;
      if (coltop <= colbottom) {
        if (A->data[coltop - 1] != 0.0) {
          exitg1 = 1;
        } else {
          coltop++;
        }
      } else {
        j--;
        exitg1 = 2;
      }
    } while (exitg1 == 0);

    if (exitg1 == 1) {
      exitg2 = true;
    }
  }

  return j;
}

void mldivide(const emlrtStack *sp, const emxArray_real_T *A, const
              emxArray_real_T *B, emxArray_real_T *Y)
{
  const mxArray *y;
  static const int32_T iv60[2] = { 1, 21 };

  const mxArray *m24;
  char_T cv81[21];
  int32_T i;
  static const char_T cv82[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'd', 'i', 'm', 'a', 'g', 'r', 'e', 'e' };

  emxArray_real_T *b_B;
  uint32_T unnamed_idx_0;
  uint32_T unnamed_idx_1;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (B->size[0] == A->size[0]) {
  } else {
    y = NULL;
    m24 = emlrtCreateCharArray(2, iv60);
    for (i = 0; i < 21; i++) {
      cv81[i] = cv82[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m24, cv81);
    emlrtAssign(&y, m24);
    st.site = &rm_emlrtRSI;
    f_error(&st, b_message(&st, y, &ob_emlrtMCI), &ob_emlrtMCI);
  }

  emxInit_real_T(sp, &b_B, 2, &ld_emlrtRTEI, true);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    unnamed_idx_0 = (uint32_T)A->size[1];
    unnamed_idx_1 = (uint32_T)B->size[1];
    i = Y->size[0] * Y->size[1];
    Y->size[0] = (int32_T)unnamed_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)Y, i, (int32_T)sizeof(real_T),
                      &ld_emlrtRTEI);
    i = Y->size[0] * Y->size[1];
    Y->size[1] = (int32_T)unnamed_idx_1;
    emxEnsureCapacity(sp, (emxArray__common *)Y, i, (int32_T)sizeof(real_T),
                      &ld_emlrtRTEI);
    loop_ub = (int32_T)unnamed_idx_0 * (int32_T)unnamed_idx_1;
    for (i = 0; i < loop_ub; i++) {
      Y->data[i] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    st.site = &rm_emlrtRSI;
    eml_lusolve(&st, A, B, Y);
  } else {
    i = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity(sp, (emxArray__common *)b_B, i, (int32_T)sizeof(real_T),
                      &ld_emlrtRTEI);
    loop_ub = B->size[0] * B->size[1];
    for (i = 0; i < loop_ub; i++) {
      b_B->data[i] = B->data[i];
    }

    st.site = &rm_emlrtRSI;
    eml_qrsolve(&st, A, b_B, Y);
  }

  emxFree_real_T(&b_B);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (mldivide.c) */
