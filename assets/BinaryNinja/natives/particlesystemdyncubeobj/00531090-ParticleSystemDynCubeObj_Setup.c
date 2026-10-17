// Original IGI.EXE function: ParticleSystemDynCubeObj_Setup (VA 0x00531090; static CFG gate PASS, CFG score 1.000).
#include "ParticleSystemDynCubeObj_Setup.h"
int32_t ParticleSystemDynCubeObj_Setup(void* a1)

{
    DynObj_RemoveSymbol_7(*(a1 + 0x80), a1, 0);
    int32_t result = Sys_ExecuteBytecode_2(*(a1 + 0x7c));
    *(a1 + 0x7c) = 0;
    return result;
}
