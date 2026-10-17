// Original IGI.EXE function: Light_CalculateAttenuation_6 (VA 0x00528850; static CFG gate FAIL, CFG score 0.667).
#include "Light_CalculateAttenuation_6.h"
void* Light_CalculateAttenuation_6(void* context)

{
    *(context + 0x148) = 0;
    *(context + 0x150) = 0;
    *(context + 0x158) = 0;
    *(context + 0x160) = 0;
    *(context + 0x168) = 0;
    *(context + 0x170) = 0;
    *(context + 0xd4) = 0;
    *(context + 0x19f) = 1;
    *(context + 0x100) = Light_SetLightColor_6;
    *(context + 0x108) = 0xffffffff;
    *(context + 0x10c) = 0xffffffff;
    *(context + 0x14c) = 0;
    *(context + 0x154) = 0;
    *(context + 0x15c) = 0;
    *(context + 0x164) = 0;
    *(context + 0x16c) = 0;
    memset(context + 0x174, 0, 0x2b);
    *(context + 0x140) = 0;
    *(context + 0x141) = 0;
    *(context + 0x1a0) = 1;
    return context;
}
