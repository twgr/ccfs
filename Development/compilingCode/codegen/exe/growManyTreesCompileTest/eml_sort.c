/*
 * File: eml_sort.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 17-Jul-2015 10:21:08
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "eml_sort.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Declarations */
static void eml_sort_idx(const emxArray_real_T *x, emxArray_int32_T *idx);

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_int32_T *idx
 * Return Type  : void
 */
static void eml_sort_idx(const emxArray_real_T *x, emxArray_int32_T *idx)
{
  unsigned int unnamed_idx_0;
  int k;
  boolean_T p;
  emxArray_int32_T *idx0;
  int i;
  int i2;
  int j;
  int pEnd;
  int b_p;
  int q;
  int qEnd;
  int kEnd;
  unnamed_idx_0 = (unsigned int)x->size[0];
  k = idx->size[0];
  idx->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)idx, k, (int)sizeof(int));
  if (x->size[0] == 0) {
  } else {
    for (k = 1; k <= x->size[0]; k++) {
      idx->data[k - 1] = k;
    }

    for (k = 1; k <= x->size[0] - 1; k += 2) {
      if ((x->data[k - 1] <= x->data[k]) || rtIsNaN(x->data[k])) {
        p = true;
      } else {
        p = false;
      }

      if (p) {
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    emxInit_int32_T(&idx0, 1);
    k = idx0->size[0];
    idx0->size[0] = x->size[0];
    emxEnsureCapacity((emxArray__common *)idx0, k, (int)sizeof(int));
    i = x->size[0];
    for (k = 0; k < i; k++) {
      idx0->data[k] = 1;
    }

    i = 2;
    while (i < x->size[0]) {
      i2 = i << 1;
      j = 1;
      for (pEnd = 1 + i; pEnd < x->size[0] + 1; pEnd = qEnd + i) {
        b_p = j;
        q = pEnd - 1;
        qEnd = j + i2;
        if (qEnd > x->size[0] + 1) {
          qEnd = x->size[0] + 1;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          if ((x->data[idx->data[b_p - 1] - 1] <= x->data[idx->data[q] - 1]) ||
              rtIsNaN(x->data[idx->data[q] - 1])) {
            p = true;
          } else {
            p = false;
          }

          if (p) {
            idx0->data[k] = idx->data[b_p - 1];
            b_p++;
            if (b_p == pEnd) {
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
              while (b_p < pEnd) {
                k++;
                idx0->data[k] = idx->data[b_p - 1];
                b_p++;
              }
            }
          }

          k++;
        }

        for (k = 0; k + 1 <= kEnd; k++) {
          idx->data[(j + k) - 1] = idx0->data[k];
        }

        j = qEnd;
      }

      i = i2;
    }

    emxFree_int32_T(&idx0);
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void b_eml_sort(const emxArray_real_T *x, emxArray_real_T *y)
{
  int dim;
  int vlen;
  emxArray_real_T *vwork;
  int i1;
  int vstride;
  int k;
  emxArray_int32_T *iidx;
  int ix;
  dim = 2;
  if (x->size[0] != 1) {
    dim = 1;
  }

  if (dim <= 1) {
    vlen = x->size[0];
  } else {
    vlen = 1;
  }

  b_emxInit_real_T(&vwork, 1);
  i1 = vwork->size[0];
  vwork->size[0] = vlen;
  emxEnsureCapacity((emxArray__common *)vwork, i1, (int)sizeof(double));
  i1 = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)y, i1, (int)sizeof(double));
  vstride = 1;
  k = 1;
  while (k <= dim - 1) {
    vstride *= x->size[0];
    k = 2;
  }

  i1 = -1;
  dim = 1;
  emxInit_int32_T(&iidx, 1);
  while (dim <= vstride) {
    i1++;
    ix = i1;
    for (k = 0; k < vlen; k++) {
      vwork->data[k] = x->data[ix];
      ix += vstride;
    }

    eml_sort_idx(vwork, iidx);
    ix = i1;
    for (k = 0; k < vlen; k++) {
      y->data[ix] = vwork->data[iidx->data[k] - 1];
      ix += vstride;
    }

    dim++;
  }

  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 *                emxArray_int32_T *idx
 * Return Type  : void
 */
void c_eml_sort(const emxArray_real_T *x, emxArray_real_T *y, emxArray_int32_T
                *idx)
{
  int dim;
  int vlen;
  emxArray_real_T *vwork;
  int i1;
  unsigned int unnamed_idx_0;
  int vstride;
  int k;
  emxArray_int32_T *iidx;
  int ix;
  dim = 2;
  if (x->size[0] != 1) {
    dim = 1;
  }

  if (dim <= 1) {
    vlen = x->size[0];
  } else {
    vlen = 1;
  }

  b_emxInit_real_T(&vwork, 1);
  i1 = vwork->size[0];
  vwork->size[0] = vlen;
  emxEnsureCapacity((emxArray__common *)vwork, i1, (int)sizeof(double));
  i1 = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)y, i1, (int)sizeof(double));
  unnamed_idx_0 = (unsigned int)x->size[0];
  i1 = idx->size[0];
  idx->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)idx, i1, (int)sizeof(int));
  vstride = 1;
  k = 1;
  while (k <= dim - 1) {
    vstride *= x->size[0];
    k = 2;
  }

  i1 = -1;
  dim = 1;
  emxInit_int32_T(&iidx, 1);
  while (dim <= vstride) {
    i1++;
    ix = i1;
    for (k = 0; k < vlen; k++) {
      vwork->data[k] = x->data[ix];
      ix += vstride;
    }

    eml_sort_idx(vwork, iidx);
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
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void eml_sort(const emxArray_real_T *x, emxArray_real_T *y)
{
  emxArray_real_T *vwork;
  unsigned int unnamed_idx_0;
  int ix;
  int k;
  emxArray_int32_T *iidx;
  b_emxInit_real_T(&vwork, 1);
  unnamed_idx_0 = (unsigned int)x->size[1];
  ix = vwork->size[0];
  vwork->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)vwork, ix, (int)sizeof(double));
  for (ix = 0; ix < 2; ix++) {
    k = y->size[0] * y->size[1];
    y->size[ix] = x->size[ix];
    emxEnsureCapacity((emxArray__common *)y, k, (int)sizeof(double));
  }

  ix = 0;
  for (k = 0; k < x->size[1]; k++) {
    vwork->data[k] = x->data[ix];
    ix++;
  }

  emxInit_int32_T(&iidx, 1);
  eml_sort_idx(vwork, iidx);
  ix = 0;
  for (k = 0; k < x->size[1]; k++) {
    y->data[ix] = vwork->data[iidx->data[k] - 1];
    ix++;
  }

  emxFree_int32_T(&iidx);
  emxFree_real_T(&vwork);
}

/*
 * File trailer for eml_sort.c
 *
 * [EOF]
 */
