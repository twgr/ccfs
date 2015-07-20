/*
 * File: queryIfColumnsVary.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 17-Jul-2015 10:21:08
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "queryIfColumnsVary.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "abs.h"
#include "diff.h"
#include "growCCTnotRecursive.h"

/* Function Definitions */

/*
 * Function that says whether columns are constant or not
 * Arguments    : const emxArray_real_T *XvarToTest
 *                double tol
 *                emxArray_boolean_T *bVar
 * Return Type  : void
 */
void queryIfColumnsVary(const emxArray_real_T *XvarToTest, double tol,
  emxArray_boolean_T *bVar)
{
  int ix;
  int iy;
  emxArray_real_T *b_XvarToTest;
  int loop_ub;
  int ixstart;
  emxArray_real_T *varargin_1;
  emxArray_real_T *r8;
  unsigned int outsz[2];
  emxArray_real_T *maxval;
  int ixstop;
  double mtmp;
  int b_ix;
  boolean_T exitg2;
  emxArray_boolean_T *b_bVar;
  emxArray_int32_T *r9;
  emxArray_boolean_T *c_bVar;
  emxArray_int32_T *indx;
  emxArray_real_T *c_XvarToTest;
  boolean_T exitg1;
  if (5 <= XvarToTest->size[0]) {
    ix = 5;
  } else {
    ix = XvarToTest->size[0];
  }

  if (1 > ix) {
    iy = 0;
  } else {
    iy = ix;
  }

  emxInit_real_T(&b_XvarToTest, 2);
  loop_ub = XvarToTest->size[1];
  ix = b_XvarToTest->size[0] * b_XvarToTest->size[1];
  b_XvarToTest->size[0] = iy;
  b_XvarToTest->size[1] = loop_ub;
  emxEnsureCapacity((emxArray__common *)b_XvarToTest, ix, (int)sizeof(double));
  for (ix = 0; ix < loop_ub; ix++) {
    for (ixstart = 0; ixstart < iy; ixstart++) {
      b_XvarToTest->data[ixstart + b_XvarToTest->size[0] * ix] =
        XvarToTest->data[ixstart + XvarToTest->size[0] * ix];
    }
  }

  emxInit_real_T(&varargin_1, 2);
  emxInit_real_T(&r8, 2);
  diff(b_XvarToTest, varargin_1);
  c_abs(varargin_1, r8);
  ix = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = r8->size[0];
  varargin_1->size[1] = r8->size[1];
  emxEnsureCapacity((emxArray__common *)varargin_1, ix, (int)sizeof(double));
  iy = r8->size[0] * r8->size[1];
  emxFree_real_T(&b_XvarToTest);
  for (ix = 0; ix < iy; ix++) {
    varargin_1->data[ix] = r8->data[ix];
  }

  for (ix = 0; ix < 2; ix++) {
    outsz[ix] = (unsigned int)varargin_1->size[ix];
  }

  emxInit_real_T(&maxval, 2);
  ix = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = (int)outsz[1];
  emxEnsureCapacity((emxArray__common *)maxval, ix, (int)sizeof(double));
  ix = 0;
  iy = -1;
  for (loop_ub = 1; loop_ub <= varargin_1->size[1]; loop_ub++) {
    ixstart = ix;
    ixstop = ix + varargin_1->size[0];
    mtmp = varargin_1->data[ix];
    if (varargin_1->size[0] > 1) {
      if (rtIsNaN(varargin_1->data[ix])) {
        b_ix = ix + 1;
        exitg2 = false;
        while ((!exitg2) && (b_ix + 1 <= ixstop)) {
          ixstart = b_ix;
          if (!rtIsNaN(varargin_1->data[b_ix])) {
            mtmp = varargin_1->data[b_ix];
            exitg2 = true;
          } else {
            b_ix++;
          }
        }
      }

      if (ixstart + 1 < ixstop) {
        for (b_ix = ixstart + 1; b_ix + 1 <= ixstop; b_ix++) {
          if (varargin_1->data[b_ix] > mtmp) {
            mtmp = varargin_1->data[b_ix];
          }
        }
      }
    }

    iy++;
    maxval->data[iy] = mtmp;
    ix += varargin_1->size[0];
  }

  ix = bVar->size[0] * bVar->size[1];
  bVar->size[0] = 1;
  bVar->size[1] = maxval->size[1];
  emxEnsureCapacity((emxArray__common *)bVar, ix, (int)sizeof(boolean_T));
  iy = maxval->size[0] * maxval->size[1];
  for (ix = 0; ix < iy; ix++) {
    bVar->data[ix] = (maxval->data[ix] > tol);
  }

  b_emxInit_boolean_T(&b_bVar, 2);
  ix = b_bVar->size[0] * b_bVar->size[1];
  b_bVar->size[0] = 1;
  b_bVar->size[1] = bVar->size[1];
  emxEnsureCapacity((emxArray__common *)b_bVar, ix, (int)sizeof(boolean_T));
  iy = bVar->size[0] * bVar->size[1];
  for (ix = 0; ix < iy; ix++) {
    b_bVar->data[ix] = !bVar->data[ix];
  }

  b_emxInit_int32_T(&r9, 2);
  b_emxInit_boolean_T(&c_bVar, 2);
  eml_li_find(b_bVar, r9);
  ix = c_bVar->size[0] * c_bVar->size[1];
  c_bVar->size[0] = 1;
  c_bVar->size[1] = bVar->size[1];
  emxEnsureCapacity((emxArray__common *)c_bVar, ix, (int)sizeof(boolean_T));
  iy = bVar->size[0] * bVar->size[1];
  emxFree_boolean_T(&b_bVar);
  for (ix = 0; ix < iy; ix++) {
    c_bVar->data[ix] = !bVar->data[ix];
  }

  b_emxInit_int32_T(&indx, 2);
  emxInit_real_T(&c_XvarToTest, 2);
  eml_li_find(c_bVar, indx);
  iy = XvarToTest->size[0];
  ix = c_XvarToTest->size[0] * c_XvarToTest->size[1];
  c_XvarToTest->size[0] = iy;
  c_XvarToTest->size[1] = indx->size[1];
  emxEnsureCapacity((emxArray__common *)c_XvarToTest, ix, (int)sizeof(double));
  loop_ub = indx->size[1];
  emxFree_boolean_T(&c_bVar);
  for (ix = 0; ix < loop_ub; ix++) {
    for (ixstart = 0; ixstart < iy; ixstart++) {
      c_XvarToTest->data[ixstart + c_XvarToTest->size[0] * ix] =
        XvarToTest->data[ixstart + XvarToTest->size[0] * (indx->data[indx->size
        [0] * ix] - 1)];
    }
  }

  emxFree_int32_T(&indx);
  diff(c_XvarToTest, varargin_1);
  c_abs(varargin_1, r8);
  ix = varargin_1->size[0] * varargin_1->size[1];
  varargin_1->size[0] = r8->size[0];
  varargin_1->size[1] = r8->size[1];
  emxEnsureCapacity((emxArray__common *)varargin_1, ix, (int)sizeof(double));
  iy = r8->size[0] * r8->size[1];
  emxFree_real_T(&c_XvarToTest);
  for (ix = 0; ix < iy; ix++) {
    varargin_1->data[ix] = r8->data[ix];
  }

  emxFree_real_T(&r8);
  for (ix = 0; ix < 2; ix++) {
    outsz[ix] = (unsigned int)varargin_1->size[ix];
  }

  ix = maxval->size[0] * maxval->size[1];
  maxval->size[0] = 1;
  maxval->size[1] = (int)outsz[1];
  emxEnsureCapacity((emxArray__common *)maxval, ix, (int)sizeof(double));
  ix = 0;
  iy = -1;
  for (loop_ub = 1; loop_ub <= varargin_1->size[1]; loop_ub++) {
    ixstart = ix;
    ixstop = ix + varargin_1->size[0];
    mtmp = varargin_1->data[ix];
    if (varargin_1->size[0] > 1) {
      if (rtIsNaN(varargin_1->data[ix])) {
        b_ix = ix + 1;
        exitg1 = false;
        while ((!exitg1) && (b_ix + 1 <= ixstop)) {
          ixstart = b_ix;
          if (!rtIsNaN(varargin_1->data[b_ix])) {
            mtmp = varargin_1->data[b_ix];
            exitg1 = true;
          } else {
            b_ix++;
          }
        }
      }

      if (ixstart + 1 < ixstop) {
        for (b_ix = ixstart + 1; b_ix + 1 <= ixstop; b_ix++) {
          if (varargin_1->data[b_ix] > mtmp) {
            mtmp = varargin_1->data[b_ix];
          }
        }
      }
    }

    iy++;
    maxval->data[iy] = mtmp;
    ix += varargin_1->size[0];
  }

  emxFree_real_T(&varargin_1);
  iy = maxval->size[0] * maxval->size[1];
  for (ix = 0; ix < iy; ix++) {
    bVar->data[r9->data[ix] - 1] = (maxval->data[ix] > tol);
  }

  emxFree_real_T(&maxval);
  emxFree_int32_T(&r9);
}

/*
 * File trailer for queryIfColumnsVary.c
 *
 * [EOF]
 */
