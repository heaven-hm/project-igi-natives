// Original IGI.EXE function: ParticleSystemDynCubeObj_Setup (VA 0x00531090; static CFG gate PASS, CFG score 1.000).
#include "ParticleSystemDynCubeObj_Setup.h"
int32_t ParticleSystemDynCubeObj_Setup(void* context)

{
    DynObj_RemoveSymbol_7(*(context + 0x80), context, 0);
    int32_t result = Sys_ExecuteBytecode_2(*(context + 0x7c));
    *(context + 0x7c) = 0;
    return result;
}
