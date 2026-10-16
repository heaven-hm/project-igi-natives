#include "gi_platform.h"
#include "00509CC0-Physics_CalculateSplineLength_10.h"
int32_t Physics_CalculateSplineLength_10(int32_t a1)

{
    if (!(*(int32_t*)(uintptr_t)((a1 << 2) + &g_a7b4e0)))
        return 0;

    int32_t* valA = (*(int32_t*)(uintptr_t)((a1 << 2) + &g_a7b2e0));
    int32_t result = 0;
    result = ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 0x1c))))(valA) >= 0;
    return result;
}
