// IGI native provenance: AnimScaleTask_LoadParameters - 0x0052AE50 - CFG score 86.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 0052AE50-AnimScaleTask_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AnimScaleTask_LoadParameters.h"
void* AnimScaleTask_LoadParameters(void* context)

{
    *(context + 0x20154) = 0xffffffff;
    *(context + 0x2014c) = 0xffffffff;
    memset(context + 0x20, 0, 0x18);
    *(context + 0x38) = 0x3f800000;
    *(context + 0x3c) = 0;
    *(context + 0x40) = 0;
    *(context + 0x44) = 0;
    *(context + 0x48) = 0x3f800000;
    *(context + 0x4c) = 0;
    *(context + 0x50) = 0;
    *(context + 0x54) = 0;
    *(context + 0x58) = 0x3f800000;
    *(context + 0x5c) = 0;
    *(context + 0x20150) = 1;
    *(context + 0xf4) = 0x20;
    *(context + 0xf8) = 0;
    *(context + 0x200f4) = 1;
    *(context + 0x200f5) = 0;
    *(context + 0x20148) = 0;
    Script_ExecuteLevelScript_6(context + 0x200f8);
    memset(context + 0x6c, 0, 0x88);
    *(context + 0x64) = 0;
    *(context + 0x60) = 0;
    void* result = Camera_SetFieldOfView_33(&g_a76c28, context + 0x60);
    *(context + 0x68) = context;
    *(context + 0x20160) = 0x3f800000;
    *(context + 0x20164) = 0;
    return result;
}
