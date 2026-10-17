// Original IGI.EXE function: DynObj_LinkDynamicCube_8 (VA 0x004C7140; static CFG gate PASS, CFG score 1.000).
#include "DynObj_LinkDynamicCube_8.h"
int32_t DynObj_LinkDynamicCube_8(void* a1, int32_t* a2, double* a3, float a4, int32_t a5)

{
    int32_t valA1 = DynObj_InvalidCategory(a5, a2[7]);
    int32_t* valA2 = DynObj_InsertHashItem_9(a1, valA1);
    int32_t flagP1 = *a3 + *(a1 + 0xde0);
    int32_t objC2 = a3[1] + *(a1 + 0xde4);
    void* tmpD1 = a3[2] + *(a1 + 0xde8);
    int32_t v_14_3 = a4;
    int32_t valA7 = DynObj_LinkDynamicCube_7(flagP1 - v_14_3, objC2 - v_14_3, tmpD1 - v_14_3,
        v_14_3 + flagP1, v_14_3 + objC2, tmpD1 + v_14_3);
    a2[8] = *a3;
    a2[9] = *(a3 + 4);
    a2[0xa] = a3[1];
    a2[0xb] = *(a3 + 0xc);
    a2[0xc] = a3[2];
    a2[0xd] = *(a3 + 0x14);
    int32_t objC9 = 0;
    a2[0x11] = a4;
    objC9 = a2[7];
    a2[0x17] = *(objC9 * 0x30 + &g_af5f08);
    a2[0x18] = 0;
    DynObj_LookupHashItem_8(a1, valA2, a2, valA7, flagP1, objC2, tmpD1);
    int32_t result = 0;
    int32_t i_1 = 0xfe;
    int16_t* ctxB1 = a1 + valA1 * 0x1fc + 0x118;
    int32_t i;

    do
    {
        int32_t objC14 = 0;
        int16_t tmpD16 = 0;
        objC14 = a2[7];
        tmpD16 = *(((objC14 + result) << 2) + &g_a96ae0);
        *ctxB1 += tmpD16;
        ctxB1 = &ctxB1[1];
        result += 0x180;
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    return result;
}
