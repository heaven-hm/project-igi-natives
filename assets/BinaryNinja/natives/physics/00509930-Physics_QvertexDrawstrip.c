// Original IGI.EXE function: Physics_QvertexDrawstrip (VA 0x00509930; static CFG gate FAIL, CFG score 0.633).
#include "Physics_QvertexDrawstrip.h"
int32_t Physics_QvertexDrawstrip()

{
    g_54e890 = Sys_RendermodeFailedToCr_2("QVertex:DrawStrip");
    Physics_CalculateSplineLength_14();
    /* tailcall */
    return Physics_SimulateRigidBody_13();
}
