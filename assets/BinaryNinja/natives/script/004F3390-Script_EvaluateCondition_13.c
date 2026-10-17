// Original IGI.EXE function: Script_EvaluateCondition_13 (VA 0x004F3390; static CFG gate FAIL, CFG score 0.778).
#include "Script_EvaluateCondition_13.h"
struct status_msg* Script_EvaluateCondition_13(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t* param_5, int32_t* param_6)

{
    int32_t kind;
    kind = g_54e1ac;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    memcpy(&result->sprite[0x3c], param_3, 0x18);
    int32_t item_1c = 0;
    memcpy(&result->sprite[0x54], param_4, 0x28);
    int32_t dest_2 = param_2;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool flag_0_1 = 0 != *dest_2;
        dest_2 += 1;
        i -= 1;

        if (!flag_0_1)
            break;
    }

    int32_t entity_1 = ~i;
    int32_t source_3;
    int32_t dest_5;
    dest_5 = memcpy(&result->sprite[0x7c], dest_2 - entity_1, entity_1 & 0xfffffffc);
    memcpy(dest_5, source_3, entity_1 & 3);
    int32_t data_1 = *param_5;
    result->sprite[0x8c] = data_1;
    result->sprite[0x8d] = *(&data_1 + 1);
    result->sprite[0x8e] = *(&data_1 + 2);
    result->sprite[0x8f] = *(&data_1 + 3);
    int32_t data_2 = param_5[1];
    result->sprite[0x90] = data_2;
    result->sprite[0x91] = *(&data_2 + 1);
    result->sprite[0x92] = *(&data_2 + 2);
    result->sprite[0x93] = *(&data_2 + 3);
    int32_t temp_2 = param_5[2];
    result->sprite[0x94] = temp_2;
    result->sprite[0x95] = *(&temp_2 + 1);
    result->sprite[0x96] = *(&temp_2 + 2);
    result->sprite[0x97] = *(&temp_2 + 3);
    int32_t temp_3 = *param_6;
    result->sprite[0x98] = temp_3;
    result->sprite[0x99] = *(&temp_3 + 1);
    result->sprite[0x9a] = *(&temp_3 + 2);
    result->sprite[0x9b] = *(&temp_3 + 3);
    int32_t temp_4 = param_6[1];
    result->sprite[0x9c] = temp_4;
    result->sprite[0x9d] = *(&temp_4 + 1);
    result->sprite[0x9e] = *(&temp_4 + 2);
    result->sprite[0x9f] = *(&temp_4 + 3);
    int32_t entity_7 = param_6[2];
    result->sprite[0xa0] = entity_7;
    result->sprite[0xa1] = *(&entity_7 + 1);
    result->sprite[0xa2] = *(&entity_7 + 2);
    result->sprite[0xa3] = *(&entity_7 + 3);
    EditRigidObj_Update(result);
    return result;
}
