// IGI native provenance: Physics_SimulateRigidBody_8 - 0x005096A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005096A0-Physics_SimulateRigidBody_8.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SimulateRigidBody_8.h"
int32_t Physics_SimulateRigidBody_8()

{
    char result = g_54e83e;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_54e83e = result;
    }

    return result;
}
