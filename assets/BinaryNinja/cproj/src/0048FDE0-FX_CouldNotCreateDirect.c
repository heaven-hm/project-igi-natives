#include "gi_platform.h"
#include "0048FDE0-FX_CouldNotCreateDirect.h"
void* FX_CouldNotCreateDirect()

{
    g_5c8e14 = 0;
    g_5c8e1c = 0;

    if (DirectInputCreateEx(FX_TrailUpdate_21(), 0x700, 0x5349d0, &g_5c8e14))
    {
        Error_Show("Could not create DirectInput mouse object!");

        while (true)
            /* nop */

        return;
    }

    int32_t* valA2 = g_5c8e14;

    if (((int(*)())(uintptr_t)(*(*valA2 + 0x24)))(valA2, 0x534910, 0x5349b0, &g_5c8e1c, 0))
    {
        Error_Show("Could not create DirectInput device mouse!");

        while (true)
            /* nop */

        return;
    }

    int32_t* valA4 = g_5c8e1c;

    if (((int(*)())(uintptr_t)(*(*valA4 + 0x2c)))(valA4, 0x5348b0))
    {
        Error_Show("Could not set data format for mouse!");

        while (true)
            /* nop */

        return;
    }

    int32_t dstD;
    int32_t v_c = dstD;
    int32_t dstD1 = **&g_5c8e1c;
    int32_t valA7 = FX_ExplosionSpawn_22();

    if (!((int(*)())(uintptr_t)(*(dstD1 + 0x34)))(g_5c8e1c, valA7, 6))
    {
        FX_CouldNotGetMouseCaps();
        g_5c8e10 = 0;
        g_5c8e0c = 0;
        g_5c8e08 = 0;
        return FX_FailedToRegisterWinp(sub_48fed0);
    }

    Error_Show("Could not set cooperative level for keyboard!");

    while (true)
        /* nop */
}
