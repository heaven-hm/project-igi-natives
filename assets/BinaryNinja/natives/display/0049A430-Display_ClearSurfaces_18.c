#include "Display_ClearSurfaces_18.h"
int32_t Display_ClearSurfaces_18(int32_t a1, int32_t a2)

{
    memcpy(a1 + 0x20, a2, 0x18);
    return a1;
}
