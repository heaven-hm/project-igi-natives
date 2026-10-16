#include "DynObj_RemoveSymbol_8.h"
int32_t DynObj_RemoveSymbol_8(void* a1, int32_t* a2, double* a3, double* a4, double* a5, int32_t a6)

{
    int32_t valA1 = DynObj_InvalidCategory(a6, a2[7]);
    int32_t* valA2 = DynObj_InsertHashItem_9(a1, valA1);
    int32_t flagP2 = *a3 + *(a1 + 0xde0);
    int32_t flagP4 = a3[1] + *(a1 + 0xde4);
    void* flagP6 = a3[2] + *(a1 + 0xde8);
    int32_t flagP8 = *a4 + *(a1 + 0xde0);
    int32_t flagP10 = a4[1] + *(a1 + 0xde4);
    int32_t flagP12 = a4[2] + *(a1 + 0xde8);
    int32_t objC5 = *a5 + *(a1 + 0xde0);
    int32_t flagP14 = a5[1] + *(a1 + 0xde4);
    int32_t tmpD15 = a5[2] + *(a1 + 0xde8);
    a2[8] = *a3;
    a2[9] = *(a3 + 4);
    a2[0xa] = a3[1];
    a2[0xb] = *(a3 + 0xc);
    a2[0xc] = a3[2];
    a2[0xd] = *(a3 + 0x14);
    int32_t valA5 = 0;
    valA5 = a2[7];
    a2[0x11] = sqrtl(0.0) * 0.5f;
    int16_t valA8 = *(valA5 * 0x30 + &g_af5f08);
    a2[0x18] = 0;
    a2[0x17] = valA8;
    DynObj_LookupHashItem_8(a1, valA2, a2,
        DynObj_LinkDynamicCube_7(flagP8, flagP10, flagP12, objC5 - 1, flagP14 - 1, tmpD15 - 1), flagP2, flagP4, flagP6);
    int32_t result = 0;
    int16_t* dstD1 = a1 + valA1 * 0x1fc + 0x118;
    int32_t i_1 = 0xfe;
    int32_t i;

    do
    {
        int32_t tmpD20 = 0;
        int16_t ctxB1 = 0;
        tmpD20 = a2[7];
        ctxB1 = *(((tmpD20 + result) << 2) + &g_a96ae0);
        *dstD1 += ctxB1;
        dstD1 = &dstD1[1];
        result += 0x180;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
