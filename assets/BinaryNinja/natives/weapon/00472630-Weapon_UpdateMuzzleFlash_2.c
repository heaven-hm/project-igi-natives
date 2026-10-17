// Original IGI.EXE function: Weapon_UpdateMuzzleFlash_2 (VA 0x00472630; static CFG gate FAIL, CFG score 0.667).
#include "Weapon_UpdateMuzzleFlash_2.h"
int32_t Weapon_UpdateMuzzleFlash_2(int32_t context, int32_t param_2)

{
    memcpy(context + 0x60, param_2, 0x18);
    return context;
}
