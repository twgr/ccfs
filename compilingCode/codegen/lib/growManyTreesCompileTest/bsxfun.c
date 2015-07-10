/*
 * File: bsxfun.c
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

/* Include files */
#include "rt_nonfinite.h"
#include "growManyTreesCompileTest.h"
#include "bsxfun.h"
#include "growManyTreesCompileTest_emxutil.h"
#include "rdivide.h"

/* Function Definitions */

/*
 * Arguments    : const emxArray_real_T *a
 *                const emxArray_real_T *b
 *                emxArray_boolean_T *c
 * Return Type  : void
 */
void b_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_boolean_T *c)
{
  int i7;
  int b_idx_0;
  int b_idx_1;
  emxArray_real_T *bv;
  int asub;
  int ak;
  int b_b_idx_0;
  int ck;
  emxArray_boolean_T *cv;
  int32_T exitg1;
  double b_a;
  int32_T exitg2;
  i7 = c->size[0] * c->size[1];
  c->size[0] = b->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)c, i7, (int)sizeof(boolean_T));
  b_idx_0 = b->size[0];
  b_idx_1 = a->size[1];
  if ((b_idx_0 == 0) || (b_idx_1 == 0)) {
  } else {
    b_emxInit_real_T(&bv, 1);
    b_idx_1 = b->size[0];
    i7 = bv->size[0];
    bv->size[0] = b_idx_1;
    emxEnsureCapacity((emxArray__common *)bv, i7, (int)sizeof(double));
    asub = 1;
    ak = 0;
    b_idx_0 = b->size[0];
    b_idx_1 = a->size[1];
    b_b_idx_0 = b->size[0];
    i7 = b_idx_0 * b_idx_1 - b_b_idx_0;
    ck = 0;
    emxInit_boolean_T(&cv, 1);
    do {
      exitg1 = 0;
      b_idx_0 = b->size[0];
      if ((b_idx_0 > 0) && (ck <= i7)) {
        for (b_idx_1 = 0; b_idx_1 + 1 <= b->size[0]; b_idx_1++) {
          bv->data[b_idx_1] = b->data[b_idx_1];
        }

        b_a = a->data[ak];
        b_idx_1 = cv->size[0];
        cv->size[0] = bv->size[0];
        emxEnsureCapacity((emxArray__common *)cv, b_idx_1, (int)sizeof(boolean_T));
        b_b_idx_0 = bv->size[0];
        for (b_idx_1 = 0; b_idx_1 < b_b_idx_0; b_idx_1++) {
          cv->data[b_idx_1] = (b_a == bv->data[b_idx_1]);
        }

        b_idx_1 = 0;
        do {
          exitg2 = 0;
          b_idx_0 = b->size[0];
          if (b_idx_1 + 1 <= b_idx_0) {
            c->data[ck + b_idx_1] = cv->data[b_idx_1];
            b_idx_1++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak++;
          asub++;
        } else {
          asub = 1;
        }

        b_idx_0 = b->size[0];
        ck += b_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_boolean_T(&cv);
    emxFree_real_T(&bv);
  }
}

/*
 * Arguments    : double a
 *                const double b[2]
 *                boolean_T c[2]
 * Return Type  : void
 */
void bsxfun(double a, const double b[2], boolean_T c[2])
{
  int bk;
  int ck;
  bk = 0;
  for (ck = 0; ck < 2; ck++) {
    c[ck] = (a == b[bk]);
    bk++;
  }
}

/*
 * Arguments    : const emxArray_real_T *a
 *                const emxArray_real_T *b
 *                emxArray_boolean_T *c
 * Return Type  : void
 */
void c_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_boolean_T *c)
{
  int i11;
  int a_idx_0;
  int a_idx_1;
  emxArray_real_T *av;
  int asub;
  int bsub;
  int ak;
  int bk;
  int b_a_idx_0;
  int ck;
  emxArray_boolean_T *cv;
  int32_T exitg1;
  double b_b;
  int32_T exitg2;
  i11 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)c, i11, (int)sizeof(boolean_T));
  a_idx_0 = a->size[0];
  a_idx_1 = a->size[1];
  if ((a_idx_0 == 0) || (a_idx_1 == 0)) {
  } else {
    b_emxInit_real_T(&av, 1);
    a_idx_1 = a->size[0];
    i11 = av->size[0];
    av->size[0] = a_idx_1;
    emxEnsureCapacity((emxArray__common *)av, i11, (int)sizeof(double));
    asub = 1;
    bsub = 1;
    ak = -1;
    bk = 0;
    a_idx_0 = a->size[0];
    a_idx_1 = a->size[1];
    b_a_idx_0 = a->size[0];
    i11 = a_idx_0 * a_idx_1 - b_a_idx_0;
    ck = 0;
    emxInit_boolean_T(&cv, 1);
    do {
      exitg1 = 0;
      a_idx_0 = a->size[0];
      if ((a_idx_0 > 0) && (ck <= i11)) {
        for (a_idx_1 = 1; a_idx_1 <= a->size[0]; a_idx_1++) {
          av->data[a_idx_1 - 1] = a->data[ak + a_idx_1];
        }

        b_b = b->data[bk];
        a_idx_1 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity((emxArray__common *)cv, a_idx_1, (int)sizeof(boolean_T));
        b_a_idx_0 = av->size[0];
        for (a_idx_1 = 0; a_idx_1 < b_a_idx_0; a_idx_1++) {
          cv->data[a_idx_1] = (av->data[a_idx_1] == b_b);
        }

        a_idx_1 = 1;
        do {
          exitg2 = 0;
          a_idx_0 = a->size[0];
          if (a_idx_1 <= a_idx_0) {
            c->data[(ck + a_idx_1) - 1] = cv->data[a_idx_1 - 1];
            a_idx_1++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          bk++;
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk++;
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        a_idx_0 = a->size[0];
        ck += a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_boolean_T(&cv);
    emxFree_real_T(&av);
  }
}

/*
 * Arguments    : const emxArray_real_T *a
 *                const emxArray_real_T *b
 *                emxArray_real_T *c
 * Return Type  : void
 */
void d_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int i14;
  int a_idx_0;
  int a_idx_1;
  emxArray_real_T *av;
  int asub;
  int bsub;
  int ak;
  int bk;
  int b_a_idx_0;
  int ck;
  emxArray_real_T *cv;
  int32_T exitg1;
  double b_b;
  int32_T exitg2;
  i14 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)c, i14, (int)sizeof(double));
  a_idx_0 = a->size[0];
  a_idx_1 = a->size[1];
  if ((a_idx_0 == 0) || (a_idx_1 == 0)) {
  } else {
    b_emxInit_real_T(&av, 1);
    a_idx_1 = a->size[0];
    i14 = av->size[0];
    av->size[0] = a_idx_1;
    emxEnsureCapacity((emxArray__common *)av, i14, (int)sizeof(double));
    asub = 1;
    bsub = 1;
    ak = -1;
    bk = 0;
    a_idx_0 = a->size[0];
    a_idx_1 = a->size[1];
    b_a_idx_0 = a->size[0];
    i14 = a_idx_0 * a_idx_1 - b_a_idx_0;
    ck = 0;
    b_emxInit_real_T(&cv, 1);
    do {
      exitg1 = 0;
      a_idx_0 = a->size[0];
      if ((a_idx_0 > 0) && (ck <= i14)) {
        for (a_idx_1 = 1; a_idx_1 <= a->size[0]; a_idx_1++) {
          av->data[a_idx_1 - 1] = a->data[ak + a_idx_1];
        }

        b_b = b->data[bk];
        a_idx_1 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity((emxArray__common *)cv, a_idx_1, (int)sizeof(double));
        b_a_idx_0 = av->size[0];
        for (a_idx_1 = 0; a_idx_1 < b_a_idx_0; a_idx_1++) {
          cv->data[a_idx_1] = av->data[a_idx_1] - b_b;
        }

        a_idx_1 = 1;
        do {
          exitg2 = 0;
          a_idx_0 = a->size[0];
          if (a_idx_1 <= a_idx_0) {
            c->data[(ck + a_idx_1) - 1] = cv->data[a_idx_1 - 1];
            a_idx_1++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          bk++;
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk++;
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        a_idx_0 = a->size[0];
        ck += a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_real_T(&av);
  }
}

/*
 * Arguments    : const emxArray_boolean_T *a
 *                const emxArray_real_T *b
 *                emxArray_real_T *c
 * Return Type  : void
 */
void e_bsxfun(const emxArray_boolean_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int i15;
  int a_idx_0;
  int a_idx_1;
  emxArray_boolean_T *av;
  int asub;
  int bsub;
  int ak;
  int bk;
  int b_a_idx_0;
  int ck;
  emxArray_real_T *cv;
  int32_T exitg1;
  double b_b;
  int32_T exitg2;
  i15 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)c, i15, (int)sizeof(double));
  a_idx_0 = a->size[0];
  a_idx_1 = a->size[1];
  if ((a_idx_0 == 0) || (a_idx_1 == 0)) {
  } else {
    emxInit_boolean_T(&av, 1);
    a_idx_1 = a->size[0];
    i15 = av->size[0];
    av->size[0] = a_idx_1;
    emxEnsureCapacity((emxArray__common *)av, i15, (int)sizeof(boolean_T));
    asub = 1;
    bsub = 1;
    ak = -1;
    bk = 0;
    a_idx_0 = a->size[0];
    a_idx_1 = a->size[1];
    b_a_idx_0 = a->size[0];
    i15 = a_idx_0 * a_idx_1 - b_a_idx_0;
    ck = 0;
    b_emxInit_real_T(&cv, 1);
    do {
      exitg1 = 0;
      a_idx_0 = a->size[0];
      if ((a_idx_0 > 0) && (ck <= i15)) {
        for (a_idx_1 = 1; a_idx_1 <= a->size[0]; a_idx_1++) {
          av->data[a_idx_1 - 1] = a->data[ak + a_idx_1];
        }

        b_b = b->data[bk];
        a_idx_1 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity((emxArray__common *)cv, a_idx_1, (int)sizeof(double));
        b_a_idx_0 = av->size[0];
        for (a_idx_1 = 0; a_idx_1 < b_a_idx_0; a_idx_1++) {
          cv->data[a_idx_1] = (double)av->data[a_idx_1] - b_b;
        }

        a_idx_1 = 1;
        do {
          exitg2 = 0;
          a_idx_0 = a->size[0];
          if (a_idx_1 <= a_idx_0) {
            c->data[(ck + a_idx_1) - 1] = cv->data[a_idx_1 - 1];
            a_idx_1++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          bk++;
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk++;
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        a_idx_0 = a->size[0];
        ck += a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_boolean_T(&av);
  }
}

/*
 * Arguments    : const emxArray_real_T *a
 *                const emxArray_real_T *b
 *                emxArray_real_T *c
 * Return Type  : void
 */
void f_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int i24;
  int a_idx_0;
  emxArray_real_T *av;
  int unnamed_idx_0;
  int asub;
  int bsub;
  int ak;
  int bk;
  int b_a_idx_0;
  emxArray_real_T *cv;
  int32_T exitg1;
  int32_T exitg2;
  i24 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)c, i24, (int)sizeof(double));
  a_idx_0 = a->size[0];
  if (a_idx_0 == 0) {
  } else {
    b_emxInit_real_T(&av, 1);
    unnamed_idx_0 = a->size[0];
    i24 = av->size[0];
    av->size[0] = unnamed_idx_0;
    emxEnsureCapacity((emxArray__common *)av, i24, (int)sizeof(double));
    asub = 1;
    bsub = 1;
    ak = -1;
    bk = 0;
    a_idx_0 = a->size[0];
    unnamed_idx_0 = a->size[1];
    b_a_idx_0 = a->size[0];
    i24 = a_idx_0 * unnamed_idx_0 - b_a_idx_0;
    unnamed_idx_0 = 0;
    b_emxInit_real_T(&cv, 1);
    do {
      exitg1 = 0;
      a_idx_0 = a->size[0];
      if ((a_idx_0 > 0) && (unnamed_idx_0 <= i24)) {
        for (b_a_idx_0 = 1; b_a_idx_0 <= a->size[0]; b_a_idx_0++) {
          av->data[b_a_idx_0 - 1] = a->data[ak + b_a_idx_0];
        }

        rdivide(av, b->data[bk], cv);
        b_a_idx_0 = 1;
        do {
          exitg2 = 0;
          a_idx_0 = a->size[0];
          if (b_a_idx_0 <= a_idx_0) {
            c->data[(unnamed_idx_0 + b_a_idx_0) - 1] = cv->data[b_a_idx_0 - 1];
            b_a_idx_0++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          bk++;
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk++;
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        a_idx_0 = a->size[0];
        unnamed_idx_0 += a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_real_T(&av);
  }
}

/*
 * Arguments    : const emxArray_real_T *a
 *                const emxArray_real_T *b
 *                emxArray_real_T *c
 * Return Type  : void
 */
void g_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int i26;
  int b_idx_0;
  int b_idx_1;
  emxArray_real_T *bv;
  int asub;
  int bsub;
  int ak;
  int bk;
  int b_b_idx_0;
  int ck;
  emxArray_real_T *cv;
  int32_T exitg1;
  double b_a;
  int32_T exitg2;
  i26 = c->size[0] * c->size[1];
  c->size[0] = b->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)c, i26, (int)sizeof(double));
  b_idx_0 = b->size[0];
  b_idx_1 = a->size[1];
  if ((b_idx_0 == 0) || (b_idx_1 == 0)) {
  } else {
    b_emxInit_real_T(&bv, 1);
    b_idx_1 = b->size[0];
    i26 = bv->size[0];
    bv->size[0] = b_idx_1;
    emxEnsureCapacity((emxArray__common *)bv, i26, (int)sizeof(double));
    asub = 1;
    bsub = 1;
    ak = 0;
    bk = -1;
    b_idx_0 = b->size[0];
    b_idx_1 = a->size[1];
    b_b_idx_0 = b->size[0];
    i26 = b_idx_0 * b_idx_1 - b_b_idx_0;
    ck = 0;
    b_emxInit_real_T(&cv, 1);
    do {
      exitg1 = 0;
      b_idx_0 = b->size[0];
      if ((b_idx_0 > 0) && (ck <= i26)) {
        for (b_idx_1 = 1; b_idx_1 <= b->size[0]; b_idx_1++) {
          bv->data[b_idx_1 - 1] = b->data[bk + b_idx_1];
        }

        b_a = a->data[ak];
        b_idx_1 = cv->size[0];
        cv->size[0] = bv->size[0];
        emxEnsureCapacity((emxArray__common *)cv, b_idx_1, (int)sizeof(double));
        b_b_idx_0 = bv->size[0];
        for (b_idx_1 = 0; b_idx_1 < b_b_idx_0; b_idx_1++) {
          cv->data[b_idx_1] = b_a - bv->data[b_idx_1];
        }

        b_idx_1 = 1;
        do {
          exitg2 = 0;
          b_idx_0 = b->size[0];
          if (b_idx_1 <= b_idx_0) {
            c->data[(ck + b_idx_1) - 1] = cv->data[b_idx_1 - 1];
            b_idx_1++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak++;
          bk += b->size[0];
          bsub++;
          asub++;
        } else if (bsub < b->size[1]) {
          bk += b->size[0];
          bsub++;
        } else {
          asub = 1;
          bsub = 1;
        }

        b_idx_0 = b->size[0];
        ck += b_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_real_T(&bv);
  }
}

/*
 * Arguments    : const emxArray_real_T *a
 *                const emxArray_real_T *b
 *                emxArray_real_T *c
 * Return Type  : void
 */
void h_bsxfun(const emxArray_real_T *a, const emxArray_real_T *b,
              emxArray_real_T *c)
{
  int i27;
  int a_idx_0;
  int a_idx_1;
  emxArray_real_T *av;
  emxArray_real_T *bv;
  int asub;
  int ak;
  int b_a_idx_0;
  int ck;
  emxArray_real_T *cv;
  int32_T exitg1;
  int32_T exitg2;
  i27 = c->size[0] * c->size[1];
  c->size[0] = a->size[0];
  c->size[1] = a->size[1];
  emxEnsureCapacity((emxArray__common *)c, i27, (int)sizeof(double));
  a_idx_0 = a->size[0];
  a_idx_1 = a->size[1];
  if ((a_idx_0 == 0) || (a_idx_1 == 0)) {
  } else {
    b_emxInit_real_T(&av, 1);
    b_emxInit_real_T(&bv, 1);
    a_idx_1 = a->size[0];
    i27 = av->size[0];
    av->size[0] = a_idx_1;
    emxEnsureCapacity((emxArray__common *)av, i27, (int)sizeof(double));
    a_idx_1 = b->size[0];
    i27 = bv->size[0];
    bv->size[0] = a_idx_1;
    emxEnsureCapacity((emxArray__common *)bv, i27, (int)sizeof(double));
    asub = 1;
    ak = -1;
    a_idx_0 = a->size[0];
    a_idx_1 = a->size[1];
    b_a_idx_0 = a->size[0];
    i27 = a_idx_0 * a_idx_1 - b_a_idx_0;
    ck = 0;
    b_emxInit_real_T(&cv, 1);
    do {
      exitg1 = 0;
      a_idx_0 = a->size[0];
      if ((a_idx_0 > 0) && (ck <= i27)) {
        for (a_idx_1 = 1; a_idx_1 <= a->size[0]; a_idx_1++) {
          av->data[a_idx_1 - 1] = a->data[ak + a_idx_1];
        }

        for (a_idx_1 = 0; a_idx_1 + 1 <= b->size[0]; a_idx_1++) {
          bv->data[a_idx_1] = b->data[a_idx_1];
        }

        a_idx_1 = cv->size[0];
        cv->size[0] = av->size[0];
        emxEnsureCapacity((emxArray__common *)cv, a_idx_1, (int)sizeof(double));
        b_a_idx_0 = av->size[0];
        for (a_idx_1 = 0; a_idx_1 < b_a_idx_0; a_idx_1++) {
          cv->data[a_idx_1] = av->data[a_idx_1] / bv->data[a_idx_1];
        }

        a_idx_1 = 0;
        do {
          exitg2 = 0;
          a_idx_0 = a->size[0];
          if (a_idx_1 + 1 <= a_idx_0) {
            c->data[ck + a_idx_1] = cv->data[a_idx_1];
            a_idx_1++;
          } else {
            exitg2 = 1;
          }
        } while (exitg2 == 0);

        if (asub < a->size[1]) {
          ak += a->size[0];
          asub++;
        } else {
          asub = 1;
        }

        a_idx_0 = a->size[0];
        ck += a_idx_0;
      } else {
        exitg1 = 1;
      }
    } while (exitg1 == 0);

    emxFree_real_T(&cv);
    emxFree_real_T(&bv);
    emxFree_real_T(&av);
  }
}

/*
 * File trailer for bsxfun.c
 *
 * [EOF]
 */
