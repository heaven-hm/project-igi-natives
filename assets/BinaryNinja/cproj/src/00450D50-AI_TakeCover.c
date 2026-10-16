#include "gi_platform.h"
#include "00450D50-AI_TakeCover.h"
int32_t AI_TakeCover(void* a1, int32_t a2)

{
    uint32_t valA = AI_CheckHearing();
    int32_t tmpD = 0;
    tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x1c));
    return ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(((valA * 0x180 + tmpD) << 2) + &g_a96ae0))))(a1, a2);
}
