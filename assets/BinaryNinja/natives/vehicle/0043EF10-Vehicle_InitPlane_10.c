// Original IGI.EXE function: Vehicle_InitPlane_10 (VA 0x0043EF10; static CFG gate PASS, CFG score 0.867).
#include "Vehicle_InitPlane_10.h"
struct status_msg* Vehicle_InitPlane_10(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t* param_5)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_53c4a8;
        result = QTask_HandleInput(context, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_53c4a8;
        result = QTask_HandleInput(context, kind, 0);
        Sys_DispatchOpcode_2();
    }

    memcpy(&result->sprite[0xb4], param_2, 0x18);
    memcpy(&result->sprite[0xd8], param_3, 0x28);
    int32_t data_3 = *param_5;
    int32_t dest_2 = param_4;
    result->sprite[0xcc] = data_3;
    result->sprite[0xcd] = *(&data_3 + 1);
    result->sprite[0xce] = *(&data_3 + 2);
    result->sprite[0xcf] = *(&data_3 + 3);
    int32_t data_4 = param_5[1];
    result->sprite[0xd0] = data_4;
    result->sprite[0xd1] = *(&data_4 + 1);
    result->sprite[0xd2] = *(&data_4 + 2);
    result->sprite[0xd3] = *(&data_4 + 3);
    int32_t temp_1 = param_5[2];
    result->sprite[0xd4] = temp_1;
    result->sprite[0xd5] = *(&temp_1 + 1);
    result->sprite[0xd6] = *(&temp_1 + 2);
    result->sprite[0xd7] = *(&temp_1 + 3);
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_2;
        dest_2 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_3 = ~i;
    int32_t source_3;
    int32_t dest_5;
    dest_5 = memcpy(&result->sprite[0xa0], dest_2 - entity_3, entity_3 & 0xfffffffc);
    memcpy(dest_5, source_3, entity_3 & 3);
    uint32_t data_7 = Script_ParseEnumReal32_8();
    int32_t temp_3 = 0;
    temp_3 = result->head[7];
    int32_t data_8 = *(((data_7 * 0x180 + temp_3) << 2) + &g_a96ae0);

    if (data_8)
        data_8(result, 0);

    return result;
}
