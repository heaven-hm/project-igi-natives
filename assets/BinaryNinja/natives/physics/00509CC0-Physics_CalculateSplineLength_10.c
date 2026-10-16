#include "Physics_CalculateSplineLength_10.h"
int32_t Physics_CalculateSplineLength_10(int32_t a1)

{
    if (!*((a1 << 2) + &g_a7b4e0))
        return 0;

    int32_t* valA = *((a1 << 2) + &g_a7b2e0);
    int32_t result = 0;
    result = (*(*valA + 0x1c))(valA) >= 0;
    return result;
}
