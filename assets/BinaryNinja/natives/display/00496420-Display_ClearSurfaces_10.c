#include "Display_ClearSurfaces_10.h"
int16_t* Display_ClearSurfaces_10(int16_t* a1, int16_t a2)

{
    *a1 = a2;
    a1[3] = 0;
    a1[1] = 0;
    a1[4] = 0;
    a1[2] = 0;
    a1[5] = 0;
    return a1;
}
