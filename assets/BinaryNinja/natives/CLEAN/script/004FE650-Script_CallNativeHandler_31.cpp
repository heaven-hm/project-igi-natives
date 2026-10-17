// IGI native provenance: Script_CallNativeHandler_31 - 0x004FE650 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004FE650-Script_CallNativeHandler_31.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_CallNativeHandler_31.h"
struct status_msg* Script_CallNativeHandler_31(void* context, int32_t param_2, int32_t param_3)

{
    int32_t kind;
    kind = g_a7a4e0;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    int32_t dest_val = param_2;
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
    int32_t item_20 = param_2;
    struct status_msg* result_1 = result;
    int32_t source_1;
    int32_t dest_3;
    dest_3 = memcpy(&result->head[8], dest_val - entity_1, entity_1 & 0xfffffffc);
    memcpy(dest_3, source_1, entity_1 & 3);
    result->sprite[0x70] = param_3;
    result->sprite[0x71] = *(&param_3 + 1);
    result->sprite[0x72] = *(&param_3 + 2);
    result->sprite[0x73] = *(&param_3 + 3);
    return result;
}
