// IGI native provenance: ParticleSystemDynCubeObj_Setup - 0x00531090 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00531090-ParticleSystemDynCubeObj_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ParticleSystemDynCubeObj_Setup.h"
int32_t ParticleSystemDynCubeObj_Setup(void* context)

{
    DynObj_RemoveSymbol_7(*(context + 0x80), context, 0);
    int32_t result = Sys_ExecuteBytecode_2(*(context + 0x7c));
    *(context + 0x7c) = 0;
    return result;
}
