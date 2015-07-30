/*
 * svd.c
 *
 * Code generation for function 'svd'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "svd.h"
#include "eml_error.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "mldivide.h"
#include "sqrt.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo ek_emlrtRSI = { 12, "svd",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"
};

static emlrtRSInfo fk_emlrtRSI = { 14, "svd",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"
};

static emlrtRSInfo gk_emlrtRSI = { 58, "svd",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"
};

static emlrtRSInfo hk_emlrtRSI = { 19, "eml_xgesvd",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xgesvd.m"
};

static emlrtRSInfo ik_emlrtRSI = { 9, "eml_lapack_xgesvd",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\internal\\eml_lapack_xgesvd.m"
};

static emlrtRSInfo jk_emlrtRSI = { 45, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo kk_emlrtRSI = { 50, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo lk_emlrtRSI = { 61, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo mk_emlrtRSI = { 71, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo nk_emlrtRSI = { 75, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo ok_emlrtRSI = { 82, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo pk_emlrtRSI = { 87, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo qk_emlrtRSI = { 90, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo rk_emlrtRSI = { 98, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo sk_emlrtRSI = { 107, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo tk_emlrtRSI = { 113, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo uk_emlrtRSI = { 123, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo vk_emlrtRSI = { 126, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo wk_emlrtRSI = { 129, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo xk_emlrtRSI = { 131, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo yk_emlrtRSI = { 135, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo al_emlrtRSI = { 140, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo bl_emlrtRSI = { 161, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo cl_emlrtRSI = { 162, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo dl_emlrtRSI = { 174, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo el_emlrtRSI = { 177, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo fl_emlrtRSI = { 180, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo gl_emlrtRSI = { 183, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo hl_emlrtRSI = { 187, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo il_emlrtRSI = { 191, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo jl_emlrtRSI = { 205, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo kl_emlrtRSI = { 208, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo ll_emlrtRSI = { 211, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo ml_emlrtRSI = { 214, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo nl_emlrtRSI = { 221, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo ol_emlrtRSI = { 233, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo pl_emlrtRSI = { 244, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo ql_emlrtRSI = { 255, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo rl_emlrtRSI = { 261, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo sl_emlrtRSI = { 371, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo tl_emlrtRSI = { 380, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo ul_emlrtRSI = { 383, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo vl_emlrtRSI = { 394, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo wl_emlrtRSI = { 396, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo xl_emlrtRSI = { 405, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo yl_emlrtRSI = { 343, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo am_emlrtRSI = { 345, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo bm_emlrtRSI = { 352, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo cm_emlrtRSI = { 326, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo dm_emlrtRSI = { 336, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo em_emlrtRSI = { 417, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo fm_emlrtRSI = { 430, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo gm_emlrtRSI = { 436, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo hm_emlrtRSI = { 448, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRSInfo im_emlrtRSI = { 30, "eml_xdotc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xdotc.m"
};

static emlrtRSInfo jm_emlrtRSI = { 1, "xdotc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xdotc.p"
};

static emlrtRSInfo km_emlrtRSI = { 1, "xdot",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xdot.p"
};

static emlrtRSInfo lm_emlrtRSI = { 42, "eml_xaxpy",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xaxpy.m"
};

static emlrtRSInfo mm_emlrtRSI = { 1, "xaxpy",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xaxpy.p"
};

static emlrtRSInfo pm_emlrtRSI = { 28, "eml_xrot",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\blas\\eml_xrot.m"
};

static emlrtRSInfo qm_emlrtRSI = { 1, "xrot",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xrot.p"
};

static emlrtRTEInfo fd_emlrtRTEI = { 1, 20, "svd",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\matfun\\svd.m"
};

static emlrtRTEInfo gd_emlrtRTEI = { 1, 20, "eml_xgesvd",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\eml_xgesvd.m"
};

static emlrtRTEInfo hd_emlrtRTEI = { 447, 1, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRTEInfo id_emlrtRTEI = { 32, 1, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRTEInfo jd_emlrtRTEI = { 33, 1, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtRTEInfo kd_emlrtRTEI = { 34, 1, "eml_matlab_zsvdc",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\lapack\\matlab\\eml_matlab_zsvdc.m"
};

static emlrtBCInfo hf_emlrtBCI = { -1, -1, 1, 1, "", "xdot",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xdot.p",
  0 };

static emlrtBCInfo nf_emlrtBCI = { -1, -1, 1, 1, "", "xaxpy",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xaxpy.p",
  0 };

static emlrtBCInfo of_emlrtBCI = { -1, -1, 1, 1, "", "xrot",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\+blas\\xrot.p",
  0 };

/* Function Declarations */
static void b_eml_xaxpy(const emlrtStack *sp, int32_T n, real_T a, const
  emxArray_real_T *x, int32_T ix0, emxArray_real_T *y, int32_T iy0);
