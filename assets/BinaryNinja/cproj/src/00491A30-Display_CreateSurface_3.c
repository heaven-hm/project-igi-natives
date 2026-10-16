#include "gi_platform.h"
#include "00491A30-Display_CreateSurface_3.h"
int32_t Display_CreateSurface_3()

{
    char result = g_5ca02d;

    if (result)
        result = ((int(*)())(uintptr_t)(*((Display_SetGammaRamp_5() << 2) + &g_a94e84)))(0);

    return result;
}
