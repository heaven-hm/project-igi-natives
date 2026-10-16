#include "gi_platform.h"
#include "00531F60-TransparencyList_LoadParameters.h"
int32_t TransparencyList_LoadParameters(void* a1)

{
    DynObj_RemoveSymbol_7((*(int32_t*)(uintptr_t)(a1 + 0x68)), a1, 0xffffffff);
    Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 0x74)));
    void* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x78));
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
    int32_t result = Sys_ExecuteBytecode_2(tmpD);
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = 0;
    return result;
}
