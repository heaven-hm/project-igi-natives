#include "Display_ClearSurfaces_6.h"
int32_t* Display_ClearSurfaces_6()

{
    int32_t* valA1 = g_bcad00;

    if (valA1)
    {
        (*(*valA1 + 8))(valA1);
        g_bcad00 = 0;
    }

    int32_t* valA = g_bcad80;

    if (valA)
    {
        (*(*valA + 8))(valA);
        g_bcad80 = 0;
    }

    int32_t* result = g_bcad90;

    if (result)
    {
        result = (*(*result + 8))(result);
        g_bcad90 = 0;
    }

    return result;
}
