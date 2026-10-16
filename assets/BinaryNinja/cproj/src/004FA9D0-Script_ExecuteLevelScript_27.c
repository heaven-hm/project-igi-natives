#include "gi_platform.h"
#include "004FA9D0-Script_ExecuteLevelScript_27.h"
int32_t Script_ExecuteLevelScript_27(void* a1, int32_t a2, int32_t a3)

{
    void* srcS = a1;
    Script_CallNativeHandler_26(srcS, &a1);
    int32_t saved_ctx;
    Script_FormatString_26(srcS, &saved_ctx);
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(srcS + 4)));
    int32_t result = Resource_Unpack((*(int32_t*)(uintptr_t)(srcS + 4)), a2, a3);
    result = 1;
    return result;
}
