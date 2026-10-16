#include "004FDF00-Script_FormatString_30.h"
/* 0x004fdf00 Script_FormatString_30 full linked: callers=11 callees=12 */
struct status_msg* sub_4fdf00(void* a1, void* a2, uint32_t a3, int32_t* a4, int32_t* a5, int32_t* a6, int32_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11, int32_t a12, int32_t a13)

{
    int32_t kind;
    kind = g_54e568;
    int32_t var_18;
    __builtin_memset(&var_18, 0, 0x18);
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    sub_4c7760(result);
    sub_4c7140(a2, result, &var_18, 4096f, 2);
    result->sprite[0x44] = a12;
    result->sprite[0x45] = *(&a12 + 1);
    result->sprite[0x46] = *(&a12 + 2);
    result->sprite[0x47] = *(&a12 + 3);
    result->sprite[4] = a2;
    result->sprite[5] = *(&a2 + 1);
    result->sprite[6] = *(&a2 + 2);
    result->sprite[7] = *(&a2 + 3);
    int32_t eax_1 = *a4;
    result->sprite[0x10] = eax_1;
    result->sprite[0x11] = *(&eax_1 + 1);
    result->sprite[0x12] = *(&eax_1 + 2);
    result->sprite[0x13] = *(&eax_1 + 3);
    int32_t eax_2 = a4[1];
    result->sprite[0x14] = eax_2;
    result->sprite[0x15] = *(&eax_2 + 1);
    result->sprite[0x16] = *(&eax_2 + 2);
    result->sprite[0x17] = *(&eax_2 + 3);
    int32_t edx_1 = a4[2];
    result->sprite[0x18] = edx_1;
    result->sprite[0x19] = *(&edx_1 + 1);
    result->sprite[0x1a] = *(&edx_1 + 2);
    result->sprite[0x1b] = *(&edx_1 + 3);
    int32_t edx_2 = *a5;
    result->sprite[0x1c] = edx_2;
    result->sprite[0x1d] = *(&edx_2 + 1);
    result->sprite[0x1e] = *(&edx_2 + 2);
    result->sprite[0x1f] = *(&edx_2 + 3);
    int32_t edx_3 = a5[1];
    result->sprite[0x20] = edx_3;
    result->sprite[0x21] = *(&edx_3 + 1);
    result->sprite[0x22] = *(&edx_3 + 2);
    result->sprite[0x23] = *(&edx_3 + 3);
    int32_t ecx_3 = a5[2];
    result->sprite[0x24] = ecx_3;
    result->sprite[0x25] = *(&ecx_3 + 1);
    result->sprite[0x26] = *(&ecx_3 + 2);
    result->sprite[0x27] = *(&ecx_3 + 3);
    int32_t edx_4 = *a6;
    result->sprite[8] = edx_4;
    result->sprite[9] = *(&edx_4 + 1);
    result->sprite[0xa] = *(&edx_4 + 2);
    result->sprite[0xb] = *(&edx_4 + 3);
    int32_t eax_5 = a6[1];
    result->sprite[0xc] = eax_5;
    result->sprite[0xd] = *(&eax_5 + 1);
    result->sprite[0xe] = *(&eax_5 + 2);
    result->sprite[0xf] = *(&eax_5 + 3);
    result->sprite[0x2c] = a7;
    result->sprite[0x2d] = *(&a7 + 1);
    result->sprite[0x2e] = *(&a7 + 2);
    result->sprite[0x2f] = *(&a7 + 3);
    result->sprite[0x40] = a9;
    result->sprite[0x41] = *(&a9 + 1);
    result->sprite[0x42] = *(&a9 + 2);
    result->sprite[0x43] = *(&a9 + 3);
    int32_t edx_6 = a8 | 0x40000;
    result->sprite[0x34] = edx_6;
    result->sprite[0x35] = *(&edx_6 + 1);
    result->sprite[0x36] = *(&edx_6 + 2);
    result->sprite[0x37] = *(&edx_6 + 3);
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
    int32_t eax_9;
    eax_9 = result->sprite[0x44];
    *(&eax_9 + 1) = result->sprite[0x45];
    *(&eax_9 + 2) = result->sprite[0x46];
    *(&eax_9 + 3) = result->sprite[0x47];
    result->head[0x1a] = Mem_Alloc(eax_9 * 0x58, 4);
    int32_t eax_11;
    eax_11 = result->sprite[0x44];
    *(&eax_11 + 1) = result->sprite[0x45];
    *(&eax_11 + 2) = result->sprite[0x46];
    *(&eax_11 + 3) = result->sprite[0x47];
    void* eax_13 = Mem_Alloc(eax_11 << 2, 4);
    int32_t ecx_8;
    ecx_8 = result->sprite[0x44];
    *(&ecx_8 + 1) = result->sprite[0x45];
    *(&ecx_8 + 2) = result->sprite[0x46];
    *(&ecx_8 + 3) = result->sprite[0x47];
    result->head[0x1b] = eax_13;
    result->head[0x1f] = Mem_Alloc(ecx_8 << 2, 4);
    int32_t eax_15;
    eax_15 = result->sprite[0x44];
    *(&eax_15 + 1) = result->sprite[0x45];
    *(&eax_15 + 2) = result->sprite[0x46];
    *(&eax_15 + 3) = result->sprite[0x47];
    result->head[0x1c] = Mem_Alloc(eax_15 * 0x70, 4);
    int32_t eax_17;
    eax_17 = result->sprite[0x44];
    *(&eax_17 + 1) = result->sprite[0x45];
    *(&eax_17 + 2) = result->sprite[0x46];
    *(&eax_17 + 3) = result->sprite[0x47];
    result->head[0x1d] = Mem_Alloc(eax_17 * 0x18, 4);
    int32_t eax_21;
    eax_21 = result->sprite[0x44];
    *(&eax_21 + 1) = result->sprite[0x45];
    *(&eax_21 + 2) = result->sprite[0x46];
    *(&eax_21 + 3) = result->sprite[0x47];
    result->head[0x1e] = Mem_Alloc(eax_21 * 0x18, 4);
    Qhash_Reset();
    int32_t ecx_12;
    ecx_12 = result->sprite[0x44];
    *(&ecx_12 + 1) = result->sprite[0x45];
    *(&ecx_12 + 2) = result->sprite[0x46];
    *(&ecx_12 + 3) = result->sprite[0x47];
    int32_t eax_23 = 0;

    if (ecx_12 > 0)
    {
        int32_t ecx_13 = 0;
        int32_t edx_15;

        do
        {
            int32_t edx_14 = ecx_13 + result->head[0x1a];
            ecx_13 += 0x58;
            *(result->head[0x1b] + (eax_23 << 2)) = edx_14;
            edx_15 = result->sprite[0x44];
            *(&edx_15 + 1) = result->sprite[0x45];
            *(&edx_15 + 2) = result->sprite[0x46];
            *(&edx_15 + 3) = result->sprite[0x47];
            eax_23 += 1;
        } while (eax_23 < edx_15);
    }

    int32_t eax_24;
    eax_24 = result->sprite[0x44];
    *(&eax_24 + 1) = result->sprite[0x45];
    *(&eax_24 + 2) = result->sprite[0x46];
    *(&eax_24 + 3) = result->sprite[0x47];
    int32_t eax_26 = g_a7a4d0 + eax_24 * 0x58 + 0x100;
    bool cond:0 = g_a7a4d4 > eax_26;
    g_a7a4d0 = eax_26;

    if (!cond:0)
        g_a7a4d4 = eax_26;

    return result;
}
