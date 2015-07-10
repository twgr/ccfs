/*
 * File: sum.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "sum.h"
#include "growManyTreesCompileTest_emxutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_boolean_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void b_sum(const emxArray_boolean_T *x, emxArray_real_T *y)
{
  unsigned int sz[2];
  int ixstart;
  int k;
  int ix;
  int iy;
  int i;
  double s;
  for (ixstart = 0; ixstart < 2; ixstart++) {
    sz[ixstart] = (unsigned int)x->size[ixstart];
  }

  ixstart = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int)sz[1];
  emxEnsureCapacity((emxArray__common *)y, ixstart, (int)sizeof(double));
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    ixstart = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)y, ixstart, (int)sizeof(double));
    ixstart = y->size[0] * y->size[1];
    y->size[1] = (int)sz[1];
    emxEnsureCapacity((emxArray__common *)y, ixstart, (int)sizeof(double));
    k = (int)sz[1];
    for (ixstart = 0; ixstart < k; ixstart++) {
      y->data[ixstart] = 0.0;
    }
  } else {
    ix = -1;
    iy = -1;
    for (i = 1; i <= x->size[1]; i++) {
      ixstart = ix + 1;
      ix++;
      s = x->data[ixstart];
      for (k = 2; k <= x->size[0]; k++) {
        ix++;
        s += (double)x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

/*
 * Arguments    : const boolean_T x_data[]
 *                const int x_size[2]
 * Return Type  : double
 */
double c_sum(const boolean_T x_data[], const int x_size[2])
{
  double y;
  int k;
  if (x_size[1] == 0) {
    y = 0.0;
  } else {
    y = x_data[0];
    for (k = 2; k <= x_size[1]; k++) {
      y += (double)x_data[k - 1];
    }
  }

  return y;
}

/*
 * Arguments    : const emxArray_boolean_T *x
 * Return Type  : double
 */
double d_sum(const emxArray_boolean_T *x)
{
  double y;
  int k;
  if (x->size[0] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    for (k = 2; k <= x->size[0]; k++) {
      y += (double)x->data[k - 1];
    }
  }

  return y;
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void e_sum(const emxArray_real_T *x, emxArray_real_T *y)
{
  unsigned int sz[2];
  int ixstart;
  int k;
  int ix;
  int iy;
  int i;
  double s;
  for (ixstart = 0; ixstart < 2; ixstart++) {
    sz[ixstart] = (unsigned int)x->size[ixstart];
  }

  ixstart = y->size[0] * y->size[1];
  y->size[0] = 1;
  y->size[1] = (int)sz[1];
  emxEnsureCapacity((emxArray__common *)y, ixstart, (int)sizeof(double));
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    ixstart = y->size[0] * y->size[1];
    y->size[0] = 1;
    emxEnsureCapacity((emxArray__common *)y, ixstart, (int)sizeof(double));
    ixstart = y->size[0] * y->size[1];
    y->size[1] = (int)sz[1];
    emxEnsureCapacity((emxArray__common *)y, ixstart, (int)sizeof(double));
    k = (int)sz[1];
    for (ixstart = 0; ixstart < k; ixstart++) {
      y->data[ixstart] = 0.0;
    }
  } else {
    ix = -1;
    iy = -1;
    for (i = 1; i <= x->size[1]; i++) {
      ixstart = ix + 1;
      ix++;
      s = x->data[ixstart];
      for (k = 2; k <= x->size[0]; k++) {
        ix++;
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 *                emxArray_real_T *y
 * Return Type  : void
 */
void f_sum(const emxArray_real_T *x, emxArray_real_T *y)
{
  unsigned int sz[2];
  int iy;
  int ixstart;
  int j;
  int ix;
  double s;
  int k;
  for (iy = 0; iy < 2; iy++) {
    sz[iy] = (unsigned int)x->size[iy];
  }

  iy = y->size[0];
  y->size[0] = (int)sz[0];
  emxEnsureCapacity((emxArray__common *)y, iy, (int)sizeof(double));
  if ((x->size[0] == 0) || (x->size[1] == 0)) {
    iy = y->size[0];
    y->size[0] = (int)sz[0];
    emxEnsureCapacity((emxArray__common *)y, iy, (int)sizeof(double));
    ixstart = (int)sz[0];
    for (iy = 0; iy < ixstart; iy++) {
      y->data[iy] = 0.0;
    }
  } else {
    iy = -1;
    ixstart = -1;
    for (j = 1; j <= x->size[0]; j++) {
      ixstart++;
      ix = ixstart;
      s = x->data[ixstart];
      for (k = 2; k <= x->size[1]; k++) {
        ix += x->size[0];
        s += x->data[ix];
      }

      iy++;
      y->data[iy] = s;
    }
  }
}

/*
 * Arguments    : const emxArray_real_T *x
 * Return Type  : double
 */
double g_sum(const emxArray_real_T *x)
{
  double y;
  int k;
  if (x->size[1] == 0) {
    y = 0.0;
  } else {
    y = x->data[0];
    for (k = 2; k <= x->size[1]; k++) {
      y += x->data[k - 1];
    }
  }

  return y;
}

/*
 * Arguments    : const emxArray_boolean_T *x
 *                double y_data[]
 *                int y_size[2]
 * Return Type  : void
 */
void sum(const emxArray_boolean_T *x, double y_data[], int y_size[2])
{
  int ix;
  double s;
  int k;
  for (ix = 0; ix < 2; ix++) {
    y_size[ix] = 1;
  }

  if (x->size[0] == 0) {
    y_size[0] = 1;
    y_size[1] = 1;
    y_data[0] = 0.0;
  } else {
    ix = 0;
    s = x->data[0];
    for (k = 2; k <= x->size[0]; k++) {
      ix++;
      s += (double)x->data[ix];
    }

    y_data[0] = s;
  }
}

/*
 * File trailer for sum.c
 *
 * [EOF]
 */
