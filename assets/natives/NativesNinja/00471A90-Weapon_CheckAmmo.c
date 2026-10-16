#include "00471A90-Weapon_CheckAmmo.h"
/* 0x00471a90 Weapon_CheckAmmo full linked: callers=1 callees=1 */
int32_t sub_471a90(float a1, float a2, float a3, float a4, float a5, float a6, int32_t a7)

{
    int32_t ecx;
    int32_t var_4_1 = ecx;
    float var_4;
    float* eax_2;
    int32_t ecx_2;

    if (!a6)
    {
        eax_2 = a1;
        var_4 = a4;
        ecx_2 = a7;
        a1 = a5 * *eax_2;

        if (!ecx_2)
            a6 = (1f - *eax_2) * a5 + a3;
        else
            a6 = a3;
    }
    else
    {
        a6 = a3;
        eax_2 = a1;
        a1 = a5;
        ecx_2 = a7;
        var_4 = a4 * *eax_2;

        if (ecx_2)
            a2 = (1f - *eax_2) * a4 + a3;
    }

    int32_t var_1c = ecx_2;
    return sub_4b4a00(a2, a6, var_4, a1, *eax_2 * 64f, 64f, 0f, 0x3f000000, 0x80000, 0);
}
