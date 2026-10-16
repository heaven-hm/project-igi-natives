#include "ParticleSystemDynCubeObj_Setup.h"
int32_t ParticleSystemDynCubeObj_Setup(void* a1)

{
    DynObj_RemoveSymbol_7(*(a1 + 0x80), a1, 0);
    int32_t result = Sys_ExecuteBytecode_2(*(a1 + 0x7c));
    *(a1 + 0x7c) = 0;
    return result;
}
