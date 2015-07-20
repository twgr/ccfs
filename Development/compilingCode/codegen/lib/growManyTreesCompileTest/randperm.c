/*
 * File: randperm.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "randperm.h"
#include "rand.h"
#include "growCCTnotRecursive.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "growManyTreesCompileTest_rtwutil.h"

/* Function Definitions */

/*
 * Arguments    : double n
 *                double k
 *                emxArray_real_T *p
 * Return Type  : void
 */
void randperm(double n, double k, emxArray_real_T *p)
{
  int m;
  int loop_ub;
  double selectedLoc;
  double j;
  double t;
  double denom;
  double nleftm1;
  double newEntry;
  emxArray_real_T *hashTbl;
  emxArray_real_T *link;
  emxArray_real_T *val;
  emxArray_real_T *loc;
  m = p->size[0] * p->size[1];
  p->size[0] = 1;
  p->size[1] = (int)k;
  emxEnsureCapacity((emxArray__common *)p, m, (int)sizeof(double));
  loop_ub = (int)k;
  for (m = 0; m < loop_ub; m++) {
    p->data[m] = 0.0;
  }

  if (k == 0.0) {
  } else if (k >= n) {
    p->data[0] = 1.0;
    for (m = 0; m < (int)(n - 1.0); m++) {
      selectedLoc = b_rand() * ((1.0 + (double)m) + 1.0);
      j = floor(selectedLoc);
      p->data[(int)((1.0 + (double)m) + 1.0) - 1] = p->data[(int)(j + 1.0) - 1];
      p->data[(int)(j + 1.0) - 1] = (1.0 + (double)m) + 1.0;
    }
  } else if (k >= n / 4.0) {
    t = 0.0;
    for (m = 0; m < (int)((k - 1.0) + 1.0); m++) {
      selectedLoc = k - (double)m;
      denom = n - t;
      nleftm1 = selectedLoc / denom;
      newEntry = b_rand();
      while (newEntry > nleftm1) {
        t++;
        denom--;
        nleftm1 += (1.0 - nleftm1) * (selectedLoc / denom);
      }

      t++;
      selectedLoc = b_rand() * ((double)m + 1.0);
      j = floor(selectedLoc);
      p->data[m] = p->data[(int)(j + 1.0) - 1];
      p->data[(int)(j + 1.0) - 1] = t;
    }
  } else {
    b_emxInit_real_T(&hashTbl, 1);
    m = hashTbl->size[0];
    hashTbl->size[0] = (int)k;
    emxEnsureCapacity((emxArray__common *)hashTbl, m, (int)sizeof(double));
    loop_ub = (int)k;
    for (m = 0; m < loop_ub; m++) {
      hashTbl->data[m] = 0.0;
    }

    b_emxInit_real_T(&link, 1);
    m = link->size[0];
    link->size[0] = (int)k;
    emxEnsureCapacity((emxArray__common *)link, m, (int)sizeof(double));
    loop_ub = (int)k;
    for (m = 0; m < loop_ub; m++) {
      link->data[m] = 0.0;
    }

    b_emxInit_real_T(&val, 1);
    m = val->size[0];
    val->size[0] = (int)k;
    emxEnsureCapacity((emxArray__common *)val, m, (int)sizeof(double));
    loop_ub = (int)k;
    for (m = 0; m < loop_ub; m++) {
      val->data[m] = 0.0;
    }

    b_emxInit_real_T(&loc, 1);
    m = loc->size[0];
    loc->size[0] = (int)k;
    emxEnsureCapacity((emxArray__common *)loc, m, (int)sizeof(double));
    loop_ub = (int)k;
    for (m = 0; m < loop_ub; m++) {
      loc->data[m] = 0.0;
    }

    newEntry = 1.0;
    for (m = 0; m < (int)k; m++) {
      nleftm1 = n - (1.0 + (double)m);
      selectedLoc = b_rand() * (nleftm1 + 1.0);
      selectedLoc = floor(selectedLoc);
      if (k == k) {
        denom = selectedLoc - floor(selectedLoc / k) * k;
      } else {
        denom = selectedLoc / k;
        if (fabs(denom - rt_roundd_snf(denom)) <= 2.2204460492503131E-16 * fabs
            (denom)) {
          denom = 0.0;
        } else {
          denom = (denom - floor(denom)) * k;
        }
      }

      j = hashTbl->data[(int)(1.0 + denom) - 1];
      while ((j > 0.0) && (loc->data[(int)j - 1] != selectedLoc)) {
        j = link->data[(int)j - 1];
      }

      if (j > 0.0) {
        p->data[m] = val->data[(int)j - 1] + 1.0;
      } else {
        p->data[m] = selectedLoc + 1.0;
        j = newEntry;
        newEntry++;
        loc->data[(int)j - 1] = selectedLoc;
        link->data[(int)j - 1] = hashTbl->data[(int)(1.0 + denom) - 1];
        hashTbl->data[(int)(1.0 + denom) - 1] = j;
      }

      if (1.0 + (double)m < k) {
        if (k == k) {
          denom = nleftm1 - floor(nleftm1 / k) * k;
        } else {
          denom = nleftm1 / k;
          if (fabs(denom - rt_roundd_snf(denom)) <= 2.2204460492503131E-16 *
              fabs(denom)) {
            denom = 0.0;
          } else {
            denom = (denom - floor(denom)) * k;
          }
        }

        selectedLoc = hashTbl->data[(int)(1.0 + denom) - 1];
        while ((selectedLoc > 0.0) && (loc->data[(int)selectedLoc - 1] !=
                nleftm1)) {
          selectedLoc = link->data[(int)selectedLoc - 1];
        }

        if (selectedLoc > 0.0) {
          selectedLoc = val->data[(int)selectedLoc - 1];
        } else {
          selectedLoc = nleftm1;
        }

        val->data[(int)j - 1] = selectedLoc;
      }
    }

    emxFree_real_T(&loc);
    emxFree_real_T(&val);
    emxFree_real_T(&link);
    emxFree_real_T(&hashTbl);
  }
}

/*
 * File trailer for randperm.c
 *
 * [EOF]
 */
