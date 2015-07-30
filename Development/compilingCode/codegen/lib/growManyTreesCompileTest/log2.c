/*
 * File: log2.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:37:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "log2.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *f
 * Return Type  : void
 */
void b_log2(const emxArray_real_T *x, emxArray_real_T *f)
{
  int i26;
  int k;
  double y;
  int eint;
  int inte;
  for (i26 = 0; i26 < 2; i26++) {
    k = f->size[0] * f->size[1];
    f->size[i26] = x->size[i26];
    emxEnsureCapacity((emxArray__common *)f, k, (int)sizeof(double));
  }

  i26 = x->size[0] * x->size[1];
  for (k = 0; k < i26; k++) {
    if (x->data[k] == 0.0) {
      y = rtMinusInf;
    } else if (x->data[k] < 0.0) {
      y = rtNaN;
    } else if ((!rtIsInf(x->data[k])) && (!rtIsNaN(x->data[k]))) {
      if ((!rtIsInf(x->data[k])) && (!rtIsNaN(x->data[k]))) {
        y = frexp(x->data[k], &eint);
        inte = eint;
      } else {
        y = x->data[k];
        inte = 0;
      }

      if (y == 0.5) {
        y = (double)inte - 1.0;
      } else {
        y = log(y) / 0.69314718055994529 + (double)inte;
      }
    } else {
      y = x->data[k];
    }

    f->data[k] = y;
  }
}

/*
 * File trailer for log2.c
 *
 * [EOF]
 */
