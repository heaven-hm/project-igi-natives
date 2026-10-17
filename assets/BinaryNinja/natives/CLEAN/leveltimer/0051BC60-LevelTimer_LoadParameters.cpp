// IGI native provenance: LevelTimer_LoadParameters - 0x0051BC60 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0051BC60-LevelTimer_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "LevelTimer_LoadParameters.h"
int32_t LevelTimer_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0x6c);
    Script_ExecuteLevelScript_6(context + 0xbc);
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
    *(context + 0x68) = 0;
    *(context + 0x60) = 1;
    *(context + 0x64) = 0;
    return 0;
}
