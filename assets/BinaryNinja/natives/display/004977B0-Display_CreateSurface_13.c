#include "Display_CreateSurface_13.h"
int32_t** Display_CreateSurface_13(int32_t a1, int32_t a2)

{
    int32_t* valA = Display_CloseDevice_14(0x24);
    memcpy(valA, a1, 0x24);
    valA[1] = Display_SetGammaRamp_4();
    return Display_ClearSurfaces_14(a2, valA);
}
