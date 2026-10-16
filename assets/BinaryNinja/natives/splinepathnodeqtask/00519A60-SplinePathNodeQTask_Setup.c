#include "SplinePathNodeQTask_Setup.h"
int32_t SplinePathNodeQTask_Setup(void* a1)

{
    float srcS = *(a1 + 0x14);

    if (*(srcS + 0x1c) != g_54ed4e)
        Warning_Show("Parent must be of type SplinePathDynCubeObj");

    long double fpu7 = *(a1 + 0x90);
    long double f0 = 0f;
    fpu7 - f0;
    long double x87_r7_1;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_1 = 0f;
    else
        x87_r7_1 = *(a1 + 0x90);

    *(a1 + 0x90) = x87_r7_1;
    Terrain_RenderQuadtree_10(srcS);
    Terrain_RenderWaterSurface_10(srcS);
    return Terrain_ConnectGraphNode_10(srcS);
}
