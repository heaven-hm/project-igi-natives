// IGI native provenance: Physics_VirmodelIsNull - 0x00503CC0 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 00503CC0-Physics_VirmodelIsNull.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_VirmodelIsNull.h"
struct status_msg* Physics_VirmodelIsNull(void* context, int32_t param_2, int32_t param_3, int32_t param_4, int32_t* param_5)

{
    struct status_msg* result = QTask_HandleInput(context, param_2, 0);
    void* data_val = DynObj_Missing(context + 0x24);

    if (data_val)
    {
        DynObj_CreateMagicObject_5(result, data_val);
        memcpy(&result->head[8], param_3, 0x18);
        memcpy(&result->head[0x1c], param_4, 0x28);
        int32_t entity_1 = *param_5;
        result->sprite[0x3c] = entity_1;
        result->sprite[0x3d] = *(&entity_1 + 1);
        result->sprite[0x3e] = *(&entity_1 + 2);
        result->sprite[0x3f] = *(&entity_1 + 3);
        int32_t entity_2 = param_5[1];
        result->sprite[0x40] = entity_2;
        result->sprite[0x41] = *(&entity_2 + 1);
        result->sprite[0x42] = *(&entity_2 + 2);
        result->sprite[0x43] = *(&entity_2 + 3);
        int32_t data_2 = param_5[2];
        result->sprite[0x44] = data_2;
        result->sprite[0x45] = *(&data_2 + 1);
        result->sprite[0x46] = *(&data_2 + 2);
        result->sprite[0x47] = *(&data_2 + 3);
        int32_t entity_3 = *(context + 0x20);
        result->sprite[0x48] = entity_3;
        result->sprite[0x49] = *(&entity_3 + 1);
        result->sprite[0x4a] = *(&entity_3 + 2);
        result->sprite[0x4b] = *(&entity_3 + 3);
        return result;
    }

    Error_Show("VirModel is null");

    while (true)
        /* nop */
}
