#include "00530C80-ParticleSystemDynCubeObj_Init.h"
/* 0x00530c80 ParticleSystemDynCubeObj_Init full linked: callers=1 callees=4 */
int32_t* sub_530c80()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("ParticleSystemDynCubeObj", 0xb8, g_54875c, 0);
    g_54f7b0 = eax_1;
    QTask_RemoveEventCallback(eax_1, 4, sub_530cd0);
    QTask_TriggerEvent(g_54f7b0, 2, sub_531090);
    return sub_4b4720(0xa845f8);
}
