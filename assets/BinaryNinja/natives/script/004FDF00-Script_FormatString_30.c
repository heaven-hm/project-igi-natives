// Original IGI.EXE function: Script_FormatString_30 (VA 0x004FDF00; static CFG gate PASS, CFG score 0.972).
#include "Script_FormatString_30.h"
struct status_msg* Script_FormatString_30(void* a1, void* a2, uint32_t a3, int32_t* a4, int32_t* a5, int32_t* a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13)

{
    int32_t kind;
    kind = g_54e568;
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    DynObj_LookupHashItem_9(result);
    DynObj_LinkDynamicCube_8(a2, result, &v_18, 4096f, 2);
    result->sprite[0x44] = a12;
    result->sprite[0x45] = *(&a12 + 1);
    result->sprite[0x46] = *(&a12 + 2);
    result->sprite[0x47] = *(&a12 + 3);
    result->sprite[4] = a2;
    result->sprite[5] = *(&a2 + 1);
    result->sprite[6] = *(&a2 + 2);
    result->sprite[7] = *(&a2 + 3);
    int32_t valA1 = *a4;
    result->sprite[0x10] = valA1;
    result->sprite[0x11] = *(&valA1 + 1);
    result->sprite[0x12] = *(&valA1 + 2);
    result->sprite[0x13] = *(&valA1 + 3);
    int32_t valA2 = a4[1];
    result->sprite[0x14] = valA2;
    result->sprite[0x15] = *(&valA2 + 1);
    result->sprite[0x16] = *(&valA2 + 2);
    result->sprite[0x17] = *(&valA2 + 3);
    int32_t tmpD1 = a4[2];
    result->sprite[0x18] = tmpD1;
    result->sprite[0x19] = *(&tmpD1 + 1);
    result->sprite[0x1a] = *(&tmpD1 + 2);
    result->sprite[0x1b] = *(&tmpD1 + 3);
    int32_t tmpD2 = *a5;
    result->sprite[0x1c] = tmpD2;
    result->sprite[0x1d] = *(&tmpD2 + 1);
    result->sprite[0x1e] = *(&tmpD2 + 2);
    result->sprite[0x1f] = *(&tmpD2 + 3);
    int32_t tmpD3 = a5[1];
    result->sprite[0x20] = tmpD3;
    result->sprite[0x21] = *(&tmpD3 + 1);
    result->sprite[0x22] = *(&tmpD3 + 2);
    result->sprite[0x23] = *(&tmpD3 + 3);
    int32_t objC3 = a5[2];
    result->sprite[0x24] = objC3;
    result->sprite[0x25] = *(&objC3 + 1);
    result->sprite[0x26] = *(&objC3 + 2);
    result->sprite[0x27] = *(&objC3 + 3);
    int32_t tmpD4 = *a6;
    result->sprite[8] = tmpD4;
    result->sprite[9] = *(&tmpD4 + 1);
    result->sprite[0xa] = *(&tmpD4 + 2);
    result->sprite[0xb] = *(&tmpD4 + 3);
    int32_t valA5 = a6[1];
    result->sprite[0xc] = valA5;
    result->sprite[0xd] = *(&valA5 + 1);
    result->sprite[0xe] = *(&valA5 + 2);
    result->sprite[0xf] = *(&valA5 + 3);
    result->sprite[0x2c] = a7;
    result->sprite[0x2d] = *(&a7 + 1);
    result->sprite[0x2e] = *(&a7 + 2);
    result->sprite[0x2f] = *(&a7 + 3);
    result->sprite[0x40] = a9;
    result->sprite[0x41] = *(&a9 + 1);
    result->sprite[0x42] = *(&a9 + 2);
    result->sprite[0x43] = *(&a9 + 3);
    int32_t tmpD6 = a8 | 0x40000;
    result->sprite[0x34] = tmpD6;
    result->sprite[0x35] = *(&tmpD6 + 1);
    result->sprite[0x36] = *(&tmpD6 + 2);
    result->sprite[0x37] = *(&tmpD6 + 3);
    result->sprite[0x30] = a10;
    result->sprite[0x31] = *(&a10 + 1);
    result->sprite[0x32] = *(&a10 + 2);
    result->sprite[0x33] = *(&a10 + 3);
    result->sprite[0x48] = 0;
    result->head[0x20] = a3;

