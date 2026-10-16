#include "gi_platform.h"
#include "004FA7E0-Script_CallNativeHandler_26.h"
char* Script_CallNativeHandler_26(void* a1, char* a2)

{
    void* srcS = a1;
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(srcS + 4)));
    Resource_Unpack((*(int32_t*)(uintptr_t)(srcS + 4)), &a1, 2);
    char* result = a2;
    *result = (*(int32_t*)(uintptr_t)(&a1 + 1));
    result = 1;
    return result;
}
