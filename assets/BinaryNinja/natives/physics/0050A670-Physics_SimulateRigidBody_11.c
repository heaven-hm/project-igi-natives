// IGI native provenance: Physics_SimulateRigidBody_11 - 0x0050A670 - CFG score 83.3% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0050A670-Physics_SimulateRigidBody_11.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SimulateRigidBody_11.h"
void* Physics_SimulateRigidBody_11(int32_t* context)

{
    void* dest_val = *context;
    void* result = Mem_Alloc(0x400, 4);
    *(dest_val + 8) = result;
    int32_t source_1 = context[2];

    if (source_1)
        memcpy(result, source_1, 0x400);

    return result;
}
