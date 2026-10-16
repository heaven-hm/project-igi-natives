#include "004896C0-FX_DebrisSpawn_13.h"
/* 0x004896c0 FX_DebrisSpawn_13 full linked: callers=8 callees=0 */
char* sub_4896c0(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    *a1 = a2;
    a1[4] = a3;
    a1[5] = a4;
    a1[3] = g_5c8b08;
    int32_t eax_4 = (g_5c8b08 + 1) & 0x80000003;

    if (eax_4 < 0)
        eax_4 = ((eax_4 - 1) | 0xfffffffc) + 1;

    g_5c8b08 = eax_4;
    int32_t eax_8;
    int32_t edx_2;
    edx_2 = HIGHD(a5);
    eax_8 = LOWD(a5);
    a1[7] = 0;
    a1[0xa] = 0;
    a1[1] = (eax_8 + (edx_2 & 3)) >> 2;
    int32_t eax_12;
    int32_t edx_4;
    edx_4 = HIGHD(a6);
    eax_12 = LOWD(a6);
    a1[2] = (eax_12 + (edx_4 & 3)) >> 2;
    a1[6] = &a1[7];
    a1[8] = &a1[6];
    a1[0xb] = &a1[9];
    a1[9] = &a1[0xa];
    char* result = a1 + 0x5a;
    int32_t i_1 = 0xc0;
    int32_t i;

    do
    {
        *result = 0;
        result = &result[0x30];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
