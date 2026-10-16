#include "gi_platform.h"
#include "00491CC0-Display_SetDisplayMode_4.h"
int32_t Display_SetDisplayMode_4()

{
    char result = g_5ca02d;

    if (result)
        result = ((int(*)())(uintptr_t)(*((Display_CheckCapabilities_5() << 2) + &g_a94e84)))(0);

    g_c10380 += 1;
    return result;
}
