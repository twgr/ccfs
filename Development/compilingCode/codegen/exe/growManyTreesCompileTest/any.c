/*
 * File: any.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 17-Jul-2015 10:21:08
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "any.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const boolean_T x[2]
 * Return Type  : boolean_T
 */
boolean_T any(const boolean_T x[2])
{
  boolean_T y;
  int k;
  boolean_T exitg1;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(x[k] == 0)) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_boolean_T *y
 * Return Type  : void
 */
void b_any(const emxArray_boolean_T *x, emxArray_boolean_T *y)
{
  unsigned int outsize[2];
  int i2;
  int iy;
  int i;
  int i1;
  boolean_T exitg1;
  boolean_T b1;
  for (i2 = 0; i2 < 2; i2++) {
    outsize[i2] = (unsigned int)x->size[i2];
  }

  i2 = y->size[0] * y->size[1];
  y->size[0] = 1;
  emxEnsureCapacity((emxArray__common *)y, i2, (int)sizeof(boolean_T));
  i2 = y->size[0] * y->size[1];
  y->size[1] = (int)outsize[1];
  emxEnsureCapacity((emxArray__common *)y, i2, (int)sizeof(boolean_T));
  iy = (int)outsize[1];
  for (i2 = 0; i2 < iy; i2++) {
    y->data[i2] = false;
  }

  i2 = 0;
  iy = -1;
  for (i = 1; i <= x->size[1]; i++) {
    i1 = i2 + 1;
    i2 += x->size[0];
    iy++;
    exitg1 = false;
    while ((!exitg1) && (i1 <= i2)) {
      b1 = (x->data[i1 - 1] == 0);
      if (!b1) {
        y->data[iy] = true;
        exitg1 = true;
      } else {
        i1++;
      }
    }
  }
}

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_boolean_T *y
 * Return Type  : void
 */
void c_any(const emxArray_boolean_T *x, emxArray_boolean_T *y)
{
  unsigned int outsize[2];
  int iy;
  int i1;
  int i2;
  int j;
  int ix;
  boolean_T exitg1;
  boolean_T b2;
  for (iy = 0; iy < 2; iy++) {
    outsize[iy] = (unsigned int)x->size[iy];
  }

  iy = y->size[0];
  y->size[0] = (int)outsize[0];
  emxEnsureCapacity((emxArray__common *)y, iy, (int)sizeof(boolean_T));
  i1 = (int)outsize[0];
  for (iy = 0; iy < i1; iy++) {
    y->data[iy] = false;
  }

  iy = -1;
  i1 = 0;
  i2 = (x->size[1] - 1) * x->size[0];
  for (j = 1; j <= x->size[0]; j++) {
    i1++;
    i2++;
    iy++;
    ix = i1;
    exitg1 = false;
    while ((!exitg1) && ((x->size[0] > 0) && (ix <= i2))) {
      b2 = (x->data[ix - 1] == 0);
      if (!b2) {
        y->data[iy] = true;
        exitg1 = true;
      } else {
        ix += x->size[0];
      }
    }
  }
}

/*
 * Arguments    : const emxArray_boolean_T *x
 * Return Type  : boolean_T
 */
boolean_T d_any(const emxArray_boolean_T *x)
{
  boolean_T y;
  int ix;
  boolean_T exitg1;
  boolean_T b3;
  y = false;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[1])) {
    b3 = (x->data[ix - 1] == 0);
    if (!b3) {
      y = true;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

/*
 * File trailer for any.c
 *
 * [EOF]
 */
