/*
 * qr.c
 *
 * Code generation for function 'qr'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "qr.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "mldivide.h"
#include "sqrt.h"
#include "colon.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo lh_emlrtRSI = { 17, "qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\qr.m" };

static emlrtRSInfo mh_emlrtRSI = { 21, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo nh_emlrtRSI = { 156, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo oh_emlrtRSI = { 165, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo ph_emlrtRSI = { 166, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo qh_emlrtRSI = { 169, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo rh_emlrtRSI = { 173, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo sh_emlrtRSI = { 178, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo th_emlrtRSI = { 179, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo uh_emlrtRSI = { 182, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo vh_emlrtRSI = { 186, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo wh_emlrtRSI = { 187, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo xh_emlrtRSI = { 191, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo yh_emlrtRSI = { 193, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo ai_emlrtRSI = { 194, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRSInfo wj_emlrtRSI = { 8, "eml_xungqr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xungqr.m"
};

static emlrtRSInfo xj_emlrtRSI = { 8, "eml_lapack_xungqr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\internal\\eml_lapack_xungqr.m"
};

static emlrtRSInfo yj_emlrtRSI = { 15, "eml_matlab_zungqr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zungqr.m"
};

static emlrtRSInfo ak_emlrtRSI = { 33, "eml_matlab_zungqr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zungqr.m"
};

static emlrtRSInfo bk_emlrtRSI = { 40, "eml_matlab_zungqr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zungqr.m"
};

static emlrtRSInfo ck_emlrtRSI = { 45, "eml_matlab_zungqr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zungqr.m"
};

static emlrtRTEInfo tc_emlrtRTEI = { 1, 20, "qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\qr.m" };

static emlrtRTEInfo vc_emlrtRTEI = { 177, 5, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRTEInfo wc_emlrtRTEI = { 164, 5, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

static emlrtRTEInfo ad_emlrtRTEI = { 192, 5, "eml_qr",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\eml_qr.m"
};

/* Function Declarations */
static void b_eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n,
  int32_T iv0, real_T tau, emxArray_real_T *C, int32_T ic0, int32_T ldc,
  emxArray_real_T *work);

/* Function Definitions */
static void b_eml_matlab_zlarf(const emlrtStack *sp, int32_T m, int32_T n,
  int32_T iv0, real_T tau, emxArray_real_T *C, int32_T ic0, int32_T ldc,
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
  int32_T i54;
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
      i54 = work->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i54, &mf_emlrtBCI, &c_st);
      yiy0_t = (double *)(&work->data[0]);
      i54 = C->size[0] * C->size[1];
      Aia0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(ic0, 1, i54,
        &mf_emlrtBCI, &c_st) - 1]);
      i54 = C->size[0] * C->size[1];
      xix0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(iv0, 1, i54,
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
      i54 = C->size[0] * C->size[1];
      Aia0_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(ic0, 1, i54,
        &jf_emlrtBCI, &d_st) - 1]);
      i54 = C->size[0] * C->size[1];
      beta1_t = (double *)(&C->data[emlrtDynamicBoundsCheckFastR2012b(iv0, 1,
        i54, &jf_emlrtBCI, &d_st) - 1]);
      i54 = work->size[0];
      emlrtDynamicBoundsCheckFastR2012b(1, 1, i54, &jf_emlrtBCI, &d_st);
      yiy0_t = (double *)(&work->data[0]);
      dger(&m_t, &n_t, alpha1_t, beta1_t, &incx_t, yiy0_t, &incy_t, Aia0_t,
           &lda_t);
    }
  }
}

