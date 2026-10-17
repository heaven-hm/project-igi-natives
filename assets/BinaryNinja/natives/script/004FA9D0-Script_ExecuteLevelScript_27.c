// IGI native provenance: Script_ExecuteLevelScript_27 - 0x004FA9D0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FA9D0-Script_ExecuteLevelScript_27.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
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
