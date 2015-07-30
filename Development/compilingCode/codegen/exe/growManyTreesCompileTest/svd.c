/*
 * File: svd.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 28-Jul-2015 12:13:07
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "svd.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "mldivide.h"

/* Function Declarations */
static void b_eml_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
  emxArray_real_T *y, int iy0);
static void b_eml_xscal(int n, double a, emxArray_real_T *x, int ix0);
static void c_eml_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
  emxArray_real_T *y, int iy0);
static double c_eml_xnrm2(int n, const emxArray_real_T *x, int ix0);
static double eml_div(double x, double y);
static void eml_xaxpy(int n, double a, int ix0, emxArray_real_T *y, int iy0);
static double eml_xdotc(int n, const emxArray_real_T *x, int ix0, const
  emxArray_real_T *y, int iy0);
static void eml_xgesvd(const emxArray_real_T *A, emxArray_real_T *U,
  emxArray_real_T *S, emxArray_real_T *V);
static void eml_xrot(int n, emxArray_real_T *x, int ix0, int iy0, double c,
                     double s);
static void eml_xrotg(double *a, double *b, double *c, double *s);

/* Function Definitions */

/*
 * Arguments    : int n
 *                double a
 *                const emxArray_real_T *x
 *                int ix0
 *                emxArray_real_T *y
 *                int iy0
 * Return Type  : void
 */
static void b_eml_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
  emxArray_real_T *y, int iy0)
{
  int ix;
  int iy;
  int k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy] += a * x->data[ix];
      ix++;
      iy++;
    }
  }
}

/*
 * Arguments    : int n
 *                double a
 *                emxArray_real_T *x
 *                int ix0
 * Return Type  : void
 */
static void b_eml_xscal(int n, double a, emxArray_real_T *x, int ix0)
{
  int i31;
  int k;
  i31 = (ix0 + n) - 1;
  for (k = ix0; k <= i31; k++) {
    x->data[k - 1] *= a;
  }
}

/*
 * Arguments    : int n
 *                double a
 *                const emxArray_real_T *x
 *                int ix0
 *                emxArray_real_T *y
 *                int iy0
 * Return Type  : void
 */
static void c_eml_xaxpy(int n, double a, const emxArray_real_T *x, int ix0,
  emxArray_real_T *y, int iy0)
{
  int ix;
  int iy;
  int k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy] += a * x->data[ix];
      ix++;
      iy++;
    }
  }
}

/*
 * Arguments    : int n
 *                const emxArray_real_T *x
 *                int ix0
 * Return Type  : double
 */
static double c_eml_xnrm2(int n, const emxArray_real_T *x, int ix0)
{
  double y;
  double scale;
  int kend;
  int k;
  double absxk;
  double t;
  y = 0.0;
  if (n < 1) {
  } else if (n == 1) {
    y = fabs(x->data[ix0 - 1]);
  } else {
    scale = 2.2250738585072014E-308;
    kend = (ix0 + n) - 1;
    for (k = ix0; k <= kend; k++) {
      absxk = fabs(x->data[k - 1]);
      if (absxk > scale) {
        t = scale / absxk;
        y = 1.0 + y * t * t;
        scale = absxk;
      } else {
        t = absxk / scale;
        y += t * t;
      }
    }

    y = scale * sqrt(y);
  }

  return y;
}

/*
 * Arguments    : double x
 *                double y
 * Return Type  : double
 */
static double eml_div(double x, double y)
{
  return x / y;
}

/*
 * Arguments    : int n
 *                double a
 *                int ix0
 *                emxArray_real_T *y
 *                int iy0
 * Return Type  : void
 */
static void eml_xaxpy(int n, double a, int ix0, emxArray_real_T *y, int iy0)
{
  int ix;
  int iy;
  int k;
  if ((n < 1) || (a == 0.0)) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 0; k < n; k++) {
      y->data[iy] += a * y->data[ix];
      ix++;
      iy++;
    }
  }
}

/*
 * Arguments    : int n
 *                const emxArray_real_T *x
 *                int ix0
 *                const emxArray_real_T *y
 *                int iy0
 * Return Type  : double
 */
static double eml_xdotc(int n, const emxArray_real_T *x, int ix0, const
  emxArray_real_T *y, int iy0)
{
  double d;
  int ix;
  int iy;
  int k;
  d = 0.0;
  if (n < 1) {
  } else {
    ix = ix0;
    iy = iy0;
    for (k = 1; k <= n; k++) {
      d += x->data[ix - 1] * y->data[iy - 1];
      ix++;
      iy++;
    }
  }

  return d;
}

