#include "gi_platform.h"
#include "00493A10-Display_ClearSurfaces_6.h"
int32_t* Display_ClearSurfaces_6()

{
    int32_t* valA1 = g_bcad00;

    if (valA1)
    {
        ((int(*)())(uintptr_t)(*(*valA1 + 8)))(valA1);
        g_bcad00 = 0;
    }

    int32_t* valA = g_bcad80;

    if (valA)
    {
        ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 8))))(valA);
        g_bcad80 = 0;
    }

    int32_t* result = g_bcad90;

    if (result)
    {
        result = ((int(*)())(uintptr_t)(*(*result + 8)))(result);
        g_bcad90 = 0;
    }

    return result;
}
