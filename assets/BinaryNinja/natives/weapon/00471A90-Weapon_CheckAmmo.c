// Original IGI.EXE function: Weapon_CheckAmmo (VA 0x00471A90; static CFG gate PASS, CFG score 1.000).
#include "Weapon_CheckAmmo.h"
int32_t Weapon_CheckAmmo(float a1, float a2, float a3, float a4, float a5, float a6, int32_t a7)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    float v_4;
    float* valA2;
    int32_t objC2;

    if (!a6)
    {
        valA2 = a1;
        v_4 = a4;
        objC2 = a7;
        a1 = a5 * *valA2;

        if (!objC2)
            a6 = (1f - *valA2) * a5 + a3;
        else
            a6 = a3;
    }
    else
    {
        a6 = a3;
        valA2 = a1;
        a1 = a5;
        objC2 = a7;
        v_4 = a4 * *valA2;

        if (objC2)
            a2 = (1f - *valA2) * a4 + a3;
    }

    int32_t v_1c = objC2;
    return Sys_ExecuteBytecode_14(a2, a6, v_4, a1, *valA2 * 64f, 64f, 0f, 0x3f000000, 0x80000, 0);
}
