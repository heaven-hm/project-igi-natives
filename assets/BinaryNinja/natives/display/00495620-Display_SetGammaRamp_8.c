#include "Display_SetGammaRamp_8.h"
int32_t* Display_SetGammaRamp_8(int32_t* a1, int32_t* a2)

{
    int32_t tmpD = *a2;
    a1[1] = 0;
    *a1 = tmpD;
    void* tmpD1 = *a2;

    if (tmpD1)
        *(tmpD1 + 4) = a1;

    *a2 = a1;
    return a1;
}
