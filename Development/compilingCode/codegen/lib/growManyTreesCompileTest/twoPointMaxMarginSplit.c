/*
 * File: twoPointMaxMarginSplit.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "twoPointMaxMarginSplit.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "all.h"
#include "sum.h"
#include "abs.h"
#include "bsxfun.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_int32_T *y
 * Return Type  : void
 */
void b_eml_li_find(const emxArray_boolean_T *x, emxArray_int32_T *y)
{
  int k;
  int i;
  int j;
  k = 0;
  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      k++;
    }
  }

  j = y->size[0];
  y->size[0] = k;
  emxEnsureCapacity((emxArray__common *)y, j, (int)sizeof(int));
  j = 0;
  for (i = 1; i <= x->size[0]; i++) {
    if (x->data[i - 1]) {
      y->data[j] = i;
      j++;
    }
  }
}

/*
 * This should only be done if X has exactly 2 unique rows
 * Arguments    : const emxArray_real_T *X
 *                const emxArray_boolean_T *Y
 *                double tol
 *                boolean_T *bSp
 *                emxArray_real_T *rmm
 *                double cmm_data[]
 *                int cmm_size[2]
 * Return Type  : void
 */
void twoPointMaxMarginSplit(const emxArray_real_T *X, const emxArray_boolean_T
  *Y, double tol, boolean_T *bSp, emxArray_real_T *rmm, double cmm_data[], int
  cmm_size[2])
{
  emxArray_real_T *b_X;
  int loop_ub;
  int i12;
  emxArray_real_T *a;
  emxArray_real_T *b_a;
  emxArray_boolean_T *c_a;
  emxArray_boolean_T *bType1;
  emxArray_boolean_T *YLeft;
  emxArray_boolean_T *YRight;
  emxArray_int32_T *r11;
  int b_loop_ub;
  int i13;
  emxArray_boolean_T *b_bType1;
  emxArray_real_T *r12;
  emxArray_real_T *r13;
  emxArray_real_T *r14;
  boolean_T tmp_data[10000];
  int tmp_size[2];
  emxArray_boolean_T b_tmp_data;
  int k;
  int idx;
  int ii_data[1];
  int ii;
  boolean_T exitg1;
  int b_ii_data[1];
  int iType2_data[1];
  emxArray_real_T *c_X;
  emxArray_real_T *y;
  signed char unnamed_idx_0;
  emxArray_real_T *d_X;
  double C_data[1];
  emxInit_real_T(&b_X, 2);
  loop_ub = X->size[1];
  i12 = b_X->size[0] * b_X->size[1];
  b_X->size[0] = 1;
  b_X->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_X, i12, (int)sizeof(double));
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_X->data[b_X->size[0] * i12] = X->data[X->size[0] * i12];
  }

  emxInit_real_T(&a, 2);
  emxInit_real_T(&b_a, 2);
  d_bsxfun(X, b_X, a);
  i12 = b_a->size[0] * b_a->size[1];
  b_a->size[0] = a->size[0];
  b_a->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)b_a, i12, (int)sizeof(double));
  loop_ub = a->size[0] * a->size[1];
  emxFree_real_T(&b_X);
  for (i12 = 0; i12 < loop_ub; i12++) {
    b_a->data[i12] = a->data[i12];
  }

  b_emxInit_boolean_T(&c_a, 2);
  c_abs(b_a, a);
  i12 = c_a->size[0] * c_a->size[1];
  c_a->size[0] = a->size[0];
  c_a->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)c_a, i12, (int)sizeof(boolean_T));
  loop_ub = a->size[0] * a->size[1];
  emxFree_real_T(&b_a);
  for (i12 = 0; i12 < loop_ub; i12++) {
    c_a->data[i12] = (a->data[i12] < tol);
  }

  emxInit_boolean_T(&bType1, 1);
  b_all(c_a, bType1);
  emxFree_boolean_T(&c_a);
  b_emxInit_boolean_T(&YLeft, 2);
  b_emxInit_boolean_T(&YRight, 2);
  if (Y->size[1] == 1) {
    i12 = YLeft->size[0] * YLeft->size[1];
    YLeft->size[0] = Y->size[0];
    YLeft->size[1] = Y->size[1];
    emxEnsureCapacity((emxArray__common *)YLeft, i12, (int)sizeof(boolean_T));
    loop_ub = Y->size[0] * Y->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      YLeft->data[i12] = Y->data[i12];
    }

    i12 = YRight->size[0] * YRight->size[1];
    YRight->size[0] = Y->size[0];
    YRight->size[1] = Y->size[1];
    emxEnsureCapacity((emxArray__common *)YRight, i12, (int)sizeof(boolean_T));
    loop_ub = Y->size[0] * Y->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      YRight->data[i12] = !Y->data[i12];
    }
  } else {
    emxInit_int32_T(&r11, 1);
    b_eml_li_find(bType1, r11);
    loop_ub = Y->size[1];
    i12 = YLeft->size[0] * YLeft->size[1];
    YLeft->size[0] = r11->size[0];
    YLeft->size[1] = loop_ub;
    emxEnsureCapacity((emxArray__common *)YLeft, i12, (int)sizeof(boolean_T));
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_loop_ub = r11->size[0];
      for (i13 = 0; i13 < b_loop_ub; i13++) {
        YLeft->data[i13 + YLeft->size[0] * i12] = Y->data[(r11->data[i13] +
          Y->size[0] * i12) - 1];
      }
    }

    emxInit_boolean_T(&b_bType1, 1);
    i12 = b_bType1->size[0];
    b_bType1->size[0] = bType1->size[0];
    emxEnsureCapacity((emxArray__common *)b_bType1, i12, (int)sizeof(boolean_T));
    loop_ub = bType1->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_bType1->data[i12] = !bType1->data[i12];
    }

    b_eml_li_find(b_bType1, r11);
    loop_ub = Y->size[1];
    i12 = YRight->size[0] * YRight->size[1];
    YRight->size[0] = r11->size[0];
    YRight->size[1] = loop_ub;
    emxEnsureCapacity((emxArray__common *)YRight, i12, (int)sizeof(boolean_T));
    emxFree_boolean_T(&b_bType1);
    for (i12 = 0; i12 < loop_ub; i12++) {
      b_loop_ub = r11->size[0];
      for (i13 = 0; i13 < b_loop_ub; i13++) {
        YRight->data[i13 + YRight->size[0] * i12] = Y->data[(r11->data[i13] +
          Y->size[0] * i12) - 1];
      }
    }

    emxFree_int32_T(&r11);
  }

  emxInit_real_T(&r12, 2);
  emxInit_real_T(&r13, 2);
  b_sum(YLeft, r13);
  i12 = r12->size[0] * r12->size[1];
  r12->size[0] = 1;
  r12->size[1] = r13->size[1];
  emxEnsureCapacity((emxArray__common *)r12, i12, (int)sizeof(double));
  loop_ub = r13->size[0] * r13->size[1];
  emxFree_boolean_T(&YLeft);
  for (i12 = 0; i12 < loop_ub; i12++) {
    r12->data[i12] = r13->data[i12];
  }

  emxInit_real_T(&r14, 2);
  b_sum(YRight, r13);
  i12 = r14->size[0] * r14->size[1];
  r14->size[0] = 1;
  r14->size[1] = r13->size[1];
  emxEnsureCapacity((emxArray__common *)r14, i12, (int)sizeof(double));
  loop_ub = r13->size[0] * r13->size[1];
  emxFree_boolean_T(&YRight);
  for (i12 = 0; i12 < loop_ub; i12++) {
    r14->data[i12] = r13->data[i12];
  }

  emxFree_real_T(&r13);
  tmp_size[0] = 1;
  tmp_size[1] = r12->size[1];
  loop_ub = r12->size[0] * r12->size[1];
  for (i12 = 0; i12 < loop_ub; i12++) {
    tmp_data[i12] = (r12->data[i12] == r14->data[i12]);
  }

  emxFree_real_T(&r14);
  emxFree_real_T(&r12);
  b_tmp_data.data = (boolean_T *)&tmp_data;
  b_tmp_data.size = (int *)&tmp_size;
  b_tmp_data.allocatedSize = 10000;
  b_tmp_data.numDimensions = 2;
  b_tmp_data.canFreeData = false;
  if (all(&b_tmp_data)) {
    /*  Here the two unique points have identical sets of class */
    /*  labels and so we can't split */
    *bSp = false;
    i12 = rmm->size[0] * rmm->size[1];
    rmm->size[0] = 0;
    rmm->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)rmm, i12, (int)sizeof(double));
    cmm_size[0] = 0;
    cmm_size[1] = 0;
  } else {
    *bSp = true;

    /*  Otherwise the optimal spliting plane is the plane perpendicular */
    /*  to the vector between the two points (rmm) and the maximal */
    /*  marginal split point (cmm) is halway between the two points on */
    /*  this line. */
    i12 = bType1->size[0];
    emxEnsureCapacity((emxArray__common *)bType1, i12, (int)sizeof(boolean_T));
    loop_ub = bType1->size[0];
    for (i12 = 0; i12 < loop_ub; i12++) {
      bType1->data[i12] = !bType1->data[i12];
    }

    if (1 <= bType1->size[0]) {
      k = 1;
    } else {
      k = 0;
    }

    idx = 0;
    ii = 1;
    exitg1 = false;
    while ((!exitg1) && (ii <= bType1->size[0])) {
      if (bType1->data[ii - 1]) {
        idx = 1;
        ii_data[0] = ii;
        exitg1 = true;
      } else {
        ii++;
      }
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

      i12 = 0;
      while (i12 <= loop_ub) {
        b_ii_data[0] = ii_data[0];
        i12 = 1;
      }

      k = loop_ub + 1;
      loop_ub++;
      i12 = 0;
      while (i12 <= loop_ub - 1) {
        ii_data[0] = b_ii_data[0];
        i12 = 1;
      }
    }

    i12 = 0;
    while (i12 <= k - 1) {
      iType2_data[0] = ii_data[0];
      i12 = 1;
    }

    b_emxInit_real_T(&c_X, 1);
    loop_ub = X->size[1];
    b_loop_ub = X->size[1];
    i12 = c_X->size[0];
    c_X->size[0] = b_loop_ub;
    emxEnsureCapacity((emxArray__common *)c_X, i12, (int)sizeof(double));
    i12 = 0;
    while (i12 <= k - 1) {
      for (i12 = 0; i12 < b_loop_ub; i12++) {
        c_X->data[i12] = X->data[(iType2_data[0] + X->size[0] * i12) - 1] -
          X->data[X->size[0] * i12];
      }

      i12 = 1;
    }

    i12 = rmm->size[0] * rmm->size[1];
    rmm->size[0] = loop_ub;
    rmm->size[1] = 1;
    emxEnsureCapacity((emxArray__common *)rmm, i12, (int)sizeof(double));
    i12 = 0;
    while (i12 <= 0) {
      for (i12 = 0; i12 < loop_ub; i12++) {
        rmm->data[i12] = c_X->data[i12];
      }

      i12 = 1;
    }

    emxFree_real_T(&c_X);
    loop_ub = X->size[1];
    i12 = a->size[0] * a->size[1];
    a->size[0] = k;
    a->size[1] = loop_ub;
    emxEnsureCapacity((emxArray__common *)a, i12, (int)sizeof(double));
    for (i12 = 0; i12 < loop_ub; i12++) {
      i13 = 0;
      while (i13 <= k - 1) {
        a->data[a->size[0] * i12] = X->data[(iType2_data[0] + X->size[0] * i12)
          - 1];
        i13 = 1;
      }
    }

    emxInit_real_T(&y, 2);
    if ((a->size[1] == 1) || (rmm->size[0] == 1)) {
      i12 = y->size[0] * y->size[1];
      y->size[0] = a->size[0];
      y->size[1] = rmm->size[1];
      emxEnsureCapacity((emxArray__common *)y, i12, (int)sizeof(double));
      loop_ub = a->size[0];
      for (i12 = 0; i12 < loop_ub; i12++) {
        b_loop_ub = rmm->size[1];
        for (i13 = 0; i13 < b_loop_ub; i13++) {
          y->data[i12 + y->size[0] * i13] = 0.0;
          idx = a->size[1];
          for (ii = 0; ii < idx; ii++) {
            y->data[i12 + y->size[0] * i13] += a->data[i12 + a->size[0] * ii] *
              rmm->data[ii + rmm->size[0] * i13];
          }
        }
      }
    } else {
      unnamed_idx_0 = (signed char)a->size[0];
      i12 = y->size[0] * y->size[1];
      y->size[0] = unnamed_idx_0;
      emxEnsureCapacity((emxArray__common *)y, i12, (int)sizeof(double));
      i12 = y->size[0] * y->size[1];
      y->size[1] = 1;
      emxEnsureCapacity((emxArray__common *)y, i12, (int)sizeof(double));
      loop_ub = unnamed_idx_0;
      for (i12 = 0; i12 < loop_ub; i12++) {
        y->data[i12] = 0.0;
      }

      if (a->size[0] == 0) {
      } else {
        y->data[0] = 0.0;
        idx = 0;
        i12 = a->size[1];
        for (ii = 0; ii + 1 <= i12; ii++) {
          if (rmm->data[ii] != 0.0) {
            y->data[0] += rmm->data[ii] * a->data[idx];
          }

          idx++;
        }
      }
    }

    i12 = X->size[1];
    emxInit_real_T(&d_X, 2);
    if ((i12 == 1) || (rmm->size[0] == 1)) {
      loop_ub = X->size[1];
      i12 = d_X->size[0] * d_X->size[1];
      d_X->size[0] = 1;
      d_X->size[1] = loop_ub;
      emxEnsureCapacity((emxArray__common *)d_X, i12, (int)sizeof(double));
      for (i12 = 0; i12 < loop_ub; i12++) {
        d_X->data[d_X->size[0] * i12] = X->data[X->size[0] * i12];
      }

      loop_ub = rmm->size[1];
      for (i12 = 0; i12 < loop_ub; i12++) {
        C_data[i12] = 0.0;
        b_loop_ub = d_X->size[1];
        for (i13 = 0; i13 < b_loop_ub; i13++) {
          C_data[i12] += d_X->data[d_X->size[0] * i13] * rmm->data[i13 +
            rmm->size[0] * i12];
        }
      }
    } else {
      C_data[0] = 0.0;
      idx = 1;
      i12 = X->size[1];
      for (ii = 0; ii + 1 <= i12; ii++) {
        if (rmm->data[ii] != 0.0) {
          C_data[0] += rmm->data[ii] * X->data[X->size[0] * (idx - 1)];
        }

        idx++;
      }
    }

    emxFree_real_T(&d_X);
    cmm_size[0] = y->size[0];
    cmm_size[1] = y->size[1];
    loop_ub = y->size[0] * y->size[1];
    for (i12 = 0; i12 < loop_ub; i12++) {
      cmm_data[i12] = 0.5 * (y->data[i12] + C_data[i12]);
    }

    emxFree_real_T(&y);
  }

  emxFree_real_T(&a);
  emxFree_boolean_T(&bType1);
}

/*
 * File trailer for twoPointMaxMarginSplit.c
 *
 * [EOF]
 */
