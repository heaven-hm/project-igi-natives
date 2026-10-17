// Original IGI.EXE function: FX_CouldNotCreateDirect_2 (VA 0x0048FFF0; static CFG gate PASS, CFG score 0.970).
#include "FX_CouldNotCreateDirect_2.h"
void* FX_CouldNotCreateDirect_2()

{
    int32_t item_10 = 0x6f1d2b61;
    int32_t item_14 = 0;
    int32_t item_c = 0x11cfd5a0;
    int32_t item_8 = 0x4544c7bf;
    int32_t item_4 = 0x5453;
    g_5c8e28 = 0;
    g_5c8e24 = 0;

    if (DirectInputCreateA(FX_TrailUpdate_21(), 0x700, &g_5c8e28))
    {
        Error_Show("Could not create DirectInput keyboard object!");

        while (true)
            /* nop */

        return;
    }

    int32_t* data_2 = g_5c8e28;

    if ((*(*data_2 + 0xc))(data_2, &item_14, &g_5c8e24, 0))
    {
        Error_Show("Could not create DirectInput device keyboard!");

        while (true)
            /* nop */

        return;
    }

    int32_t* data_4 = g_5c8e24;

    if ((*(*data_4 + 0x2c))(data_4, 0x5348c8))
    {
        Error_Show("Could not set data format for keyboard!");

        while (true)
            /* nop */

        return;
    }

    int32_t dest_val;
    int32_t item_18 = dest_val;
    int32_t dest_1 = **&g_5c8e24;
    int32_t data_6 = FX_ExplosionSpawn_22();

    if (!(*(dest_1 + 0x34))(g_5c8e24, data_6, 6))
    {
        int32_t* data_9 = g_5c8e24;

        if (!(*(*data_9 + 0x1c))(data_9))
            g_5c8e30 = 1;

        Display_SyncVSync();
        Display_SwapBuffers(0);
        memset(0xc28e80, 0, 0x100);
        return FX_FailedToRegisterWinp(sub_490120);
    }

    Error_Show("Could not set cooperative level for keyboard!");

    while (true)
        /* nop */
}
