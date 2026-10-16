#include "gi_platform.h"
#include "005049F0-Physics_SimulateRigidBody_3.h"
uint32_t Physics_SimulateRigidBody_3()

{
    DynObj_CreateMagicObject_4(g_a7a7b4);
    QTask_InitContext(g_54e69e);
    int16_t tmpD = g_54e69c;
    g_54e69e = 0xff;
    uint32_t result = QTask_CloseEvent_2(tmpD);
    g_54e69c = 0x181;
    return result;
}
