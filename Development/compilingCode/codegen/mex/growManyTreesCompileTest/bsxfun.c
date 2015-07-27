/*
 * bsxfun.c
 *
 * Code generation for function 'bsxfun'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "bsxfun.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "eml_int_forloop_overflow_check.h"
#include "rdivide.h"
#include "growManyTreesCompileTest_mexutil.h"
#include "growManyTreesCompileTest_data.h"

/* Variable Definitions */
static emlrtRSInfo rf_emlrtRSI = { 87, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo sf_emlrtRSI = { 81, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo tf_emlrtRSI = { 75, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo wg_emlrtRSI = { 77, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo yn_emlrtRSI = { 85, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo ao_emlrtRSI = { 15, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo bo_emlrtRSI = { 9, "eml_div",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_div.m"
};

static emlrtMCInfo db_emlrtMCI = { 22, 5, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtMCInfo eb_emlrtMCI = { 21, 15, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtMCInfo fb_emlrtMCI = { 24, 5, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtMCInfo gb_emlrtMCI = { 23, 15, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtMCInfo tb_emlrtMCI = { 14, 5, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtMCInfo ub_emlrtMCI = { 13, 15, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRTEInfo bc_emlrtRTEI = { 41, 1, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo cc_emlrtRTEI = { 66, 1, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo dc_emlrtRTEI = { 1, 14, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo ec_emlrtRTEI = { 85, 5, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo mc_emlrtRTEI = { 65, 1, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtECInfo pb_emlrtECI = { -1, 1, 1, "div",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\div.p"
};

static emlrtRSInfo vo_emlrtRSI = { 13, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo wo_emlrtRSI = { 23, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo xo_emlrtRSI = { 21, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo tp_emlrtRSI = { 14, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo up_emlrtRSI = { 24, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo vp_emlrtRSI = { 22, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

/* Function Definitions */
void b_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
              emxArray_real_T *b, emxArray_boolean_T *c)
{
  int32_T b_idx_0;
  int32_T b_b_idx_0;
  int32_T b_idx_1;
  emxArray_real_T *bv;
  int32_T asub;
  int32_T ak;
  int32_T b_b;
  boolean_T overflow;
  int32_T ck;
  emxArray_boolean_T *cv;
  int32_T exitg1;
  real_T b_a;
  int32_T exitg2;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  b_idx_0 = c->size[0] * c->size[1];
  c->size[0] = b->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, b_idx_0, (int32_T)sizeof
                    (boolean_T), &bc_emlrtRTEI);
  b_b_idx_0 = b->size[0];
  b_idx_1 = a->size[1];
  if ((b_b_idx_0 == 0) || (b_idx_1 == 0)) {
  } else {
    b_emxInit_real_T(sp, &bv, 1, &cc_emlrtRTEI, true);
    b_idx_1 = b->size[0];
    b_idx_0 = bv->size[0];
    bv->size[0] = b_idx_1;
    emxEnsureCapacity(sp, (emxArray__common *)bv, b_idx_0, (int32_T)sizeof
                      (real_T), &cc_emlrtRTEI);
    asub = 1;
    ak = 0;
    b_b_idx_0 = b->size[0];
    b_idx_1 = a->size[1];
    b_idx_0 = b->size[0];
    b_b = b_b_idx_0 * b_idx_1 - b_idx_0;
    st.site = &tf_emlrtRSI;
    b_b_idx_0 = b->size[0];
    if ((b_b_idx_0 == 0) || (0 > b_b)) {
      overflow = false;
    } else {
      b_b_idx_0 = b->size[0];
      overflow = (b_b > MAX_int32_T - b_b_idx_0);
    }

    if (overflow) {
      b_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&b_st);
    }

    ck = 0;
    emxInit_boolean_T(sp, &cv, 1, &ec_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_b_idx_0 = b->size[0];
      if ((b_b_idx_0 > 0) && (ck <= b_b)) {
        st.site = &sf_emlrtRSI;
        if (1 > b->size[0]) {
          overflow = false;
        } else {
          overflow = (b->size[0] > 2147483646);
        }

        if (overflow) {
          b_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&b_st);
        }

        for (b_idx_1 = 0; b_idx_1 + 1 <= b->size[0]; b_idx_1++) {
          bv->data[b_idx_1] = b->data[b_idx_1];
        }

        b_a = a->data[ak];
        b_idx_0 = cv->size[0];
        cv->size[0] = bv->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)cv, b_idx_0, (int32_T)sizeof
                          (boolean_T), &dc_emlrtRTEI);
        b_idx_1 = bv->size[0];
        for (b_idx_0 = 0; b_idx_0 < b_idx_1; b_idx_0++) {
          cv->data[b_idx_0] = (b_a == bv->data[b_idx_0]);
        }

        st.site = &rf_emlrtRSI;
        b_idx_1 = 0;
        do {
          exitg2 = 0;
          b_b_idx_0 = b->size[0];
          if (b_idx_1 + 1 <= b_b_idx_0) {
            c->data[ck + b_idx_1] = cv->data[b_idx_1];
            b_idx_1++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak++;
          asub++;
        } else {
          asub = 1;
        }

        b_b_idx_0 = b->size[0];
        ck += b_b_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_boolean_T(&cv);
    emxFree_real_T(&bv);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void bsxfun(real_T a, const real_T b[2], boolean_T c[2])
{
  int32_T bk;
  int32_T ck;
  bk = 0;
  for (ck = 0; ck < 2; ck++) {
    c[ck] = (a == b[bk]);
    bk++;
  }
}

void c_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
              emxArray_real_T *b, emxArray_boolean_T *c)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv42[2] = { 1, 44 };

  const mxArray *m14;
  char_T cv48[44];
  int32_T i;
  static const char_T cv49[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv43[2] = { 1, 37 };

  char_T cv50[37];
  static const char_T cv51[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'd', 'y', 'n',
    'a', 'm', 'i', 'c', 'E', 'x', 'p', 'a', 'n', 's', 'i', 'o', 'n' };

  int32_T a_idx_0;
  int32_T b_a_idx_0;
  emxArray_real_T *av;
  int32_T asub;
  int32_T bsub;
  int32_T ak;
  int32_T bk;
  int32_T b_b;
  int32_T ck;
  emxArray_boolean_T *cv;
  int32_T exitg1;
  real_T c_b;
  int32_T exitg2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if ((a->size[1] != 1) && (b->size[1] != 1) && (a->size[1] != b->size[1])) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    y = NULL;
    m14 = emlrtCreateCharArray(2, iv42);
    for (i = 0; i < 44; i++) {
      cv48[i] = cv49[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m14, cv48);
    emlrtAssign(&y, m14);
    st.site = &xo_emlrtRSI;
    b_st.site = &vp_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m14 = emlrtCreateCharArray(2, iv43);
    for (i = 0; i < 37; i++) {
      cv50[i] = cv51[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m14, cv50);
    emlrtAssign(&b_y, m14);
    st.site = &wo_emlrtRSI;
    b_st.site = &up_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  a_idx_0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, a_idx_0, (int32_T)sizeof
                    (boolean_T), &bc_emlrtRTEI);
  b_a_idx_0 = a->size[0];
  i = a->size[1];
  if ((b_a_idx_0 == 0) || (i == 0)) {
  } else {
    b_emxInit_real_T(sp, &av, 1, &mc_emlrtRTEI, true);
    i = a->size[0];
    a_idx_0 = av->size[0];
    av->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)av, a_idx_0, (int32_T)sizeof
                      (real_T), &mc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    b_a_idx_0 = a->size[0];
    i = a->size[1];
    a_idx_0 = a->size[0];
    b_b = b_a_idx_0 * i - a_idx_0;
    st.site = &tf_emlrtRSI;
    b_a_idx_0 = a->size[0];
    if ((b_a_idx_0 == 0) || (0 > b_b)) {
      overflow = false;
    } else {
      b_a_idx_0 = a->size[0];
      overflow = (b_b > MAX_int32_T - b_a_idx_0);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    ck = 0;
    emxInit_boolean_T(sp, &cv, 1, &ec_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_a_idx_0 = a->size[0];
      if ((b_a_idx_0 > 0) && (ck <= b_b)) {
        st.site = &wg_emlrtRSI;
        if (1 > a->size[0]) {
          overflow = false;
        } else {
          overflow = (a->size[0] > 2147483646);
        }

        if (overflow) {
          c_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i + 1 <= a->size[0]; i++) {
          av->data[i] = a->data[ak + i];
        }

        c_b = b->data[bk];
        a_idx_0 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)cv, a_idx_0, (int32_T)sizeof
                          (boolean_T), &dc_emlrtRTEI);
        i = av->size[0];
        for (a_idx_0 = 0; a_idx_0 < i; a_idx_0++) {
          cv->data[a_idx_0] = (av->data[a_idx_0] == c_b);
        }

        st.site = &rf_emlrtRSI;
        i = 0;
        do {
          exitg2 = 0;
          b_a_idx_0 = a->size[0];
          if (i + 1 <= b_a_idx_0) {
            c->data[ck + i] = cv->data[i];
            i++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          bk++;
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk++;
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        b_a_idx_0 = a->size[0];
        ck += b_a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_boolean_T(&cv);
    emxFree_real_T(&av);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void d_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
              emxArray_real_T *b, emxArray_real_T *c)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv51[2] = { 1, 44 };

  const mxArray *m17;
  char_T cv62[44];
  int32_T i;
  static const char_T cv63[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv52[2] = { 1, 37 };

  char_T cv64[37];
  static const char_T cv65[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'd', 'y', 'n',
    'a', 'm', 'i', 'c', 'E', 'x', 'p', 'a', 'n', 's', 'i', 'o', 'n' };

  int32_T a_idx_0;
  int32_T b_a_idx_0;
  emxArray_real_T *av;
  int32_T asub;
  int32_T bsub;
  int32_T ak;
  int32_T bk;
  int32_T b_b;
  int32_T ck;
  emxArray_real_T *cv;
  int32_T exitg1;
  real_T c_b;
  int32_T exitg2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if ((a->size[1] != 1) && (b->size[1] != 1) && (a->size[1] != b->size[1])) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    y = NULL;
    m17 = emlrtCreateCharArray(2, iv51);
    for (i = 0; i < 44; i++) {
      cv62[i] = cv63[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m17, cv62);
    emlrtAssign(&y, m17);
    st.site = &xo_emlrtRSI;
    b_st.site = &vp_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m17 = emlrtCreateCharArray(2, iv52);
    for (i = 0; i < 37; i++) {
      cv64[i] = cv65[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m17, cv64);
    emlrtAssign(&b_y, m17);
    st.site = &wo_emlrtRSI;
    b_st.site = &up_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  a_idx_0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, a_idx_0, (int32_T)sizeof(real_T),
                    &bc_emlrtRTEI);
  b_a_idx_0 = a->size[0];
  i = a->size[1];
  if ((b_a_idx_0 == 0) || (i == 0)) {
  } else {
    b_emxInit_real_T(sp, &av, 1, &mc_emlrtRTEI, true);
    i = a->size[0];
    a_idx_0 = av->size[0];
    av->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)av, a_idx_0, (int32_T)sizeof
                      (real_T), &mc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    b_a_idx_0 = a->size[0];
    i = a->size[1];
    a_idx_0 = a->size[0];
    b_b = b_a_idx_0 * i - a_idx_0;
    st.site = &tf_emlrtRSI;
    b_a_idx_0 = a->size[0];
    if ((b_a_idx_0 == 0) || (0 > b_b)) {
      overflow = false;
    } else {
      b_a_idx_0 = a->size[0];
      overflow = (b_b > MAX_int32_T - b_a_idx_0);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    ck = 0;
    b_emxInit_real_T(sp, &cv, 1, &ec_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_a_idx_0 = a->size[0];
      if ((b_a_idx_0 > 0) && (ck <= b_b)) {
        st.site = &wg_emlrtRSI;
        if (1 > a->size[0]) {
          overflow = false;
        } else {
          overflow = (a->size[0] > 2147483646);
        }

        if (overflow) {
          c_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i + 1 <= a->size[0]; i++) {
          av->data[i] = a->data[ak + i];
        }

        c_b = b->data[bk];
        a_idx_0 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)cv, a_idx_0, (int32_T)sizeof
                          (real_T), &dc_emlrtRTEI);
        i = av->size[0];
        for (a_idx_0 = 0; a_idx_0 < i; a_idx_0++) {
          cv->data[a_idx_0] = av->data[a_idx_0] - c_b;
        }

        st.site = &rf_emlrtRSI;
        i = 0;
        do {
          exitg2 = 0;
          b_a_idx_0 = a->size[0];
          if (i + 1 <= b_a_idx_0) {
            c->data[ck + i] = cv->data[i];
            i++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          bk++;
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk++;
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        b_a_idx_0 = a->size[0];
        ck += b_a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_real_T(&av);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void e_bsxfun(const emlrtStack *sp, const emxArray_boolean_T *a, const
              emxArray_real_T *b, emxArray_real_T *c)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv55[2] = { 1, 44 };

  const mxArray *m20;
  char_T cv70[44];
  int32_T i;
  static const char_T cv71[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv56[2] = { 1, 37 };

  char_T cv72[37];
  static const char_T cv73[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'd', 'y', 'n',
    'a', 'm', 'i', 'c', 'E', 'x', 'p', 'a', 'n', 's', 'i', 'o', 'n' };

  int32_T a_idx_0;
  int32_T b_a_idx_0;
  emxArray_boolean_T *av;
  int32_T asub;
  int32_T bsub;
  int32_T ak;
  int32_T bk;
  int32_T b_b;
  int32_T ck;
  emxArray_real_T *cv;
  int32_T exitg1;
  real_T c_b;
  int32_T exitg2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if ((a->size[1] != 1) && (b->size[1] != 1) && (a->size[1] != b->size[1])) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    y = NULL;
    m20 = emlrtCreateCharArray(2, iv55);
    for (i = 0; i < 44; i++) {
      cv70[i] = cv71[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m20, cv70);
    emlrtAssign(&y, m20);
    st.site = &xo_emlrtRSI;
    b_st.site = &vp_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m20 = emlrtCreateCharArray(2, iv56);
    for (i = 0; i < 37; i++) {
      cv72[i] = cv73[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m20, cv72);
    emlrtAssign(&b_y, m20);
    st.site = &wo_emlrtRSI;
    b_st.site = &up_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  a_idx_0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, a_idx_0, (int32_T)sizeof(real_T),
                    &bc_emlrtRTEI);
  b_a_idx_0 = a->size[0];
  i = a->size[1];
  if ((b_a_idx_0 == 0) || (i == 0)) {
  } else {
    emxInit_boolean_T(sp, &av, 1, &mc_emlrtRTEI, true);
    i = a->size[0];
    a_idx_0 = av->size[0];
    av->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)av, a_idx_0, (int32_T)sizeof
                      (boolean_T), &mc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    b_a_idx_0 = a->size[0];
    i = a->size[1];
    a_idx_0 = a->size[0];
    b_b = b_a_idx_0 * i - a_idx_0;
    st.site = &tf_emlrtRSI;
    b_a_idx_0 = a->size[0];
    if ((b_a_idx_0 == 0) || (0 > b_b)) {
      overflow = false;
    } else {
      b_a_idx_0 = a->size[0];
      overflow = (b_b > MAX_int32_T - b_a_idx_0);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    ck = 0;
    b_emxInit_real_T(sp, &cv, 1, &ec_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_a_idx_0 = a->size[0];
      if ((b_a_idx_0 > 0) && (ck <= b_b)) {
        st.site = &wg_emlrtRSI;
        if (1 > a->size[0]) {
          overflow = false;
        } else {
          overflow = (a->size[0] > 2147483646);
        }

        if (overflow) {
          c_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i + 1 <= a->size[0]; i++) {
          av->data[i] = a->data[ak + i];
        }

        c_b = b->data[bk];
        a_idx_0 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)cv, a_idx_0, (int32_T)sizeof
                          (real_T), &dc_emlrtRTEI);
        i = av->size[0];
        for (a_idx_0 = 0; a_idx_0 < i; a_idx_0++) {
          cv->data[a_idx_0] = (real_T)av->data[a_idx_0] - c_b;
        }

        st.site = &rf_emlrtRSI;
        i = 0;
        do {
          exitg2 = 0;
          b_a_idx_0 = a->size[0];
          if (i + 1 <= b_a_idx_0) {
            c->data[ck + i] = cv->data[i];
            i++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          bk++;
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk++;
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        b_a_idx_0 = a->size[0];
        ck += b_a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_boolean_T(&av);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void f_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
              emxArray_real_T *b, emxArray_real_T *c)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv65[2] = { 1, 44 };

  const mxArray *m28;
  char_T cv90[44];
  int32_T i;
  static const char_T cv91[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv66[2] = { 1, 37 };

  char_T cv92[37];
  static const char_T cv93[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'd', 'y', 'n',
    'a', 'm', 'i', 'c', 'E', 'x', 'p', 'a', 'n', 's', 'i', 'o', 'n' };

  int32_T a_idx_0;
  emxArray_real_T *av;
  int32_T unnamed_idx_0;
  int32_T asub;
  int32_T bsub;
  int32_T ak;
  int32_T bk;
  emxArray_real_T *cv;
  int32_T exitg1;
  int32_T k;
  int32_T exitg2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if ((a->size[1] != 1) && (b->size[1] != 1) && (a->size[1] != b->size[1])) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    y = NULL;
    m28 = emlrtCreateCharArray(2, iv65);
    for (i = 0; i < 44; i++) {
      cv90[i] = cv91[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m28, cv90);
    emlrtAssign(&y, m28);
    st.site = &xo_emlrtRSI;
    b_st.site = &vp_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m28 = emlrtCreateCharArray(2, iv66);
    for (i = 0; i < 37; i++) {
      cv92[i] = cv93[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m28, cv92);
    emlrtAssign(&b_y, m28);
    st.site = &wo_emlrtRSI;
    b_st.site = &up_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, i, (int32_T)sizeof(real_T),
                    &bc_emlrtRTEI);
  a_idx_0 = a->size[0];
  if (a_idx_0 == 0) {
  } else {
    b_emxInit_real_T(sp, &av, 1, &mc_emlrtRTEI, true);
    unnamed_idx_0 = a->size[0];
    i = av->size[0];
    av->size[0] = unnamed_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)av, i, (int32_T)sizeof(real_T),
                      &mc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    a_idx_0 = a->size[0];
    i = a->size[1];
    unnamed_idx_0 = a->size[0];
    i = a_idx_0 * i - unnamed_idx_0;
    st.site = &tf_emlrtRSI;
    a_idx_0 = a->size[0];
    if ((a_idx_0 == 0) || (0 > i)) {
      overflow = false;
    } else {
      a_idx_0 = a->size[0];
      overflow = (i > MAX_int32_T - a_idx_0);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    unnamed_idx_0 = 0;
    b_emxInit_real_T(sp, &cv, 1, &ec_emlrtRTEI, true);
    do {
      exitg1 = 0;
      a_idx_0 = a->size[0];
      if ((a_idx_0 > 0) && (unnamed_idx_0 <= i)) {
        st.site = &wg_emlrtRSI;
        if (1 > a->size[0]) {
          overflow = false;
        } else {
          overflow = (a->size[0] > 2147483646);
        }

        if (overflow) {
          c_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (k = 0; k + 1 <= a->size[0]; k++) {
          av->data[k] = a->data[ak + k];
        }

        rdivide(sp, av, b->data[bk], cv);
        st.site = &rf_emlrtRSI;
        k = 0;
        do {
          exitg2 = 0;
          a_idx_0 = a->size[0];
          if (k + 1 <= a_idx_0) {
            c->data[unnamed_idx_0 + k] = cv->data[k];
            k++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          bk++;
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk++;
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        a_idx_0 = a->size[0];
        unnamed_idx_0 += a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_real_T(&av);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void g_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
              emxArray_real_T *b, emxArray_real_T *c)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv69[2] = { 1, 44 };

  const mxArray *m30;
  char_T cv98[44];
  int32_T i;
  static const char_T cv99[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv70[2] = { 1, 37 };

  char_T cv100[37];
  static const char_T cv101[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'd', 'y', 'n',
    'a', 'm', 'i', 'c', 'E', 'x', 'p', 'a', 'n', 's', 'i', 'o', 'n' };

  int32_T b_idx_0;
  int32_T b_b_idx_0;
  emxArray_real_T *bv;
  int32_T asub;
  int32_T bsub;
  int32_T ak;
  int32_T bk;
  int32_T b_b;
  int32_T ck;
  emxArray_real_T *cv;
  int32_T exitg1;
  real_T b_a;
  int32_T exitg2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if ((a->size[1] != 1) && (b->size[1] != 1) && (a->size[1] != b->size[1])) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    y = NULL;
    m30 = emlrtCreateCharArray(2, iv69);
    for (i = 0; i < 44; i++) {
      cv98[i] = cv99[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m30, cv98);
    emlrtAssign(&y, m30);
    st.site = &xo_emlrtRSI;
    b_st.site = &vp_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m30 = emlrtCreateCharArray(2, iv70);
    for (i = 0; i < 37; i++) {
      cv100[i] = cv101[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m30, cv100);
    emlrtAssign(&b_y, m30);
    st.site = &wo_emlrtRSI;
    b_st.site = &up_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  b_idx_0 = c->size[0] * c->size[1];
  c->size[0] = b->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, b_idx_0, (int32_T)sizeof(real_T),
                    &bc_emlrtRTEI);
  b_b_idx_0 = b->size[0];
  i = a->size[1];
  if ((b_b_idx_0 == 0) || (i == 0)) {
  } else {
    b_emxInit_real_T(sp, &bv, 1, &cc_emlrtRTEI, true);
    i = b->size[0];
    b_idx_0 = bv->size[0];
    bv->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)bv, b_idx_0, (int32_T)sizeof
                      (real_T), &cc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    b_b_idx_0 = b->size[0];
    i = a->size[1];
    b_idx_0 = b->size[0];
    b_b = b_b_idx_0 * i - b_idx_0;
    st.site = &tf_emlrtRSI;
    b_b_idx_0 = b->size[0];
    if ((b_b_idx_0 == 0) || (0 > b_b)) {
      overflow = false;
    } else {
      b_b_idx_0 = b->size[0];
      overflow = (b_b > MAX_int32_T - b_b_idx_0);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    ck = 0;
    b_emxInit_real_T(sp, &cv, 1, &ec_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_b_idx_0 = b->size[0];
      if ((b_b_idx_0 > 0) && (ck <= b_b)) {
        st.site = &sf_emlrtRSI;
        if (1 > b->size[0]) {
          overflow = false;
        } else {
          overflow = (b->size[0] > 2147483646);
        }

        if (overflow) {
          c_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i + 1 <= b->size[0]; i++) {
          bv->data[i] = b->data[bk + i];
        }

        b_a = a->data[ak];
        b_idx_0 = cv->size[0];
        cv->size[0] = bv->size[0];
        emxEnsureCapacity(sp, (emxArray__common *)cv, b_idx_0, (int32_T)sizeof
                          (real_T), &dc_emlrtRTEI);
        i = bv->size[0];
        for (b_idx_0 = 0; b_idx_0 < i; b_idx_0++) {
          cv->data[b_idx_0] = b_a - bv->data[b_idx_0];
        }

        st.site = &rf_emlrtRSI;
        i = 0;
        do {
          exitg2 = 0;
          b_b_idx_0 = b->size[0];
          if (i + 1 <= b_b_idx_0) {
            c->data[ck + i] = cv->data[i];
            i++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak++;
          bk += b->size[0];
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk += b->size[0];
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        b_b_idx_0 = b->size[0];
        ck += b_b_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_real_T(&bv);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

void h_bsxfun(const emlrtStack *sp, const emxArray_real_T *a, const
              emxArray_real_T *b, emxArray_real_T *c)
{
  boolean_T overflow;
  const mxArray *y;
  static const int32_T iv71[2] = { 1, 44 };

  const mxArray *m31;
  char_T cv102[44];
  int32_T i;
  static const char_T cv103[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv72[2] = { 1, 37 };

  char_T cv104[37];
  static const char_T cv105[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'd', 'y', 'n',
    'a', 'm', 'i', 'c', 'E', 'x', 'p', 'a', 'n', 's', 'i', 'o', 'n' };

  int32_T a_idx_0;
  int32_T b_a_idx_0;
  emxArray_real_T *av;
  emxArray_real_T *bv;
  int32_T asub;
  int32_T ak;
  int32_T b_b;
  int32_T ck;
  emxArray_real_T *cv;
  int32_T exitg1;
  uint32_T varargin_1[2];
  uint32_T varargin_2[2];
  boolean_T p;
  boolean_T exitg3;
  const mxArray *c_y;
  static const int32_T iv73[2] = { 1, 15 };

  char_T cv106[15];
  static const char_T cv107[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  int32_T exitg2;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &st;
  d_st.tls = st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if ((a->size[0] != 1) && (b->size[0] != 1) && (a->size[0] != b->size[0])) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    y = NULL;
    m31 = emlrtCreateCharArray(2, iv71);
    for (i = 0; i < 44; i++) {
      cv102[i] = cv103[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m31, cv102);
    emlrtAssign(&y, m31);
    st.site = &xo_emlrtRSI;
    b_st.site = &vp_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &db_emlrtMCI), &eb_emlrtMCI);
  }

  if (a->size[0] != b->size[0]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m31 = emlrtCreateCharArray(2, iv72);
    for (i = 0; i < 37; i++) {
      cv104[i] = cv105[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m31, cv104);
    emlrtAssign(&b_y, m31);
    st.site = &wo_emlrtRSI;
    b_st.site = &up_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  a_idx_0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, a_idx_0, (int32_T)sizeof(real_T),
                    &bc_emlrtRTEI);
  b_a_idx_0 = a->size[0];
  i = a->size[1];
  if ((b_a_idx_0 == 0) || (i == 0)) {
  } else {
    b_emxInit_real_T(sp, &av, 1, &mc_emlrtRTEI, true);
    b_emxInit_real_T(sp, &bv, 1, &cc_emlrtRTEI, true);
    i = a->size[0];
    a_idx_0 = av->size[0];
    av->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)av, a_idx_0, (int32_T)sizeof
                      (real_T), &mc_emlrtRTEI);
    i = b->size[0];
    a_idx_0 = bv->size[0];
    bv->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)bv, a_idx_0, (int32_T)sizeof
                      (real_T), &cc_emlrtRTEI);
    asub = 1;
    ak = 0;
    b_a_idx_0 = a->size[0];
    i = a->size[1];
    a_idx_0 = a->size[0];
    b_b = b_a_idx_0 * i - a_idx_0;
    st.site = &tf_emlrtRSI;
    b_a_idx_0 = a->size[0];
    if ((b_a_idx_0 == 0) || (0 > b_b)) {
      overflow = false;
    } else {
      b_a_idx_0 = a->size[0];
      overflow = (b_b > MAX_int32_T - b_a_idx_0);
    }

    if (overflow) {
      c_st.site = &v_emlrtRSI;
      check_forloop_overflow_error(&c_st);
    }

    ck = 0;
    b_emxInit_real_T(sp, &cv, 1, &ec_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_a_idx_0 = a->size[0];
      if ((b_a_idx_0 > 0) && (ck <= b_b)) {
        st.site = &wg_emlrtRSI;
        if (1 > a->size[0]) {
          overflow = false;
        } else {
          overflow = (a->size[0] > 2147483646);
        }

        if (overflow) {
          c_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i + 1 <= a->size[0]; i++) {
          av->data[i] = a->data[ak + i];
        }

        st.site = &sf_emlrtRSI;
        if (1 > b->size[0]) {
          overflow = false;
        } else {
          overflow = (b->size[0] > 2147483646);
        }

        if (overflow) {
          c_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }

        for (i = 0; i + 1 <= b->size[0]; i++) {
          bv->data[i] = b->data[i];
        }

        st.site = &yn_emlrtRSI;
        varargin_1[0] = (uint32_T)av->size[0];
        varargin_1[1] = 1U;
        varargin_2[0] = (uint32_T)bv->size[0];
        varargin_2[1] = 1U;
        overflow = false;
        p = true;
        i = 0;
        exitg3 = false;
        while ((!exitg3) && (i < 2)) {
          if (!(varargin_1[i] == varargin_2[i])) {
            p = false;
            exitg3 = true;
          } else {
            i++;
          }
        }

        if (!p) {
        } else {
          overflow = true;
        }

        if (overflow) {
        } else {
          c_y = NULL;
          m31 = emlrtCreateCharArray(2, iv73);
          for (i = 0; i < 15; i++) {
            cv106[i] = cv107[i];
          }

          emlrtInitCharArrayR2013a(&st, 15, m31, cv106);
          emlrtAssign(&c_y, m31);
          c_st.site = &vo_emlrtRSI;
          d_st.site = &tp_emlrtRSI;
          f_error(&c_st, b_message(&d_st, c_y, &tb_emlrtMCI), &ub_emlrtMCI);
        }

        c_st.site = &ao_emlrtRSI;
        e_st.site = &bo_emlrtRSI;
        a_idx_0 = av->size[0];
        i = bv->size[0];
        emlrtSizeEqCheck1DFastR2012b(a_idx_0, i, &pb_emlrtECI, &e_st);
        a_idx_0 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity(&e_st, (emxArray__common *)cv, a_idx_0, (int32_T)
                          sizeof(real_T), &dc_emlrtRTEI);
        i = av->size[0];
        for (a_idx_0 = 0; a_idx_0 < i; a_idx_0++) {
          cv->data[a_idx_0] = av->data[a_idx_0] / bv->data[a_idx_0];
        }

        st.site = &rf_emlrtRSI;
        i = 0;
        do {
          exitg2 = 0;
          b_a_idx_0 = a->size[0];
          if (i + 1 <= b_a_idx_0) {
            c->data[ck + i] = cv->data[i];
            i++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          asub++;
        } else {
          asub = 1;
        }

        b_a_idx_0 = a->size[0];
        ck += b_a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_real_T(&bv);
    emxFree_real_T(&av);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (bsxfun.c) */
