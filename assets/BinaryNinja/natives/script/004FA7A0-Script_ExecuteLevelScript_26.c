// IGI native provenance: Script_ExecuteLevelScript_26 - 0x004FA7A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA7A0-Script_ExecuteLevelScript_26.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Script_ExecuteLevelScript_26.h"
int32_t Script_ExecuteLevelScript_26(void* context, int32_t param_2, int32_t param_3)

{
    int32_t data_val;
    int32_t entity_val;
    int32_t temp_val;
    Script_ParseEnumReal32_25(data_val, temp_val, entity_val, context, 0xa);
    Script_FormatString_25(context, param_3);
    Sys_ResolveSymbol_4(*(context + 4));
    int32_t result = Sys_CloseFileStream_4(*(context + 4), param_2, param_3);
    result = 1;
    return result;
}
