/*
 * File: repmat.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "repmat.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const double a_data[]
 *                double varargin_1
 *                emxArray_real_T *b
 * Return Type  : void
 */
void repmat(const double a_data[], double varargin_1, emxArray_real_T *b)
{
  int itilerow;
  itilerow = b->size[0] * b->size[1];
  b->size[0] = (int)varargin_1;
  b->size[1] = 1;
  emxEnsureCapacity((emxArray__common *)b, itilerow, (int)sizeof(double));
  if ((int)varargin_1 == 0) {
  } else {
    for (itilerow = 1; itilerow <= (int)varargin_1; itilerow++) {
      b->data[itilerow - 1] = a_data[0];
    }
  }
}

/*
 * File trailer for repmat.c
 *
 * [EOF]
 */
