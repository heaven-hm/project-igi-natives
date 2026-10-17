// IGI native provenance: Script_ParseEnumReal32_23 - 0x004F9620 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F9620-Script_ParseEnumReal32_23.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ParseEnumReal32_23.h"
int32_t Script_ParseEnumReal32_23(void* context, int32_t param_2)

{
    int32_t flagP = *(context + 0x58);
    void* source_val = *(context + 0x6c);
    int32_t flagP1 = flagP + ((param_2 - flagP) / 0x64 + 1) * 0x64;
    int32_t data_4 = Script_UndefinedGraphnodeda(context);
    *(context + 0x6c) = Mem_Alloc(data_4 * flagP1, 4);
    Script_ParseEnumString_23(context, flagP1);

    if (source_val)
    {
        int32_t entity_3 = *(context + 0x58) * data_4;
        int32_t source_1;
        int32_t dest_2;
        dest_2 = memcpy(*(context + 0x6c), source_val, entity_3 & 0xfffffffc);
        memcpy(dest_2, source_1, entity_3 & 3);
        Sys_ExecuteBytecode_2(source_val);
    }

    *(context + 0x58) = flagP1;
    uint32_t data_8 = Script_EvaluateCondition_22();
    int32_t data_9 = 0;
    data_9 = *(context + 0x1c);
    int32_t result = *(((data_8 * 0x180 + data_9) << 2) + &g_a96ae0);

    if (!result)
        return result;

    return result(context, 0);
}
