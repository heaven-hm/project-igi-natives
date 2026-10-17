// Original IGI.EXE function: CutScene_LoadParameters (VA 0x004F4EE0; static CFG gate PASS, CFG score 0.944).
#include "CutScene_LoadParameters.h"
int32_t CutScene_LoadParameters(void* context)

{
    Script_ExecuteLevelScript_6(context + 0x7c);
    Script_ExecuteLevelScript_6(context + 0xcc);
    Script_ExecuteLevelScript_6(context + 0x11c);
    Script_ExecuteLevelScript_6(context + 0x16c);
    Script_ExecuteLevelScript_6(context + 0x1bc);
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
    *(context + 0x62) = 0;
    int32_t temp_1 = g_a76c7c;
    *(context + 0x70) = 0x3f800000;
    *(context + 0x6c) = 0x3f800000;
    *(context + 0x258) = temp_1;
    *(context + 0x60) = 1;
    *(context + 0x26d) = 0;
    *(context + 0x61) = 0;
    *(context + 0x64) = 0;
    *(context + 0x68) = 0;
    *(context + 0x210) = 0;
    *(context + 0x20c) = 0xffffffff;
    *(context + 0x25c) = 0;
    *(context + 0x264) = 0;
    *(context + 0x260) = 0;
    *(context + 0x268) = 0;
    *(context + 0x270) = 0xffffffff;
    return 0;
}
