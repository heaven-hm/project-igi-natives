#include "gi_platform.h"
#include "004FA910-Script_ParseEnumReal32_27.h"
int32_t Script_ParseEnumReal32_27(void* a1, int32_t a2)

{
    Sys_ResolveSymbol_4((*(int32_t*)(uintptr_t)(a1 + 4)));
    int32_t v_2c = 0x19;
    char v_1c;
    void* v_30 = &v_1c;
    int32_t* v_34 = (*(int32_t*)(uintptr_t)(a1 + 4));
    int32_t result = Resource_Unpack(v_34, v_30, v_2c);
    char v_1b;
    memcpy(a2, &v_1b, 0x18);
    result = 1;
    return result;
}
