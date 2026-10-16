#include "gi_platform.h"
#include "00531090-ParticleSystemDynCubeObj_Setup.h"
int32_t ParticleSystemDynCubeObj_Setup(void* a1)

{
    DynObj_RemoveSymbol_7((*(int32_t*)(uintptr_t)(a1 + 0x80)), a1, 0);
    int32_t result = Sys_ExecuteBytecode_2((*(int32_t*)(uintptr_t)(a1 + 0x7c)));
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = 0;
    return result;
}