/*
 * Arguments    : const emxArray_real_T *A
 *                emxArray_real_T *U
 *                emxArray_real_T *S
 *                emxArray_real_T *V
 * Return Type  : void
 */
static void eml_xgesvd(const emxArray_real_T *A, emxArray_real_T *U,
  emxArray_real_T *S, emxArray_real_T *V)
{
  emxArray_real_T *b_A;
  int i16;
  int ns;
  int minnp;
  emxArray_real_T *s;
  emxArray_real_T *e;
  emxArray_real_T *work;
  int qs;
  int nrt;
  int nct;
  int q;
  int nmq;
  double ztest0;
  int jj;
  int iter;
  int m;
  double ztest;
  double tiny;
  double snorm;
  boolean_T exitg3;
  boolean_T exitg2;
  double f;
  double b;
  double varargin_1[5];
  double mtmp;
  boolean_T exitg1;
  double sqds;
  emxInit_real_T(&b_A, 2);
  i16 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity((emxArray__common *)b_A, i16, (int)sizeof(double));
  ns = A->size[0] * A->size[1];
  for (i16 = 0; i16 < ns; i16++) {
    b_A->data[i16] = A->data[i16];
  }

  if (A->size[0] + 1 <= A->size[1]) {
    ns = A->size[0] + 1;
  } else {
    ns = A->size[1];
  }

  if (A->size[0] <= A->size[1]) {
    minnp = A->size[0];
  } else {
    minnp = A->size[1];
  }

  b_emxInit_real_T(&s, 1);
  i16 = s->size[0];
  s->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)s, i16, (int)sizeof(double));
  for (i16 = 0; i16 < ns; i16++) {
    s->data[i16] = 0.0;
  }

  b_emxInit_real_T(&e, 1);
  ns = A->size[1];
  i16 = e->size[0];
  e->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)e, i16, (int)sizeof(double));
  for (i16 = 0; i16 < ns; i16++) {
    e->data[i16] = 0.0;
  }

  b_emxInit_real_T(&work, 1);
  ns = A->size[0];
  i16 = work->size[0];
  work->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)work, i16, (int)sizeof(double));
  for (i16 = 0; i16 < ns; i16++) {
    work->data[i16] = 0.0;
  }

  ns = A->size[0];
  i16 = U->size[0] * U->size[1];
  U->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)U, i16, (int)sizeof(double));
  i16 = U->size[0] * U->size[1];
  U->size[1] = minnp;
  emxEnsureCapacity((emxArray__common *)U, i16, (int)sizeof(double));
  ns *= minnp;
  for (i16 = 0; i16 < ns; i16++) {
    U->data[i16] = 0.0;
  }

  ns = A->size[1];
  qs = A->size[1];
  i16 = V->size[0] * V->size[1];
  V->size[0] = ns;
  emxEnsureCapacity((emxArray__common *)V, i16, (int)sizeof(double));
  i16 = V->size[0] * V->size[1];
  V->size[1] = qs;
  emxEnsureCapacity((emxArray__common *)V, i16, (int)sizeof(double));
  ns *= qs;
  for (i16 = 0; i16 < ns; i16++) {
    V->data[i16] = 0.0;
  }

  if ((A->size[0] == 0) || (A->size[1] == 0)) {
    if (A->size[0] <= minnp) {
      i16 = A->size[0];
    } else {
      i16 = minnp;
    }

    for (ns = 0; ns + 1 <= i16; ns++) {
      U->data[ns + U->size[0] * ns] = 1.0;
    }

    i16 = A->size[1];
    for (ns = 0; ns + 1 <= i16; ns++) {
      V->data[ns + V->size[0] * ns] = 1.0;
    }
  } else {
    if (A->size[1] < 2) {
      ns = 0;
    } else {
      ns = A->size[1] - 2;
    }

    if (ns <= A->size[0]) {
      nrt = ns;
    } else {
      nrt = A->size[0];
    }

    ns = A->size[0] - 1;
    if (ns <= A->size[1]) {
      nct = ns;
    } else {
      nct = A->size[1];
    }

    if (nct >= nrt) {
      i16 = nct;
    } else {
      i16 = nrt;
    }

    for (q = 0; q + 1 <= i16; q++) {
      qs = q + A->size[0] * q;
      nmq = A->size[0] - q;
      if (q + 1 <= nct) {
        ztest0 = b_eml_xnrm2(nmq, b_A, qs + 1);
        if (ztest0 > 0.0) {
          if (b_A->data[qs] < 0.0) {
            ztest0 = -ztest0;
          }

          s->data[q] = ztest0;
          ztest0 = eml_div(1.0, s->data[q]);
          eml_xscal(nmq, ztest0, b_A, qs + 1);
          b_A->data[qs]++;
          s->data[q] = -s->data[q];
        } else {
          s->data[q] = 0.0;
        }
      }

      for (jj = q + 1; jj + 1 <= A->size[1]; jj++) {
        ns = q + A->size[0] * jj;
        if ((q + 1 <= nct) && (s->data[q] != 0.0)) {
          ztest0 = eml_xdotc(nmq, b_A, qs + 1, b_A, ns + 1);
          ztest0 = -eml_div(ztest0, b_A->data[q + b_A->size[0] * q]);
          eml_xaxpy(nmq, ztest0, qs + 1, b_A, ns + 1);
        }

        e->data[jj] = b_A->data[ns];
      }

      if (q + 1 <= nct) {
        for (ns = q; ns + 1 <= A->size[0]; ns++) {
          U->data[ns + U->size[0] * q] = b_A->data[ns + b_A->size[0] * q];
        }
      }

      if (q + 1 <= nrt) {
        iter = (A->size[1] - q) - 1;
        ztest0 = c_eml_xnrm2(iter, e, q + 2);
        if (ztest0 == 0.0) {
          e->data[q] = 0.0;
        } else {
          if (e->data[q + 1] < 0.0) {
            ztest0 = -ztest0;
          }

          e->data[q] = ztest0;
          ztest0 = eml_div(1.0, e->data[q]);
          b_eml_xscal(iter, ztest0, e, q + 2);
          e->data[q + 1]++;
        }

        e->data[q] = -e->data[q];
        if ((q + 2 <= A->size[0]) && (e->data[q] != 0.0)) {
          for (ns = q + 1; ns + 1 <= A->size[0]; ns++) {
            work->data[ns] = 0.0;
          }

          for (jj = q + 1; jj + 1 <= A->size[1]; jj++) {
            b_eml_xaxpy(nmq - 1, e->data[jj], b_A, (q + A->size[0] * jj) + 2,
                        work, q + 2);
          }

          for (jj = q + 1; jj + 1 <= A->size[1]; jj++) {
            ztest0 = eml_div(-e->data[jj], e->data[q + 1]);
            c_eml_xaxpy(nmq - 1, ztest0, work, q + 2, b_A, (q + A->size[0] * jj)
                        + 2);
          }
        }

        for (ns = q + 1; ns + 1 <= A->size[1]; ns++) {
          V->data[ns + V->size[0] * q] = e->data[ns];
        }
      }
    }

    if (A->size[1] <= A->size[0] + 1) {
      m = A->size[1];
    } else {
      m = A->size[0] + 1;
    }

    if (nct < A->size[1]) {
      s->data[nct] = b_A->data[nct + b_A->size[0] * nct];
    }

    if (A->size[0] < m) {
      s->data[m - 1] = 0.0;
    }

    if (nrt + 1 < m) {
      e->data[nrt] = b_A->data[nrt + b_A->size[0] * (m - 1)];
    }

    e->data[m - 1] = 0.0;
    if (nct + 1 <= minnp) {
      for (jj = nct; jj + 1 <= minnp; jj++) {
        for (ns = 1; ns <= A->size[0]; ns++) {
          U->data[(ns + U->size[0] * jj) - 1] = 0.0;
        }

        U->data[jj + U->size[0] * jj] = 1.0;
      }
    }

    for (q = nct - 1; q + 1 > 0; q--) {
      nmq = A->size[0] - q;
      qs = q + A->size[0] * q;
      if (s->data[q] != 0.0) {
        for (jj = q + 1; jj + 1 <= minnp; jj++) {
          ns = (q + A->size[0] * jj) + 1;
          ztest0 = eml_xdotc(nmq, U, qs + 1, U, ns);
          ztest0 = -eml_div(ztest0, U->data[qs]);
          eml_xaxpy(nmq, ztest0, qs + 1, U, ns);
        }

        for (ns = q; ns + 1 <= A->size[0]; ns++) {
          U->data[ns + U->size[0] * q] = -U->data[ns + U->size[0] * q];
        }

        U->data[qs]++;
        for (ns = 1; ns <= q; ns++) {
          U->data[(ns + U->size[0] * q) - 1] = 0.0;
        }
      } else {
        for (ns = 1; ns <= A->size[0]; ns++) {
          U->data[(ns + U->size[0] * q) - 1] = 0.0;
        }

        U->data[qs] = 1.0;
      }
    }

    for (q = A->size[1] - 1; q + 1 > 0; q--) {
      if ((q + 1 <= nrt) && (e->data[q] != 0.0)) {
        iter = (A->size[1] - q) - 1;
        ns = (q + A->size[1] * q) + 2;
        for (jj = q + 1; jj + 1 <= A->size[1]; jj++) {
          qs = (q + A->size[1] * jj) + 2;
          ztest0 = eml_xdotc(iter, V, ns, V, qs);
          ztest0 = -eml_div(ztest0, V->data[ns - 1]);
          eml_xaxpy(iter, ztest0, ns, V, qs);
        }
      }

      for (ns = 1; ns <= A->size[1]; ns++) {
        V->data[(ns + V->size[0] * q) - 1] = 0.0;
      }

      V->data[q + V->size[0] * q] = 1.0;
    }

    for (q = 0; q + 1 <= m; q++) {
      if (s->data[q] != 0.0) {
        ztest = fabs(s->data[q]);
        ztest0 = eml_div(s->data[q], ztest);
        s->data[q] = ztest;
        if (q + 1 < m) {
          e->data[q] = eml_div(e->data[q], ztest0);
        }

        if (q + 1 <= A->size[0]) {
          i16 = A->size[0] * q + 1;
          eml_xscal(A->size[0], ztest0, U, i16);
        }
      }

      if ((q + 1 < m) && (e->data[q] != 0.0)) {
        ztest = fabs(e->data[q]);
        ztest0 = eml_div(ztest, e->data[q]);
        e->data[q] = ztest;
        s->data[q + 1] *= ztest0;
        i16 = A->size[1] * (q + 1) + 1;
        eml_xscal(A->size[1], ztest0, V, i16);
      }
    }

    nct = m;
    iter = 0;
    tiny = eml_div(2.2250738585072014E-308, 2.2204460492503131E-16);
    snorm = 0.0;
    for (ns = 0; ns + 1 <= m; ns++) {
      ztest0 = fabs(s->data[ns]);
      ztest = fabs(e->data[ns]);
      if ((ztest0 >= ztest) || rtIsNaN(ztest)) {
      } else {
        ztest0 = ztest;
      }

      if ((snorm >= ztest0) || rtIsNaN(ztest0)) {
      } else {
        snorm = ztest0;
      }
    }

    while ((m > 0) && (!(iter >= 75))) {
      q = m - 1;
      exitg3 = false;
      while (!(exitg3 || (q == 0))) {
        ztest0 = fabs(e->data[q - 1]);
        if ((ztest0 <= 2.2204460492503131E-16 * (fabs(s->data[q - 1]) + fabs
              (s->data[q]))) || (ztest0 <= tiny) || ((iter > 20) && (ztest0 <=
              2.2204460492503131E-16 * snorm))) {
          e->data[q - 1] = 0.0;
          exitg3 = true;
        } else {
          q--;
        }
      }

      if (q == m - 1) {
        ns = 4;
      } else {
        qs = m;
        ns = m;
        exitg2 = false;
        while ((!exitg2) && (ns >= q)) {
          qs = ns;
          if (ns == q) {
            exitg2 = true;
          } else {
            ztest0 = 0.0;
            if (ns < m) {
              ztest0 = fabs(e->data[ns - 1]);
            }

            if (ns > q + 1) {
              ztest0 += fabs(e->data[ns - 2]);
            }

            ztest = fabs(s->data[ns - 1]);
            if ((ztest <= 2.2204460492503131E-16 * ztest0) || (ztest <= tiny)) {
              s->data[ns - 1] = 0.0;
              exitg2 = true;
            } else {
              ns--;
            }
          }
        }

        if (qs == q) {
          ns = 3;
        } else if (qs == m) {
          ns = 1;
        } else {
          ns = 2;
          q = qs;
        }
      }

      switch (ns) {
       case 1:
        f = e->data[m - 2];
        e->data[m - 2] = 0.0;
        for (ns = m - 2; ns + 1 >= q + 1; ns--) {
          ztest0 = s->data[ns];
          eml_xrotg(&ztest0, &f, &ztest, &b);
          s->data[ns] = ztest0;
          if (ns + 1 > q + 1) {
            f = -b * e->data[ns - 1];
            e->data[ns - 1] *= ztest;
          }

          i16 = A->size[1] * ns + 1;
          qs = A->size[1] * (m - 1) + 1;
          eml_xrot(A->size[1], V, i16, qs, ztest, b);
        }
        break;

       case 2:
        f = e->data[q - 1];
        e->data[q - 1] = 0.0;
        for (ns = q; ns + 1 <= m; ns++) {
          eml_xrotg(&s->data[ns], &f, &ztest, &b);
          f = -b * e->data[ns];
          e->data[ns] *= ztest;
          i16 = A->size[0] * ns + 1;
          qs = A->size[0] * (q - 1) + 1;
          eml_xrot(A->size[0], U, i16, qs, ztest, b);
        }
        break;

       case 3:
        varargin_1[0] = fabs(s->data[m - 1]);
        varargin_1[1] = fabs(s->data[m - 2]);
        varargin_1[2] = fabs(e->data[m - 2]);
        varargin_1[3] = fabs(s->data[q]);
        varargin_1[4] = fabs(e->data[q]);
        ns = 1;
        mtmp = varargin_1[0];
        if (rtIsNaN(varargin_1[0])) {
          qs = 2;
          exitg1 = false;
          while ((!exitg1) && (qs < 6)) {
            ns = qs;
            if (!rtIsNaN(varargin_1[qs - 1])) {
              mtmp = varargin_1[qs - 1];
              exitg1 = true;
            } else {
              qs++;
            }
          }
        }

        if (ns < 5) {
          while (ns + 1 < 6) {
            if (varargin_1[ns] > mtmp) {
              mtmp = varargin_1[ns];
            }

            ns++;
          }
        }

        f = eml_div(s->data[m - 1], mtmp);
        ztest0 = eml_div(s->data[m - 2], mtmp);
        ztest = eml_div(e->data[m - 2], mtmp);
        sqds = eml_div(s->data[q], mtmp);
        b = eml_div((ztest0 + f) * (ztest0 - f) + ztest * ztest, 2.0);
        ztest0 = f * ztest;
        ztest0 *= ztest0;
        ztest = 0.0;
        if ((b != 0.0) || (ztest0 != 0.0)) {
          ztest = sqrt(b * b + ztest0);
          if (b < 0.0) {
            ztest = -ztest;
          }

          ztest = eml_div(ztest0, b + ztest);
        }

        f = (sqds + f) * (sqds - f) + ztest;
        ztest0 = sqds * eml_div(e->data[q], mtmp);
        for (ns = q + 1; ns < m; ns++) {
          eml_xrotg(&f, &ztest0, &ztest, &b);
          if (ns > q + 1) {
            e->data[ns - 2] = f;
          }

          f = ztest * s->data[ns - 1] + b * e->data[ns - 1];
          e->data[ns - 1] = ztest * e->data[ns - 1] - b * s->data[ns - 1];
          ztest0 = b * s->data[ns];
          s->data[ns] *= ztest;
          i16 = A->size[1] * (ns - 1) + 1;
          qs = A->size[1] * ns + 1;
          eml_xrot(A->size[1], V, i16, qs, ztest, b);
          s->data[ns - 1] = f;
          eml_xrotg(&s->data[ns - 1], &ztest0, &ztest, &b);
          f = ztest * e->data[ns - 1] + b * s->data[ns];
          s->data[ns] = -b * e->data[ns - 1] + ztest * s->data[ns];
          ztest0 = b * e->data[ns];
          e->data[ns] *= ztest;
          if (ns < A->size[0]) {
            i16 = A->size[0] * (ns - 1) + 1;
            qs = A->size[0] * ns + 1;
            eml_xrot(A->size[0], U, i16, qs, ztest, b);
          }
        }

        e->data[m - 2] = f;
        iter++;
        break;

       default:
        if (s->data[q] < 0.0) {
          s->data[q] = -s->data[q];
          i16 = A->size[1] * q + 1;
          eml_xscal(A->size[1], -1.0, V, i16);
        }

        ns = q + 1;
        while ((q + 1 < nct) && (s->data[q] < s->data[ns])) {
          ztest = s->data[q];
          s->data[q] = s->data[ns];
          s->data[ns] = ztest;
          if (q + 1 < A->size[1]) {
            i16 = A->size[1] * q + 1;
            qs = A->size[1] * (q + 1) + 1;
            eml_xswap(A->size[1], V, i16, qs);
          }

          if (q + 1 < A->size[0]) {
            i16 = A->size[0] * q + 1;
            qs = A->size[0] * (q + 1) + 1;
            eml_xswap(A->size[0], U, i16, qs);
          }

          q = ns;
          ns++;
        }

        iter = 0;
        m--;
        break;
      }
    }
  }

  emxFree_real_T(&work);
  emxFree_real_T(&e);
  emxFree_real_T(&b_A);
  i16 = S->size[0];
  S->size[0] = minnp;
  emxEnsureCapacity((emxArray__common *)S, i16, (int)sizeof(double));
  for (ns = 0; ns + 1 <= minnp; ns++) {
    S->data[ns] = s->data[ns];
  }

  emxFree_real_T(&s);
}

