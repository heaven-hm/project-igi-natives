#include "gi_platform.h"
#include "00442A30-SCamera_Cleanup_5.h"
void* SCamera_Cleanup_5(void* a1, int32_t* a2)

{
    *a2 = Env_InitLadder_3();
    a2[8] = 1;
    bool ctxB = (*(int32_t*)(uintptr_t)(a1 + 0x170));
    (*(int32_t*)(uintptr_t)(a2 + 0x25)) = 1;
    a2[9] = !ctxB;
    memcpy(&a2[2], a1 + 0x20, 0x18);
    return a1;
}
