/*
 * randperm.c
 *
 * Code generation for function 'randperm'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "randperm.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growManyTreesCompileTest_mexutil.h"

/* Variable Definitions */
static emlrtRSInfo mf_emlrtRSI = { 24, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtMCInfo s_emlrtMCI = { 13, 5, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtMCInfo t_emlrtMCI = { 12, 15, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtMCInfo u_emlrtMCI = { 22, 9, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtMCInfo v_emlrtMCI = { 20, 19, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtMCInfo w_emlrtMCI = { 23, 27, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtMCInfo x_emlrtMCI = { 23, 19, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRTEInfo vb_emlrtRTEI = { 1, 14, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRTEInfo wb_emlrtRTEI = { 62, 5, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRTEInfo xb_emlrtRTEI = { 63, 5, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRTEInfo yb_emlrtRTEI = { 64, 5, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRTEInfo ac_emlrtRTEI = { 65, 5, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtDCInfo p_emlrtDCI = { 31, 19, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m",
  4 };

static emlrtRSInfo ip_emlrtRSI = { 23, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRSInfo jp_emlrtRSI = { 20, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRSInfo kp_emlrtRSI = { 12, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRSInfo dq_emlrtRSI = { 22, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

static emlrtRSInfo eq_emlrtRSI = { 13, "randperm",
  "C:\\Program Files\\MATLAB\\R2014a\\toolbox\\eml\\lib\\matlab\\randfun\\randperm.m"
};

/* Function Definitions */
void randperm(const emlrtStack *sp, real_T n, real_T k, emxArray_real_T *p)
{
  const mxArray *y;
  static const int32_T iv33[2] = { 1, 25 };

  const mxArray *m9;
  char_T cv34[25];
  int32_T i;
  static const char_T cv35[25] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'a',
    'n', 'd', 'p', 'e', 'r', 'm', ':', 'i', 'n', 'p', 'u', 't', 'T', 'y', 'p',
    'e' };

  boolean_T b5;
  const mxArray *b_y;
  static const int32_T iv34[2] = { 1, 25 };

  const mxArray *c_y;
  static const int32_T iv35[2] = { 1, 30 };

  char_T cv36[30];
  static const char_T cv37[30] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'r', 'a',
    'n', 'd', 'p', 'e', 'r', 'm', ':', 'i', 'n', 'p', 'u', 't', 'K', 'T', 'o',
    'o', 'L', 'a', 'r', 'g', 'e' };

  int32_T loop_ub;
  real_T pt;
  real_T j;
  real_T t;
  real_T selectedLoc;
  real_T nleftm1;
  real_T newEntry;
  emxArray_real_T *hashTbl;
  emxArray_real_T *link;
  emxArray_real_T *val;
  emxArray_real_T *loc;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b(sp);
  if (n == muDoubleScalarFloor(n)) {
  } else {
    y = NULL;
    m9 = emlrtCreateCharArray(2, iv33);
    for (i = 0; i < 25; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(sp, 25, m9, cv34);
    emlrtAssign(&y, m9);
    st.site = &kp_emlrtRSI;
    b_st.site = &eq_emlrtRSI;
    f_error(&st, b_message(&b_st, y, &s_emlrtMCI), &t_emlrtMCI);
  }

  if ((k >= 0.0) && (k == muDoubleScalarFloor(k))) {
    b5 = true;
  } else {
    b5 = false;
  }

  if (b5) {
  } else {
    b_y = NULL;
    m9 = emlrtCreateCharArray(2, iv34);
    for (i = 0; i < 25; i++) {
      cv34[i] = cv35[i];
    }

    emlrtInitCharArrayR2013a(sp, 25, m9, cv34);
    emlrtAssign(&b_y, m9);
    st.site = &jp_emlrtRSI;
    b_st.site = &dq_emlrtRSI;
    f_error(&st, b_message(&b_st, b_y, &u_emlrtMCI), &v_emlrtMCI);
  }

  if (k <= n) {
  } else {
    c_y = NULL;
    m9 = emlrtCreateCharArray(2, iv35);
    for (i = 0; i < 30; i++) {
      cv36[i] = cv37[i];
    }

    emlrtInitCharArrayR2013a(sp, 30, m9, cv36);
    emlrtAssign(&c_y, m9);
    st.site = &ip_emlrtRSI;
    f_error(&st, b_message(&st, c_y, &w_emlrtMCI), &x_emlrtMCI);
  }

  st.site = &mf_emlrtRSI;
  i = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = (int32_T)emlrtNonNegativeCheckFastR2012b(k, &p_emlrtDCI, &st);
  emxEnsureCapacity(&st, (emxArray__common *)p, i, (int32_T)sizeof(real_T),
                    &vb_emlrtRTEI);
  loop_ub = (int32_T)emlrtNonNegativeCheckFastR2012b(k, &p_emlrtDCI, &st);
  for (i = 0; i < loop_ub; i++) {
    p->data[i] = 0.0;
  }

  if (k == 0.0) {
  } else if (k >= n) {
    p->data[0] = 1.0;
    for (i = 0; i < (int32_T)(n - 1.0); i++) {
      emlrtRandu(&pt, 1);
      j = muDoubleScalarFloor(pt * ((1.0 + (real_T)i) + 1.0));
      p->data[(int32_T)((1.0 + (real_T)i) + 1.0) - 1] = p->data[(int32_T)(j +
        1.0) - 1];
      p->data[(int32_T)(j + 1.0) - 1] = (1.0 + (real_T)i) + 1.0;
    }
  } else if (k >= n / 4.0) {
    t = 0.0;
    for (i = 0; i < (int32_T)((k - 1.0) + 1.0); i++) {
      selectedLoc = k - (real_T)i;
      nleftm1 = n - t;
      pt = selectedLoc / nleftm1;
      emlrtRandu(&newEntry, 1);
      while (newEntry > pt) {
        t++;
        nleftm1--;
        pt += (1.0 - pt) * (selectedLoc / nleftm1);
      }

      t++;
      emlrtRandu(&pt, 1);
      j = muDoubleScalarFloor(pt * ((real_T)i + 1.0));
      p->data[i] = p->data[(int32_T)(j + 1.0) - 1];
      p->data[(int32_T)(j + 1.0) - 1] = t;
    }
  } else {
    b_emxInit_real_T(&st, &hashTbl, 1, &wb_emlrtRTEI, true);
    i = hashTbl->size[0];
    hashTbl->size[0] = (int32_T)k;
    emxEnsureCapacity(&st, (emxArray__common *)hashTbl, i, (int32_T)sizeof
                      (real_T), &vb_emlrtRTEI);
    loop_ub = (int32_T)k;
    for (i = 0; i < loop_ub; i++) {
      hashTbl->data[i] = 0.0;
    }

    b_emxInit_real_T(&st, &link, 1, &xb_emlrtRTEI, true);
    i = link->size[0];
    link->size[0] = (int32_T)k;
    emxEnsureCapacity(&st, (emxArray__common *)link, i, (int32_T)sizeof(real_T),
                      &vb_emlrtRTEI);
    loop_ub = (int32_T)k;
    for (i = 0; i < loop_ub; i++) {
      link->data[i] = 0.0;
    }

    b_emxInit_real_T(&st, &val, 1, &yb_emlrtRTEI, true);
    i = val->size[0];
    val->size[0] = (int32_T)k;
    emxEnsureCapacity(&st, (emxArray__common *)val, i, (int32_T)sizeof(real_T),
                      &vb_emlrtRTEI);
    loop_ub = (int32_T)k;
    for (i = 0; i < loop_ub; i++) {
      val->data[i] = 0.0;
    }

    b_emxInit_real_T(&st, &loc, 1, &ac_emlrtRTEI, true);
    i = loc->size[0];
    loc->size[0] = (int32_T)k;
    emxEnsureCapacity(&st, (emxArray__common *)loc, i, (int32_T)sizeof(real_T),
                      &vb_emlrtRTEI);
    loop_ub = (int32_T)k;
    for (i = 0; i < loop_ub; i++) {
      loc->data[i] = 0.0;
    }

    newEntry = 1.0;
    for (i = 0; i < (int32_T)k; i++) {
      nleftm1 = n - (1.0 + (real_T)i);
      emlrtRandu(&pt, 1);
      selectedLoc = muDoubleScalarFloor(pt * (nleftm1 + 1.0));
      if (k == muDoubleScalarFloor(k)) {
        pt = selectedLoc - muDoubleScalarFloor(selectedLoc / k) * k;
      } else {
        pt = selectedLoc / k;
        if (muDoubleScalarAbs(pt - muDoubleScalarRound(pt)) <=
            2.2204460492503131E-16 * muDoubleScalarAbs(pt)) {
          pt = 0.0;
        } else {
          pt = (pt - muDoubleScalarFloor(pt)) * k;
        }
      }

      j = hashTbl->data[(int32_T)(1.0 + pt) - 1];
      while ((j > 0.0) && (loc->data[(int32_T)j - 1] != selectedLoc)) {
        j = link->data[(int32_T)j - 1];
      }

      if (j > 0.0) {
        p->data[i] = val->data[(int32_T)j - 1] + 1.0;
      } else {
        p->data[i] = selectedLoc + 1.0;
        j = newEntry;
        newEntry++;
        loc->data[(int32_T)j - 1] = selectedLoc;
        link->data[(int32_T)j - 1] = hashTbl->data[(int32_T)(1.0 + pt) - 1];
        hashTbl->data[(int32_T)(1.0 + pt) - 1] = j;
      }

      if (1.0 + (real_T)i < k) {
        if (k == muDoubleScalarFloor(k)) {
          pt = nleftm1 - muDoubleScalarFloor(nleftm1 / k) * k;
        } else {
          pt = nleftm1 / k;
          if (muDoubleScalarAbs(pt - muDoubleScalarRound(pt)) <=
              2.2204460492503131E-16 * muDoubleScalarAbs(pt)) {
            pt = 0.0;
          } else {
            pt = (pt - muDoubleScalarFloor(pt)) * k;
          }
        }

        selectedLoc = hashTbl->data[(int32_T)(1.0 + pt) - 1];
        while ((selectedLoc > 0.0) && (loc->data[(int32_T)selectedLoc - 1] !=
                nleftm1)) {
          selectedLoc = link->data[(int32_T)selectedLoc - 1];
        }

        if (selectedLoc > 0.0) {
          selectedLoc = val->data[(int32_T)selectedLoc - 1];
        } else {
          selectedLoc = nleftm1;
        }

        val->data[(int32_T)j - 1] = selectedLoc;
      }
    }

    emxFree_real_T(&loc);
    emxFree_real_T(&val);
    emxFree_real_T(&link);
    emxFree_real_T(&hashTbl);
  }

  emlrtHeapReferenceStackLeaveFcnR2012b(sp);
}

/* End of code generation (randperm.c) */
