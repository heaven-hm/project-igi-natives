#include "00404390-Config_RegisterOptions.h"
/* 0x00404390 Config_RegisterOptions full linked: callers=0 callees=0 */
void* Config_RegisterOptions(void* a1)

{
    void* result = a1 + 0x1c;

    if (result && *(a1 + 4) >= 0x280 && *(a1 + 8) >= 0x1e0)
    {
        result = g_567c90;
        int32_t edx_1 = 0;

        if (result > 0)
        {
            int32_t ebx;
            int32_t var_8_1 = ebx;
            int32_t edi_1 = 0;

            while (true)
            {
                char* esi_1 = edi_1 + &g_567c98;
                char* eax = a1 + 0x1c;
                int32_t eax_2;

                while (true)
                {
                    char ebx_1 = *eax;
                    char temp0_1 = *esi_1;
                    bool c_1 = ebx_1 < temp0_1;

                    if (ebx_1 == temp0_1)
                    {
                        if (!ebx_1)
                        {
                            eax_2 = 0;
                            break;
                        }

                        ebx_1 = eax[1];
                        char temp3_1 = esi_1[1];
                        c_1 = ebx_1 < temp3_1;

                        if (ebx_1 == temp3_1)
                        {
                            eax = &eax[2];
                            esi_1 = &esi_1[2];

                            if (ebx_1)
                                continue;

                            eax_2 = 0;
                            break;
                        }
                    }

                    eax_2 = eax - eax + 1;
                    break;
                }

                if (!eax_2)
                {
                    int32_t eax_3 = *(edi_1 + &g_568098);
                    *(edi_1 + eax_3 * 0xc + 0x567d98) = *(a1 + 4);
                    *(edi_1 + eax_3 * 0xc + 0x567d9c) = *(a1 + 8);
                    *(edi_1 + eax_3 * 0xc + 0x567da0) = *(a1 + 0x10);
                    *(edi_1 + &g_568098) += 1;
                }

                result = g_567c90;
                edx_1 += 1;
                edi_1 += 0x404;

                if (edx_1 >= result)
                    break;
            }
        }
    }

    return result;
}
