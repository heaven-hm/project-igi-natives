// IGI native provenance: SmoothQTask_LoadParameters - 0x0051F140 - CFG score 77.8% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0051F140-SmoothQTask_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SmoothQTask_LoadParameters.h"
int32_t SmoothQTask_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0xa8);
    *(context + 0x38) = 0x3f800000;
    *(context + 0x48) = 0x3f800000;
    *(context + 0x58) = 0x3f800000;
    memset(context + 0x20, 0, 0x18);
    *(context + 0xa0) = 0;
    *(context + 0x3c) = 0;
    *(context + 0x40) = 0;
    *(context + 0x44) = 0;
    *(context + 0x4c) = 0;
    *(context + 0x50) = 0;
    *(context + 0x54) = 0;
    memset(context + 0x5c, 0, 0x40);
    *(context + 0xf8) = 0;
    *(context + 0x9c) = 0x3ff00000;
    *(context + 0xa4) = 0x3ff00000;
    return 0;
}
