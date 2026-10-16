#include "FX_CouldNotCreateDirect_2.h"
void* FX_CouldNotCreateDirect_2()

{
    int32_t v_10 = 0x6f1d2b61;
    int32_t v_14 = 0;
    int32_t v_c = 0x11cfd5a0;
    int32_t v_8 = 0x4544c7bf;
    int32_t v_4 = 0x5453;
    g_5c8e28 = 0;
    g_5c8e24 = 0;

    if (DirectInputCreateA(FX_TrailUpdate_21(), 0x700, &g_5c8e28))
    {
        Error_Show("Could not create DirectInput keyboard object!");

        while (true)
            /* nop */

        return;
    }

    int32_t* valA2 = g_5c8e28;

    if ((*(*valA2 + 0xc))(valA2, &v_14, &g_5c8e24, 0))
    {
        Error_Show("Could not create DirectInput device keyboard!");

        while (true)
            /* nop */

        return;
    }

    int32_t* valA4 = g_5c8e24;

    if ((*(*valA4 + 0x2c))(valA4, 0x5348c8))
    {
        Error_Show("Could not set data format for keyboard!");

        while (true)
            /* nop */

        return;
    }

    int32_t dstD;
    int32_t v_18 = dstD;
    int32_t dstD1 = **&g_5c8e24;
    int32_t valA6 = FX_ExplosionSpawn_22();

    if (!(*(dstD1 + 0x34))(g_5c8e24, valA6, 6))
    {
        int32_t* valA9 = g_5c8e24;

        if (!(*(*valA9 + 0x1c))(valA9))
            g_5c8e30 = 1;

        Display_SyncVSync();
        Display_SwapBuffers(0);
        __builtin_memset(0xc28e80, 0, 0x100);
        return FX_FailedToRegisterWinp(sub_490120);
    }

    Error_Show("Could not set cooperative level for keyboard!");

    while (true)
        /* nop */
}
