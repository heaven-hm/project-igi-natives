// IGI native provenance: NoiseQTask_LoadParameters - 0x00520200 - CFG score 75.0% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00520200-NoiseQTask_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "NoiseQTask_LoadParameters.h"
int32_t NoiseQTask_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0xd8);
    *(context + 0x38) = 0x3f800000;
    *(context + 0x48) = 0x3f800000;
    *(context + 0x58) = 0x3f800000;
    memset(context + 0x20, 0, 0x18);
    memset(context + 0x88, 0, 0x44);
    *(context + 0xd0) = 0;
    *(context + 0x3c) = 0;
    *(context + 0x40) = 0;
    *(context + 0x44) = 0;
    *(context + 0x4c) = 0;
    *(context + 0x50) = 0;
    *(context + 0x54) = 0;
    memset(context + 0x5c, 0, 0x28);
    *(context + 0x128) = 0;
    *(context + 0xcc) = 0x3ff00000;
    *(context + 0xd4) = 0x3ff00000;
    return 0;
}
