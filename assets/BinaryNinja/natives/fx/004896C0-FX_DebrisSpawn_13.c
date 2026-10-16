#include "FX_DebrisSpawn_13.h"
char* FX_DebrisSpawn_13(int32_t* a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6)

{
    *a1 = a2;
    a1[4] = a3;
    a1[5] = a4;
    a1[3] = g_5c8b08;
    int32_t valA4 = (g_5c8b08 + 1) & 0x80000003;

    if (valA4 < 0)
        valA4 = ((valA4 - 1) | 0xfffffffc) + 1;

    g_5c8b08 = valA4;
    int32_t valA8;
    int32_t tmpD2;
    tmpD2 = HIGHD(a5);
    valA8 = LOWD(a5);
    a1[7] = 0;
    a1[0xa] = 0;
    a1[1] = (valA8 + (tmpD2 & 3)) >> 2;
    int32_t valA12;
    int32_t tmpD4;
    tmpD4 = HIGHD(a6);
    valA12 = LOWD(a6);
    a1[2] = (valA12 + (tmpD4 & 3)) >> 2;
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
