#include "gi_platform.h"
#include "004FA6E0-Script_ParseEnumReal32_26.h"
int32_t Script_ParseEnumReal32_26(void* a1, int32_t a2)

{
    char v_1c = 8;
    char v_1b;
    memcpy(&v_1b, a2, 0x18);
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a1 + 4)));
    int32_t v_2c = 0x19;
    char* v_30 = &v_1c;
    int32_t* v_34 = (*(int32_t*)(uintptr_t)(a1 + 4));
    int32_t result = Sys_CloseFileStream_4(v_34, v_30, v_2c);
    result = 1;
    return result;
}
