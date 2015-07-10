/*
 * File: mldivide.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "mldivide.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "colon.h"
#include "growManyTreesCompileTest_rtwutil.h"

/* Function Declarations */
static void eml_lusolve(const emxArray_real_T *A, const emxArray_real_T *B,
  emxArray_real_T *X);
static void eml_qrsolve(const emxArray_real_T *A, emxArray_real_T *B,
  emxArray_real_T *Y);

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 *                emxArray_real_T *X
 * Return Type  : void
 */
static void eml_lusolve(const emxArray_real_T *A, const emxArray_real_T *B,
  emxArray_real_T *X)
{
  emxArray_real_T *b_A;
  int i20;
  int iy;
  emxArray_int32_T *ipiv;
  int j;
  int mmj;
  int c;
  int ix;
  double smax;
  int k;
  double s;
  int i21;
  int jy;
  int kAcol;
  int ijA;
  emxInit_real_T(&b_A, 2);
  i20 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity((emxArray__common *)b_A, i20, (int)sizeof(double));
  iy = A->size[0] * A->size[1];
  for (i20 = 0; i20 < iy; i20++) {
    b_A->data[i20] = A->data[i20];
  }

  b_emxInit_int32_T(&ipiv, 2);
  iy = A->size[1];
  eml_signed_integer_colon(iy, ipiv);
  if (A->size[1] < 1) {
  } else {
    if (A->size[1] - 1 <= A->size[1]) {
      i20 = A->size[1] - 1;
    } else {
      i20 = A->size[1];
    }

    for (j = 0; j + 1 <= i20; j++) {
      mmj = A->size[1] - j;
      c = j * (A->size[1] + 1);
      if (mmj < 1) {
        iy = -1;
      } else {
        iy = 0;
        if (mmj > 1) {
          ix = c;
          smax = fabs(b_A->data[c]);
          for (k = 1; k + 1 <= mmj; k++) {
            ix++;
            s = fabs(b_A->data[ix]);
            if (s > smax) {
              iy = k;
              smax = s;
            }
          }
        }
      }

      if (b_A->data[c + iy] != 0.0) {
        if (iy != 0) {
          ipiv->data[j] = (j + iy) + 1;
          ix = j;
          iy += j;
          for (k = 1; k <= A->size[1]; k++) {
            smax = b_A->data[ix];
            b_A->data[ix] = b_A->data[iy];
            b_A->data[iy] = smax;
            ix += A->size[1];
            iy += A->size[1];
          }
        }

        i21 = c + mmj;
        for (jy = c + 1; jy + 1 <= i21; jy++) {
          b_A->data[jy] /= b_A->data[c];
        }
      }

      kAcol = (A->size[1] - j) - 1;
      iy = c + A->size[1];
      jy = c + A->size[1];
      for (k = 1; k <= kAcol; k++) {
        smax = b_A->data[jy];
        if (b_A->data[jy] != 0.0) {
          ix = c + 1;
          i21 = mmj + iy;
          for (ijA = 1 + iy; ijA + 1 <= i21; ijA++) {
            b_A->data[ijA] += b_A->data[ix] * -smax;
            ix++;
          }
        }

        jy += A->size[1];
        iy += A->size[1];
      }
    }
  }

  i20 = X->size[0] * X->size[1];
  X->size[0] = B->size[0];
  X->size[1] = B->size[1];
  emxEnsureCapacity((emxArray__common *)X, i20, (int)sizeof(double));
  iy = B->size[0] * B->size[1];
  for (i20 = 0; i20 < iy; i20++) {
    X->data[i20] = B->data[i20];
  }

  for (iy = 0; iy + 1 < A->size[1]; iy++) {
    if (ipiv->data[iy] != iy + 1) {
      for (kAcol = 0; kAcol + 1 <= B->size[1]; kAcol++) {
        smax = X->data[iy + X->size[0] * kAcol];
        X->data[iy + X->size[0] * kAcol] = X->data[(ipiv->data[iy] + X->size[0] *
          kAcol) - 1];
        X->data[(ipiv->data[iy] + X->size[0] * kAcol) - 1] = smax;
      }
    }
  }

  emxFree_int32_T(&ipiv);
  if (X->size[0] == 0) {
  } else {
    for (j = 1; j <= B->size[1]; j++) {
      iy = A->size[1] * (j - 1);
      for (k = 0; k + 1 <= A->size[1]; k++) {
        kAcol = A->size[1] * k;
        if (X->data[k + iy] != 0.0) {
          for (jy = k + 1; jy + 1 <= A->size[1]; jy++) {
            X->data[jy + iy] -= X->data[k + iy] * b_A->data[jy + kAcol];
          }
        }
      }
    }
  }

  if (X->size[0] == 0) {
  } else {
    for (j = 1; j <= B->size[1]; j++) {
      iy = A->size[1] * (j - 1);
      for (k = A->size[1] - 1; k + 1 > 0; k--) {
        kAcol = A->size[1] * k;
        if (X->data[k + iy] != 0.0) {
          smax = X->data[k + iy];
          s = b_A->data[k + kAcol];
          X->data[k + iy] = smax / s;
          for (jy = 0; jy + 1 <= k; jy++) {
            X->data[jy + iy] -= X->data[k + iy] * b_A->data[jy + kAcol];
          }
        }
      }
    }
  }

  emxFree_real_T(&b_A);
}