static void b_eml_xscal(const emlrtStack *sp, int32_T n, real_T a,
  emxArray_real_T *x, int32_T ix0);
static void c_eml_xaxpy(const emlrtStack *sp, int32_T n, real_T a, const
  emxArray_real_T *x, int32_T ix0, emxArray_real_T *y, int32_T iy0);
static real_T c_eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0);
static void eml_xaxpy(const emlrtStack *sp, int32_T n, real_T a, int32_T ix0,
                      emxArray_real_T *y, int32_T iy0);
static real_T eml_xdotc(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0, const emxArray_real_T *y, int32_T iy0);
static void eml_xgesvd(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *U, emxArray_real_T *S, emxArray_real_T *V);
static void eml_xrot(const emlrtStack *sp, int32_T n, emxArray_real_T *x,
                     int32_T ix0, int32_T iy0, real_T c, real_T s);
static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s);

/* Function Definitions */
static void b_eml_xaxpy(const emlrtStack *sp, int32_T n, real_T a, const
  emxArray_real_T *x, int32_T ix0, emxArray_real_T *y, int32_T iy0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * a_t;
  int32_T i57;
  double * yiy0_t;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &mm_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    a_t = (double *)(&a);
    i57 = y->size[0];
    yiy0_t = (double *)(&y->data[emlrtDynamicBoundsCheckFastR2012b(iy0, 1, i57,
      &nf_emlrtBCI, &b_st) - 1]);
    i57 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i57,
      &nf_emlrtBCI, &b_st) - 1]);
    daxpy(&n_t, a_t, xix0_t, &incx_t, yiy0_t, &incy_t);
  }
}

static void b_eml_xscal(const emlrtStack *sp, int32_T n, real_T a,
  emxArray_real_T *x, int32_T ix0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i56;
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
    i56 = x->size[0];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i56,
      &lf_emlrtBCI, &b_st) - 1]);
    a_t = (double *)(&a);
    dscal(&n_t, a_t, xix0_t, &incx_t);
  }
}

static void c_eml_xaxpy(const emlrtStack *sp, int32_T n, real_T a, const
  emxArray_real_T *x, int32_T ix0, emxArray_real_T *y, int32_T iy0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * a_t;
  int32_T i58;
  double * yiy0_t;
  double * xix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &mm_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    a_t = (double *)(&a);
    i58 = y->size[0] * y->size[1];
    yiy0_t = (double *)(&y->data[emlrtDynamicBoundsCheckFastR2012b(iy0, 1, i58,
      &nf_emlrtBCI, &b_st) - 1]);
    i58 = x->size[0];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i58,
      &nf_emlrtBCI, &b_st) - 1]);
    daxpy(&n_t, a_t, xix0_t, &incx_t, yiy0_t, &incy_t);
  }
}

static real_T c_eml_xnrm2(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0)
{
  real_T y;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  int32_T i29;
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
    i29 = x->size[0];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i29,
      &gf_emlrtBCI, &b_st) - 1]);
    y = dnrm2(&n_t, xix0_t, &incx_t);
  }

  return y;
}

static void eml_xaxpy(const emlrtStack *sp, int32_T n, real_T a, int32_T ix0,
                      emxArray_real_T *y, int32_T iy0)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * a_t;
  int32_T i55;
  double * yiy0_t;
  double * yix0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &lm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &mm_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    a_t = (double *)(&a);
    i55 = y->size[0] * y->size[1];
    yiy0_t = (double *)(&y->data[emlrtDynamicBoundsCheckFastR2012b(iy0, 1, i55,
      &nf_emlrtBCI, &b_st) - 1]);
    i55 = y->size[0] * y->size[1];
    yix0_t = (double *)(&y->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i55,
      &nf_emlrtBCI, &b_st) - 1]);
    daxpy(&n_t, a_t, yix0_t, &incx_t, yiy0_t, &incy_t);
  }
}

static real_T eml_xdotc(const emlrtStack *sp, int32_T n, const emxArray_real_T
  *x, int32_T ix0, const emxArray_real_T *y, int32_T iy0)
{
  real_T d;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  int32_T i28;
  double * xix0_t;
  double * yiy0_t;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &im_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &jm_emlrtRSI;
  if (n < 1) {
    d = 0.0;
  } else {
    c_st.site = &km_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    i28 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i28,
      &hf_emlrtBCI, &c_st) - 1]);
    i28 = y->size[0] * y->size[1];
    yiy0_t = (double *)(&y->data[emlrtDynamicBoundsCheckFastR2012b(iy0, 1, i28,
      &hf_emlrtBCI, &c_st) - 1]);
    d = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
  }

  return d;
}

