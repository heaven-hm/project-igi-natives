#include "00509CC0-Physics_CalculateSplineLength_10.h"
/* 0x00509cc0 Physics_CalculateSplineLength_10 full linked: callers=2 callees=0 */
int32_t sub_509cc0(int32_t a1)

{
    if (!*((a1 << 2) + &g_a7b4e0))
        return 0;

    int32_t* eax = *((a1 << 2) + &g_a7b2e0);
    int32_t result = 0;
    result = (*(*eax + 0x1c))(eax) >= 0;
    return result;
}
