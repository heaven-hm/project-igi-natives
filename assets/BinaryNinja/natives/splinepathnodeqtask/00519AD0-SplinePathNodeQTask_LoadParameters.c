// IGI native provenance: SplinePathNodeQTask_LoadParameters - 0x00519AD0 - CFG score 75.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00519AD0-SplinePathNodeQTask_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SplinePathNodeQTask_LoadParameters.h"
int32_t SplinePathNodeQTask_LoadParameters(void* context)

{
    if (*(*(context + 0x14) + 0x1c) != g_54ed4e)
        Warning_Show("Parent must be of type SplinePathDynCubeObj");

    *(context + 0x38) = 0x3f800000;
    *(context + 0x48) = 0x3f800000;
    *(context + 0x58) = 0x3f800000;
    *(context + 0x6c) = 0x3f800000;
    memset(context + 0x20, 0, 0x18);
    memset(context + 0x78, 0, 0x24);
    *(context + 0x3c) = 0;
    *(context + 0x40) = 0;
    *(context + 0x44) = 0;
    *(context + 0x4c) = 0;
    *(context + 0x50) = 0;
    *(context + 0x54) = 0;
    *(context + 0x5c) = 0;
    *(context + 0x60) = 0;
    *(context + 0x64) = 0;
    *(context + 0x68) = 0;
    *(context + 0x70) = 0;
    *(context + 0xc4) = 1;
    memset(context + 0x9c, 0, 0x28);
    return 0;
}
