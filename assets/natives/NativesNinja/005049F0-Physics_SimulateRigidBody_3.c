#include "005049F0-Physics_SimulateRigidBody_3.h"
/* 0x005049f0 Physics_SimulateRigidBody_3 full linked: callers=1 callees=3 */
uint32_t sub_5049f0()

{
    sub_4c1830(g_a7a7b4);
    QTask_InitContext(g_54e69e);
    int16_t edx = g_54e69c;
    g_54e69e = 0xff;
    uint32_t result = QTask_CloseEvent_2(edx);
    g_54e69c = 0x181;
    return result;
}
