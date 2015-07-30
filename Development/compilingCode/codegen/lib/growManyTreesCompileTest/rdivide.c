/*
 * File: rdivide.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:37:59
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
  int i23;
  int loop_ub;
  i23 = z->size[0];
  z->size[0] = x->size[0];
  emxEnsureCapacity((emxArray__common *)z, i23, (int)sizeof(double));
  loop_ub = x->size[0];
  for (i23 = 0; i23 < loop_ub; i23++) {
    z->data[i23] = x->data[i23] / y;
  }
}

/*
 * File trailer for rdivide.c
 *
 * [EOF]
 */
