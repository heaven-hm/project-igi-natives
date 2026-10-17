// Original IGI.EXE function: Weapon_UpdateBarrel_2 (VA 0x00472650; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateBarrel_2.h"
int32_t* Weapon_UpdateBarrel_2(void* context, int32_t* param_2)

{
    *(context + 0x7c) = *param_2;
    *(context + 0x80) = param_2[1];
    *(context + 0x84) = param_2[2];
    return context + 0x7c;
}
