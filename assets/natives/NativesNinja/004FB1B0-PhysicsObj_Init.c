#include "004FB1B0-PhysicsObj_Init.h"
/* 0x004fb1b0 PhysicsObj_Init full linked: callers=1 callees=13 */
int32_t sub_4fb1b0()

{
    int32_t var_4 = 0;
    g_a774b0 = TaskType_Register("PhysicsObj", 0x720, sub_4c48c0(), 0);
    g_54e4cc = QTask_UnableToAllocateEven(0);
    g_54e4cd = QTask_UnableToAllocateEven(0);
    g_54e4ce = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_a774b0, 0, sub_4fb290);
    QTask_TriggerEvent(g_a774b0, 2, sub_4fb2a0);
    QTask_TriggerEvent(g_a774b0, 1, sub_4fb2b0);
    QTask_RemoveEventCallback(g_a774b0, 0xc, sub_4f4390);
    int32_t eax_6 = sub_4fc850();
    QTask_RemoveEventCallback(g_a774b0, eax_6, sub_4fb2c0);
    int32_t eax_7 = sub_4ee100();
    int32_t result = QTask_RemoveEventCallback(g_a774b0, eax_7, PhysicsObj_Setup);
    g_a774b8 = 0;
    return result;
}
