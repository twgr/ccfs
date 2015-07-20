/*
 * File: randi.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "randi.h"
#include "rand.h"

/* Function Definitions */

/*
 * Arguments    : double lowhigh
 *                double varargin_1
 *                emxArray_real_T *r
 * Return Type  : void
 */
void randi(double lowhigh, double varargin_1, emxArray_real_T *r)
{
  int i9;
  int k;
  c_rand(varargin_1, r);
  i9 = r->size[0];
  for (k = 0; k < i9; k++) {
    r->data[k] = 1.0 + floor(r->data[k] * lowhigh);
  }
}

/*
 * File trailer for randi.c
 *
 * [EOF]
 */