static void eml_xgesvd(const emlrtStack *sp, const emxArray_real_T *A,
  emxArray_real_T *U, emxArray_real_T *S, emxArray_real_T *V)
{
  emxArray_real_T *b_A;
  emxArray_real_T *e;
  emxArray_real_T *work;
  int32_T nct;
  int32_T kase;
  emxArray_real_T *s;
  int32_T minnp;
  int32_T qs;
  boolean_T b12;
  boolean_T b13;
  int32_T i25;
  int32_T nrt;
  int32_T i26;
  int32_T q;
  int32_T pmq;
  int32_T iter;
  real_T ztest0;
  boolean_T overflow;
  int32_T mm;
  int32_T i27;
  int32_T m;
  boolean_T b_nct;
  boolean_T b14;
  real_T ztest;
  real_T tiny;
  real_T snorm;
  boolean_T exitg1;
  boolean_T exitg4;
  boolean_T exitg3;
  real_T f;
  real_T b;
  real_T varargin_1[5];
  real_T mtmp;
  boolean_T exitg2;
  real_T sqds;
  boolean_T b15;
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
  emxInit_real_T(sp, &b_A, 2, &gd_emlrtRTEI, true);
  b_emxInit_real_T(sp, &e, 1, &jd_emlrtRTEI, true);
  b_emxInit_real_T(sp, &work, 1, &kd_emlrtRTEI, true);
  st.site = &hk_emlrtRSI;
  b_st.site = &ik_emlrtRSI;
  nct = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity(&b_st, (emxArray__common *)b_A, nct, (int32_T)sizeof(real_T),
                    &gd_emlrtRTEI);
  kase = A->size[0] * A->size[1];
  for (nct = 0; nct < kase; nct++) {
    b_A->data[nct] = A->data[nct];
  }

  b_emxInit_real_T(&b_st, &s, 1, &id_emlrtRTEI, true);
  kase = A->size[0] + 1;
  minnp = muIntScalarMin_sint32(A->size[0], A->size[1]);
  kase = muIntScalarMin_sint32(kase, A->size[1]);
  nct = s->size[0];
  s->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)s, nct, (int32_T)sizeof(real_T),
                    &gd_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    s->data[nct] = 0.0;
  }

  kase = A->size[1];
  nct = e->size[0];
  e->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)e, nct, (int32_T)sizeof(real_T),
                    &gd_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    e->data[nct] = 0.0;
  }

  kase = A->size[0];
  nct = work->size[0];
  work->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)work, nct, (int32_T)sizeof(real_T),
                    &gd_emlrtRTEI);
  for (nct = 0; nct < kase; nct++) {
    work->data[nct] = 0.0;
  }

  kase = A->size[0];
  nct = U->size[0] * U->size[1];
  U->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)U, nct, (int32_T)sizeof(real_T),
                    &gd_emlrtRTEI);
  nct = U->size[0] * U->size[1];
  U->size[1] = minnp;
  emxEnsureCapacity(&b_st, (emxArray__common *)U, nct, (int32_T)sizeof(real_T),
                    &gd_emlrtRTEI);
  kase *= minnp;
  for (nct = 0; nct < kase; nct++) {
    U->data[nct] = 0.0;
  }

  kase = A->size[1];
  qs = A->size[1];
  nct = V->size[0] * V->size[1];
  V->size[0] = kase;
  emxEnsureCapacity(&b_st, (emxArray__common *)V, nct, (int32_T)sizeof(real_T),
                    &gd_emlrtRTEI);
  nct = V->size[0] * V->size[1];
  V->size[1] = qs;
  emxEnsureCapacity(&b_st, (emxArray__common *)V, nct, (int32_T)sizeof(real_T),
                    &gd_emlrtRTEI);
  kase *= qs;
  for (nct = 0; nct < kase; nct++) {
    V->data[nct] = 0.0;
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    qs = muIntScalarMin_sint32(A->size[0], minnp);
    c_st.site = &jk_emlrtRSI;
    if (1 > qs) {
      b12 = false;
    } else {
      b12 = (qs > 2147483646);
    }

    if (b12) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (kase = 0; kase + 1 <= qs; kase++) {
      U->data[kase + U->size[0] * kase] = 1.0;
    }

    qs = muIntScalarMin_sint32(A->size[1], A->size[1]);
    c_st.site = &kk_emlrtRSI;
    if (1 > qs) {
      b13 = false;
    } else {
      b13 = (qs > 2147483646);
    }

    if (b13) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (kase = 0; kase + 1 <= qs; kase++) {
      V->data[kase + V->size[0] * kase] = 1.0;
    }
  } else {
    if (A->size[1] < 2) {
      kase = 2;
    } else {
      kase = A->size[1];
    }

    i25 = kase - 2;
    nrt = muIntScalarMin_sint32(i25, A->size[0]);
    kase = A->size[0];
    i26 = kase - 1;
    nct = muIntScalarMin_sint32(i26, A->size[1]);
    qs = muIntScalarMax_sint32(nct, nrt);
    c_st.site = &lk_emlrtRSI;
    for (q = 0; q + 1 <= qs; q++) {
      pmq = q + A->size[0] * q;
      iter = A->size[0] - q;
      if (q + 1 <= nct) {
        c_st.site = &mk_emlrtRSI;
        ztest0 = b_eml_xnrm2(&c_st, iter, b_A, pmq + 1);
        if (ztest0 > 0.0) {
          if (b_A->data[pmq] < 0.0) {
            ztest0 = -ztest0;
          }

          s->data[q] = ztest0;
          ztest0 = eml_div(1.0, s->data[q]);
          c_st.site = &nk_emlrtRSI;
          eml_xscal(&c_st, iter, ztest0, b_A, pmq + 1);
          b_A->data[pmq]++;
          s->data[q] = -s->data[q];
        } else {
          s->data[q] = 0.0;
        }
      }

      c_st.site = &ok_emlrtRSI;
      if (q + 2 > A->size[1]) {
        overflow = false;
      } else {
        overflow = (A->size[1] > 2147483646);
      }

      if (overflow) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
        kase = q + A->size[0] * mm;
        if ((q + 1 <= nct) && (s->data[q] != 0.0)) {
          c_st.site = &pk_emlrtRSI;
          ztest0 = eml_xdotc(&c_st, iter, b_A, pmq + 1, b_A, kase + 1);
          ztest0 = -eml_div(ztest0, b_A->data[q + b_A->size[0] * q]);
          c_st.site = &qk_emlrtRSI;
          eml_xaxpy(&c_st, iter, ztest0, pmq + 1, b_A, kase + 1);
        }

        e->data[mm] = b_A->data[kase];
      }

      if (q + 1 <= nct) {
        c_st.site = &rk_emlrtRSI;
        if (q + 1 > A->size[0]) {
          overflow = false;
        } else {
          overflow = (A->size[0] > 2147483646);
        }

        if (overflow) {
          d_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = q; kase + 1 <= A->size[0]; kase++) {
          U->data[kase + U->size[0] * q] = b_A->data[kase + b_A->size[0] * q];
        }
      }

      if (q + 1 <= nrt) {
        pmq = (A->size[1] - q) - 1;
        c_st.site = &sk_emlrtRSI;
        ztest0 = c_eml_xnrm2(&c_st, pmq, e, q + 2);
        if (ztest0 == 0.0) {
          e->data[q] = 0.0;
        } else {
          if (e->data[q + 1] < 0.0) {
            ztest0 = -ztest0;
          }

          e->data[q] = ztest0;
          ztest0 = eml_div(1.0, e->data[q]);
          c_st.site = &tk_emlrtRSI;
          b_eml_xscal(&c_st, pmq, ztest0, e, q + 2);
          e->data[q + 1]++;
        }

        e->data[q] = -e->data[q];
        if ((q + 2 <= A->size[0]) && (e->data[q] != 0.0)) {
          c_st.site = &uk_emlrtRSI;
          if (q + 2 > A->size[0]) {
            overflow = false;
          } else {
            overflow = (A->size[0] > 2147483646);
          }

          if (overflow) {
            d_st.site = &v_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }

          for (kase = q + 1; kase + 1 <= A->size[0]; kase++) {
            work->data[kase] = 0.0;
          }

          c_st.site = &vk_emlrtRSI;
          for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
            c_st.site = &wk_emlrtRSI;
            b_eml_xaxpy(&c_st, iter - 1, e->data[mm], b_A, (q + A->size[0] * mm)
                        + 2, work, q + 2);
          }

          c_st.site = &xk_emlrtRSI;
          for (mm = q + 1; mm + 1 <= A->size[1]; mm++) {
            ztest0 = eml_div(-e->data[mm], e->data[q + 1]);
            c_st.site = &yk_emlrtRSI;
            c_eml_xaxpy(&c_st, iter - 1, ztest0, work, q + 2, b_A, (q + A->size
              [0] * mm) + 2);
          }
        }

        c_st.site = &al_emlrtRSI;
        for (kase = q + 1; kase + 1 <= A->size[1]; kase++) {
          V->data[kase + V->size[0] * q] = e->data[kase];
        }
      }
    }

    i27 = A->size[0] + 1;
    m = muIntScalarMin_sint32(A->size[1], i27);
    if (nct < A->size[1]) {
      s->data[nct] = b_A->data[nct + b_A->size[0] * nct];
    }

    if (A->size[0] < m) {
      s->data[m - 1] = 0.0;
    }

    if (nrt + 1 < m) {
      e->data[nrt] = b_A->data[nrt + b_A->size[0] * (m - 1)];
    }

    e->data[m - 1] = 0.0;
    if (nct + 1 <= minnp) {
      c_st.site = &bl_emlrtRSI;
      if (nct + 1 > minnp) {
        b_nct = false;
      } else {
        b_nct = (minnp > 2147483646);
      }

      if (b_nct) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (mm = nct; mm + 1 <= minnp; mm++) {
        c_st.site = &cl_emlrtRSI;
        overflow = (A->size[0] > 2147483646);
        if (overflow) {
          d_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = 1; kase <= A->size[0]; kase++) {
          U->data[(kase + U->size[0] * mm) - 1] = 0.0;
        }

        U->data[mm + U->size[0] * mm] = 1.0;
      }
    }

    for (q = nct - 1; q + 1 > 0; q--) {
      iter = A->size[0] - q;
      pmq = q + A->size[0] * q;
      if (s->data[q] != 0.0) {
        c_st.site = &dl_emlrtRSI;
        for (mm = q + 1; mm + 1 <= minnp; mm++) {
          kase = (q + A->size[0] * mm) + 1;
          c_st.site = &el_emlrtRSI;
          ztest0 = eml_xdotc(&c_st, iter, U, pmq + 1, U, kase);
          ztest0 = -eml_div(ztest0, U->data[pmq]);
          c_st.site = &fl_emlrtRSI;
          eml_xaxpy(&c_st, iter, ztest0, pmq + 1, U, kase);
        }

        c_st.site = &gl_emlrtRSI;
        if (q + 1 > A->size[0]) {
          overflow = false;
        } else {
          overflow = (A->size[0] > 2147483646);
        }

        if (overflow) {
          d_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = q; kase + 1 <= A->size[0]; kase++) {
          U->data[kase + U->size[0] * q] = -U->data[kase + U->size[0] * q];
        }

        U->data[pmq]++;
        c_st.site = &hl_emlrtRSI;
        for (kase = 1; kase <= q; kase++) {
          U->data[(kase + U->size[0] * q) - 1] = 0.0;
        }
      } else {
        c_st.site = &il_emlrtRSI;
        overflow = (A->size[0] > 2147483646);
        if (overflow) {
          d_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (kase = 1; kase <= A->size[0]; kase++) {
          U->data[(kase + U->size[0] * q) - 1] = 0.0;
        }

        U->data[pmq] = 1.0;
      }
    }

    for (q = A->size[1] - 1; q + 1 > 0; q--) {
      if ((q + 1 <= nrt) && (e->data[q] != 0.0)) {
        pmq = (A->size[1] - q) - 1;
        kase = (q + A->size[1] * q) + 2;
        c_st.site = &jl_emlrtRSI;
        if (q + 2 > A->size[1]) {
          overflow = false;
        } else {
          overflow = (A->size[1] > 2147483646);
        }

        if (overflow) {
          d_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&d_st);
        }

        for (mm = q; mm + 2 <= A->size[1]; mm++) {
          qs = (q + A->size[1] * (mm + 1)) + 2;
          c_st.site = &kl_emlrtRSI;
          ztest0 = eml_xdotc(&c_st, pmq, V, kase, V, qs);
          ztest0 = -eml_div(ztest0, V->data[kase - 1]);
          c_st.site = &ll_emlrtRSI;
          eml_xaxpy(&c_st, pmq, ztest0, kase, V, qs);
        }
      }

      c_st.site = &ml_emlrtRSI;
      overflow = (A->size[1] > 2147483646);
      if (overflow) {
        d_st.site = &v_emlrtRSI;
        check_forloop_overflow_error(&d_st);
      }

      for (kase = 1; kase <= A->size[1]; kase++) {
        V->data[(kase + V->size[0] * q) - 1] = 0.0;
      }

      V->data[q + V->size[0] * q] = 1.0;
    }

    c_st.site = &nl_emlrtRSI;
    if (1 > m) {
      b14 = false;
    } else {
      b14 = (m > 2147483646);
    }

    if (b14) {
      d_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }

    for (q = 0; q + 1 <= m; q++) {
      if (s->data[q] != 0.0) {
        ztest = muDoubleScalarAbs(s->data[q]);
        ztest0 = eml_div(s->data[q], ztest);
        s->data[q] = ztest;
        if (q + 1 < m) {
          e->data[q] = eml_div(e->data[q], ztest0);
        }

        if (q + 1 <= A->size[0]) {
          nct = A->size[0] * q + 1;
          c_st.site = &ol_emlrtRSI;
          eml_xscal(&c_st, A->size[0], ztest0, U, nct);
        }
      }

      if ((q + 1 < m) && (e->data[q] != 0.0)) {
        ztest = muDoubleScalarAbs(e->data[q]);
        ztest0 = eml_div(ztest, e->data[q]);
        e->data[q] = ztest;
        s->data[q + 1] *= ztest0;
        nct = A->size[1] * (q + 1) + 1;
        c_st.site = &pl_emlrtRSI;
        eml_xscal(&c_st, A->size[1], ztest0, V, nct);
      }
    }

    mm = m;
    iter = 0;
    tiny = eml_div(2.2250738585072014E-308, 2.2204460492503131E-16);
    snorm = 0.0;
    c_st.site = &ql_emlrtRSI;
    for (kase = 0; kase + 1 <= m; kase++) {
      snorm = muDoubleScalarMax(snorm, muDoubleScalarMax(muDoubleScalarAbs
        (s->data[kase]), muDoubleScalarAbs(e->data[kase])));
    }

    exitg1 = false;
    while ((!exitg1) && (m > 0)) {
      if (iter >= 75) {
        c_st.site = &rl_emlrtRSI;
        c_eml_error(&c_st);
      } else {
        q = m - 1;
        exitg4 = false;
        while (!(exitg4 || (q == 0))) {
          ztest0 = muDoubleScalarAbs(e->data[q - 1]);
          if ((ztest0 <= 2.2204460492503131E-16 * (muDoubleScalarAbs(s->data[q -
                 1]) + muDoubleScalarAbs(s->data[q]))) || (ztest0 <= tiny) ||
              ((iter > 20) && (ztest0 <= 2.2204460492503131E-16 * snorm))) {
            e->data[q - 1] = 0.0;
            exitg4 = true;
          } else {
            q--;
          }
        }

        if (q == m - 1) {
          kase = 4;
        } else {
          qs = m;
          kase = m;
          exitg3 = false;
          while ((!exitg3) && (kase >= q)) {
            qs = kase;
            if (kase == q) {
              exitg3 = true;
            } else {
              ztest0 = 0.0;
              if (kase < m) {
                ztest0 = muDoubleScalarAbs(e->data[kase - 1]);
              }

              if (kase > q + 1) {
                ztest0 += muDoubleScalarAbs(e->data[kase - 2]);
              }

              ztest = muDoubleScalarAbs(s->data[kase - 1]);
              if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <= tiny))
              {
                s->data[kase - 1] = 0.0;
                exitg3 = true;
              } else {
                kase--;
              }
            }
          }

          if (qs == q) {
            kase = 3;
          } else if (qs == m) {
            kase = 1;
          } else {
            kase = 2;
            q = qs;
          }
        }

        switch (kase) {
         case 1:
          f = e->data[m - 2];
          e->data[m - 2] = 0.0;
          for (kase = m - 2; kase + 1 >= q + 1; kase--) {
            ztest0 = s->data[kase];
            c_st.site = &cm_emlrtRSI;
            eml_xrotg(&ztest0, &f, &ztest, &b);
            s->data[kase] = ztest0;
            if (kase + 1 > q + 1) {
              f = -b * e->data[kase - 1];
              e->data[kase - 1] *= ztest;
            }

            nct = A->size[1] * kase + 1;
            pmq = A->size[1] * (m - 1) + 1;
            c_st.site = &dm_emlrtRSI;
            eml_xrot(&c_st, A->size[1], V, nct, pmq, ztest, b);
          }
          break;

         case 2:
          f = e->data[q - 1];
          e->data[q - 1] = 0.0;
          c_st.site = &yl_emlrtRSI;
          for (kase = q; kase + 1 <= m; kase++) {
            c_st.site = &am_emlrtRSI;
            eml_xrotg(&s->data[kase], &f, &ztest, &b);
            f = -b * e->data[kase];
            e->data[kase] *= ztest;
            nct = A->size[0] * kase + 1;
            pmq = A->size[0] * (q - 1) + 1;
            c_st.site = &bm_emlrtRSI;
            eml_xrot(&c_st, A->size[0], U, nct, pmq, ztest, b);
          }
          break;

         case 3:
          varargin_1[0] = muDoubleScalarAbs(s->data[m - 1]);
          varargin_1[1] = muDoubleScalarAbs(s->data[m - 2]);
          varargin_1[2] = muDoubleScalarAbs(e->data[m - 2]);
          varargin_1[3] = muDoubleScalarAbs(s->data[q]);
          varargin_1[4] = muDoubleScalarAbs(e->data[q]);
          kase = 1;
          mtmp = varargin_1[0];
          if (muDoubleScalarIsNaN(varargin_1[0])) {
            qs = 2;
            exitg2 = false;
            while ((!exitg2) && (qs < 6)) {
              kase = qs;
              if (!muDoubleScalarIsNaN(varargin_1[qs - 1])) {
                mtmp = varargin_1[qs - 1];
                exitg2 = true;
              } else {
                qs++;
              }
            }
          }

          if (kase < 5) {
            while (kase + 1 < 6) {
              if (varargin_1[kase] > mtmp) {
                mtmp = varargin_1[kase];
              }

              kase++;
            }
          }

          f = eml_div(s->data[m - 1], mtmp);
          ztest0 = eml_div(s->data[m - 2], mtmp);
          ztest = eml_div(e->data[m - 2], mtmp);
          sqds = eml_div(s->data[q], mtmp);
          b = eml_div((ztest0 + f) * (ztest0 - f) + ztest * ztest, 2.0);
          ztest0 = f * ztest;
          ztest0 *= ztest0;
          ztest = 0.0;
          if ((b != 0.0) || (ztest0 != 0.0)) {
            ztest = b * b + ztest0;
            c_st.site = &sl_emlrtRSI;
            c_sqrt(&c_st, &ztest);
            if (b < 0.0) {
              ztest = -ztest;
            }

            ztest = eml_div(ztest0, b + ztest);
          }

          f = (sqds + f) * (sqds - f) + ztest;
          ztest0 = sqds * eml_div(e->data[q], mtmp);
          c_st.site = &tl_emlrtRSI;
          for (kase = q + 1; kase < m; kase++) {
            c_st.site = &ul_emlrtRSI;
            eml_xrotg(&f, &ztest0, &ztest, &b);
            if (kase > q + 1) {
              e->data[kase - 2] = f;
            }

            f = ztest * s->data[kase - 1] + b * e->data[kase - 1];
            e->data[kase - 1] = ztest * e->data[kase - 1] - b * s->data[kase - 1];
            ztest0 = b * s->data[kase];
            s->data[kase] *= ztest;
            nct = A->size[1] * (kase - 1) + 1;
            pmq = A->size[1] * kase + 1;
            c_st.site = &vl_emlrtRSI;
            eml_xrot(&c_st, A->size[1], V, nct, pmq, ztest, b);
            s->data[kase - 1] = f;
            c_st.site = &wl_emlrtRSI;
            eml_xrotg(&s->data[kase - 1], &ztest0, &ztest, &b);
            f = ztest * e->data[kase - 1] + b * s->data[kase];
            s->data[kase] = -b * e->data[kase - 1] + ztest * s->data[kase];
            ztest0 = b * e->data[kase];
            e->data[kase] *= ztest;
            if (kase < A->size[0]) {
              nct = A->size[0] * (kase - 1) + 1;
              pmq = A->size[0] * kase + 1;
              c_st.site = &xl_emlrtRSI;
              eml_xrot(&c_st, A->size[0], U, nct, pmq, ztest, b);
            }
          }

          e->data[m - 2] = f;
          iter++;
          break;

         default:
          if (s->data[q] < 0.0) {
            s->data[q] = -s->data[q];
            nct = A->size[1] * q + 1;
            c_st.site = &em_emlrtRSI;
            eml_xscal(&c_st, A->size[1], -1.0, V, nct);
          }

          qs = q + 1;
          while ((q + 1 < mm) && (s->data[q] < s->data[qs])) {
            ztest = s->data[q];
            s->data[q] = s->data[qs];
            s->data[qs] = ztest;
            if (q + 1 < A->size[1]) {
              nct = A->size[1] * q + 1;
              pmq = A->size[1] * (q + 1) + 1;
              c_st.site = &fm_emlrtRSI;
              eml_xswap(&c_st, A->size[1], V, nct, pmq);
            }

            if (q + 1 < A->size[0]) {
              nct = A->size[0] * q + 1;
              pmq = A->size[0] * (q + 1) + 1;
              c_st.site = &gm_emlrtRSI;
              eml_xswap(&c_st, A->size[0], U, nct, pmq);
            }

            q = qs;
            qs++;
          }

          iter = 0;
          m--;
          break;
        }
      }
    }
  }

  nct = S->size[0];
  S->size[0] = minnp;
  emxEnsureCapacity(&b_st, (emxArray__common *)S, nct, (int32_T)sizeof(real_T),
                    &hd_emlrtRTEI);
  c_st.site = &hm_emlrtRSI;
  if (1 > minnp) {
    b15 = false;
  } else {
    b15 = (minnp > 2147483646);
  }

  if (b15) {
    d_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }

  for (kase = 0; kase + 1 <= minnp; kase++) {
    S->data[kase] = s->data[kase];
  }

  emxFree_real_T(&s);
  emxFree_real_T(&work);
  emxFree_real_T(&e);
  emxFree_real_T(&b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

static void eml_xrot(const emlrtStack *sp, int32_T n, emxArray_real_T *x,
                     int32_T ix0, int32_T iy0, real_T c, real_T s)
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  int32_T i59;
  double * xix0_t;
  double * c_t;
  double * s_t;
  double * xiy0_t;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &pm_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (n < 1) {
  } else {
    b_st.site = &qm_emlrtRSI;
    n_t = (ptrdiff_t)(n);
    incx_t = (ptrdiff_t)(1);
    incy_t = (ptrdiff_t)(1);
    i59 = x->size[0] * x->size[1];
    xix0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(ix0, 1, i59,
      &of_emlrtBCI, &b_st) - 1]);
    c_t = (double *)(&c);
    s_t = (double *)(&s);
    i59 = x->size[0] * x->size[1];
    xiy0_t = (double *)(&x->data[emlrtDynamicBoundsCheckFastR2012b(iy0, 1, i59,
      &of_emlrtBCI, &b_st) - 1]);
    drot(&n_t, xix0_t, &incx_t, xiy0_t, &incy_t, c_t, s_t);
  }
}

