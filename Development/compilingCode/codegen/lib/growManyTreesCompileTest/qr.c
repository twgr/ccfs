/*
 * File: qr.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "qr.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "mldivide.h"
#include "colon.h"
#include "growManyTreesCompileTest_rtwutil.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *A
 *                emxArray_real_T *Q
 *                emxArray_real_T *R
 *                emxArray_real_T *E
 * Return Type  : void
 */
void qr(const emxArray_real_T *A, emxArray_real_T *Q, emxArray_real_T *R,
        emxArray_real_T *E)
{
  emxArray_real_T *b_A;
  int i16;
  int k;
  int mn;
  emxArray_real_T *tau;
  emxArray_int32_T *jpvt;
  emxArray_real_T *work;
  int pvt;
  emxArray_real_T *vn1;
  emxArray_real_T *vn2;
  int j;
  int i;
  int i_i;
  int nmi;
  int mmi;
  double atmp;
  double d2;
  double xnorm;
  int i_ip1;
  int lastv;
  boolean_T exitg6;
  int ia;
  int32_T exitg5;
  int ix;
  emxArray_real_T *c_A;
  boolean_T exitg4;
  int32_T exitg3;
  boolean_T exitg2;
  int32_T exitg1;
  emxInit_real_T(&b_A, 2);
  i16 = b_A->size[0] * b_A->size[1];
  b_A->size[0] = A->size[0];
  b_A->size[1] = A->size[1];
  emxEnsureCapacity((emxArray__common *)b_A, i16, (int)sizeof(double));
  k = A->size[0] * A->size[1];
  for (i16 = 0; i16 < k; i16++) {
    b_A->data[i16] = A->data[i16];
  }

  if (A->size[0] <= A->size[1]) {
    mn = A->size[0];
  } else {
    mn = A->size[1];
  }

  b_emxInit_real_T(&tau, 1);
  b_emxInit_int32_T(&jpvt, 2);
  i16 = tau->size[0];
  tau->size[0] = mn;
  emxEnsureCapacity((emxArray__common *)tau, i16, (int)sizeof(double));
  eml_signed_integer_colon(A->size[1], jpvt);
  b_emxInit_real_T(&work, 1);
  if ((A->size[0] == 0) || (A->size[1] == 0)) {
  } else {
    pvt = A->size[1];
    i16 = work->size[0];
    work->size[0] = pvt;
    emxEnsureCapacity((emxArray__common *)work, i16, (int)sizeof(double));
    for (i16 = 0; i16 < pvt; i16++) {
      work->data[i16] = 0.0;
    }

    b_emxInit_real_T(&vn1, 1);
    b_emxInit_real_T(&vn2, 1);
    pvt = A->size[1];
    i16 = vn1->size[0];
    vn1->size[0] = pvt;
    emxEnsureCapacity((emxArray__common *)vn1, i16, (int)sizeof(double));
    i16 = vn2->size[0];
    vn2->size[0] = pvt;
    emxEnsureCapacity((emxArray__common *)vn2, i16, (int)sizeof(double));
    k = 1;
    for (j = 0; j + 1 <= A->size[1]; j++) {
      vn1->data[j] = eml_xnrm2(A->size[0], A, k);
      vn2->data[j] = vn1->data[j];
      k += A->size[0];
    }

    for (i = 0; i + 1 <= mn; i++) {
      i_i = i + i * A->size[0];
      nmi = (A->size[1] - i) - 1;
      mmi = (A->size[0] - i) - 1;
      k = eml_ixamax(1 + nmi, vn1, i + 1);
      pvt = (i + k) - 1;
      if (pvt + 1 != i + 1) {
        i16 = A->size[0] * pvt + 1;
        j = A->size[0] * i + 1;
        eml_xswap(A->size[0], b_A, i16, j);
        k = jpvt->data[pvt];
        jpvt->data[pvt] = jpvt->data[i];
        jpvt->data[i] = k;
        vn1->data[pvt] = vn1->data[i];
        vn2->data[pvt] = vn2->data[i];
      }

      if (i + 1 < A->size[0]) {
        atmp = b_A->data[i_i];
        d2 = 0.0;
        if (1 + mmi <= 0) {
        } else {
          xnorm = eml_xnrm2(mmi, b_A, i_i + 2);
          if (xnorm != 0.0) {
            xnorm = rt_hypotd_snf(b_A->data[i_i], xnorm);
            if (b_A->data[i_i] >= 0.0) {
              xnorm = -xnorm;
            }

            if (fabs(xnorm) < 1.0020841800044864E-292) {
              pvt = 0;
              do {
                pvt++;
                eml_xscal(mmi, 9.9792015476736E+291, b_A, i_i + 2);
                xnorm *= 9.9792015476736E+291;
                atmp *= 9.9792015476736E+291;
              } while (!(fabs(xnorm) >= 1.0020841800044864E-292));

              xnorm = eml_xnrm2(mmi, b_A, i_i + 2);
              xnorm = rt_hypotd_snf(atmp, xnorm);
              if (atmp >= 0.0) {
                xnorm = -xnorm;
              }

              d2 = (xnorm - atmp) / xnorm;
              eml_xscal(mmi, 1.0 / (atmp - xnorm), b_A, i_i + 2);
              for (k = 1; k <= pvt; k++) {
                xnorm *= 1.0020841800044864E-292;
              }

              atmp = xnorm;
            } else {
              d2 = (xnorm - b_A->data[i_i]) / xnorm;
              atmp = 1.0 / (b_A->data[i_i] - xnorm);
              eml_xscal(mmi, atmp, b_A, i_i + 2);
              atmp = xnorm;
            }
          }
        }

        tau->data[i] = d2;
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
          k = i_i + mmi;
          while ((lastv + 1 > 0) && (b_A->data[k] == 0.0)) {
            lastv--;
            k--;
          }

          exitg6 = false;
          while ((!exitg6) && (nmi > 0)) {
            k = i_ip1 + (nmi - 1) * A->size[0];
            ia = k;
            do {
              exitg5 = 0;
              if (ia <= k + lastv) {
                if (b_A->data[ia - 1] != 0.0) {
                  exitg5 = 1;
                } else {
                  ia++;
                }
              } else {
                nmi--;
                exitg5 = 2;
              }
            } while (exitg5 == 0);

            if (exitg5 == 1) {
              exitg6 = true;
            }
          }
        } else {
          lastv = -1;
          nmi = 0;
        }

        if (lastv + 1 > 0) {
          if (nmi == 0) {
          } else {
            for (k = 1; k <= nmi; k++) {
              work->data[k - 1] = 0.0;
            }

            k = 0;
            i16 = i_ip1 + A->size[0] * (nmi - 1);
            for (pvt = i_ip1; pvt <= i16; pvt += A->size[0]) {
              ix = i_i;
              xnorm = 0.0;
              j = pvt + lastv;
              for (ia = pvt; ia <= j; ia++) {
                xnorm += b_A->data[ia - 1] * b_A->data[ix];
                ix++;
              }

              work->data[k] += xnorm;
              k++;
            }
          }

          if (-tau->data[i] == 0.0) {
          } else {
            k = 0;
            for (j = 1; j <= nmi; j++) {
              if (work->data[k] != 0.0) {
                xnorm = work->data[k] * -tau->data[i];
                ix = i_i;
                i16 = lastv + i_ip1;
                for (pvt = i_ip1; pvt <= i16; pvt++) {
                  b_A->data[pvt - 1] += b_A->data[ix] * xnorm;
                  ix++;
                }
              }

              k++;
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
  }

  emxInit_real_T(&c_A, 2);
  if (b_A->size[0] > b_A->size[1]) {
    pvt = b_A->size[1];
    k = b_A->size[1];
    i16 = R->size[0] * R->size[1];
    R->size[0] = pvt;
    R->size[1] = k;
    emxEnsureCapacity((emxArray__common *)R, i16, (int)sizeof(double));
    for (j = 0; j + 1 <= b_A->size[1]; j++) {
      for (i = 0; i + 1 <= j + 1; i++) {
        R->data[i + R->size[0] * j] = b_A->data[i + b_A->size[0] * j];
      }

      for (i = j + 1; i + 1 <= b_A->size[1]; i++) {
        R->data[i + R->size[0] * j] = 0.0;
      }
    }

    i16 = c_A->size[0] * c_A->size[1];
    c_A->size[0] = b_A->size[0];
    c_A->size[1] = b_A->size[1];
    emxEnsureCapacity((emxArray__common *)c_A, i16, (int)sizeof(double));
    k = b_A->size[0] * b_A->size[1];
    for (i16 = 0; i16 < k; i16++) {
      c_A->data[i16] = b_A->data[i16];
    }

    if (b_A->size[1] < 1) {
    } else {
      for (j = b_A->size[1]; j < b_A->size[1]; j++) {
        k = j * b_A->size[0];
        for (i = 0; i < b_A->size[0]; i++) {
          c_A->data[k + i] = 0.0;
        }

        c_A->data[k + j] = 1.0;
      }

      mmi = b_A->size[1] - 1;
      pvt = c_A->size[1];
      i16 = work->size[0];
      work->size[0] = pvt;
      emxEnsureCapacity((emxArray__common *)work, i16, (int)sizeof(double));
      for (i16 = 0; i16 < pvt; i16++) {
        work->data[i16] = 0.0;
      }

      for (i = b_A->size[1]; i >= 1; i--) {
        i_i = i + (i - 1) * b_A->size[0];
        if (i < b_A->size[1]) {
          c_A->data[i_i - 1] = 1.0;
          lastv = b_A->size[0] - i;
          nmi = i_i + b_A->size[0];
          if (tau->data[mmi] != 0.0) {
            k = i_i + lastv;
            while ((lastv + 1 > 0) && (c_A->data[k - 1] == 0.0)) {
              lastv--;
              k--;
            }

            i_ip1 = b_A->size[1] - i;
            exitg4 = false;
            while ((!exitg4) && (i_ip1 > 0)) {
              k = nmi + (i_ip1 - 1) * b_A->size[0];
              ia = k;
              do {
                exitg3 = 0;
                if (ia <= k + lastv) {
                  if (c_A->data[ia - 1] != 0.0) {
                    exitg3 = 1;
                  } else {
                    ia++;
                  }
                } else {
                  i_ip1--;
                  exitg3 = 2;
                }
              } while (exitg3 == 0);

              if (exitg3 == 1) {
                exitg4 = true;
              }
            }
          } else {
            lastv = -1;
            i_ip1 = 0;
          }

          if (lastv + 1 > 0) {
            if (i_ip1 == 0) {
            } else {
              for (k = 1; k <= i_ip1; k++) {
                work->data[k - 1] = 0.0;
              }

              k = 0;
              i16 = nmi + b_A->size[0] * (i_ip1 - 1);
              pvt = nmi;
              while ((b_A->size[0] > 0) && (pvt <= i16)) {
                ix = i_i;
                xnorm = 0.0;
                j = pvt + lastv;
                for (ia = pvt; ia <= j; ia++) {
                  xnorm += c_A->data[ia - 1] * c_A->data[ix - 1];
                  ix++;
                }

                work->data[k] += xnorm;
                k++;
                pvt += b_A->size[0];
              }
            }

            if (-tau->data[mmi] == 0.0) {
            } else {
              k = 0;
              for (j = 1; j <= i_ip1; j++) {
                if (work->data[k] != 0.0) {
                  xnorm = work->data[k] * -tau->data[mmi];
                  ix = i_i;
                  i16 = lastv + nmi;
                  for (pvt = nmi; pvt <= i16; pvt++) {
                    c_A->data[pvt - 1] += c_A->data[ix - 1] * xnorm;
                    ix++;
                  }
                }

                k++;
                nmi += b_A->size[0];
              }
            }
          }
        }

        if (i < b_A->size[0]) {
          eml_xscal(b_A->size[0] - i, -tau->data[mmi], c_A, i_i + 1);
        }

        c_A->data[i_i - 1] = 1.0 - tau->data[mmi];
        for (j = 1; j < i; j++) {
          c_A->data[(i_i - j) - 1] = 0.0;
        }

        mmi--;
      }
    }

    i16 = Q->size[0] * Q->size[1];
    Q->size[0] = c_A->size[0];
    Q->size[1] = c_A->size[1];
    emxEnsureCapacity((emxArray__common *)Q, i16, (int)sizeof(double));
    k = c_A->size[0] * c_A->size[1];
    for (i16 = 0; i16 < k; i16++) {
      Q->data[i16] = c_A->data[i16];
    }
  } else {
    for (i16 = 0; i16 < 2; i16++) {
      j = R->size[0] * R->size[1];
      R->size[i16] = b_A->size[i16];
      emxEnsureCapacity((emxArray__common *)R, j, (int)sizeof(double));
    }

    for (j = 0; j + 1 <= b_A->size[0]; j++) {
      for (i = 0; i + 1 <= j + 1; i++) {
        R->data[i + R->size[0] * j] = b_A->data[i + b_A->size[0] * j];
      }

      for (i = j + 1; i + 1 <= b_A->size[0]; i++) {
        R->data[i + R->size[0] * j] = 0.0;
      }
    }

    for (j = b_A->size[0]; j + 1 <= b_A->size[1]; j++) {
      for (i = 0; i + 1 <= b_A->size[0]; i++) {
        R->data[i + R->size[0] * j] = b_A->data[i + b_A->size[0] * j];
      }
    }

    i16 = c_A->size[0] * c_A->size[1];
    c_A->size[0] = b_A->size[0];
    c_A->size[1] = b_A->size[1];
    emxEnsureCapacity((emxArray__common *)c_A, i16, (int)sizeof(double));
    k = b_A->size[0] * b_A->size[1];
    for (i16 = 0; i16 < k; i16++) {
      c_A->data[i16] = b_A->data[i16];
    }

    if (b_A->size[0] < 1) {
    } else {
      for (j = b_A->size[0]; j < b_A->size[0]; j++) {
        k = j * b_A->size[0];
        for (i = 0; i < b_A->size[0]; i++) {
          c_A->data[k + i] = 0.0;
        }

        c_A->data[k + j] = 1.0;
      }

      mmi = b_A->size[0] - 1;
      pvt = c_A->size[1];
      i16 = work->size[0];
      work->size[0] = pvt;
      emxEnsureCapacity((emxArray__common *)work, i16, (int)sizeof(double));
      for (i16 = 0; i16 < pvt; i16++) {
        work->data[i16] = 0.0;
      }

      for (i = b_A->size[0]; i >= 1; i--) {
        i_i = i + (i - 1) * b_A->size[0];
        if (i < b_A->size[0]) {
          c_A->data[i_i - 1] = 1.0;
          lastv = b_A->size[0] - i;
          nmi = i_i + b_A->size[0];
          if (tau->data[mmi] != 0.0) {
            k = i_i + lastv;
            while ((lastv + 1 > 0) && (c_A->data[k - 1] == 0.0)) {
              lastv--;
              k--;
            }

            i_ip1 = b_A->size[0] - i;
            exitg2 = false;
            while ((!exitg2) && (i_ip1 > 0)) {
              k = nmi + (i_ip1 - 1) * b_A->size[0];
              ia = k;
              do {
                exitg1 = 0;
                if (ia <= k + lastv) {
                  if (c_A->data[ia - 1] != 0.0) {
                    exitg1 = 1;
                  } else {
                    ia++;
                  }
                } else {
                  i_ip1--;
                  exitg1 = 2;
                }
              } while (exitg1 == 0);

              if (exitg1 == 1) {
                exitg2 = true;
              }
            }
          } else {
            lastv = -1;
            i_ip1 = 0;
          }

          if (lastv + 1 > 0) {
            if (i_ip1 == 0) {
            } else {
              for (k = 1; k <= i_ip1; k++) {
                work->data[k - 1] = 0.0;
              }

              k = 0;
              i16 = nmi + b_A->size[0] * (i_ip1 - 1);
              for (pvt = nmi; pvt <= i16; pvt += b_A->size[0]) {
                ix = i_i;
                xnorm = 0.0;
                j = pvt + lastv;
                for (ia = pvt; ia <= j; ia++) {
                  xnorm += c_A->data[ia - 1] * c_A->data[ix - 1];
                  ix++;
                }

                work->data[k] += xnorm;
                k++;
              }
            }

            if (-tau->data[mmi] == 0.0) {
            } else {
              k = 0;
              for (j = 1; j <= i_ip1; j++) {
                if (work->data[k] != 0.0) {
                  xnorm = work->data[k] * -tau->data[mmi];
                  ix = i_i;
                  i16 = lastv + nmi;
                  for (pvt = nmi; pvt <= i16; pvt++) {
                    c_A->data[pvt - 1] += c_A->data[ix - 1] * xnorm;
                    ix++;
                  }
                }

                k++;
                nmi += b_A->size[0];
              }
            }
          }
        }

        if (i < b_A->size[0]) {
          eml_xscal(b_A->size[0] - i, -tau->data[mmi], c_A, i_i + 1);
        }

        c_A->data[i_i - 1] = 1.0 - tau->data[mmi];
        for (j = 1; j < i; j++) {
          c_A->data[(i_i - j) - 1] = 0.0;
        }

        mmi--;
      }
    }

    pvt = b_A->size[0];
    k = b_A->size[0];
    i16 = Q->size[0] * Q->size[1];
    Q->size[0] = pvt;
    Q->size[1] = k;
    emxEnsureCapacity((emxArray__common *)Q, i16, (int)sizeof(double));
    for (j = 0; j + 1 <= b_A->size[0]; j++) {
      for (i = 0; i + 1 <= b_A->size[0]; i++) {
        Q->data[i + Q->size[0] * j] = c_A->data[i + c_A->size[0] * j];
      }
    }
  }

  emxFree_real_T(&work);
  emxFree_real_T(&tau);
  emxFree_real_T(&b_A);
  emxFree_real_T(&c_A);
  i16 = E->size[0] * E->size[1];
  E->size[0] = 1;
  E->size[1] = jpvt->size[1];
  emxEnsureCapacity((emxArray__common *)E, i16, (int)sizeof(double));
  k = jpvt->size[0] * jpvt->size[1];
  for (i16 = 0; i16 < k; i16++) {
    E->data[i16] = jpvt->data[i16];
  }

  emxFree_int32_T(&jpvt);
}

/*
 * File trailer for qr.c
 *
 * [EOF]
 */
