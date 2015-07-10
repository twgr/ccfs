/*
 * File: diff.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "diff.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void b_diff(const emxArray_real_T *x, emxArray_real_T *y)
{
  int ixLead;
  int iyLead;
  double work;
  int m;
  double tmp2;
  if (x->size[0] <= 1) {
    ixLead = y->size[0];
    y->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)y, ixLead, (int)sizeof(double));
  } else {
    ixLead = y->size[0];
    y->size[0] = x->size[0] - 1;
    emxEnsureCapacity((emxArray__common *)y, ixLead, (int)sizeof(double));
    ixLead = 1;
    iyLead = 0;
    work = x->data[0];
    for (m = 2; m <= x->size[0]; m++) {
      tmp2 = work;
      work = x->data[ixLead];
      tmp2 = x->data[ixLead] - tmp2;
      ixLead++;
      y->data[iyLead] = tmp2;
      iyLead++;
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void diff(const emxArray_real_T *x, emxArray_real_T *y)
{
  unsigned int ySize[2];
  int ixStart;
  int iyStart;
  int r;
  int ixLead;
  int iyLead;
  double work;
  int m;
  double tmp2;
  if (x->size[0] <= 1) {
    for (ixStart = 0; ixStart < 2; ixStart++) {
      ySize[ixStart] = (unsigned int)x->size[ixStart];
    }

    ixStart = y->size[0] * y->size[1];
    y->size[0] = 0;
    emxEnsureCapacity((emxArray__common *)y, ixStart, (int)sizeof(double));
    ixStart = y->size[0] * y->size[1];
    y->size[1] = (int)ySize[1];
    emxEnsureCapacity((emxArray__common *)y, ixStart, (int)sizeof(double));
  } else {
    for (ixStart = 0; ixStart < 2; ixStart++) {
      ySize[ixStart] = (unsigned int)x->size[ixStart];
    }

    ixStart = y->size[0] * y->size[1];
    y->size[0] = x->size[0] - 1;
    y->size[1] = (int)ySize[1];
    emxEnsureCapacity((emxArray__common *)y, ixStart, (int)sizeof(double));
    if (!((int)ySize[1] == 0)) {
      ixStart = 1;
      iyStart = 0;
      for (r = 1; r <= x->size[1]; r++) {
        ixLead = ixStart;
        iyLead = iyStart;
        work = x->data[ixStart - 1];
        for (m = 2; m <= x->size[0]; m++) {
          tmp2 = work;
          work = x->data[ixLead];
          tmp2 = x->data[ixLead] - tmp2;
          ixLead++;
          y->data[iyLead] = tmp2;
          iyLead++;
        }

        ixStart += x->size[0];
        iyStart = (iyStart + x->size[0]) - 1;
      }
    }
  }
}

/*
 * File trailer for diff.c
 *
 * [EOF]
 */
