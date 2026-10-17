// Original IGI.EXE function: Physics_CheckHullCollision_2 (VA 0x00503C00; static CFG gate FAIL, CFG score 0.778).
#include "Physics_CheckHullCollision_2.h"
struct status_msg* Physics_CheckHullCollision_2(uint32_t context, int32_t param_2, int32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6, uint32_t param_7, int32_t* param_8, char param_9)

{
    int32_t kind;
    kind = g_a7a628;
    struct status_msg* result = QTask_HandleInput(Script_FormatString(), kind, 0);
    int32_t dest_val = param_2;
    result->head[8] = context;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_val;
        dest_val += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_1 = ~i;
    int32_t source_1;
    int32_t dest_3;
    dest_3 = memcpy(&result->head[9], dest_val - entity_1, entity_1 & 0xfffffffc);
    memcpy(dest_3, source_1, entity_1 & 3);
    int32_t dest_4 = param_3;

    if (!dest_4)
        result->head[0xd] = 0;
    else
    {
        int32_t i_1 = 0xffffffff;

        while (i_1)
        {
            bool flag_1_1 = 0 != *dest_4;
            dest_4 += 1;
            i_1 -= 1;

            if (!flag_1_1)
                break;
        }

        int32_t entity_5 = ~i_1;
        int32_t source_3;
        int32_t dest_7;
        dest_7 = memcpy(&result->head[0xd], dest_4 - entity_5, entity_5 & 0xfffffffc);
        memcpy(dest_7, source_3, entity_5 & 3);
    }

    result->head[0x12] = param_5;
    result->head[0x11] = param_4;
    result->head[0x14] = param_7;
    result->head[0x13] = param_6;
    result->head[0x15] = *param_8;
    result->head[0x16] = param_8[1];
    result->head[0x17] = param_8[2];
    result->head[0x18] = param_9;
    return result;
}
