#include "Display_SetGammaRamp_2.h"
void Display_SetGammaRamp_2(int32_t a1, int32_t a2, int32_t* a3)

{
    if (a2 >= 0 && a2 < 4 && a3 && a1 && !*(a1 + (a2 << 2) + 0x1b8))
        *(a1 + (a2 << 2) + 0x1b8) = Sys_DispatchOpcode_18(a3);
}
