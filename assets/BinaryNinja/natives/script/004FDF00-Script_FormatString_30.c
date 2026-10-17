// Original IGI.EXE function: Script_FormatString_30 (VA 0x004FDF00; static CFG gate PASS, CFG score 0.972).
#include "Script_FormatString_30.h"
struct status_msg* Script_FormatString_30(void* context, void* param_2, uint32_t param_3, int32_t* param_4, int32_t* param_5, int32_t* param_6, int32_t param_7, int32_t param_8, int32_t param_9, int32_t param_10, int32_t param_11, int32_t param_12, int32_t param_13)

{
    int32_t kind;
    kind = g_54e568;
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    DynObj_LookupHashItem_9(result);
    DynObj_LinkDynamicCube_8(param_2, result, &item_18, 4096.0f, 2);
    result->sprite[0x44] = param_12;
    result->sprite[0x45] = *(&param_12 + 1);
    result->sprite[0x46] = *(&param_12 + 2);
    result->sprite[0x47] = *(&param_12 + 3);
    result->sprite[4] = param_2;
    result->sprite[5] = *(&param_2 + 1);
    result->sprite[6] = *(&param_2 + 2);
    result->sprite[7] = *(&param_2 + 3);
    int32_t data_1 = *param_4;
    result->sprite[0x10] = data_1;
    result->sprite[0x11] = *(&data_1 + 1);
    result->sprite[0x12] = *(&data_1 + 2);
    result->sprite[0x13] = *(&data_1 + 3);
    int32_t data_2 = param_4[1];
    result->sprite[0x14] = data_2;
    result->sprite[0x15] = *(&data_2 + 1);
    result->sprite[0x16] = *(&data_2 + 2);
    result->sprite[0x17] = *(&data_2 + 3);
    int32_t temp_1 = param_4[2];
    result->sprite[0x18] = temp_1;
    result->sprite[0x19] = *(&temp_1 + 1);
    result->sprite[0x1a] = *(&temp_1 + 2);
    result->sprite[0x1b] = *(&temp_1 + 3);
    int32_t temp_2 = *param_5;
    result->sprite[0x1c] = temp_2;
    result->sprite[0x1d] = *(&temp_2 + 1);
    result->sprite[0x1e] = *(&temp_2 + 2);
    result->sprite[0x1f] = *(&temp_2 + 3);
    int32_t temp_3 = param_5[1];
    result->sprite[0x20] = temp_3;
    result->sprite[0x21] = *(&temp_3 + 1);
    result->sprite[0x22] = *(&temp_3 + 2);
    result->sprite[0x23] = *(&temp_3 + 3);
    int32_t entity_3 = param_5[2];
    result->sprite[0x24] = entity_3;
    result->sprite[0x25] = *(&entity_3 + 1);
    result->sprite[0x26] = *(&entity_3 + 2);
    result->sprite[0x27] = *(&entity_3 + 3);
    int32_t temp_4 = *param_6;
    result->sprite[8] = temp_4;
    result->sprite[9] = *(&temp_4 + 1);
    result->sprite[0xa] = *(&temp_4 + 2);
    result->sprite[0xb] = *(&temp_4 + 3);
    int32_t data_5 = param_6[1];
    result->sprite[0xc] = data_5;
    result->sprite[0xd] = *(&data_5 + 1);
    result->sprite[0xe] = *(&data_5 + 2);
    result->sprite[0xf] = *(&data_5 + 3);
    result->sprite[0x2c] = param_7;
    result->sprite[0x2d] = *(&param_7 + 1);
    result->sprite[0x2e] = *(&param_7 + 2);
    result->sprite[0x2f] = *(&param_7 + 3);
    result->sprite[0x40] = param_9;
    result->sprite[0x41] = *(&param_9 + 1);
    result->sprite[0x42] = *(&param_9 + 2);
    result->sprite[0x43] = *(&param_9 + 3);
    int32_t temp_6 = param_8 | 0x40000;
    result->sprite[0x34] = temp_6;
    result->sprite[0x35] = *(&temp_6 + 1);
    result->sprite[0x36] = *(&temp_6 + 2);
    result->sprite[0x37] = *(&temp_6 + 3);
    result->sprite[0x30] = param_10;
    result->sprite[0x31] = *(&param_10 + 1);
    result->sprite[0x32] = *(&param_10 + 2);
    result->sprite[0x33] = *(&param_10 + 3);
    result->sprite[0x48] = 0;
    result->head[0x20] = param_3;