/*
 * Arguments    : const emxArray_real_T *A
 *                emxArray_real_T *B
 *                emxArray_real_T *Y
 * Return Type  : void
 */
static void eml_qrsolve(const emxArray_real_T *A, emxArray_real_T *B,
  emxArray_real_T *Y)
{
  int nb;
  int mn;
  emxArray_real_T *b_A;
  int i22;
  int itemp;
  int b_mn;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  emxArray_real_T *work;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  int k;
  int j;
  int i;
  int i_i;
  int nmi;
  int mmi;
  double atmp;
  double d3;
  double xnorm;
  int i_ip1;
  int lastv;
  boolean_T exitg2;
  int ia;
  int32_T exitg1;
  int ix;
  unsigned int unnamed_idx_0;
  unsigned int unnamed_idx_1;
  nb = B->size[1] - 1;
  if (A->size[0] <= A->size[1]) {
    mn = A->size[0];
  } else {
    mn = A->size[1];
  }

  emxInit_real_T(&b_A, 2);
  i22 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity((emxArray__common *)b_A, i22, (int)sizeof(double));
  itemp = A->size[0] * A->size[1];
  for (i22 = 0; i22 < itemp; i22++) {
    b_A->data[i22] = A->data[i22];
  }

  if (A->size[0] <= A->size[1]) {
    b_mn = A->size[0];
  } else {
    b_mn = A->size[1];
  }

  b_emxInit_real_T(&tau, 1);
  b_emxInit_int32_T(&jpvt, 2);
  i22 = tau->size[0];
  tau->size[0] = b_mn;
  emxEnsureCapacity((emxArray__common *)tau, i22, (int)sizeof(double));
  eml_signed_integer_colon(A->size[1], jpvt);
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
  } else {
    b_emxInit_real_T(&work, 1);
    itemp = A->size[1];
    i22 = work->size[0];
    work->size[0] = itemp;
    emxEnsureCapacity((emxArray__common *)work, i22, (int)sizeof(double));
    for (i22 = 0; i22 < itemp; i22++) {
      work->data[i22] = 0.0;
    }

    b_emxInit_real_T(&vn1, 1);
    b_emxInit_real_T(&vn2, 1);
    itemp = A->size[1];
    i22 = vn1->size[0];
    vn1->size[0] = itemp;
    emxEnsureCapacity((emxArray__common *)vn1, i22, (int)sizeof(double));
    i22 = vn2->size[0];
    vn2->size[0] = itemp;
    emxEnsureCapacity((emxArray__common *)vn2, i22, (int)sizeof(double));
    k = 1;
    for (j = 0; j + 1 <= A->size[1]; j++) {
      vn1->data[j] = eml_xnrm2(A->size[0], A, k);
      vn2->data[j] = vn1->data[j];
      k += A->size[0];
    }

    for (i = 0; i + 1 <= b_mn; i++) {
      i_i = i + i * A->size[0];
      nmi = (A->size[1] - i) - 1;
      mmi = (A->size[0] - i) - 1;
      itemp = eml_ixamax(1 + nmi, vn1, i + 1);
      k = (i + itemp) - 1;
      if (k + 1 != i + 1) {
        i22 = A->size[0] * k + 1;
        j = A->size[0] * i + 1;
        eml_xswap(A->size[0], b_A, i22, j);
        itemp = jpvt->data[k];
        jpvt->data[k] = jpvt->data[i];
        jpvt->data[i] = itemp;
        vn1->data[k] = vn1->data[i];
        vn2->data[k] = vn2->data[i];
      }

      if (i + 1 < A->size[0]) {
        atmp = b_A->data[i_i];
        d3 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          xnorm = eml_xnrm2(mmi, b_A, i_i + 2);
          if (xnorm != 0.0) {
            xnorm = rt_hypotd_snf(b_A->data[i_i], xnorm);
            if (b_A->data[i_i] >= 0.0) {
              xnorm = -xnorm;
            }

            if (fabs(xnorm) < 1.0020841800044864E-292) {
              itemp = 0;
              do {
                itemp++;
                eml_xscal(mmi, 9.9792015476736E+291, b_A, i_i + 2);
                xnorm *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(fabs(xnorm) >= 1.0020841800044864E-292));

              xnorm = eml_xnrm2(mmi, b_A, i_i + 2);
              xnorm = rt_hypotd_snf(atmp, xnorm);
              if (atmp >= 0.0) {
                xnorm = -xnorm;
              }

              d3 = (xnorm - atmp) / xnorm;
              eml_xscal(mmi, 1.0 / (atmp - xnorm), b_A, i_i + 2);
              for (k = 1; k <= itemp; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d3 = (xnorm - b_A->data[i_i]) / xnorm;
              atmp = 1.0 / (b_A->data[i_i] - xnorm);
              eml_xscal(mmi, atmp, b_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i] = d3;
      } else {
        xnorm = b_A->data[i_i];
        atmp = b_A->data[i_i];
        b_A->data[i_i] = xnorm;
        tau->data[i] = 0.0;
      }

      b_A->data[i_i] = atmp;
      if (i + 1 < A->size[1]) {
        atmp = b_A->data[i_i];
        b_A->data[i_i] = 1.0;
        i_ip1 = (i + (i + 1) * A->size[0]) + 1;
        if (tau->data[i] != 0.0) {
          lastv = mmi;
          itemp = i_i + mmi;
          while ((lastv + 1 > 0) && (b_A->data[itemp] == 0.0)) {
            lastv--;
            itemp--;
          }

          exitg2 = false;
          while ((!exitg2) && (nmi > 0)) {
            itemp = i_ip1 + (nmi - 1) * A->size[0];
            ia = itemp;
            do {
              exitg1 = 0;
              if (ia <= itemp + lastv) {
                if (b_A->data[ia - 1] != 0.0) {
                  exitg1 = 1;
                } else {
                  ia++;
                }
              } else {
                nmi--;
                exitg1 = 2;
              }
            } while (exitg1 == 0);

            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        } else {
          lastv = -1;
          nmi = 0;
        }

        if (lastv + 1 > 0) {
          if (nmi == 0) {
          } else {
            for (itemp = 1; itemp <= nmi; itemp++) {
              work->data[itemp - 1] = 0.0;
            }

            itemp = 0;
            i22 = i_ip1 + A->size[0] * (nmi - 1);
            for (k = i_ip1; k <= i22; k += A->size[0]) {
              ix = i_i;
              xnorm = 0.0;
              j = k + lastv;
              for (ia = k; ia <= j; ia++) {
                xnorm += b_A->data[ia - 1] * b_A->data[ix];
                ix++;
              }

              work->data[itemp] += xnorm;
              itemp++;
            }
          }

          if (-tau->data[i] == 0.0) {
          } else {
            itemp = 0;
            for (j = 1; j <= nmi; j++) {
              if (work->data[itemp] != 0.0) {
                xnorm = work->data[itemp] * -tau->data[i];
                ix = i_i;
                i22 = lastv + i_ip1;
                for (k = i_ip1; k <= i22; k++) {
                  b_A->data[k - 1] += b_A->data[ix] * xnorm;
                  ix++;
                }
              }

              itemp++;
              i_ip1 += A->size[0];
            }
          }
        }

        b_A->data[i_i] = atmp;
      }

      for (j = i + 1; j + 1 <= A->size[1]; j++) {
        if (vn1->data[j] != 0.0) {
          xnorm = fabs(b_A->data[i + b_A->size[0] * j]) / vn1->data[j];
          xnorm = 1.0 - xnorm * xnorm;
          if (xnorm < 0.0) {
            xnorm = 0.0;
          }

          atmp = vn1->data[j] / vn2->data[j];
          atmp = xnorm * (atmp * atmp);
          if (atmp <= 1.4901161193847656E-8) {
            if (i + 1 < A->size[0]) {
              vn1->data[j] = b_eml_xnrm2(mmi, b_A, (i + A->size[0] * j) + 2);
              vn2->data[j] = vn1->data[j];
            } else {
              vn1->data[j] = 0.0;
              vn2->data[j] = 0.0;
            }
          } else {
            vn1->data[j] *= sqrt(xnorm);
          }
        }
      }
    }

    emxFree_real_T(&vn2);
    emxFree_real_T(&vn1);
    emxFree_real_T(&work);
  }

  atmp = 0.0;
  if (mn > 0) {
    if (A->size[0] >= A->size[1]) {
      itemp = A->size[0];
    } else {
      itemp = A->size[1];
    }

    xnorm = (double)itemp * fabs(b_A->data[0]) * 2.2204460492503131E-16;
    k = 0;
    while ((k <= mn - 1) && (!(fabs(b_A->data[k + b_A->size[0] * k]) <= xnorm)))
    {
      atmp++;
      k++;
    }
  }

  unnamed_idx_0 = (unsigned int)A->size[1];
  unnamed_idx_1 = (unsigned int)B->size[1];
  i22 = Y->size[0] * Y->size[1];
  Y->size[0] = (int)unnamed_idx_0;
  emxEnsureCapacity((emxArray__common *)Y, i22, (int)sizeof(double));
  i22 = Y->size[0] * Y->size[1];
  Y->size[1] = (int)unnamed_idx_1;
  emxEnsureCapacity((emxArray__common *)Y, i22, (int)sizeof(double));
  itemp = (int)unnamed_idx_0 * (int)unnamed_idx_1;
  for (i22 = 0; i22 < itemp; i22++) {
    Y->data[i22] = 0.0;
  }

  for (j = 0; j < mn; j++) {
    if (tau->data[j] != 0.0) {
      for (k = 0; k <= nb; k++) {
        xnorm = B->data[j + B->size[0] * k];
        i22 = A->size[0] + (int)(1.0 - ((1.0 + (double)j) + 1.0));
        for (i = 0; i < i22; i++) {
          unnamed_idx_0 = ((unsigned int)j + i) + 2U;
          xnorm += b_A->data[((int)unnamed_idx_0 + b_A->size[0] * j) - 1] *
            B->data[((int)unnamed_idx_0 + B->size[0] * k) - 1];
        }

        xnorm *= tau->data[j];
        if (xnorm != 0.0) {
          B->data[j + B->size[0] * k] -= xnorm;
          i22 = A->size[0] + (int)(1.0 - ((1.0 + (double)j) + 1.0));
          for (i = 0; i < i22; i++) {
            unnamed_idx_0 = ((unsigned int)j + i) + 2U;
            B->data[((int)unnamed_idx_0 + B->size[0] * k) - 1] -= b_A->data
              [((int)unnamed_idx_0 + b_A->size[0] * j) - 1] * xnorm;
          }
        }
      }
    }
  }

  emxFree_real_T(&tau);
  for (k = 0; k <= nb; k++) {
    for (i = 0; i < (int)atmp; i++) {
      Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] = B->data[i + B->size[0] * k];
    }

    for (j = 0; j < (int)-(1.0 + (-1.0 - atmp)); j++) {
      xnorm = atmp + -(double)j;
      Y->data[(jpvt->data[(int)xnorm - 1] + Y->size[0] * k) - 1] /= b_A->data
        [((int)xnorm + b_A->size[0] * ((int)xnorm - 1)) - 1];
      for (i = 0; i <= (int)xnorm - 2; i++) {
        Y->data[(jpvt->data[i] + Y->size[0] * k) - 1] -= Y->data[(jpvt->data
          [(int)xnorm - 1] + Y->size[0] * k) - 1] * b_A->data[i + b_A->size[0] *
          ((int)xnorm - 1)];
      }
    }
  }

  emxFree_int32_T(&jpvt);
  emxFree_real_T(&b_A);
}

/*
 * Arguments    : int n
 *                const emxArray_real_T *x
 *                int ix0
 * Return Type  : double
 */
double b_eml_xnrm2(int n, const emxArray_real_T *x, int ix0)
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
 * Arguments    : int n
 *                const emxArray_real_T *x
 *                int ix0
 * Return Type  : int
 */
int eml_ixamax(int n, const emxArray_real_T *x, int ix0)
{
  int idxmax;
  int ix;
  double smax;
  int k;
  double s;
  if (n < 1) {
    idxmax = 0;
  } else {
    idxmax = 1;
    if (n > 1) {
      ix = ix0 - 1;
      smax = fabs(x->data[ix0 - 1]);
      for (k = 2; k <= n; k++) {
        ix++;
        s = fabs(x->data[ix]);
        if (s > smax) {
          idxmax = k;
          smax = s;
        }
      }
    }
  }

  return idxmax;
}

/*
 * Arguments    : int n
 *                const emxArray_real_T *x
 *                int ix0
 * Return Type  : double
 */
double eml_xnrm2(int n, const emxArray_real_T *x, int ix0)
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
 * Arguments    : int n
 *                double a
 *                emxArray_real_T *x
 *                int ix0
 * Return Type  : void
 */
void eml_xscal(int n, double a, emxArray_real_T *x, int ix0)
{
  int i32;
  int k;
  i32 = (ix0 + n) - 1;
  for (k = ix0; k <= i32; k++) {
    x->data[k - 1] *= a;
  }
}

/*
 * Arguments    : int n
 *                emxArray_real_T *x
 *                int ix0
 *                int iy0
 * Return Type  : void
 */
void eml_xswap(int n, emxArray_real_T *x, int ix0, int iy0)
{
  int ix;
  int iy;
  int k;
  double temp;
  ix = ix0 - 1;
  iy = iy0 - 1;
  for (k = 1; k <= n; k++) {
    temp = x->data[ix];
    x->data[ix] = x->data[iy];
    x->data[iy] = temp;
    ix++;
    iy++;
  }
}

/*
 * Arguments    : const emxArray_real_T *A
 *                const emxArray_real_T *B
 *                emxArray_real_T *Y
 * Return Type  : void
 */
void mldivide(const emxArray_real_T *A, const emxArray_real_T *B,
              emxArray_real_T *Y)
{
  emxArray_real_T *b_B;
  unsigned int unnamed_idx_0;
  unsigned int unnamed_idx_1;
  int i19;
  int loop_ub;
  emxInit_real_T(&b_B, 2);
  if ((A->size[0] == 0) || (A->size[1] == 0) || (B->size[0] == 0)) {
    unnamed_idx_0 = (unsigned int)A->size[1];
    unnamed_idx_1 = (unsigned int)B->size[1];
    i19 = Y->size[0] * Y->size[1];
    Y->size[0] = (int)unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)Y, i19, (int)sizeof(double));
    i19 = Y->size[0] * Y->size[1];
    Y->size[1] = (int)unnamed_idx_1;
    emxEnsureCapacity((emxArray__common *)Y, i19, (int)sizeof(double));
    loop_ub = (int)unnamed_idx_0 * (int)unnamed_idx_1;
    for (i19 = 0; i19 < loop_ub; i19++) {
      Y->data[i19] = 0.0;
    }
  } else if (A->size[0] == A->size[1]) {
    eml_lusolve(A, B, Y);
  } else {
    i19 = b_B->size[0] * b_B->size[1];
    b_B->size[0] = B->size[0];
    b_B->size[1] = B->size[1];
    emxEnsureCapacity((emxArray__common *)b_B, i19, (int)sizeof(double));
    loop_ub = B->size[0] * B->size[1];
    for (i19 = 0; i19 < loop_ub; i19++) {
      b_B->data[i19] = B->data[i19];
    }

    eml_qrsolve(A, b_B, Y);
  }

  emxFree_real_T(&b_B);
}

/*
 * File trailer for mldivide.c
 *
 * [EOF]
 */
