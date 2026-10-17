// Original IGI.EXE function: Physics_SimulateRigidBody_11 (VA 0x0050A670; static CFG gate FAIL, CFG score 0.833).
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
