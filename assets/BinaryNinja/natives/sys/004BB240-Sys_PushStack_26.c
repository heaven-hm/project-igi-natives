// IGI native provenance: Sys_PushStack_26 - 0x004BB240 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004BB240-Sys_PushStack_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Sys_PushStack_26.h"
int32_t Sys_PushStack_26(void* context, int32_t* param_2)

{
    do
    {
        int32_t data_val;
        int32_t entity_val;
        int32_t temp_val;
        data_val = DynObj_RegisterSymbol_3(data_val, temp_val, entity_val, context, param_2);

        if (!data_val)
            return 0;
    } while (*(context + 0x2c4) == 1);

    return 1;
}
