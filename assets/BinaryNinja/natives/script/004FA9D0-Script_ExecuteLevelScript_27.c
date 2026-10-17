// Original IGI.EXE function: Script_ExecuteLevelScript_27 (VA 0x004FA9D0; static CFG gate PASS, CFG score 1.000).
#include "Script_ExecuteLevelScript_27.h"
int32_t Script_ExecuteLevelScript_27(void* a1, int32_t a2, int32_t a3)

{
    void* srcS = a1;
    Script_CallNativeHandler_26(srcS, &a1);
    int32_t saved_ctx;
    Script_FormatString_26(srcS, &saved_ctx);
    Sys_ResolveSymbol_4(*(srcS + 4));
    int32_t result = Resource_Unpack(*(srcS + 4), a2, a3);
    result = 1;
    return result;
}
