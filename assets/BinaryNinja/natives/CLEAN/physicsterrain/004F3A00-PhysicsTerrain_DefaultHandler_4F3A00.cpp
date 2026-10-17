// IGI native provenance: PhysicsTerrain_DefaultHandler_4F3A00 - 0x004F3A00 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F3A00-PhysicsTerrain_DefaultHandler_4F3A00.md; Binary Ninja/Radare2 CFG record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PhysicsTerrain_DefaultHandler_4F3A00.h"

void* PhysicsTerrain_DefaultHandler_4F3A00(void* arg1)

{
    *(arg1 + 0x38) = 0x3f800000;
    *(arg1 + 0x48) = 0x3f800000;
    *(arg1 + 0x58) = 0x3f800000;
    *(arg1 + 0x20154) = 0xffffffff;
    *(arg1 + 0x2014c) = 0xffffffff;
    __builtin_memset(arg1 + 0x20, 0, 0x18);
    *(arg1 + 0x3c) = 0;
    *(arg1 + 0x40) = 0;
    *(arg1 + 0x44) = 0;
    *(arg1 + 0x4c) = 0;
    *(arg1 + 0x50) = 0;
    *(arg1 + 0x54) = 0;
    *(arg1 + 0x5c) = 0;
    *(arg1 + 0x20150) = 1;
    *(arg1 + 0xf4) = 0x20;
    *(arg1 + 0xf8) = 0;
    *(arg1 + 0x200f4) = 1;
    *(arg1 + 0x200f5) = 0;
    *(arg1 + 0x20148) = 0;
    Script_ExecuteLevelScript_6(arg1 + 0x200f8);
    __builtin_memset(arg1 + 0x6c, 0, 0x88);
    *(arg1 + 0x64) = 0;
    *(arg1 + 0x60) = 0;
    void* result = Camera_SetFieldOfView_33(&g_a76c28, arg1 + 0x60);
    *(arg1 + 0x68) = arg1;
    *(arg1 + 0x20158) = 0;
    *(arg1 + 0x20159) = 0;
    return result;
}
