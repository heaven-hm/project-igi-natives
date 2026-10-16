#include "0048FDE0-FX_CouldNotCreateDirect.h"
/* 0x0048fde0 FX_CouldNotCreateDirect full linked: callers=1 callees=9 */
void* sub_48fde0()

{
    g_5c8e14 = 0;
    g_5c8e1c = 0;

    if (DirectInputCreateEx(sub_48f090(), 0x700, 0x5349d0, &g_5c8e14))
    {
        Error_Show("Could not create DirectInput mouse object!");

        while (true)
            /* nop */

        return;
    }

    int32_t* eax_2 = g_5c8e14;

    if ((*(*eax_2 + 0x24))(eax_2, 0x534910, 0x5349b0, &g_5c8e1c, 0))
    {
        Error_Show("Could not create DirectInput device mouse!");

        while (true)
            /* nop */

        return;
    }

    int32_t* eax_4 = g_5c8e1c;

    if ((*(*eax_4 + 0x2c))(eax_4, 0x5348b0))
    {
        Error_Show("Could not set data format for mouse!");

        while (true)
            /* nop */

        return;
    }

    int32_t edi;
    int32_t var_c = edi;
    int32_t edi_1 = **&g_5c8e1c;
    int32_t eax_7 = sub_48f0a0();

    if (!(*(edi_1 + 0x34))(g_5c8e1c, eax_7, 6))
    {
        sub_48fd90();
        g_5c8e10 = 0;
        g_5c8e0c = 0;
        g_5c8e08 = 0;
        return sub_48f490(sub_48fed0);
    }

    Error_Show("Could not set cooperative level for keyboard!");

    while (true)
        /* nop */
}
