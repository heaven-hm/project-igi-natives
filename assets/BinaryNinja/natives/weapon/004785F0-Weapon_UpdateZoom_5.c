// Original IGI.EXE function: Weapon_UpdateZoom_5 (VA 0x004785F0; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_UpdateZoom_5.h"
void* Weapon_UpdateZoom_5(void* context)

{
    *(context + 0xf0) = 0;
    *(context + 0x134) = 0;
    *(context + 0x13c) = 0;
    *(context + 0x140) = 0;
    *(context + 0x148) = 0;
    memset(context + 0x198, 0, 0x18);
    return context;
}