    if (*(param_3 + 0xc))
        result->sprite[0x48] = 1;

    result->sprite[0x28] = param_11;
    result->sprite[0x29] = *(&param_11 + 1);
    result->sprite[0x2a] = *(&param_11 + 2);
    result->sprite[0x2b] = *(&param_11 + 3);
    result->sprite[0x38] = param_13;
    result->sprite[0x39] = *(&param_13 + 1);
    result->sprite[0x3a] = *(&param_13 + 2);
    result->sprite[0x3b] = *(&param_13 + 3);
    Qhash_Init(1);
    int32_t data_9;
    data_9 = result->sprite[0x44];
    *(&data_9 + 1) = result->sprite[0x45];
    *(&data_9 + 2) = result->sprite[0x46];
    *(&data_9 + 3) = result->sprite[0x47];
    result->head[0x1a] = Mem_Alloc(data_9 * 0x58, 4);
    int32_t data_11;
    data_11 = result->sprite[0x44];
    *(&data_11 + 1) = result->sprite[0x45];
    *(&data_11 + 2) = result->sprite[0x46];
    *(&data_11 + 3) = result->sprite[0x47];
    void* data_13 = Mem_Alloc(data_11 << 2, 4);
    int32_t entity_8;
    entity_8 = result->sprite[0x44];
    *(&entity_8 + 1) = result->sprite[0x45];
    *(&entity_8 + 2) = result->sprite[0x46];
    *(&entity_8 + 3) = result->sprite[0x47];
    result->head[0x1b] = data_13;
    result->head[0x1f] = Mem_Alloc(entity_8 << 2, 4);
    int32_t data_15;
    data_15 = result->sprite[0x44];
    *(&data_15 + 1) = result->sprite[0x45];
    *(&data_15 + 2) = result->sprite[0x46];
    *(&data_15 + 3) = result->sprite[0x47];
    result->head[0x1c] = Mem_Alloc(data_15 * 0x70, 4);
    int32_t data_17;
    data_17 = result->sprite[0x44];
    *(&data_17 + 1) = result->sprite[0x45];
    *(&data_17 + 2) = result->sprite[0x46];
    *(&data_17 + 3) = result->sprite[0x47];
    result->head[0x1d] = Mem_Alloc(data_17 * 0x18, 4);
    int32_t data_21;
    data_21 = result->sprite[0x44];
    *(&data_21 + 1) = result->sprite[0x45];
    *(&data_21 + 2) = result->sprite[0x46];
    *(&data_21 + 3) = result->sprite[0x47];
    result->head[0x1e] = Mem_Alloc(data_21 * 0x18, 4);
    Qhash_Reset();
    int32_t entity_12;
    entity_12 = result->sprite[0x44];
    *(&entity_12 + 1) = result->sprite[0x45];
    *(&entity_12 + 2) = result->sprite[0x46];
    *(&entity_12 + 3) = result->sprite[0x47];
    int32_t data_23 = 0;

    if (entity_12 > 0)
    {
        int32_t entity_13 = 0;
        int32_t temp_15;

        do
        {
            int32_t temp_14 = entity_13 + result->head[0x1a];
            entity_13 += 0x58;
            *(result->head[0x1b] + (data_23 << 2)) = temp_14;
            temp_15 = result->sprite[0x44];
            *(&temp_15 + 1) = result->sprite[0x45];
            *(&temp_15 + 2) = result->sprite[0x46];
            *(&temp_15 + 3) = result->sprite[0x47];
            data_23 += 1;
        } while (data_23 < temp_15);
    }

    int32_t data_24;
    data_24 = result->sprite[0x44];
    *(&data_24 + 1) = result->sprite[0x45];
    *(&data_24 + 2) = result->sprite[0x46];
    *(&data_24 + 3) = result->sprite[0x47];
    int32_t data_26 = g_a7a4d0 + data_24 * 0x58 + 0x100;
    bool flag_0 = g_a7a4d4 > data_26;
    g_a7a4d0 = data_26;

    if (!flag_0)
        g_a7a4d4 = data_26;

    return result;
}
