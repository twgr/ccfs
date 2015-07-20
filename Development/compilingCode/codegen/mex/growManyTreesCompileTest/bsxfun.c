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
static emlrtRSInfo sf_emlrtRSI = { 87, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo tf_emlrtRSI = { 81, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo uf_emlrtRSI = { 75, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo rh_emlrtRSI = { 77, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo to_emlrtRSI = { 85, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo uo_emlrtRSI = { 15, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo vo_emlrtRSI = { 9, "eml_div",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\eml\\eml_div.m"
};

static emlrtMCInfo fb_emlrtMCI = { 22, 5, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtMCInfo gb_emlrtMCI = { 21, 15, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtMCInfo hb_emlrtMCI = { 24, 5, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtMCInfo ib_emlrtMCI = { 23, 15, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtMCInfo wb_emlrtMCI = { 14, 5, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtMCInfo xb_emlrtMCI = { 13, 15, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRTEInfo ec_emlrtRTEI = { 41, 1, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo fc_emlrtRTEI = { 66, 1, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo gc_emlrtRTEI = { 1, 14, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo hc_emlrtRTEI = { 85, 5, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRTEInfo yc_emlrtRTEI = { 65, 1, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtECInfo pb_emlrtECI = { -1, 1, 1, "div",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\coder\\coder\\+coder\\+internal\\div.p"
};

static emlrtRSInfo rp_emlrtRSI = { 13, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo sp_emlrtRSI = { 23, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo tp_emlrtRSI = { 21, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo qq_emlrtRSI = { 14, "rdivide",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\ops\\rdivide.m"
};

static emlrtRSInfo rq_emlrtRSI = { 24, "bsxfun",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\elmat\\bsxfun.m"
};

static emlrtRSInfo sq_emlrtRSI = { 22, "bsxfun",
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
                    (boolean_T), &ec_emlrtRTEI);
  b_b_idx_0 = b->size[0];
  b_idx_1 = a->size[1];
  if ((b_b_idx_0 == 0) || (b_idx_1 == 0)) {
  } else {
    emxInit_real_T(sp, &bv, 1, &fc_emlrtRTEI, true);
    b_idx_1 = b->size[0];
    b_idx_0 = bv->size[0];
    bv->size[0] = b_idx_1;
    emxEnsureCapacity(sp, (emxArray__common *)bv, b_idx_0, (int32_T)sizeof
                      (real_T), &fc_emlrtRTEI);
    asub = 1;
    ak = 0;
    b_b_idx_0 = b->size[0];
    b_idx_1 = a->size[1];
    b_idx_0 = b->size[0];
    b_b = b_b_idx_0 * b_idx_1 - b_idx_0;
    st.site = &uf_emlrtRSI;
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
    emxInit_boolean_T(sp, &cv, 1, &hc_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_b_idx_0 = b->size[0];
      if ((b_b_idx_0 > 0) && (ck <= b_b)) {
        st.site = &tf_emlrtRSI;
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
                          (boolean_T), &gc_emlrtRTEI);
        b_idx_1 = bv->size[0];
        for (b_idx_0 = 0; b_idx_0 < b_idx_1; b_idx_0++) {
          cv->data[b_idx_0] = (b_a == bv->data[b_idx_0]);
        }

        st.site = &sf_emlrtRSI;
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
  static const int32_T iv70[2] = { 1, 44 };

  const mxArray *m15;
  char_T cv49[44];
  int32_T i;
  static const char_T cv50[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv71[2] = { 1, 37 };

  char_T cv51[37];
  static const char_T cv52[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
    m15 = emlrtCreateCharArray(2, iv70);
    for (i = 0; i < 44; i++) {
      cv49[i] = cv50[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m15, cv49);
    emlrtAssign(&y, m15);
    st.site = &tp_emlrtRSI;
    b_st.site = &sq_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m15 = emlrtCreateCharArray(2, iv71);
    for (i = 0; i < 37; i++) {
      cv51[i] = cv52[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m15, cv51);
    emlrtAssign(&b_y, m15);
    st.site = &sp_emlrtRSI;
    b_st.site = &rq_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &hb_emlrtMCI), &ib_emlrtMCI);
  }

  a_idx_0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, a_idx_0, (int32_T)sizeof
                    (boolean_T), &ec_emlrtRTEI);
  b_a_idx_0 = a->size[0];
  i = a->size[1];
  if ((b_a_idx_0 == 0) || (i == 0)) {
  } else {
    emxInit_real_T(sp, &av, 1, &yc_emlrtRTEI, true);
    i = a->size[0];
    a_idx_0 = av->size[0];
    av->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)av, a_idx_0, (int32_T)sizeof
                      (real_T), &yc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    b_a_idx_0 = a->size[0];
    i = a->size[1];
    a_idx_0 = a->size[0];
    b_b = b_a_idx_0 * i - a_idx_0;
    st.site = &uf_emlrtRSI;
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
    emxInit_boolean_T(sp, &cv, 1, &hc_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_a_idx_0 = a->size[0];
      if ((b_a_idx_0 > 0) && (ck <= b_b)) {
        st.site = &rh_emlrtRSI;
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
                          (boolean_T), &gc_emlrtRTEI);
        i = av->size[0];
        for (a_idx_0 = 0; a_idx_0 < i; a_idx_0++) {
          cv->data[a_idx_0] = (av->data[a_idx_0] == c_b);
        }

        st.site = &sf_emlrtRSI;
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
  static const int32_T iv82[2] = { 1, 44 };

  const mxArray *m18;
  char_T cv63[44];
  int32_T i;
  static const char_T cv64[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv83[2] = { 1, 37 };

  char_T cv65[37];
  static const char_T cv66[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
    m18 = emlrtCreateCharArray(2, iv82);
    for (i = 0; i < 44; i++) {
      cv63[i] = cv64[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m18, cv63);
    emlrtAssign(&y, m18);
    st.site = &tp_emlrtRSI;
    b_st.site = &sq_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m18 = emlrtCreateCharArray(2, iv83);
    for (i = 0; i < 37; i++) {
      cv65[i] = cv66[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m18, cv65);
    emlrtAssign(&b_y, m18);
    st.site = &sp_emlrtRSI;
    b_st.site = &rq_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &hb_emlrtMCI), &ib_emlrtMCI);
  }

  a_idx_0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, a_idx_0, (int32_T)sizeof(real_T),
                    &ec_emlrtRTEI);
  b_a_idx_0 = a->size[0];
  i = a->size[1];
  if ((b_a_idx_0 == 0) || (i == 0)) {
  } else {
    emxInit_real_T(sp, &av, 1, &yc_emlrtRTEI, true);
    i = a->size[0];
    a_idx_0 = av->size[0];
    av->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)av, a_idx_0, (int32_T)sizeof
                      (real_T), &yc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    b_a_idx_0 = a->size[0];
    i = a->size[1];
    a_idx_0 = a->size[0];
    b_b = b_a_idx_0 * i - a_idx_0;
    st.site = &uf_emlrtRSI;
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
    emxInit_real_T(sp, &cv, 1, &hc_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_a_idx_0 = a->size[0];
      if ((b_a_idx_0 > 0) && (ck <= b_b)) {
        st.site = &rh_emlrtRSI;
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
                          (real_T), &gc_emlrtRTEI);
        i = av->size[0];
        for (a_idx_0 = 0; a_idx_0 < i; a_idx_0++) {
          cv->data[a_idx_0] = av->data[a_idx_0] - c_b;
        }

        st.site = &sf_emlrtRSI;
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
  static const int32_T iv86[2] = { 1, 44 };

  const mxArray *m21;
  char_T cv71[44];
  int32_T i;
  static const char_T cv72[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv87[2] = { 1, 37 };

  char_T cv73[37];
  static const char_T cv74[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
    m21 = emlrtCreateCharArray(2, iv86);
    for (i = 0; i < 44; i++) {
      cv71[i] = cv72[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m21, cv71);
    emlrtAssign(&y, m21);
    st.site = &tp_emlrtRSI;
    b_st.site = &sq_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m21 = emlrtCreateCharArray(2, iv87);
    for (i = 0; i < 37; i++) {
      cv73[i] = cv74[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m21, cv73);
    emlrtAssign(&b_y, m21);
    st.site = &sp_emlrtRSI;
    b_st.site = &rq_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &hb_emlrtMCI), &ib_emlrtMCI);
  }

  a_idx_0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, a_idx_0, (int32_T)sizeof(real_T),
                    &ec_emlrtRTEI);
  b_a_idx_0 = a->size[0];
  i = a->size[1];
  if ((b_a_idx_0 == 0) || (i == 0)) {
  } else {
    emxInit_boolean_T(sp, &av, 1, &yc_emlrtRTEI, true);
    i = a->size[0];
    a_idx_0 = av->size[0];
    av->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)av, a_idx_0, (int32_T)sizeof
                      (boolean_T), &yc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    b_a_idx_0 = a->size[0];
    i = a->size[1];
    a_idx_0 = a->size[0];
    b_b = b_a_idx_0 * i - a_idx_0;
    st.site = &uf_emlrtRSI;
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
    emxInit_real_T(sp, &cv, 1, &hc_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_a_idx_0 = a->size[0];
      if ((b_a_idx_0 > 0) && (ck <= b_b)) {
        st.site = &rh_emlrtRSI;
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
                          (real_T), &gc_emlrtRTEI);
        i = av->size[0];
        for (a_idx_0 = 0; a_idx_0 < i; a_idx_0++) {
          cv->data[a_idx_0] = (real_T)av->data[a_idx_0] - c_b;
        }

        st.site = &sf_emlrtRSI;
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
  static const int32_T iv100[2] = { 1, 44 };

  const mxArray *m32;
  char_T cv98[44];
  int32_T i;
  static const char_T cv99[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv101[2] = { 1, 37 };

  char_T cv100[37];
  static const char_T cv101[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
    m32 = emlrtCreateCharArray(2, iv100);
    for (i = 0; i < 44; i++) {
      cv98[i] = cv99[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m32, cv98);
    emlrtAssign(&y, m32);
    st.site = &tp_emlrtRSI;
    b_st.site = &sq_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m32 = emlrtCreateCharArray(2, iv101);
    for (i = 0; i < 37; i++) {
      cv100[i] = cv101[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m32, cv100);
    emlrtAssign(&b_y, m32);
    st.site = &sp_emlrtRSI;
    b_st.site = &rq_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &hb_emlrtMCI), &ib_emlrtMCI);
  }

  i = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, i, (int32_T)sizeof(real_T),
                    &ec_emlrtRTEI);
  a_idx_0 = a->size[0];
  if (a_idx_0 == 0) {
  } else {
    emxInit_real_T(sp, &av, 1, &yc_emlrtRTEI, true);
    unnamed_idx_0 = a->size[0];
    i = av->size[0];
    av->size[0] = unnamed_idx_0;
    emxEnsureCapacity(sp, (emxArray__common *)av, i, (int32_T)sizeof(real_T),
                      &yc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    a_idx_0 = a->size[0];
    i = a->size[1];
    unnamed_idx_0 = a->size[0];
    i = a_idx_0 * i - unnamed_idx_0;
    st.site = &uf_emlrtRSI;
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
    emxInit_real_T(sp, &cv, 1, &hc_emlrtRTEI, true);
    do {
      exitg1 = 0;
      a_idx_0 = a->size[0];
      if ((a_idx_0 > 0) && (unnamed_idx_0 <= i)) {
        st.site = &rh_emlrtRSI;
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
        st.site = &sf_emlrtRSI;
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
  static const int32_T iv104[2] = { 1, 44 };

  const mxArray *m34;
  char_T cv106[44];
  int32_T i;
  static const char_T cv107[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv105[2] = { 1, 37 };

  char_T cv108[37];
  static const char_T cv109[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
    m34 = emlrtCreateCharArray(2, iv104);
    for (i = 0; i < 44; i++) {
      cv106[i] = cv107[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m34, cv106);
    emlrtAssign(&y, m34);
    st.site = &tp_emlrtRSI;
    b_st.site = &sq_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  if (a->size[1] != b->size[1]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m34 = emlrtCreateCharArray(2, iv105);
    for (i = 0; i < 37; i++) {
      cv108[i] = cv109[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m34, cv108);
    emlrtAssign(&b_y, m34);
    st.site = &sp_emlrtRSI;
    b_st.site = &rq_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &hb_emlrtMCI), &ib_emlrtMCI);
  }

  b_idx_0 = c->size[0] * c->size[1];
  c->size[0] = b->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, b_idx_0, (int32_T)sizeof(real_T),
                    &ec_emlrtRTEI);
  b_b_idx_0 = b->size[0];
  i = a->size[1];
  if ((b_b_idx_0 == 0) || (i == 0)) {
  } else {
    emxInit_real_T(sp, &bv, 1, &fc_emlrtRTEI, true);
    i = b->size[0];
    b_idx_0 = bv->size[0];
    bv->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)bv, b_idx_0, (int32_T)sizeof
                      (real_T), &fc_emlrtRTEI);
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = 0;
    b_b_idx_0 = b->size[0];
    i = a->size[1];
    b_idx_0 = b->size[0];
    b_b = b_b_idx_0 * i - b_idx_0;
    st.site = &uf_emlrtRSI;
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
    emxInit_real_T(sp, &cv, 1, &hc_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_b_idx_0 = b->size[0];
      if ((b_b_idx_0 > 0) && (ck <= b_b)) {
        st.site = &tf_emlrtRSI;
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
                          (real_T), &gc_emlrtRTEI);
        i = bv->size[0];
        for (b_idx_0 = 0; b_idx_0 < i; b_idx_0++) {
          cv->data[b_idx_0] = b_a - bv->data[b_idx_0];
        }

        st.site = &sf_emlrtRSI;
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
  static const int32_T iv106[2] = { 1, 44 };

  const mxArray *m35;
  char_T cv110[44];
  int32_T i;
  static const char_T cv111[44] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'b', 's', 'x', 'f', 'u', 'n', '_', 'a', 'r', 'r', 'a',
    'y', 'D', 'i', 'm', 'e', 'n', 's', 'i', 'o', 'n', 's', 'M', 'u', 's', 't',
    'M', 'a', 't', 'c', 'h' };

  const mxArray *b_y;
  static const int32_T iv107[2] = { 1, 37 };

  char_T cv112[37];
  static const char_T cv113[37] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
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
  static const int32_T iv108[2] = { 1, 15 };

  char_T cv114[15];
  static const char_T cv115[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
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
    m35 = emlrtCreateCharArray(2, iv106);
    for (i = 0; i < 44; i++) {
      cv110[i] = cv111[i];
    }

    emlrtInitCharArrayR2013a(sp, 44, m35, cv110);
    emlrtAssign(&y, m35);
    st.site = &tp_emlrtRSI;
    b_st.site = &sq_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &fb_emlrtMCI), &gb_emlrtMCI);
  }

  if (a->size[0] != b->size[0]) {
    overflow = false;
  } else {
    overflow = true;
  }

  if (overflow) {
  } else {
    b_y = NULL;
    m35 = emlrtCreateCharArray(2, iv107);
    for (i = 0; i < 37; i++) {
      cv112[i] = cv113[i];
    }

    emlrtInitCharArrayR2013a(sp, 37, m35, cv112);
    emlrtAssign(&b_y, m35);
    st.site = &sp_emlrtRSI;
    b_st.site = &rq_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &hb_emlrtMCI), &ib_emlrtMCI);
  }

  a_idx_0 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity(sp, (emxArray__common *)c, a_idx_0, (int32_T)sizeof(real_T),
                    &ec_emlrtRTEI);
  b_a_idx_0 = a->size[0];
  i = a->size[1];
  if ((b_a_idx_0 == 0) || (i == 0)) {
  } else {
    emxInit_real_T(sp, &av, 1, &yc_emlrtRTEI, true);
    emxInit_real_T(sp, &bv, 1, &fc_emlrtRTEI, true);
    i = a->size[0];
    a_idx_0 = av->size[0];
    av->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)av, a_idx_0, (int32_T)sizeof
                      (real_T), &yc_emlrtRTEI);
    i = b->size[0];
    a_idx_0 = bv->size[0];
    bv->size[0] = i;
    emxEnsureCapacity(sp, (emxArray__common *)bv, a_idx_0, (int32_T)sizeof
                      (real_T), &fc_emlrtRTEI);
    asub = 1;
    ak = 0;
    b_a_idx_0 = a->size[0];
    i = a->size[1];
    a_idx_0 = a->size[0];
    b_b = b_a_idx_0 * i - a_idx_0;
    st.site = &uf_emlrtRSI;
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
    emxInit_real_T(sp, &cv, 1, &hc_emlrtRTEI, true);
    do {
      exitg1 = 0;
      b_a_idx_0 = a->size[0];
      if ((b_a_idx_0 > 0) && (ck <= b_b)) {
        st.site = &rh_emlrtRSI;
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

        st.site = &tf_emlrtRSI;
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

        st.site = &to_emlrtRSI;
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
          m35 = emlrtCreateCharArray(2, iv108);
          for (i = 0; i < 15; i++) {
            cv114[i] = cv115[i];
          }

          emlrtInitCharArrayR2013a(&st, 15, m35, cv114);
          emlrtAssign(&c_y, m35);
          c_st.site = &rp_emlrtRSI;
          d_st.site = &qq_emlrtRSI;
          f_error(&c_st, b_message(&d_st, c_y, &wb_emlrtMCI), &xb_emlrtMCI);
        }

        c_st.site = &uo_emlrtRSI;
        e_st.site = &vo_emlrtRSI;
        a_idx_0 = av->size[0];
        i = bv->size[0];
        emlrtSizeEqCheck1DFastR2012b(a_idx_0, i, &pb_emlrtECI, &e_st);
        a_idx_0 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity(&e_st, (emxArray__common *)cv, a_idx_0, (int32_T)
                          sizeof(real_T), &gc_emlrtRTEI);
        i = av->size[0];
        for (a_idx_0 = 0; a_idx_0 < i; a_idx_0++) {
          cv->data[a_idx_0] = av->data[a_idx_0] / bv->data[a_idx_0];
        }

        st.site = &sf_emlrtRSI;
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
