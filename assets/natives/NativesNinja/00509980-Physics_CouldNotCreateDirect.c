#include "00509980-Physics_CouldNotCreateDirect.h"
/* 0x00509980 Physics_CouldNotCreateDirect full linked: callers=1 callees=7 */
int32_t sub_509980()

{
    int32_t esi = 0;
    g_a7b638 = 0;

    if (!DirectInputCreateA(sub_48f090(), 0x700))
    {
        int32_t* eax_2 = g_a7b4f0;
        int32_t ebx;
        int32_t var_10 = ebx;
        int32_t edi;
        int32_t var_14_1 = edi;
        (*(*eax_2 + 0x10))(eax_2, 4, sub_509a40, 0, 1);
        int32_t result = g_a7b638;

        if (result && result > 0)
        {
            int32_t* ebx_1 = &g_a7b4e0;
            int32_t* edi_1 = &g_a7b430;

            while (true)
            {
                if (!sub_509cc0(esi))
                {
                    Error_Show("Could not acquire one or more joystick devices.");

                    while (true)
                        /* nop */
                }
                else
                {
                    int32_t* eax_4 = *ebx_1;
                    *edi_1 = 0x2c;

                    if ((*(*eax_4 + 0xc))(eax_4, edi_1))
                    {
                        Error_Show("Could not get capabilities for one or more joysticks .");

                        while (true)
                            /* nop */
                    }
                    else
                    {
                        sub_509f00(esi);
                        result = g_a7b638;
                        esi += 1;
                        edi_1 = &edi_1[0xb];
                        ebx_1 = &ebx_1[1];

                        if (esi >= result)
                            break;
                    }
                }
            }
        }

        return result;
    }

    Error_Show("Could not create DirectInput joypad object.");

    while (true)
        /* nop */
}
