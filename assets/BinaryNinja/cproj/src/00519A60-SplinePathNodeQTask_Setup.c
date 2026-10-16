#include "gi_platform.h"
#include "00519A60-SplinePathNodeQTask_Setup.h"
int32_t SplinePathNodeQTask_Setup(void* a1)

{
    float srcS = (*(int32_t*)(uintptr_t)(a1 + 0x14));

    if ((*(int32_t*)(uintptr_t)(srcS + 0x1c)) != g_54ed4e)
        Warning_Show("Parent must be of type SplinePathDynCubeObj");

    long double fpu7 = (*(int32_t*)(uintptr_t)(a1 + 0x90));
    long double f0 = 0.0f;
    fpu7 - f0;
    long double x87_r7_1;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        x87_r7_1 = 0.0f;
    else
        x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x90));

    (*(int32_t*)(uintptr_t)(a1 + 0x90)) = x87_r7_1;
    Terrain_RenderQuadtree_10(srcS);
    Terrain_RenderWaterSurface_10(srcS);
    return Terrain_ConnectGraphNode_10(srcS);
}
