// IGI native provenance: Physics_QvertexDrawstrip - 0x00509930 - CFG score 63.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 00509930-Physics_QvertexDrawstrip.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_QvertexDrawstrip.h"
int32_t Physics_QvertexDrawstrip()

{
    g_54e890 = Sys_RendermodeFailedToCr_2("QVertex:DrawStrip");
    Physics_CalculateSplineLength_14();
    /* tailcall */
    return Physics_SimulateRigidBody_13();
}
