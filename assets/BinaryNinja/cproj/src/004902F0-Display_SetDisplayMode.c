#include "gi_platform.h"
#include "004902F0-Display_SetDisplayMode.h"
int32_t* Display_SetDisplayMode()

{
    int32_t* objC1 = g_5c8e28;

    if (objC1)
    {
        int32_t* valA1 = g_5c8e24;

        if (valA1)
        {
            ((int(*)())(uintptr_t)(*(*valA1 + 0x20)))(valA1);
            int32_t* valA2 = g_5c8e24;
            ((int(*)())(uintptr_t)(*(*valA2 + 8)))(valA2);
            objC1 = g_5c8e28;
            g_5c8e24 = 0;
        }

        ((int(*)())(uintptr_t)(*(*objC1 + 8)))(objC1);
        g_5c8e28 = 0;
    }

    return FX_UnableToRemoveWinpro(sub_490120);
}
