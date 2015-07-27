/*
 * growManyTreesCompileTest_types.h
 *
 * Code generation for function 'growManyTreesCompileTest'
 *
 */

#ifndef __GROWMANYTREESCOMPILETEST_TYPES_H__
#define __GROWMANYTREESCOMPILETEST_TYPES_H__

/* Include files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_c_growManyTreesCompileTestStack
#define typedef_c_growManyTreesCompileTestStack
typedef struct
{
    struct
    {
        int32_T tmp_data[10000];
    } f0;
} c_growManyTreesCompileTestStack;
#endif /*typedef_c_growManyTreesCompileTestStack*/
#ifndef struct_emxArray__common
#define struct_emxArray__common
struct emxArray__common
{
    void *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray__common*/
#ifndef typedef_emxArray__common
#define typedef_emxArray__common
typedef struct emxArray__common emxArray__common;
#endif /*typedef_emxArray__common*/
#ifndef struct_emxArray_b_real_T_1x1
#define struct_emxArray_b_real_T_1x1
struct emxArray_b_real_T_1x1
{
    real_T data[1];
    int32_T size[2];
};
#endif /*struct_emxArray_b_real_T_1x1*/
#ifndef typedef_emxArray_b_real_T_1x1
#define typedef_emxArray_b_real_T_1x1
typedef struct emxArray_b_real_T_1x1 emxArray_b_real_T_1x1;
#endif /*typedef_emxArray_b_real_T_1x1*/
#ifndef struct_emxArray_boolean_T_1x10000
#define struct_emxArray_boolean_T_1x10000
struct emxArray_boolean_T_1x10000
{
    boolean_T data[10000];
    int32_T size[2];
};
#endif /*struct_emxArray_boolean_T_1x10000*/
#ifndef typedef_emxArray_boolean_T_1x10000
#define typedef_emxArray_boolean_T_1x10000
typedef struct emxArray_boolean_T_1x10000 emxArray_boolean_T_1x10000;
#endif /*typedef_emxArray_boolean_T_1x10000*/
#ifndef struct_emxArray_int32_T
#define struct_emxArray_int32_T
struct emxArray_int32_T
{
    int32_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_int32_T*/
#ifndef typedef_emxArray_int32_T
#define typedef_emxArray_int32_T
typedef struct emxArray_int32_T emxArray_int32_T;
#endif /*typedef_emxArray_int32_T*/
#ifndef struct_emxArray_int32_T_1
#define struct_emxArray_int32_T_1
struct emxArray_int32_T_1
{
    int32_T data[1];
    int32_T size[1];
};
#endif /*struct_emxArray_int32_T_1*/
#ifndef typedef_emxArray_int32_T_1
#define typedef_emxArray_int32_T_1
typedef struct emxArray_int32_T_1 emxArray_int32_T_1;
#endif /*typedef_emxArray_int32_T_1*/
#ifndef struct_emxArray_boolean_T
#define struct_emxArray_boolean_T
struct emxArray_boolean_T
{
    boolean_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_boolean_T*/
#ifndef typedef_emxArray_boolean_T
#define typedef_emxArray_boolean_T
typedef struct emxArray_boolean_T emxArray_boolean_T;
#endif /*typedef_emxArray_boolean_T*/
#ifndef struct_emxArray_real_T
#define struct_emxArray_real_T
struct emxArray_real_T
{
    real_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_real_T*/
#ifndef typedef_emxArray_real_T
#define typedef_emxArray_real_T
typedef struct emxArray_real_T emxArray_real_T;
#endif /*typedef_emxArray_real_T*/
#ifndef struct_emxArray_int64_T
#define struct_emxArray_int64_T
struct emxArray_int64_T
{
    int64_T *data;
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
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
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
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
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
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
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
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
    real_T nextChild;
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
    int32_T *size;
    int32_T allocatedSize;
    int32_T numDimensions;
    boolean_T canFreeData;
};
#endif /*struct_emxArray_struct2_T*/
#ifndef typedef_emxArray_struct2_T
#define typedef_emxArray_struct2_T
typedef struct emxArray_struct2_T emxArray_struct2_T;
#endif /*typedef_emxArray_struct2_T*/
#ifndef struct_emxArray_char_T_1x10
#define struct_emxArray_char_T_1x10
struct emxArray_char_T_1x10
{
    char_T data[10];
    int32_T size[2];
};
#endif /*struct_emxArray_char_T_1x10*/
#ifndef typedef_emxArray_char_T_1x10
#define typedef_emxArray_char_T_1x10
typedef struct emxArray_char_T_1x10 emxArray_char_T_1x10;
#endif /*typedef_emxArray_char_T_1x10*/
#ifndef struct_emxArray_char_T_1x20
#define struct_emxArray_char_T_1x20
struct emxArray_char_T_1x20
{
    char_T data[20];
    int32_T size[2];
};
#endif /*struct_emxArray_char_T_1x20*/
#ifndef typedef_emxArray_char_T_1x20
#define typedef_emxArray_char_T_1x20
typedef struct emxArray_char_T_1x20 emxArray_char_T_1x20;
#endif /*typedef_emxArray_char_T_1x20*/
#ifndef struct_emxArray_real_T_1x3
#define struct_emxArray_real_T_1x3
struct emxArray_real_T_1x3
{
    real_T data[3];
    int32_T size[2];
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
#ifndef typedef_struct0_T
#define typedef_struct0_T
typedef struct
{
    boolean_T bProjBoot;
    real_T lambda;
    emxArray_char_T_1x10 splitCriterion;
    real_T minPointsForSplit;
    emxArray_char_T_1x10 dirIfEqual;
    boolean_T bContinueProjBootDegenerate;
    real_T epsilonCCA;
    boolean_T bBagTrees;
    boolean_T bUseParallel;
    struct1_T projections;
    boolean_T includeOriginalAxes;
    emxArray_char_T_1x20 treeRotation;
    real_T RotForM;
    real_T RotForpS;
    real_T RotForpClassLeaveOut;
    boolean_T bRandomRotationStart;
    emxArray_real_T *voteFactor;
    real_T maxDepthSplit;
    real_T XVariationTol;
} struct0_T;
#endif /*typedef_struct0_T*/

#endif
/* End of code generation (growManyTreesCompileTest_types.h) */