    if (*(a3 + 0xc))
        result->sprite[0x48] = 1;

    result->sprite[0x28] = a11;
    result->sprite[0x29] = *(&a11 + 1);
    result->sprite[0x2a] = *(&a11 + 2);
    result->sprite[0x2b] = *(&a11 + 3);
    result->sprite[0x38] = a13;
    result->sprite[0x39] = *(&a13 + 1);
    result->sprite[0x3a] = *(&a13 + 2);
    result->sprite[0x3b] = *(&a13 + 3);
    Qhash_Init(1);
    int32_t valA9;
    valA9 = result->sprite[0x44];
    *(&valA9 + 1) = result->sprite[0x45];
    *(&valA9 + 2) = result->sprite[0x46];
    *(&valA9 + 3) = result->sprite[0x47];
    result->head[0x1a] = Mem_Alloc(valA9 * 0x58, 4);
    int32_t valA11;
    valA11 = result->sprite[0x44];
    *(&valA11 + 1) = result->sprite[0x45];
    *(&valA11 + 2) = result->sprite[0x46];
    *(&valA11 + 3) = result->sprite[0x47];
    void* valA13 = Mem_Alloc(valA11 << 2, 4);
    int32_t objC8;
    objC8 = result->sprite[0x44];
    *(&objC8 + 1) = result->sprite[0x45];
    *(&objC8 + 2) = result->sprite[0x46];
    *(&objC8 + 3) = result->sprite[0x47];
    result->head[0x1b] = valA13;
    result->head[0x1f] = Mem_Alloc(objC8 << 2, 4);
    int32_t valA15;
    valA15 = result->sprite[0x44];
    *(&valA15 + 1) = result->sprite[0x45];
    *(&valA15 + 2) = result->sprite[0x46];
    *(&valA15 + 3) = result->sprite[0x47];
    result->head[0x1c] = Mem_Alloc(valA15 * 0x70, 4);
    int32_t valA17;
    valA17 = result->sprite[0x44];
    *(&valA17 + 1) = result->sprite[0x45];
    *(&valA17 + 2) = result->sprite[0x46];
    *(&valA17 + 3) = result->sprite[0x47];
    result->head[0x1d] = Mem_Alloc(valA17 * 0x18, 4);
    int32_t valA21;
    valA21 = result->sprite[0x44];
    *(&valA21 + 1) = result->sprite[0x45];
    *(&valA21 + 2) = result->sprite[0x46];
    *(&valA21 + 3) = result->sprite[0x47];
    result->head[0x1e] = Mem_Alloc(valA21 * 0x18, 4);
    Qhash_Reset();
    int32_t objC12;
    objC12 = result->sprite[0x44];
    *(&objC12 + 1) = result->sprite[0x45];
    *(&objC12 + 2) = result->sprite[0x46];
    *(&objC12 + 3) = result->sprite[0x47];
    int32_t valA23 = 0;

    if (objC12 > 0)
    {
        int32_t objC13 = 0;
        int32_t tmpD15;

        do
        {
            int32_t tmpD14 = objC13 + result->head[0x1a];
            objC13 += 0x58;
            *(result->head[0x1b] + (valA23 << 2)) = tmpD14;
            tmpD15 = result->sprite[0x44];
            *(&tmpD15 + 1) = result->sprite[0x45];
            *(&tmpD15 + 2) = result->sprite[0x46];
            *(&tmpD15 + 3) = result->sprite[0x47];
            valA23 += 1;
        } while (valA23 < tmpD15);
    }

    int32_t valA24;
    valA24 = result->sprite[0x44];
    *(&valA24 + 1) = result->sprite[0x45];
    *(&valA24 + 2) = result->sprite[0x46];
    *(&valA24 + 3) = result->sprite[0x47];
    int32_t valA26 = g_a7a4d0 + valA24 * 0x58 + 0x100;
    bool cond_0 = g_a7a4d4 > valA26;
    g_a7a4d0 = valA26;

    if (!cond_0)
        g_a7a4d4 = valA26;

    return result;
}
