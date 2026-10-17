// IGI native provenance: Script_CallNativeHandler_21 - 0x004F8FE0 - CFG score 95.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F8FE0-Script_CallNativeHandler_21.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_21.h"
struct status_msg* Script_CallNativeHandler_21(void* context, void* param_2, int32_t param_3)

{
    int32_t kind = QHash_ValueGet();
    struct status_msg* result;

    if (kind)
    {
        int32_t kind_1;
        kind_1 = g_a76cdc;
        result = QTask_HandleInput(context, kind_1, 0);
    }
    else
    {
        QHash_ValueSet();
        kind = g_a76cdc;
        result = QTask_HandleInput(context, kind, 0);
        Sys_DispatchOpcode_2();
    }

    result->sprite[0x16] = 1;
    int32_t entity_2 = *(param_2 + 0xb8);
    result->sprite[4] = entity_2;
    result->sprite[5] = *(&entity_2 + 1);
    result->sprite[6] = *(&entity_2 + 2);
    result->sprite[7] = *(&entity_2 + 3);
    int32_t temp_val = *(param_2 + 0xd8);
    result->sprite[0x24] = temp_val;
    result->sprite[0x25] = *(&temp_val + 1);
    result->sprite[0x26] = *(&temp_val + 2);
    result->sprite[0x27] = *(&temp_val + 3);
    int32_t entity_3 = *(param_2 + 0xd4);
    result->sprite[0x20] = entity_3;
    result->sprite[0x21] = *(&entity_3 + 1);
    result->sprite[0x22] = *(&entity_3 + 2);
    result->sprite[0x23] = *(&entity_3 + 3);
    int32_t temp_1 = *(param_2 + 0xbc);
    result->sprite[8] = temp_1;
    result->sprite[9] = *(&temp_1 + 1);
    result->sprite[0xa] = *(&temp_1 + 2);
    result->sprite[0xb] = *(&temp_1 + 3);
    int32_t data_4 = *(param_2 + 0x108);
    result->sprite[0x54] = data_4;
    result->sprite[0x55] = *(&data_4 + 1);
    result->sprite[0x56] = *(&data_4 + 2);
    result->sprite[0x57] = *(&data_4 + 3);
    memcpy(&result->head[0x1c], param_3, 0x18);
    uint32_t data_6 = Script_ParseEnumReal32_8();
    int32_t temp_2 = 0;
    temp_2 = result->head[7];
    int32_t data_7 = *(((data_6 * 0x180 + temp_2) << 2) + &g_a96ae0);

    if (data_7)
        data_7(result, 0);

    return result;
}
