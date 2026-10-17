// IGI native provenance: Physics_EvaluateAreaCriteria_6 - 0x00507D60 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00507D60-Physics_EvaluateAreaCriteria_6.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_EvaluateAreaCriteria_6.h"
struct status_msg* Physics_EvaluateAreaCriteria_6(void* context, void* param_2, int32_t param_3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a7b248;
        result = QTask_HandleInput(context, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a7b248;
        result = QTask_HandleInput(context, kind, 0);
        Sys_DispatchOpcode_2();
    }

    result->sprite[0x2c] = 1;
    int32_t entity_2 = *(param_2 + 0xb8);
    result->sprite[4] = entity_2;
    result->sprite[5] = *(&entity_2 + 1);
    result->sprite[6] = *(&entity_2 + 2);
    result->sprite[7] = *(&entity_2 + 3);
    int32_t temp_val = *(param_2 + 0xe4);
    result->sprite[0x30] = temp_val;
    result->sprite[0x31] = *(&temp_val + 1);
    result->sprite[0x32] = *(&temp_val + 2);
    result->sprite[0x33] = *(&temp_val + 3);
    int32_t entity_3 = *(param_2 + 0xc8);
    result->sprite[0x14] = entity_3;
    result->sprite[0x15] = *(&entity_3 + 1);
    result->sprite[0x16] = *(&entity_3 + 2);
    result->sprite[0x17] = *(&entity_3 + 3);
    int32_t temp_1 = *(param_2 + 0xcc);
    result->sprite[0x18] = temp_1;
    result->sprite[0x19] = *(&temp_1 + 1);
    result->sprite[0x1a] = *(&temp_1 + 2);
    result->sprite[0x1b] = *(&temp_1 + 3);
    int32_t entity_4 = *(param_2 + 0xc4);
    result->sprite[0x10] = entity_4;
    result->sprite[0x11] = *(&entity_4 + 1);
    result->sprite[0x12] = *(&entity_4 + 2);
    result->sprite[0x13] = *(&entity_4 + 3);
    int32_t temp_2 = *(param_2 + 0xf8);
    result->sprite[0x44] = temp_2;
    result->sprite[0x45] = *(&temp_2 + 1);
    result->sprite[0x46] = *(&temp_2 + 2);
    result->sprite[0x47] = *(&temp_2 + 3);
    int32_t entity_5 = *(param_2 + 0xbc);
    result->sprite[8] = entity_5;
    result->sprite[9] = *(&entity_5 + 1);
    result->sprite[0xa] = *(&entity_5 + 2);
    result->sprite[0xb] = *(&entity_5 + 3);
    memcpy(&result->head[0x28], param_2 + 0xa0, 0x18);
    memcpy(&result->head[0x22], param_2 + 0x88, 0x18);
    memcpy(&result->head[0x1c], param_3, 0x18);
    uint32_t data_5 = Script_ParseEnumReal32_8();
    int32_t data_6 = 0;
    data_6 = result->head[7];
    int32_t data_7 = *(((data_5 * 0x180 + data_6) << 2) + &g_a96ae0);

    if (data_7)
        data_7(result, 0);

    return result;
}
