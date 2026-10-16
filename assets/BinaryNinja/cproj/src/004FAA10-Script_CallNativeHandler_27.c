#include "gi_platform.h"
#include "004FAA10-Script_CallNativeHandler_27.h"
uint32_t Script_CallNativeHandler_27(void* a1)

{
    void* srcS = a1;
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(srcS + 4)));
    Resource_Unpack((*(int32_t*)(uintptr_t)(srcS + 4)), &a1, 1);
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(srcS + 4)));
    Sys_ExecuteBytecode_4((*(int32_t*)(uintptr_t)(srcS + 4)), 0xffffffff, 1);
    return a1;
}
