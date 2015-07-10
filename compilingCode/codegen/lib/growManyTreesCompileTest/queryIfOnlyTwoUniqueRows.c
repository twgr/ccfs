/*
 * File: queryIfOnlyTwoUniqueRows.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "queryIfOnlyTwoUniqueRows.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "all.h"
#include "bsxfun.h"

/* Function Definitions */

/*
 * Function that checks if an array has only two unique rows as this can
 *  cause failure of for example LDA
 * Arguments    : const emxArray_real_T *X
 * Return Type  : boolean_T
 */
boolean_T queryIfOnlyTwoUniqueRows(const emxArray_real_T *X)
{
  boolean_T bLessThanTwoUniqueRows;
  emxArray_real_T *b_X;
  int idx;
  int i10;
  emxArray_boolean_T *bEqualFirst;
  emxArray_boolean_T *x;
  emxArray_boolean_T *r10;
  int k;
  int ii_data[1];
  int ii;
  boolean_T exitg2;
  int b_ii_data[1];
  int iFirstNotEqual_data[1];
  emxArray_int32_T *b_ii;
  boolean_T exitg1;
  boolean_T guard1 = false;
  emxArray_int32_T *c_ii;
  emxArray_real_T *c_X;
  emxArray_real_T *d_X;
  if (X->size[0] == 2) {
    bLessThanTwoUniqueRows = true;
  } else {
    emxInit_real_T(&b_X, 2);
    idx = X->size[1];
    i10 = b_X->size[0] * b_X->size[1];
    b_X->size[0] = 1;
    b_X->size[1] = idx;
    emxEnsureCapacity((emxArray__common *)b_X, i10, (int)sizeof(double));
    for (i10 = 0; i10 < idx; i10++) {
      b_X->data[b_X->size[0] * i10] = X->data[X->size[0] * i10];
    }

    emxInit_boolean_T(&bEqualFirst, 1);
    emxInit_boolean_T(&x, 1);
    b_emxInit_boolean_T(&r10, 2);
    c_bsxfun(X, b_X, r10);
    b_all(r10, bEqualFirst);
    i10 = x->size[0];
    x->size[0] = bEqualFirst->size[0];
    emxEnsureCapacity((emxArray__common *)x, i10, (int)sizeof(boolean_T));
    idx = bEqualFirst->size[0];
    emxFree_real_T(&b_X);
    for (i10 = 0; i10 < idx; i10++) {
      x->data[i10] = !bEqualFirst->data[i10];
    }

    if (1 <= x->size[0]) {
      k = 1;
    } else {
      k = 0;
    }

    idx = 0;
    ii = 1;
    exitg2 = false;
    while ((!exitg2) && (ii <= x->size[0])) {
      if (x->data[ii - 1]) {
        idx = 1;
        ii_data[0] = ii;
        exitg2 = true;
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
        idx = -1;
      } else {
        idx = 0;
      }

      i10 = 0;
      while (i10 <= idx) {
        b_ii_data[0] = ii_data[0];
        i10 = 1;
      }

      k = idx + 1;
      idx++;
      i10 = 0;
      while (i10 <= idx - 1) {
        ii_data[0] = b_ii_data[0];
        i10 = 1;
      }
    }

    i10 = 0;
    while (i10 <= k - 1) {
      iFirstNotEqual_data[0] = ii_data[0];
      i10 = 1;
    }

    if (k == 0) {
      bLessThanTwoUniqueRows = true;
    } else {
      if (2 > bEqualFirst->size[0]) {
        i10 = 0;
        k = 0;
      } else {
        i10 = 1;
        k = bEqualFirst->size[0];
      }

      ii = x->size[0];
      x->size[0] = k - i10;
      emxEnsureCapacity((emxArray__common *)x, ii, (int)sizeof(boolean_T));
      idx = k - i10;
      for (k = 0; k < idx; k++) {
        x->data[k] = !bEqualFirst->data[i10 + k];
      }

      emxInit_int32_T(&b_ii, 1);
      idx = 0;
      i10 = b_ii->size[0];
      b_ii->size[0] = x->size[0];
      emxEnsureCapacity((emxArray__common *)b_ii, i10, (int)sizeof(int));
      ii = 1;
      exitg1 = false;
      while ((!exitg1) && (ii <= x->size[0])) {
        guard1 = false;
        if (x->data[ii - 1]) {
          idx++;
          b_ii->data[idx - 1] = ii;
          if (idx >= x->size[0]) {
            exitg1 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }

        if (guard1) {
          ii++;
        }
      }

      if (x->size[0] == 1) {
        if (idx == 0) {
          i10 = b_ii->size[0];
          b_ii->size[0] = 0;
          emxEnsureCapacity((emxArray__common *)b_ii, i10, (int)sizeof(int));
        }
      } else {
        if (1 > idx) {
          idx = 0;
        }

        emxInit_int32_T(&c_ii, 1);
        i10 = c_ii->size[0];
        c_ii->size[0] = idx;
        emxEnsureCapacity((emxArray__common *)c_ii, i10, (int)sizeof(int));
        for (i10 = 0; i10 < idx; i10++) {
          c_ii->data[i10] = b_ii->data[i10];
        }

        i10 = b_ii->size[0];
        b_ii->size[0] = c_ii->size[0];
        emxEnsureCapacity((emxArray__common *)b_ii, i10, (int)sizeof(int));
        idx = c_ii->size[0];
        for (i10 = 0; i10 < idx; i10++) {
          b_ii->data[i10] = c_ii->data[i10];
        }

        emxFree_int32_T(&c_ii);
      }

      emxInit_real_T(&c_X, 2);
      idx = X->size[1];
      i10 = c_X->size[0] * c_X->size[1];
      c_X->size[0] = b_ii->size[0];
      c_X->size[1] = idx;
      emxEnsureCapacity((emxArray__common *)c_X, i10, (int)sizeof(double));
      for (i10 = 0; i10 < idx; i10++) {
        ii = b_ii->size[0];
        for (k = 0; k < ii; k++) {
          c_X->data[k + c_X->size[0] * i10] = X->data[b_ii->data[k] + X->size[0]
            * i10];
        }
      }

      emxFree_int32_T(&b_ii);
      emxInit_real_T(&d_X, 2);
      idx = X->size[1];
      i10 = d_X->size[0] * d_X->size[1];
      d_X->size[0] = 1;
      d_X->size[1] = idx;
      emxEnsureCapacity((emxArray__common *)d_X, i10, (int)sizeof(double));
      for (i10 = 0; i10 < idx; i10++) {
        d_X->data[d_X->size[0] * i10] = X->data[(iFirstNotEqual_data[0] +
          X->size[0] * i10) - 1];
      }

      c_bsxfun(c_X, d_X, r10);
      b_all(r10, bEqualFirst);
      bLessThanTwoUniqueRows = c_all(bEqualFirst);
      emxFree_real_T(&d_X);
      emxFree_real_T(&c_X);
    }

    emxFree_boolean_T(&r10);
    emxFree_boolean_T(&x);
    emxFree_boolean_T(&bEqualFirst);
  }

  return bLessThanTwoUniqueRows;
}

/*
 * File trailer for queryIfOnlyTwoUniqueRows.c
 *
 * [EOF]
 */
