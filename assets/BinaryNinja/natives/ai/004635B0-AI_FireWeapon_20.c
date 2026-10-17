// Original IGI.EXE function: AI_FireWeapon_20 (VA 0x004635B0; static CFG gate FAIL, CFG score 0.667).
#include "AI_FireWeapon_20.h"
int32_t AI_FireWeapon_20(void* context)

{
    memset(context + 0x110, 0, 0xa0);
    memset(context + 0x1b0, 0, 0xa0);
    *(context + 0x250) = 1;
    return 0;
}
