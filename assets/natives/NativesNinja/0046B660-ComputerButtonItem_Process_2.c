#include "0046B660-ComputerButtonItem_Process_2.h"
/* 0x0046b660 ComputerButtonItem_Process_2 full linked: callers=10 callees=7 */
struct status_msg* sub_46b660(float a1, int32_t a2, int32_t a3, int32_t a4, int32_t a5, int32_t a6, char a7, float a8, float a9, char a10, void* a11, char* a12, uint32_t a13, uint32_t a14, uint32_t a15, int32_t a16)

{
    int32_t kind;
    kind = g_5be2b4;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    sub_505c10(result, a2, a3, a4, a5, a6, a7, a16);
    result->head[0x20] = a10;
    result->head[0x22] = a13;
    result->head[0x23] = a14;
    result->head[0x24] = a15;
    a7 = sub_4b6ce0(a13);
    a10 = a7;
    a7 = sub_4b6d00(a13);
    char* edi_1 = a12;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 = &edi_1[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    a1 = a7;
    int32_t ecx_4 = ~i;
    long double x87_r7_6;

    if (ecx_4 == 1)
    {
        x87_r7_6 = 0f;
        result->head[0x21] = 0;
        a7 = 0;
    }
    else
    {
        int32_t var_10_1 = ecx_4 - 1;
        int32_t var_14_1 = ecx_4 - 1;
        int32_t** eax_7 = sub_4b6ec0(a11, a10 + a8, a9, a12);
        result->head[0x21] = eax_7;
        eax_7[9] |= 0x40000;
        *(result->head[0x21] + 0xc) = 0x44029eb8;
        a7 = sub_4b7df0(result->head[0x21]);
        a7 = a7;
        x87_r7_6 = sub_4b7e00(result->head[0x21]);
    }

    result->head[0x1e] = a8;
    result->head[0x17] = a8;
    result->head[0x19] = a7 + a10;
    long double x87_r6_2 = a1;
    x87_r6_2 - x87_r7_6;
    result->head[0x1f] = a9;
    result->head[0x1d] = result;
    result->head[0x18] = a9;

    if (!(*(&((x87_r6_2 < x87_r7_6 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_6) ? 1 : 0) << 0xa
            | (x87_r6_2 == x87_r7_6 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
        x87_r7_6 = a1;

    result->head[0x1a] = x87_r7_6;
    return result;
}