/*
 * Arguments    : int n
 *                emxArray_real_T *x
 *                int ix0
 *                int iy0
 *                double c
 *                double s
 * Return Type  : void
 */
static void eml_xrot(int n, emxArray_real_T *x, int ix0, int iy0, double c,
                     double s)
{
  int ix;
  int iy;
  int k;
  double temp;
  if (n < 1) {
  } else {
    ix = ix0 - 1;
    iy = iy0 - 1;
    for (k = 1; k <= n; k++) {
      temp = c * x->data[ix] + s * x->data[iy];
      x->data[iy] = c * x->data[iy] - s * x->data[ix];
      x->data[ix] = temp;
      iy++;
      ix++;
    }
  }
}

/*
 * Arguments    : double *a
 *                double *b
 *                double *c
 *                double *s
 * Return Type  : void
 */
static void eml_xrotg(double *a, double *b, double *c, double *s)
{
  double roe;
  double absa;
  double absb;
  double scale;
  double ads;
  double bds;
  roe = *b;
  absa = fabs(*a);
  absb = fabs(*b);
  if (absa > absb) {
    roe = *a;
  }

  scale = absa + absb;
  if (scale == 0.0) {
    *s = 0.0;
    *c = 1.0;
    ads = 0.0;
    scale = 0.0;
  } else {
    ads = absa / scale;
    bds = absb / scale;
    ads = scale * sqrt(ads * ads + bds * bds);
    if (roe < 0.0) {
      ads = -ads;
    }

    *c = *a / ads;
    *s = *b / ads;
    if (absa > absb) {
      scale = *s;
    } else if (*c != 0.0) {
      scale = 1.0 / *c;
    } else {
      scale = 1.0;
    }
  }

  *a = ads;
  *b = scale;
}

