#include "gi_platform.h"
#include "00509930-Physics_QvertexDrawstrip.h"
int32_t Physics_QvertexDrawstrip()

{
    g_54e890 = Sys_RendermodeFailedToCr_2("QVertex:DrawStrip");
    Physics_CalculateSplineLength_14();
    /* tailcall */
    return Physics_SimulateRigidBody_13();
}
