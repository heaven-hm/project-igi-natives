#include "00503C00-Physics_CheckHullCollision_2.h"
/* 0x00503c00 Physics_CheckHullCollision_2 full linked: callers=2 callees=6 */
struct status_msg* sub_503c00(uint32_t a1, int32_t a2, int32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, int32_t* a8, char a9)

{
    int32_t kind;
    kind = g_a7a628;
    struct status_msg* result = QTask_HandleInput(sub_4f0ee0(), kind, 0);
    int32_t edi = a2;
    result->head[8] = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_1 = ~i;
    int32_t esi_1;
    int32_t edi_3;
    edi_3 = memcpy(&result->head[9], edi - ecx_1, ecx_1 & 0xfffffffc);
    memcpy(edi_3, esi_1, ecx_1 & 3);
    int32_t edi_4 = a3;

    if (!edi_4)
        result->head[0xd] = 0;
    else
    {
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond:1_1 = 0 != *edi_4;
            edi_4 += 1;
            i_1 -= 1;

            if (!cond:1_1)
                break;
        }

        int32_t ecx_5 = ~i_1;
        int32_t esi_3;
        int32_t edi_7;
        edi_7 = memcpy(&result->head[0xd], edi_4 - ecx_5, ecx_5 & 0xfffffffc);
        memcpy(edi_7, esi_3, ecx_5 & 3);
    }

    result->head[0x12] = a5;
    result->head[0x11] = a4;
    result->head[0x14] = a7;
    result->head[0x13] = a6;
    result->head[0x15] = *a8;
    result->head[0x16] = a8[1];
    result->head[0x17] = a8[2];
    result->head[0x18] = a9;
    return result;
}
