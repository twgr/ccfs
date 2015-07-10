/*
 * File: growManyTreesCompileTest.h
 *
 * MATLAB Coder version            : 2.6
 * C/C++ source code generated on  : 10-Jul-2015 19:48:59
 */

#ifndef __GROWMANYTREESCOMPILETEST_H__
#define __GROWMANYTREESCOMPILETEST_H__

/* Include files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "rtwtypes.h"
#include "omp.h"
#include "growManyTreesCompileTest_types.h"

/* Function Declarations */
extern int getThreadID(void);
extern void getThreadID_init(void);
extern void growManyTreesCompileTest(double nTrees, const emxArray_real_T
  *XTrain, const emxArray_boolean_T *YTrain, const struct0_T *options, const
  emxArray_real_T *iFeatureNum, emxArray_struct2_T *trees);

#endif

/*
 * File trailer for growManyTreesCompileTest.h
 *
 * [EOF]
 */
