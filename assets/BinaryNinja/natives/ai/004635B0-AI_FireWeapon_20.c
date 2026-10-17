// Original IGI.EXE function: AI_FireWeapon_20 (VA 0x004635B0; static CFG gate FAIL, CFG score 0.667).
#include "AI_FireWeapon_20.h"
int32_t AI_FireWeapon_20(void* a1)

{
    __builtin_memset(a1 + 0x110, 0, 0xa0);
    __builtin_memset(a1 + 0x1b0, 0, 0xa0);
    *(a1 + 0x250) = 1;
    return 0;
}
