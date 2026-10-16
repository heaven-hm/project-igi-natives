#include "gi_platform.h"
#include "0048FFA0-FX_DebrisSpawn_27.h"
int32_t* FX_DebrisSpawn_27()

{
    int32_t* objC1 = g_5c8e14;

    if (objC1)
    {
        int32_t* valA1 = g_5c8e1c;

        if (valA1)
        {
            ((int(*)())(uintptr_t)(*(*valA1 + 0x20)))(valA1);
            int32_t* valA2 = g_5c8e1c;
            ((int(*)())(uintptr_t)(*(*valA2 + 8)))(valA2);
            objC1 = g_5c8e14;
            g_5c8e1c = 0;
        }

        ((int(*)())(uintptr_t)(*(*objC1 + 8)))(objC1);
        g_5c8e14 = 0;
    }

    return FX_UnableToRemoveWinpro(sub_48fed0);
}