static void eml_xrotg(real_T *a, real_T *b, real_T *c, real_T *s)
{
  real_T b_b;
  real_T b_a;
  double * a_t;
  double * b_t;
  double * c_t;
  double * s_t;
  b_b = *b;
  b_a = *a;
  *c = 0.0;
  *s = 0.0;
  a_t = (double *)(&b_a);
  b_t = (double *)(&b_b);
  c_t = (double *)(c);
  s_t = (double *)(s);
  drotg(a_t, b_t, c_t, s_t);
  *a = b_a;
  *b = b_b;
}

void svd(const emlrtStack *sp, const emxArray_real_T *A, emxArray_real_T *U,
         emxArray_real_T *S, emxArray_real_T *V)
{
  int32_T b;
  boolean_T b11;
  int32_T k;
  emxArray_real_T *s;
  uint32_T uv1[2];
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b = A->size[0] * A->size[1];
  st.site = &ek_emlrtRSI;
  if (1 > b) {
    b11 = false;
  } else {
    b11 = (b > 2147483646);
  }

  if (b11) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }

  for (k = 0; k + 1 <= b; k++) {
    if (!((!muDoubleScalarIsInf(A->data[k])) && (!muDoubleScalarIsNaN(A->data[k]))))
    {
      st.site = &fk_emlrtRSI;
      b_eml_error(&st);
    }
  }

  b_emxInit_real_T(sp, &s, 1, &fd_emlrtRTEI, true);
  st.site = &gk_emlrtRSI;
  eml_xgesvd(&st, A, U, s, V);
  if (A->size[0] >= A->size[1]) {
    b = s->size[0];
    k = S->size[0] * S->size[1];
    S->size[0] = b;
    emxEnsureCapacity(sp, (emxArray__common *)S, k, (int32_T)sizeof(real_T),
                      &fd_emlrtRTEI);
    b = s->size[0];
    k = S->size[0] * S->size[1];
    S->size[1] = b;
    emxEnsureCapacity(sp, (emxArray__common *)S, k, (int32_T)sizeof(real_T),
                      &fd_emlrtRTEI);
    b = s->size[0] * s->size[0];
    for (k = 0; k < b; k++) {
      S->data[k] = 0.0;
    }
  } else {
    for (k = 0; k < 2; k++) {
      uv1[k] = (uint32_T)A->size[k];
    }

    k = S->size[0] * S->size[1];
    S->size[0] = (int32_T)uv1[0];
    emxEnsureCapacity(sp, (emxArray__common *)S, k, (int32_T)sizeof(real_T),
                      &fd_emlrtRTEI);
    k = S->size[0] * S->size[1];
    S->size[1] = (int32_T)uv1[1];
    emxEnsureCapacity(sp, (emxArray__common *)S, k, (int32_T)sizeof(real_T),
                      &fd_emlrtRTEI);
    b = (int32_T)uv1[0] * (int32_T)uv1[1];
    for (k = 0; k < b; k++) {
      S->data[k] = 0.0;
    }
  }

  for (k = 0; k < s->size[0]; k++) {
    S->data[k + S->size[0] * k] = s->data[k];
  }

  emxFree_real_T(&s);
  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (svd.c) */
