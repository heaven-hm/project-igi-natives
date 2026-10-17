// Original IGI.EXE function: Script_ExecuteLevelScript_26 (VA 0x004FA7A0; static CFG gate PASS, CFG score 1.000).
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
