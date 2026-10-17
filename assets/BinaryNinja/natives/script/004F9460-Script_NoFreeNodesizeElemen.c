// IGI native provenance: Script_NoFreeNodesizeElemen - 0x004F9460 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F9460-Script_NoFreeNodesizeElemen.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_NoFreeNodesizeElemen.h"
int16_t* Script_NoFreeNodesizeElemen(int16_t context, int32_t param_2)

{
    int32_t temp_val = 0xffffffff;
    int32_t entity_val = 0;
    int16_t* i;

    for (i = &g_a77228; i < &g_a77248; )
    {
        if (temp_val == 0xffffffff && *i == 0x181)
            temp_val = entity_val;

        if (*i == context)
        {
            *((entity_val << 3) + &g_a7722c) = param_2;
            return param_2;
        }

        i = &i[4];
        entity_val += 1;
    }

    if (temp_val != 0xffffffff)
    {
        *((temp_val << 3) + &g_a77228) = context;
        *((temp_val << 3) + &g_a7722c) = param_2;
        return i;
    }

    Error_Show("NO FREE NODESIZE ELEMENTS");

    while (true)
        /* nop */
}
