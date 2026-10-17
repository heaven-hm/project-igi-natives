// IGI native provenance: FX_CouldNotCreateDirect - 0x0048FDE0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048FDE0-FX_CouldNotCreateDirect.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_CouldNotCreateDirect.h"
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

    int32_t* data_2 = g_5c8e14;

    if ((*(*data_2 + 0x24))(data_2, 0x534910, 0x5349b0, &g_5c8e1c, 0))
    {
        Error_Show("Could not create DirectInput device mouse!");

        while (true)
            /* nop */

        return;
    }

    int32_t* data_4 = g_5c8e1c;

    if ((*(*data_4 + 0x2c))(data_4, 0x5348b0))
    {
        Error_Show("Could not set data format for mouse!");

        while (true)
            /* nop */

        return;
    }

    int32_t dest_val;
    int32_t item_c = dest_val;
    int32_t dest_1 = **&g_5c8e1c;
    int32_t data_7 = FX_ExplosionSpawn_22();

    if (!(*(dest_1 + 0x34))(g_5c8e1c, data_7, 6))
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
