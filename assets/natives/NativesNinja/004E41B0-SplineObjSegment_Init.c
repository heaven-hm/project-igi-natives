#include "004E41B0-SplineObjSegment_Init.h"
/* 0x004e41b0 SplineObjSegment_Init full linked: callers=1 callees=12 */
uint32_t sub_4e41b0()

{
    int32_t var_4 = 0;
    int16_t eax_1 = TaskType_Register("SplineObjSegment", 0x5b8, sub_4c48c0(), 0);
    g_a5e3f4 = eax_1;
    QTask_TriggerEvent(eax_1, 2, sub_4e3f80);
    QTask_RemoveEventCallback(g_a5e3f4, 4, sub_4e4290);
    QTask_RemoveEventCallback(g_a5e3f4, 0xa, sub_4e16e0);
    QTask_RemoveEventCallback(g_a5e3f4, 0xb, sub_4d3710);
    QTask_RemoveEventCallback(g_a5e3f4, 9, sub_4e16e0);
    QTask_RemoveEventCallback(g_a5e3f4, 0xc, sub_4e4280);
    int32_t eax_4 = sub_4e55b0();
    QTask_RemoveEventCallback(g_a5e3f4, eax_4, sub_4e3fc0);
    QTask_DispatchEvent_3(0x10000000);
    return QTask_RegisterEventCallback_3(g_a5e3f4, 0x10000000);
}
