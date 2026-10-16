#include "004FCF50-Particle2DDynCubeObjTask_Init.h"
/* 0x004fcf50 Particle2DDynCubeObjTask_Init full linked: callers=1 callees=10 */
int32_t sub_4fcf50()

{
    int32_t var_4 = 0;
    g_54e568 = TaskType_Register("Particle2DDynCubeObjTask", 0x100, g_54875c, 0x19);
    char eax_2 = QTask_UnableToAllocateEven(0);
    int16_t ecx = g_54e568;
    g_54e56a = eax_2;
    QTask_RemoveEventCallback(ecx, 0, sub_4fd5e0);
    QTask_TriggerEvent(g_54e568, 1, sub_4fd660);
    QTask_TriggerEvent(g_54e568, 2, sub_4fdd70);
    QTask_RemoveEventCallback(g_54e568, 4, sub_4fd020);
    int32_t eax_4 = sub_4cea10();
    QTask_RemoveEventCallback(g_54e568, eax_4, sub_4fde00);
    sub_4b4720(0xa7a4c0);
    int32_t result = sub_4b47e0(0xa7a4c0, 0x12332153);
    g_a7a4d0 = 0;
    g_a7a4d4 = 0;
    return result;
}
