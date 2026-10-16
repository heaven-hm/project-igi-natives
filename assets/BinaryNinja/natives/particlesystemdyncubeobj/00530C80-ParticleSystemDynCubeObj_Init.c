#include "ParticleSystemDynCubeObj_Init.h"
int32_t* ParticleSystemDynCubeObj_Init()

{
    int32_t v_4 = 0;
    int16_t valA1 = TaskType_Register("ParticleSystemDynCubeObj", 0xb8, g_54875c, 0);
    g_54f7b0 = valA1;
    QTask_RemoveEventCallback(valA1, 4, ParticleSystemDynCubeObj_LoadParameters);
    QTask_TriggerEvent(g_54f7b0, 2, ParticleSystemDynCubeObj_Setup);
    return Sys_ResolveSymbol_13(0xa845f8);
}
