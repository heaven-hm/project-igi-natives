// Original IGI.EXE function: Weapon_UpdateZoom (VA 0x004712E0; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_UpdateZoom.h"
void* Weapon_UpdateZoom(void* a1, int32_t a2, int32_t a3)

{
    __builtin_memset(a1, 0, 0x14);
    *(a1 + 0x10) = a2;
    *(a1 + 8) = a3;
    return a1;
}
