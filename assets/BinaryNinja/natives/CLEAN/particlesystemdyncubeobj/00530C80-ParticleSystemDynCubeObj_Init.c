// IGI native provenance: ParticleSystemDynCubeObj_Init - 0x00530C80 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00530C80-ParticleSystemDynCubeObj_Init.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ParticleSystemDynCubeObj_Init.h"
int32_t* ParticleSystemDynCubeObj_Init()

{
    int32_t item_4 = 0;
    int16_t data_1 = TaskType_Register("ParticleSystemDynCubeObj", 0xb8, g_54875c, 0);
    g_54f7b0 = data_1;
    QTask_RemoveEventCallback(data_1, 4, ParticleSystemDynCubeObj_LoadParameters);
    QTask_TriggerEvent(g_54f7b0, 2, ParticleSystemDynCubeObj_Setup);
    return Sys_ResolveSymbol_13(0xa845f8);
}
