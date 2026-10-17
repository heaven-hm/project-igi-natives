// IGI native provenance: Physics_UnableToRegisterArea - 0x00504A30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00504A30-Physics_UnableToRegisterArea.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_UnableToRegisterArea.h"
int32_t Physics_UnableToRegisterArea(int32_t* context, int32_t param_2)

{
    int32_t entity_val = 0;

    for (char* i = &g_a7a640; i < &g_a7a7b4; )
    {
        if (!*i)
        {
            int32_t data_1 = entity_val * 0xc;
            *(data_1 + &g_a7a640) = 1;
            *(data_1 + 0xa7a644) = context;
            *(data_1 + 0xa7a648) = param_2;
            int32_t result = 1 << (entity_val & 0x1f);
            TaskType_Set(context, result);
            return result;
        }

        i = &i[0xc];
        entity_val += 1;
    }

    Error_Show("Unable to register AreaActivate criteria");

    while (true)
        /* nop */
}
