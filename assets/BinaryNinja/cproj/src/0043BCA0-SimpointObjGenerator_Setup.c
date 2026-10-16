#include "gi_platform.h"
#include "0043BCA0-SimpointObjGenerator_Setup.h"
int32_t SimpointObjGenerator_Setup(void* a1)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0x138)))
        (*(int32_t*)(uintptr_t)(a1 + 0x138)) = Physics_CheckHullCollision_2((*(int32_t*)(uintptr_t)(a1 + 0x124)) * 0x1e, a1 + 0x104, a1 + 0x114,
            (*(int32_t*)(uintptr_t)(a1 + 0x12c)), (*(int32_t*)(uintptr_t)(a1 + 0x130)), 0x4232674f, (*(int32_t*)(uintptr_t)(a1 + 0x134)), a1 + 0x148, 0);

    if ((*(int32_t*)(uintptr_t)(a1 + 0xf0)) <= 0)
    {
        float v_c = (*(int32_t*)(uintptr_t)(a1 + 0x13c));
        float valA9 = (*(int32_t*)(uintptr_t)(a1 + 0x140));
        float objC4 = (*(int32_t*)(uintptr_t)(a1 + 0x144));
        v_c = v_c * 4096.0f;
        float v_8_2 = valA9 * 4096.0f;
        float v_4_2 = objC4 * 4096.0f;
        int32_t valA11 = Physics_SimulateRigidBody_2();
        Physics_VirmodelIsNull((*(int32_t*)(uintptr_t)(a1 + 0x138)), valA11, a1 + 0x20, a1 + 0x70, &v_c);
        (*(int32_t*)(uintptr_t)(a1 + 0xf0)) = (*(int32_t*)(uintptr_t)(a1 + 0x128)) * 0x1e;
    }

    int32_t result = (*(int32_t*)(uintptr_t)(a1 + 0xf0)) - 1;
    (*(int32_t*)(uintptr_t)(a1 + 0xf0)) = result;
    return result;
}
