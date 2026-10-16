#include "0050A940-Physics_SolveConstraints_11.h"
/* 0x0050a940 Physics_SolveConstraints_11 full linked: callers=0 callees=6 */
void** sub_50a940(void** a1)

{
    int32_t* ebx = a1;
    int32_t ecx = ebx[7];
    void** result_2 = ebx[6];
    int32_t edx = ebx[0xa];
    int16_t ebp = ebx[3];
    int32_t eax = ebx[8];
    int32_t var_58 = eax;
    void var_20;
    sub_50aa70(&var_20, ebx[9], 0f);
    int32_t* esi = *ebx;
    __builtin_memset(esi, 0, 0x24);
    *esi = sub_4950e0();
    esi[7] = 0;
    esi[8] = 0;
    void** result;
    int16_t ecx_2;

    if (edx || !(*(&g_bcac5c + 1) & 1))
    {
        void** result_3 = result_2;
        int32_t eax_5 = sub_4b2700();
        sub_4b1000(sub_4950e0(), eax_5, &result_3);
        int32_t result_1;
        result = result_1;
        int32_t var_24;
        ecx_2 = var_24;
        esi[4] = result_3 / result_1;
        int32_t var_14;
        ebp = (var_14 >> 3) * result;
        esi[5] = ecx / var_24;
    }
    else
    {
        ecx_2 = ecx;
        esi[4] = 0x3f800000;
        esi[5] = 0x3f800000;
        result = result_2;
    }

    esi[1] = result;
    result = eax;
    *(esi + 6) = ecx_2;
    esi[2] = ebp;
    *(esi + 0xa) = result;
    esi[6] = 0;

    if (ebx[8] == 1)
    {
        int32_t ecx_4 = g_a7c130;
        result = *(g_a7c12c + (ecx_4 << 2)) * g_a7c138 + g_a7c128;
        *(g_a7c13c + result) = ecx_4;
        g_a7c130 += 1;
        *result = esi;
    }

    return result;
}
