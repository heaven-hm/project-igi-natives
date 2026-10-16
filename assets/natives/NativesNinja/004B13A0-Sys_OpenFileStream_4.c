#include "004B13A0-Sys_OpenFileStream_4.h"
/* 0x004b13a0 Sys_OpenFileStream_4 full linked: callers=7 callees=0 */
int32_t sub_4b13a0(char* a1)

{
    int32_t ebx;
    int32_t var_4 = ebx;
    int32_t ebp = 0;
    char* edi = &g_942330;
    int32_t eax_3;

    while (true)
    {
        eax_3 = *(edi + 0x90);

        if (eax_3)
        {
            char* esi_1 = a1;
            char* eax_1 = edi;

            while (true)
            {
                char ebx_1 = *eax_1;
                char temp0_1 = *esi_1;
                bool c_1 = ebx_1 < temp0_1;

                if (ebx_1 == temp0_1)
                {
                    if (!ebx_1)
                    {
                        eax_3 = 0;
                        break;
                    }

                    ebx_1 = eax_1[1];
                    char temp3_1 = esi_1[1];
                    c_1 = ebx_1 < temp3_1;

                    if (ebx_1 == temp3_1)
                    {
                        eax_1 = &eax_1[2];
                        esi_1 = &esi_1[2];

                        if (ebx_1)
                            continue;

                        eax_3 = 0;
                        break;
                    }
                }

                eax_3 = eax_1 - eax_1 + 1;
                break;
            }

            if (!eax_3)
            {
                int32_t eax_4 = ebp * 9;
                *(((ebp + (eax_4 << 2)) << 2) + &g_9423c0) = 0;
                return eax_4;
            }
        }

        edi = &edi[0x94];
        ebp += 1;

        if (edi >= &g_9435b0)
            break;
    }

    return eax_3;
}
