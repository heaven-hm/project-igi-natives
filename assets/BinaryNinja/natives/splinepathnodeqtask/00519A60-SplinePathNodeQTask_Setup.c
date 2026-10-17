// IGI native provenance: SplinePathNodeQTask_Setup - 0x00519A60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00519A60-SplinePathNodeQTask_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplinePathNodeQTask_Setup.h"
int32_t SplinePathNodeQTask_Setup(void* context)

{
    float source_val = *(context + 0x14);

    if (*(source_val + 0x1c) != g_54ed4e)
        Warning_Show("Parent must be of type SplinePathDynCubeObj");

    long double fpu7 = *(context + 0x90);
    long double f0 = 0.0f;
    fpu7 - f0;
    long double fpu_val_7_1;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        fpu_val_7_1 = 0.0f;
    else
        fpu_val_7_1 = *(context + 0x90);

    *(context + 0x90) = fpu_val_7_1;
    Terrain_RenderQuadtree_10(source_val);
    Terrain_RenderWaterSurface_10(source_val);
    return Terrain_ConnectGraphNode_10(source_val);
}
