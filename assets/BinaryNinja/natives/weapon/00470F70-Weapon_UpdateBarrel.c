// Original IGI.EXE function: Weapon_UpdateBarrel (VA 0x00470F70; static CFG gate PASS, CFG score 1.000).
#include "Weapon_UpdateBarrel.h"
void* Weapon_UpdateBarrel(void* context, float* param_2, float* param_3, float param_4)

{
    long double fpu7 = 1.0 / param_4;
    *param_2 = *(context + 0x48) * *param_3 * fpu7;
    param_2[1] = *(context + 0x4c) * param_3[1] * fpu7;
    return context;
}
