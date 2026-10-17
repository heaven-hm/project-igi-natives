// Original IGI.EXE function: NoiseQTask_LoadParameters (VA 0x00520200; static CFG gate FAIL, CFG score 0.750).
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
