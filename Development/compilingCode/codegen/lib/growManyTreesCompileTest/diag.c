/*
 * File: diag.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:37:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "diag.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *v
 *                emxArray_real_T *d
 * Return Type  : void
 */
void diag(const emxArray_real_T *v, emxArray_real_T *d)
{
  int j;
  int dlen;
  int stride;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    j = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)d, j, (int)sizeof(double));
    d->data[0] = v->data[0];
  } else {
    if (0 < v->size[1]) {
      if (v->size[0] <= v->size[1]) {
        dlen = v->size[0];
      } else {
        dlen = v->size[1];
      }

      stride = v->size[0] + 1;
    } else {
      dlen = 0;
      stride = 0;
    }

    j = d->size[0];
    d->size[0] = dlen;
    emxEnsureCapacity((emxArray__common *)d, j, (int)sizeof(double));
    for (j = 0; j + 1 <= dlen; j++) {
      d->data[j] = v->data[j * stride];
    }
  }
}

/*
 * File trailer for diag.c
 *
 * [EOF]
 */