/*
 * Arguments    : const emxArray_real_T *A
 *                emxArray_real_T *U
 *                emxArray_real_T *S
 *                emxArray_real_T *V
 * Return Type  : void
 */
void svd(const emxArray_real_T *A, emxArray_real_T *U, emxArray_real_T *S,
         emxArray_real_T *V)
{
  emxArray_real_T *s;
  int loop_ub;
  int i15;
  unsigned int uv1[2];
  b_emxInit_real_T(&s, 1);
  eml_xgesvd(A, U, s, V);
  if (A->size[0] >= A->size[1]) {
    loop_ub = s->size[0];
    i15 = S->size[0] * S->size[1];
    S->size[0] = loop_ub;
    emxEnsureCapacity((emxArray__common *)S, i15, (int)sizeof(double));
    loop_ub = s->size[0];
    i15 = S->size[0] * S->size[1];
    S->size[1] = loop_ub;
    emxEnsureCapacity((emxArray__common *)S, i15, (int)sizeof(double));
    loop_ub = s->size[0] * s->size[0];
    for (i15 = 0; i15 < loop_ub; i15++) {
      S->data[i15] = 0.0;
    }
  } else {
    for (i15 = 0; i15 < 2; i15++) {
      uv1[i15] = (unsigned int)A->size[i15];
    }

    i15 = S->size[0] * S->size[1];
    S->size[0] = (int)uv1[0];
    emxEnsureCapacity((emxArray__common *)S, i15, (int)sizeof(double));
    i15 = S->size[0] * S->size[1];
    S->size[1] = (int)uv1[1];
    emxEnsureCapacity((emxArray__common *)S, i15, (int)sizeof(double));
    loop_ub = (int)uv1[0] * (int)uv1[1];
    for (i15 = 0; i15 < loop_ub; i15++) {
      S->data[i15] = 0.0;
    }
  }

  for (loop_ub = 0; loop_ub < s->size[0]; loop_ub++) {
    S->data[loop_ub + S->size[0] * loop_ub] = s->data[loop_ub];
  }

  emxFree_real_T(&s);
}

/*
 * File trailer for svd.c
 *
 * [EOF]
 */
