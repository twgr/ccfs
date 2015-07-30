/* 
 * File: _coder_growManyTreesCompileTest_api.h 
 *  
 * MATLAB Coder version            : 2.6 
 * C/C++ source code generated on  : 28-Jul-2015 12:37:59 
 */

#ifndef ___CODER_GROWMANYTREESCOMPILETEST_API_H__
#define ___CODER_GROWMANYTREESCOMPILETEST_API_H__
/* Include files */
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"

/* Type Definitions */
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    double *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T
{
    boolean_T *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_boolean_T*/
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /*typedef_emxArray_boolean_T*/
#ifndef struct_emxArray_char_T_1x10
#define struct_emxArray_char_T_1x10
struct emxArray_char_T_1x10
{
    char data[10];
    int size[2];
};
#endif /*struct_emxArray_char_T_1x10*/
#ifndef typedef_emxArray_char_T_1x10
#define typedef_emxArray_char_T_1x10
typedef struct emxArray_char_T_1x10 emxArray_char_T_1x10;
#endif /*typedef_emxArray_char_T_1x10*/
#ifndef struct_emxArray_real_T_1x3
#define struct_emxArray_real_T_1x3
struct emxArray_real_T_1x3
{
    double data[3];
    int size[2];
};
#endif /*struct_emxArray_real_T_1x3*/
#ifndef typedef_emxArray_real_T_1x3
#define typedef_emxArray_real_T_1x3
typedef struct emxArray_real_T_1x3 emxArray_real_T_1x3;
#endif /*typedef_emxArray_real_T_1x3*/
#ifndef typedef_struct1_T
#define typedef_struct1_T
typedef struct
{
    boolean_T CCA;
    boolean_T PCA;
    boolean_T CCAclasswise;
    emxArray_real_T_1x3 Rand;
} struct1_T;
#endif /*typedef_struct1_T*/
#ifndef struct_emxArray_char_T_1x20
#define struct_emxArray_char_T_1x20
struct emxArray_char_T_1x20
{
    char data[20];
    int size[2];
};
#endif /*struct_emxArray_char_T_1x20*/
#ifndef typedef_emxArray_char_T_1x20
#define typedef_emxArray_char_T_1x20
typedef struct emxArray_char_T_1x20 emxArray_char_T_1x20;
#endif /*typedef_emxArray_char_T_1x20*/
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct
{
    boolean_T bProjBoot;
    double lambda;
    emxArray_char_T_1x10 splitCriterion;
    double minPointsForSplit;
    emxArray_char_T_1x10 dirIfEqual;
    boolean_T bContinueProjBootDegenerate;
    double epsilonCCA;
    boolean_T bBagTrees;
    boolean_T bUseParallel;
    struct1_T projections;
    boolean_T includeOriginalAxes;
    emxArray_char_T_1x20 treeRotation;
    double RotForM;
    double RotForpS;
    double RotForpClassLeaveOut;
    boolean_T bRandomRotationStart;
    emxArray_real_T *voteFactor;
    double maxDepthSplit;
    double XVariationTol;
} struct0_T;
#endif /*typedef_struct0_T*/
#ifndef struct_emxArray_int64_T
#define struct_emxArray_int64_T
struct emxArray_int64_T
{
    long long *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int64_T*/
#ifndef typedef_emxArray_int64_T
#define typedef_emxArray_int64_T
typedef struct emxArray_int64_T emxArray_int64_T;
#endif /*typedef_emxArray_int64_T*/
#ifndef typedef_struct3_T
#define typedef_struct3_T
typedef struct
{
    emxArray_int64_T *inds;
} struct3_T;
#endif /*typedef_struct3_T*/
#ifndef struct_emxArray_struct3_T
#define struct_emxArray_struct3_T
struct emxArray_struct3_T
{
    struct3_T *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_struct3_T*/
#ifndef typedef_emxArray_struct3_T
#define typedef_emxArray_struct3_T
typedef struct emxArray_struct3_T emxArray_struct3_T;
#endif /*typedef_emxArray_struct3_T*/
#ifndef typedef_struct4_T
#define typedef_struct4_T
typedef struct
{
    emxArray_real_T *inds;
} struct4_T;
#endif /*typedef_struct4_T*/
#ifndef struct_emxArray_struct4_T
#define struct_emxArray_struct4_T
struct emxArray_struct4_T
{
    struct4_T *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_struct4_T*/
#ifndef typedef_emxArray_struct4_T
#define typedef_emxArray_struct4_T
typedef struct emxArray_struct4_T emxArray_struct4_T;
#endif /*typedef_emxArray_struct4_T*/
#ifndef typedef_struct5_T
#define typedef_struct5_T
typedef struct
{
    emxArray_real_T *phi;
} struct5_T;
#endif /*typedef_struct5_T*/
#ifndef struct_emxArray_struct5_T
#define struct_emxArray_struct5_T
struct emxArray_struct5_T
{
    struct5_T *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_struct5_T*/
#ifndef typedef_emxArray_struct5_T
#define typedef_emxArray_struct5_T
typedef struct emxArray_struct5_T emxArray_struct5_T;
#endif /*typedef_emxArray_struct5_T*/
#ifndef struct_s3NLjlw6y7KxHYuEfdIsTXC
#define struct_s3NLjlw6y7KxHYuEfdIsTXC
struct s3NLjlw6y7KxHYuEfdIsTXC
{
    double nextChild;
    emxArray_boolean_T *bExpanded;
    emxArray_real_T *nodeId;
    emxArray_boolean_T *bLeaf;
    emxArray_real_T *childIds;
    emxArray_real_T *parentId;
    emxArray_real_T *depth;
    emxArray_struct3_T *iPresent;
    emxArray_struct4_T *iFeatNum;
    emxArray_real_T *trainingCounts;
    emxArray_real_T *labelClassId;
    emxArray_real_T *partitionPoint;
    emxArray_struct4_T *iIn;
    emxArray_struct5_T *decisionProjection;
};
#endif /*struct_s3NLjlw6y7KxHYuEfdIsTXC*/
#ifndef typedef_struct2_T
#define typedef_struct2_T
typedef struct s3NLjlw6y7KxHYuEfdIsTXC struct2_T;
#endif /*typedef_struct2_T*/
#ifndef struct_emxArray_struct2_T
#define struct_emxArray_struct2_T
struct emxArray_struct2_T
{
    struct2_T *data;
    int *size;
    int allocatedSize;
    int numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_struct2_T*/
#ifndef typedef_emxArray_struct2_T
#define typedef_emxArray_struct2_T
typedef struct emxArray_struct2_T emxArray_struct2_T;
#endif /*typedef_emxArray_struct2_T*/

/* Function Declarations */
extern void growManyTreesCompileTest_initialize(emlrtContext *aContext);
extern void growManyTreesCompileTest_terminate(void);
extern void growManyTreesCompileTest_atexit(void);
extern void growManyTreesCompileTest_api(const mxArray *prhs[5], const mxArray *plhs[1]);
extern void growManyTreesCompileTest(double nTrees, emxArray_real_T *XTrain, emxArray_boolean_T *YTrain, struct0_T *options, emxArray_real_T *iFeatureNum, emxArray_struct2_T *trees);
extern void growManyTreesCompileTest_xil_terminate(void);

#endif
/* 
 * File trailer for _coder_growManyTreesCompileTest_api.h 
 *  
 * [EOF] 
 */
