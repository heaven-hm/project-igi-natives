// Original IGI.EXE function: AnimRigidDynCubeObj_OnEvent (VA 0x0052AC10; static CFG gate FAIL, CFG score 0.667).
#include "AnimRigidDynCubeObj_OnEvent.h"
int32_t AnimRigidDynCubeObj_OnEvent(int32_t a1, int32_t* a2)

{
    int32_t result = *a2;
    memcpy(a2[2], a1 + 0x20, 0x18);
    memcpy(result + 0x18, a1 + 0x70, 0x28);
    memcpy(result, a1 + 0x20, 0x18);
    return result;
}
