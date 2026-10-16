#include "gi_platform.h"
#include "004FA5A0-Script_CallNativeHandler_25.h"
int32_t __convention("regparm") Script_CallNativeHandler_25(int32_t a1, int32_t a2, int32_t a3, void* a4, int16_t a5)

{
    int32_t v_4 = a3;
    v_4 = 3;
    *(&v_4 + 1) = a5;
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a4 + 4)));
    int32_t result = Sys_CloseFileStream_4((*(int32_t*)(uintptr_t)(a4 + 4)), &v_4, 3);
    result = 1;
    return result;
}
