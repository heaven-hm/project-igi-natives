// IGI native provenance: FX_ExplosionSpawn_10 - 0x00488040 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00488040-FX_ExplosionSpawn_10.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_ExplosionSpawn_10.h"
uint32_t FX_ExplosionSpawn_10(struct status_msg* context, void* param_2)

{
    int32_t kind;
    kind = context->head[7];
    struct status_msg* data_val = QTask_HandleInput(param_2, kind, 0);
    uint32_t entity_val = context->head[8];

    if (entity_val > 0)
        Script_LevelqtaskidDAlready(entity_val, data_val);

    int32_t* data_1 = context->head[9];
    int32_t i = 0;

    if (*data_1 > 0)
    {
        int32_t flagP1 = 0;

        do
        {
            void** source_2 = data_1[2] + flagP1;
            param_2 = *source_2 + data_val;
            char data_3 = Script_ParseEnumInt32_9();
            Script_ParseEnumString_8(*(context->head[0xa] + (i << 2)), source_2[1], data_3, &param_2);
            data_1 = context->head[9];
            i += 1;
            flagP1 += 0x10;
        } while (i < *data_1);
    }

    struct status_msg* result = Camera_ApplyPostProcess_33(&context->head[2]);

    if (result)
    {
        result = context->head[2];

        for (uint32_t i_1 = result->head[0]; i_1; i_1 = *i_1)
        {
            FX_ExplosionSpawn_10(result, data_val);
            result = i_1;
        }
    }

    return result;
}
