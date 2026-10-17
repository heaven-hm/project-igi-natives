// IGI native provenance: Physics_SimulateRigidBody_3 - 0x005049F0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 005049F0-Physics_SimulateRigidBody_3.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SimulateRigidBody_3.h"
uint32_t Physics_SimulateRigidBody_3()

{
    DynObj_CreateMagicObject_4(g_a7a7b4);
    QTask_InitContext(g_54e69e);
    int16_t temp_val = g_54e69c;
    g_54e69e = 0xff;
    uint32_t result = QTask_CloseEvent_2(temp_val);
    g_54e69c = 0x181;
    return result;
}
