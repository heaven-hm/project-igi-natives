#include "0048FFF0-FX_CouldNotCreateDirect_2.h"
/* 0x0048fff0 FX_CouldNotCreateDirect_2 full linked: callers=1 callees=11 */
void* sub_48fff0()

{
    int32_t var_10 = 0x6f1d2b61;
    int32_t var_14 = 0;
    int32_t var_c = 0x11cfd5a0;
    int32_t var_8 = 0x4544c7bf;
    int32_t var_4 = 0x5453;
    g_5c8e28 = 0;
    g_5c8e24 = 0;

    if (DirectInputCreateA(sub_48f090(), 0x700, &g_5c8e28))
    {
        Error_Show("Could not create DirectInput keyboard object!");

        while (true)
            /* nop */

        return;
    }

    int32_t* eax_2 = g_5c8e28;

    if ((*(*eax_2 + 0xc))(eax_2, &var_14, &g_5c8e24, 0))
    {
        Error_Show("Could not create DirectInput device keyboard!");

        while (true)
            /* nop */

        return;
    }

    int32_t* eax_4 = g_5c8e24;

    if ((*(*eax_4 + 0x2c))(eax_4, 0x5348c8))
    {
        Error_Show("Could not set data format for keyboard!");

        while (true)
            /* nop */

        return;
    }

    int32_t edi;
    int32_t var_18 = edi;
    int32_t edi_1 = **&g_5c8e24;
    int32_t eax_6 = sub_48f0a0();

    if (!(*(edi_1 + 0x34))(g_5c8e24, eax_6, 6))
    {
        int32_t* eax_9 = g_5c8e24;

        if (!(*(*eax_9 + 0x1c))(eax_9))
            g_5c8e30 = 1;

        sub_490340();
        sub_490350(0);
        __builtin_memset(0xc28e80, 0, 0x100);
        return sub_48f490(sub_490120);
    }

    Error_Show("Could not set cooperative level for keyboard!");

    while (true)
        /* nop */
}
