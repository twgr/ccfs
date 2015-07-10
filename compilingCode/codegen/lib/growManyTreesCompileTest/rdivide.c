/*
 * File: rdivide.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "rdivide.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                double y
 *                emxArray_real_T *z
 * Return Type  : void
 */
void rdivide(const emxArray_real_T *x, double y, emxArray_real_T *z)
{
  int i25;
  int loop_ub;
  i25 = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)z, i25, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i25 = 0; i25 < loop_ub; i25++) {
    z->data[i25] = x->data[i25] / y;
  }
}

/*
 * File trailer for rdivide.c
 *
 * [EOF]
 */
