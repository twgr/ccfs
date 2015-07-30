/*
 * File: all.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "all.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_boolean_T *x
 * Return Type  : boolean_T
 */
boolean_T all(const emxArray_boolean_T *x)
{
  boolean_T y;
  int ix;
  boolean_T exitg1;
  y = true;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[1])) {
    if (x->data[ix - 1] == 0) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_boolean_T *y
 * Return Type  : void
 */
void b_all(const emxArray_boolean_T *x, emxArray_boolean_T *y)
{
  unsigned int outsize[2];
  int iy;
  int i1;
  int i2;
  int j;
  int ix;
  boolean_T exitg1;
  for (iy = 0; iy < 2; iy++) {
    outsize[iy] = (unsigned int)x->size[iy];
  }

  iy = y->size[0];
  y->size[0] = (int)outsize[0];
  emxEnsureCapacity((emxArray__common *)y, iy, (int)sizeof(boolean_T));
  i1 = (int)outsize[0];
  for (iy = 0; iy < i1; iy++) {
    y->data[iy] = true;
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
      if (x->data[ix - 1] == 0) {
        y->data[iy] = false;
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
boolean_T c_all(const emxArray_boolean_T *x)
{
  boolean_T y;
  int ix;
  boolean_T exitg1;
  y = true;
  ix = 1;
  exitg1 = false;
  while ((!exitg1) && (ix <= x->size[0])) {
    if (x->data[ix - 1] == 0) {
      y = false;
      exitg1 = true;
    } else {
      ix++;
    }
  }

  return y;
}

/*
 * File trailer for all.c
 *
 * [EOF]
 */
