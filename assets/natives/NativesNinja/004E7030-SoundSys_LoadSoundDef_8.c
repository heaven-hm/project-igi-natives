#include "004E7030-SoundSys_LoadSoundDef_8.h"
/* 0x004e7030 SoundSys_LoadSoundDef_8 full linked: callers=2 callees=0 */
int32_t* sub_4e7030(int32_t* a1, int32_t* a2, float a3)

{
    long double x87_r7 = a3;
    long double temp0 = 1.0;
    x87_r7 - temp0;
    int32_t eax;
    eax = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 1))
    {
        *a1 = a2[0xa];
        return a2;
    }

    long double x87_r7_1 = a3;
    long double temp1 = 0.0;
    x87_r7_1 - temp1;
    eax = (x87_r7_1 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1) ? 1 : 0) << 0xa
        | (x87_r7_1 == temp1 ? 1 : 0) << 0xe;

    if (*(&eax + 1) & 0x41)
    {
        *a1 = *a2;
        return a2;
    }

    int32_t* edx_2 = a2;
    int32_t ecx_2 = a3 * 10f;
    float var_10 = ecx_2 * 0.100000001f;
    float var_c_2 = (ecx_2 + 1) * 0.100000001f;
    a2 = edx_2[ecx_2];
    long double x87_r7_10 = var_10;
    long double temp2 = a3;
    x87_r7_10 - temp2;
    eax = (x87_r7_10 < temp2 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp2) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp2 ? 1 : 0) << 0xe;

    if (*(&eax + 1) & 0x40)
    {
        int32_t eax_3 = edx_2[ecx_2];
        *a1 = eax_3;
        return eax_3;
    }

    long double x87_r7_11 = var_c_2;
    long double temp3 = a3;
    x87_r7_11 - temp3;
    eax = (x87_r7_11 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp3) ? 1 : 0) << 0xa
        | (x87_r7_11 == temp3 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        *a1 = (edx_2[ecx_2 + 1] - a2) / (var_c_2 - var_10) * (a3 - var_10) + a2;
        return eax;
    }

    *a1 = edx_2[ecx_2 + 1];
    return a1;
}
