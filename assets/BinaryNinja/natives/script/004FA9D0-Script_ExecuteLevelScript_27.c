// Original IGI.EXE function: Script_ExecuteLevelScript_27 (VA 0x004FA9D0; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_27.h"
int32_t Script_ExecuteLevelScript_27(void* context, int32_t param_2, int32_t param_3)

{
    void* source_val = context;
    Script_CallNativeHandler_26(source_val, &context);
    int32_t saved_ctx;
    Script_FormatString_26(source_val, &saved_ctx);
    Sys_ResolveSymbol_4(*(source_val + 4));
    int32_t result = Resource_Unpack(*(source_val + 4), param_2, param_3);
    result = 1;
    return result;
}
