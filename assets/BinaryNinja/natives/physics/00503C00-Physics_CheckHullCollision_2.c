#include "Physics_CheckHullCollision_2.h"
struct status_msg* Physics_CheckHullCollision_2(uint32_t a1, int32_t a2, int32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, int32_t* a8, char a9)

{
    int32_t kind;
    kind = g_a7a628;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    int32_t dstD = a2;
    result->head[8] = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond_0_1 = 0 != *dstD;
        dstD += 1;
        i -= 1;

        if (!cond_0_1)
            break;
    }

    int32_t objC1 = ~i;
    int32_t srcS1;
    int32_t dstD3;
    dstD3 = memcpy(&result->head[9], dstD - objC1, objC1 & 0xfffffffc);
    memcpy(dstD3, srcS1, objC1 & 3);
    int32_t dstD4 = a3;

    if (!dstD4)
        result->head[0xd] = 0;
    else
    {
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool cond_1_1 = 0 != *dstD4;
            dstD4 += 1;
            i_1 -= 1;

            if (!cond_1_1)
                break;
        }

        int32_t objC5 = ~i_1;
        int32_t srcS3;
        int32_t dstD7;
        dstD7 = memcpy(&result->head[0xd], dstD4 - objC5, objC5 & 0xfffffffc);
        memcpy(dstD7, srcS3, objC5 & 3);
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
