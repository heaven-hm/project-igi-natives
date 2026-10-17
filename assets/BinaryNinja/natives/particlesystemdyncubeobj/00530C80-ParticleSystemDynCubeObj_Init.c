// Original IGI.EXE function: ParticleSystemDynCubeObj_Init (VA 0x00530C80; static CFG gate PASS, CFG score 1.000).
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
