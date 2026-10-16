#include "0050DC30-Physics_SimulateRigidBody_13.h"
/* 0x0050dc30 Physics_SimulateRigidBody_13 full linked: callers=1 callees=7 */
int32_t sub_50dc30()

{
    sub_4b0ec0(sub_4950e0(), g_a84a54, sub_50e0d0);
    sub_4b0ec0(sub_4950e0(), g_54e890, sub_50d7e0);
    void* edx = g_bcade8;
    g_a7da00 = 0xffffffff;
    g_a7da04 = 0;
    g_a7ced8 = sub_4b7430(edx, sub_50de00);
    int32_t eax_4 = sub_4b7430(g_bcad7c, sub_50e000);
    void* ecx_1 = g_bcadac;
    g_a7d9f8 = eax_4;
    int32_t result = sub_4b7430(ecx_1, sub_50dcc0);
    g_a7d9f4 = result;
    return result;
}
