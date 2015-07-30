/*
 * File: fastUnique.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "fastUnique.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growCCTnotRecursive.h"
#include "eml_sort.h"

/* Function Definitions */

/*
 * Lite version of matlabs unique that is faster
 * Arguments    : const emxArray_real_T *X
 *                emxArray_real_T *uX
 * Return Type  : void
 */
void fastUnique(const emxArray_real_T *X, emxArray_real_T *uX)
{
  emxArray_real_T *b_y1;
  int orderForDim;
  int iyLead;
  double work_data_idx_0;
  int m;
  double tmp1;
  double tmp2;
  emxArray_boolean_T *r6;
  emxArray_int32_T *r7;
  emxArray_real_T *b_uX;
  eml_sort(X, uX);
  emxInit_real_T(&b_y1, 2);
  if (X->size[1] == 0) {
    orderForDim = b_y1->size[0] * b_y1->size[1];
    b_y1->size[0] = 1;
    b_y1->size[1] = 0;
    emxEnsureCapacity((emxArray__common *)b_y1, orderForDim, (int)sizeof(double));
  } else {
    if (X->size[1] - 1 <= 1) {
      orderForDim = X->size[1] - 1;
    } else {
      orderForDim = 1;
    }

    if (orderForDim < 1) {
      orderForDim = b_y1->size[0] * b_y1->size[1];
      b_y1->size[0] = 1;
      b_y1->size[1] = 0;
      emxEnsureCapacity((emxArray__common *)b_y1, orderForDim, (int)sizeof
                        (double));
    } else {
      orderForDim = b_y1->size[0] * b_y1->size[1];
      b_y1->size[0] = 1;
      b_y1->size[1] = X->size[1] - 1;
      emxEnsureCapacity((emxArray__common *)b_y1, orderForDim, (int)sizeof
                        (double));
      orderForDim = X->size[1] - 1;
      if (!(orderForDim == 0)) {
        orderForDim = 1;
        iyLead = 0;
        work_data_idx_0 = X->data[0];
        for (m = 2; m <= X->size[1]; m++) {
          tmp1 = X->data[orderForDim];
          tmp2 = work_data_idx_0;
          work_data_idx_0 = tmp1;
          tmp1 -= tmp2;
          orderForDim++;
          b_y1->data[iyLead] = tmp1;
          iyLead++;
        }
      }
    }
  }

  b_emxInit_boolean_T(&r6, 2);
  orderForDim = r6->size[0] * r6->size[1];
  r6->size[0] = 1;
  r6->size[1] = 1 + b_y1->size[1];
  emxEnsureCapacity((emxArray__common *)r6, orderForDim, (int)sizeof(boolean_T));
  r6->data[0] = true;
  iyLead = b_y1->size[1];
  for (orderForDim = 0; orderForDim < iyLead; orderForDim++) {
    r6->data[r6->size[0] * (orderForDim + 1)] = (b_y1->data[b_y1->size[0] *
      orderForDim] != 0.0);
  }

  emxFree_real_T(&b_y1);
  b_emxInit_int32_T(&r7, 2);
  emxInit_real_T(&b_uX, 2);
  eml_li_find(r6, r7);
  orderForDim = b_uX->size[0] * b_uX->size[1];
  b_uX->size[0] = 1;
  b_uX->size[1] = r7->size[1];
  emxEnsureCapacity((emxArray__common *)b_uX, orderForDim, (int)sizeof(double));
  iyLead = r7->size[1];
  emxFree_boolean_T(&r6);
  for (orderForDim = 0; orderForDim < iyLead; orderForDim++) {
    b_uX->data[b_uX->size[0] * orderForDim] = uX->data[r7->data[r7->size[0] *
      orderForDim] - 1];
  }

  emxFree_int32_T(&r7);
  orderForDim = uX->size[0] * uX->size[1];
  uX->size[0] = 1;
  uX->size[1] = b_uX->size[1];
  emxEnsureCapacity((emxArray__common *)uX, orderForDim, (int)sizeof(double));
  iyLead = b_uX->size[1];
  for (orderForDim = 0; orderForDim < iyLead; orderForDim++) {
    uX->data[uX->size[0] * orderForDim] = b_uX->data[b_uX->size[0] * orderForDim];
  }

  emxFree_real_T(&b_uX);
}

/*
 * File trailer for fastUnique.c
 *
 * [EOF]
 */