void qr(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *Q,
        emxArray_real_T *R, emxArray_real_T *E)
{
  emxArray_real_T *b_A;
  emxArray_real_T *c_A;
  emxArray_real_T *work;
  int32_T i22;
  int32_T itemp;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  int32_T mn;
  int32_T pvt;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  int32_T k;
  boolean_T overflow;
  boolean_T b7;
  int32_T i;
  int32_T i_i;
  int32_T nmi;
  int32_T mmi;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  real_T atmp;
  real_T d0;
  real_T xnorm;
  boolean_T b8;
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
  emxInit_real_T(sp, &b_A, 2, &tc_emlrtRTEI, true);
  emxInit_real_T(sp, &c_A, 2, &tc_emlrtRTEI, true);
  b_emxInit_real_T(sp, &work, 1, &bd_emlrtRTEI, true);
  st.site = &lh_emlrtRSI;
  b_st.site = &mh_emlrtRSI;
  c_st.site = &nh_emlrtRSI;
  d_st.site = &bi_emlrtRSI;
  e_st.site = &ci_emlrtRSI;
  i22 = c_A->size[0] * c_A->size[1];
  c_A->size[0] = A->size[0];
  c_A->size[1] = A->size[1];
  emxEnsureCapacity(&e_st, (emxArray__common *)c_A, i22, (int32_T)sizeof(real_T),
                    &tc_emlrtRTEI);
  itemp = A->size[0] * A->size[1];
  for (i22 = 0; i22 < itemp; i22++) {
    c_A->data[i22] = A->data[i22];
  }

  b_emxInit_real_T(&e_st, &tau, 1, &tc_emlrtRTEI, true);
  b_emxInit_int32_T(&e_st, &jpvt, 2, &tc_emlrtRTEI, true);
  mn = muIntScalarMin_sint32(A->size[0], A->size[1]);
  i22 = tau->size[0];
  tau->size[0] = mn;
  emxEnsureCapacity(&e_st, (emxArray__common *)tau, i22, (int32_T)sizeof(real_T),
                    &uc_emlrtRTEI);
  f_st.site = &di_emlrtRSI;
  g_st.site = &r_emlrtRSI;
  h_st.site = &qi_emlrtRSI;
  i_st.site = &ri_emlrtRSI;
  eml_signed_integer_colon(&i_st, A->size[1], jpvt);
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
  } else {
    pvt = A->size[1];
    i22 = work->size[0];
    work->size[0] = pvt;
    emxEnsureCapacity(&e_st, (emxArray__common *)work, i22, (int32_T)sizeof
                      (real_T), &tc_emlrtRTEI);
    for (i22 = 0; i22 < pvt; i22++) {
      work->data[i22] = 0.0;
    }

    b_emxInit_real_T(&e_st, &vn1, 1, &xc_emlrtRTEI, true);
    b_emxInit_real_T(&e_st, &vn2, 1, &yc_emlrtRTEI, true);
    f_st.site = &ei_emlrtRSI;
    b_sqrt(&f_st, 2.2204460492503131E-16);
    pvt = A->size[1];
    i22 = vn1->size[0];
    vn1->size[0] = pvt;
    emxEnsureCapacity(&e_st, (emxArray__common *)vn1, i22, (int32_T)sizeof
                      (real_T), &xc_emlrtRTEI);
    i22 = vn2->size[0];
    vn2->size[0] = pvt;
    emxEnsureCapacity(&e_st, (emxArray__common *)vn2, i22, (int32_T)sizeof
                      (real_T), &yc_emlrtRTEI);
    k = 1;
    f_st.site = &fi_emlrtRSI;
    overflow = (A->size[1] > 2147483646);
    if (overflow) {
      g_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }

    for (pvt = 0; pvt + 1 <= A->size[1]; pvt++) {
      f_st.site = &gi_emlrtRSI;
      vn1->data[pvt] = eml_xnrm2(&f_st, A->size[0], A, k);
      vn2->data[pvt] = vn1->data[pvt];
      k += A->size[0];
    }

    f_st.site = &hi_emlrtRSI;
    if (1 > mn) {
      b7 = false;
    } else {
      b7 = (mn > 2147483646);
    }

    if (b7) {
      g_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&g_st);
    }

    for (i = 0; i + 1 <= mn; i++) {
      i_i = i + i * A->size[0];
      nmi = A->size[1] - i;
      mmi = (A->size[0] - i) - 1;
      f_st.site = &ii_emlrtRSI;
      g_st.site = &aj_emlrtRSI;
      if (nmi < 1) {
        itemp = 0;
      } else {
        h_st.site = &bj_emlrtRSI;
        n_t = (ptrdiff_t)(nmi);
        incx_t = (ptrdiff_t)(1);
        i22 = vn1->size[0];
        xix0_t = (double *)(&vn1->data[emlrtDynamicBoundsCheckFastR2012b(i + 1,
          1, i22, &ff_emlrtBCI, &h_st) - 1]);
        n_t = idamax(&n_t, xix0_t, &incx_t);
        itemp = (int32_T)n_t;
      }

      pvt = (i + itemp) - 1;
      if (pvt + 1 != i + 1) {
        i22 = A->size[0] * pvt + 1;
        itemp = A->size[0] * i + 1;
        f_st.site = &ji_emlrtRSI;
        eml_xswap(&f_st, A->size[0], c_A, i22, itemp);
        itemp = jpvt->data[pvt];
        jpvt->data[pvt] = jpvt->data[i];
        jpvt->data[i] = itemp;
        vn1->data[pvt] = vn1->data[i];
        vn2->data[pvt] = vn2->data[i];
      }

      if (i + 1 < A->size[0]) {
        f_st.site = &ki_emlrtRSI;
        atmp = c_A->data[i_i];
        d0 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          g_st.site = &fj_emlrtRSI;
          xnorm = eml_xnrm2(&g_st, mmi, c_A, i_i + 2);
          if (xnorm != 0.0) {
            xnorm = muDoubleScalarHypot(c_A->data[i_i], xnorm);
            if (c_A->data[i_i] >= 0.0) {
              xnorm = -xnorm;
            }

            if (muDoubleScalarAbs(xnorm) < 1.0020841800044864E-292) {
              pvt = 0;
              do {
                pvt++;
                g_st.site = &gj_emlrtRSI;
                eml_xscal(&g_st, mmi, 9.9792015476736E+291, c_A, i_i + 2);
                xnorm *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(muDoubleScalarAbs(xnorm) >= 1.0020841800044864E-292));

              g_st.site = &hj_emlrtRSI;
              xnorm = eml_xnrm2(&g_st, mmi, c_A, i_i + 2);
              xnorm = muDoubleScalarHypot(atmp, xnorm);
              if (atmp >= 0.0) {
                xnorm = -xnorm;
              }

              d0 = (xnorm - atmp) / xnorm;
              g_st.site = &ij_emlrtRSI;
              eml_xscal(&g_st, mmi, 1.0 / (atmp - xnorm), c_A, i_i + 2);
              g_st.site = &jj_emlrtRSI;
              if (1 > pvt) {
                b8 = false;
              } else {
                b8 = (pvt > 2147483646);
              }

              if (b8) {
                h_st.site = &v_emlrtRSI;
                check_forloop_overflow_error(&h_st);
              }

              for (k = 1; k <= pvt; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d0 = (xnorm - c_A->data[i_i]) / xnorm;
              atmp = 1.0 / (c_A->data[i_i] - xnorm);
              g_st.site = &kj_emlrtRSI;
              eml_xscal(&g_st, mmi, atmp, c_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i] = d0;
      } else {
        f_st.site = &li_emlrtRSI;
        xnorm = c_A->data[i_i];
        atmp = c_A->data[i_i];
        c_A->data[i_i] = xnorm;
        tau->data[i] = 0.0;
      }

      c_A->data[i_i] = atmp;
      if (i + 1 < A->size[1]) {
        atmp = c_A->data[i_i];
        c_A->data[i_i] = 1.0;
        f_st.site = &mi_emlrtRSI;
        eml_matlab_zlarf(&f_st, mmi + 1, nmi - 1, i_i + 1, tau->data[i], c_A, (i
          + (i + 1) * A->size[0]) + 1, A->size[0], work);
        c_A->data[i_i] = atmp;
      }

      f_st.site = &ni_emlrtRSI;
      for (pvt = i + 1; pvt + 1 <= A->size[1]; pvt++) {
        if (vn1->data[pvt] != 0.0) {
          xnorm = muDoubleScalarAbs(c_A->data[i + c_A->size[0] * pvt]) /
            vn1->data[pvt];
          xnorm = 1.0 - xnorm * xnorm;
          if (xnorm < 0.0) {
            xnorm = 0.0;
          }

          atmp = vn1->data[pvt] / vn2->data[pvt];
          atmp = xnorm * (atmp * atmp);
          if (atmp <= 1.4901161193847656E-8) {
            if (i + 1 < A->size[0]) {
              f_st.site = &oi_emlrtRSI;
              vn1->data[pvt] = b_eml_xnrm2(&f_st, mmi, c_A, (i + A->size[0] *
                pvt) + 2);
              vn2->data[pvt] = vn1->data[pvt];
            } else {
              vn1->data[pvt] = 0.0;
              vn2->data[pvt] = 0.0;
            }
          } else {
            f_st.site = &pi_emlrtRSI;
            vn1->data[pvt] *= muDoubleScalarSqrt(xnorm);
          }
        }
      }
    }

    emxFree_real_T(&vn2);
    emxFree_real_T(&vn1);
  }

  if (c_A->size[0] > c_A->size[1]) {
    pvt = c_A->size[1];
    itemp = c_A->size[1];
    i22 = R->size[0] * R->size[1];
    R->size[0] = pvt;
    R->size[1] = itemp;
    emxEnsureCapacity(&b_st, (emxArray__common *)R, i22, (int32_T)sizeof(real_T),
                      &wc_emlrtRTEI);
    c_st.site = &oh_emlrtRSI;
    if (1 > c_A->size[1]) {
      overflow = false;
    } else {
      overflow = (c_A->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (pvt = 0; pvt + 1 <= c_A->size[1]; pvt++) {
      c_st.site = &ph_emlrtRSI;
      if (pvt + 1 > 2147483646) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = 0; i + 1 <= pvt + 1; i++) {
        R->data[i + R->size[0] * pvt] = c_A->data[i + c_A->size[0] * pvt];
      }

      c_st.site = &qh_emlrtRSI;
      if (pvt + 2 > c_A->size[1]) {
        overflow = false;
      } else {
        overflow = (c_A->size[1] > 2147483646);
      }

      if (overflow) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = pvt + 1; i + 1 <= c_A->size[1]; i++) {
        R->data[i + R->size[0] * pvt] = 0.0;
      }
    }

    c_st.site = &rh_emlrtRSI;
    d_st.site = &wj_emlrtRSI;
    e_st.site = &xj_emlrtRSI;
    i22 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = c_A->size[0];
    b_A->size[1] = c_A->size[1];
    emxEnsureCapacity(&e_st, (emxArray__common *)b_A, i22, (int32_T)sizeof
                      (real_T), &tc_emlrtRTEI);
    itemp = c_A->size[0] * c_A->size[1];
    for (i22 = 0; i22 < itemp; i22++) {
      b_A->data[i22] = c_A->data[i22];
    }

    if (c_A->size[1] < 1) {
    } else {
      f_st.site = &yj_emlrtRSI;
      for (pvt = c_A->size[1]; pvt < c_A->size[1]; pvt++) {
        itemp = pvt * c_A->size[0];
        for (i = 0; i < c_A->size[0]; i++) {
          b_A->data[itemp + i] = 0.0;
        }

        b_A->data[itemp + pvt] = 1.0;
      }

      k = c_A->size[1] - 1;
      pvt = b_A->size[1];
      i22 = work->size[0];
      work->size[0] = pvt;
      emxEnsureCapacity(&e_st, (emxArray__common *)work, i22, (int32_T)sizeof
                        (real_T), &tc_emlrtRTEI);
      for (i22 = 0; i22 < pvt; i22++) {
        work->data[i22] = 0.0;
      }

      for (i = c_A->size[1]; i >= 1; i--) {
        itemp = i + (i - 1) * c_A->size[0];
        if (i < c_A->size[1]) {
          b_A->data[itemp - 1] = 1.0;
          f_st.site = &ak_emlrtRSI;
          b_eml_matlab_zlarf(&f_st, (c_A->size[0] - i) + 1, c_A->size[1] - i,
                             itemp, tau->data[k], b_A, itemp + c_A->size[0],
                             c_A->size[0], work);
        }

        if (i < c_A->size[0]) {
          f_st.site = &bk_emlrtRSI;
          eml_xscal(&f_st, c_A->size[0] - i, -tau->data[k], b_A, itemp + 1);
        }

        b_A->data[itemp - 1] = 1.0 - tau->data[k];
        f_st.site = &ck_emlrtRSI;
        for (pvt = 1; pvt < i; pvt++) {
          b_A->data[(itemp - pvt) - 1] = 0.0;
        }

        k--;
      }
    }

    i22 = Q->size[0] * Q->size[1];
    Q->size[0] = b_A->size[0];
    Q->size[1] = b_A->size[1];
    emxEnsureCapacity(&b_st, (emxArray__common *)Q, i22, (int32_T)sizeof(real_T),
                      &tc_emlrtRTEI);
    itemp = b_A->size[0] * b_A->size[1];
    for (i22 = 0; i22 < itemp; i22++) {
      Q->data[i22] = b_A->data[i22];
    }
  } else {
    for (i22 = 0; i22 < 2; i22++) {
      itemp = R->size[0] * R->size[1];
      R->size[i22] = c_A->size[i22];
      emxEnsureCapacity(&b_st, (emxArray__common *)R, itemp, (int32_T)sizeof
                        (real_T), &vc_emlrtRTEI);
    }

    c_st.site = &sh_emlrtRSI;
    if (1 > c_A->size[0]) {
      overflow = false;
    } else {
      overflow = (c_A->size[0] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (pvt = 0; pvt + 1 <= c_A->size[0]; pvt++) {
      c_st.site = &th_emlrtRSI;
      if (pvt + 1 > 2147483646) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = 0; i + 1 <= pvt + 1; i++) {
        R->data[i + R->size[0] * pvt] = c_A->data[i + c_A->size[0] * pvt];
      }

      c_st.site = &uh_emlrtRSI;
      if (pvt + 2 > c_A->size[0]) {
        overflow = false;
      } else {
        overflow = (c_A->size[0] > 2147483646);
      }

      if (overflow) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (i = pvt + 1; i + 1 <= c_A->size[0]; i++) {
        R->data[i + R->size[0] * pvt] = 0.0;
      }
    }

    c_st.site = &vh_emlrtRSI;
    if (c_A->size[0] + 1 > c_A->size[1]) {
      overflow = false;
    } else {
      overflow = (c_A->size[1] > 2147483646);
    }

    if (overflow) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (pvt = c_A->size[0]; pvt + 1 <= c_A->size[1]; pvt++) {
      c_st.site = &wh_emlrtRSI;
      for (i = 0; i + 1 <= c_A->size[0]; i++) {
        R->data[i + R->size[0] * pvt] = c_A->data[i + c_A->size[0] * pvt];
      }
    }

    c_st.site = &xh_emlrtRSI;
    d_st.site = &wj_emlrtRSI;
    e_st.site = &xj_emlrtRSI;
    i22 = b_A->size[0] * b_A->size[1];
    b_A->size[0] = c_A->size[0];
    b_A->size[1] = c_A->size[1];
    emxEnsureCapacity(&e_st, (emxArray__common *)b_A, i22, (int32_T)sizeof
                      (real_T), &tc_emlrtRTEI);
    itemp = c_A->size[0] * c_A->size[1];
    for (i22 = 0; i22 < itemp; i22++) {
      b_A->data[i22] = c_A->data[i22];
    }

    if (c_A->size[0] < 1) {
    } else {
      f_st.site = &yj_emlrtRSI;
      for (pvt = c_A->size[0]; pvt < c_A->size[0]; pvt++) {
        itemp = pvt * c_A->size[0];
        for (i = 0; i < c_A->size[0]; i++) {
          b_A->data[itemp + i] = 0.0;
        }

        b_A->data[itemp + pvt] = 1.0;
      }

      k = c_A->size[0] - 1;
      pvt = b_A->size[1];
      i22 = work->size[0];
      work->size[0] = pvt;
      emxEnsureCapacity(&e_st, (emxArray__common *)work, i22, (int32_T)sizeof
                        (real_T), &tc_emlrtRTEI);
      for (i22 = 0; i22 < pvt; i22++) {
        work->data[i22] = 0.0;
      }

      for (i = c_A->size[0]; i >= 1; i--) {
        itemp = i + (i - 1) * c_A->size[0];
        if (i < c_A->size[0]) {
          b_A->data[itemp - 1] = 1.0;
          f_st.site = &ak_emlrtRSI;
          b_eml_matlab_zlarf(&f_st, (c_A->size[0] - i) + 1, c_A->size[0] - i,
                             itemp, tau->data[k], b_A, itemp + c_A->size[0],
                             c_A->size[0], work);
        }

        if (i < c_A->size[0]) {
          f_st.site = &bk_emlrtRSI;
          eml_xscal(&f_st, c_A->size[0] - i, -tau->data[k], b_A, itemp + 1);
        }

        b_A->data[itemp - 1] = 1.0 - tau->data[k];
        f_st.site = &ck_emlrtRSI;
        for (pvt = 1; pvt < i; pvt++) {
          b_A->data[(itemp - pvt) - 1] = 0.0;
        }

        k--;
      }
    }

    pvt = c_A->size[0];
    itemp = c_A->size[0];
    i22 = Q->size[0] * Q->size[1];
    Q->size[0] = pvt;
    Q->size[1] = itemp;
    emxEnsureCapacity(&b_st, (emxArray__common *)Q, i22, (int32_T)sizeof(real_T),
                      &ad_emlrtRTEI);
    c_st.site = &yh_emlrtRSI;
    for (pvt = 0; pvt + 1 <= c_A->size[0]; pvt++) {
      c_st.site = &ai_emlrtRSI;
      for (i = 0; i + 1 <= c_A->size[0]; i++) {
        Q->data[i + Q->size[0] * pvt] = b_A->data[i + b_A->size[0] * pvt];
      }
    }
  }

  emxFree_real_T(&tau);
  i22 = E->size[0] * E->size[1];
  E->size[0] = 1;
  E->size[1] = jpvt->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)E, i22, (int32_T)sizeof(real_T),
                    &tc_emlrtRTEI);
  itemp = jpvt->size[0] * jpvt->size[1];
  for (i22 = 0; i22 < itemp; i22++) {
    E->data[i22] = jpvt->data[i22];
  }

  emxFree_int32_T(&jpvt);
  emxFree_real_T(&work);
  emxFree_real_T(&c_A);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (qr.c) */
