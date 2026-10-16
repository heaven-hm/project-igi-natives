#include "SimpointObjGenerator_Setup.h"
int32_t SimpointObjGenerator_Setup(void* a1)

{
    if (!*(a1 + 0x138))
        *(a1 + 0x138) = Physics_CheckHullCollision_2(*(a1 + 0x124) * 0x1e, a1 + 0x104, a1 + 0x114,
            *(a1 + 0x12c), *(a1 + 0x130), 0x4232674f, *(a1 + 0x134), a1 + 0x148, 0);

    if (*(a1 + 0xf0) <= 0)
    {
        float v_c = *(a1 + 0x13c);
        float valA9 = *(a1 + 0x140);
        float objC4 = *(a1 + 0x144);
        v_c = v_c * 4096f;
        float v_8_2 = valA9 * 4096f;
        float v_4_2 = objC4 * 4096f;
        int32_t valA11 = Physics_SimulateRigidBody_2();
        Physics_VirmodelIsNull(*(a1 + 0x138), valA11, a1 + 0x20, a1 + 0x70, &v_c);
        *(a1 + 0xf0) = *(a1 + 0x128) * 0x1e;
    }

    int32_t result = *(a1 + 0xf0) - 1;
    *(a1 + 0xf0) = result;
    return result;
}
