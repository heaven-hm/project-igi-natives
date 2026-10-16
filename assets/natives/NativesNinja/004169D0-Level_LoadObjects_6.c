#include "004169D0-Level_LoadObjects_6.h"
/* 0x004169d0 Level_LoadObjects_6 full linked: callers=19 callees=2 */
char* Level_LoadObjects_6(char* a1)

{
    int32_t ebx = g_57bab8;
    int32_t ebp = 0;

    if (ebx > 0)
    {
        char* result = &g_57b1a8;

        while (true)
        {
            char* esi_1 = a1;
            char* result_1 = result;
            int32_t ecx_2;

            while (true)
            {
                char eax_1 = *result_1;
                char temp0_1 = *esi_1;
                bool c_1 = eax_1 < temp0_1;

                if (eax_1 == temp0_1)
                {
                    if (!eax_1)
                    {
                        ecx_2 = 0;
                        break;
                    }

                    eax_1 = result_1[1];
                    char temp3_1 = esi_1[1];
                    c_1 = eax_1 < temp3_1;

                    if (eax_1 == temp3_1)
                    {
                        result_1 = &result_1[2];
                        esi_1 = &esi_1[2];

                        if (eax_1)
                            continue;

                        ecx_2 = 0;
                        break;
                    }
                }

                ecx_2 = result_1 - result_1 + 1;
                break;
            }

            if (!ecx_2)
                return result;

            ebp += 1;
            result = &result[0x30];

            if (ebp >= ebx)
                break;
        }
    }

    char* edi_1 = a1;
    int32_t i = 0xffffffff;

    while (i)
    {
        bool cond:0_1 = 0 != *edi_1;
        edi_1 = &edi_1[1];
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx_3 = ~i;
    int32_t esi_3;
    int32_t edi_4;
    edi_4 = memcpy(ebp * 0x30 + &g_57b1a8, edi_1 - ecx_3, ecx_3 & 0xfffffffc);
    memcpy(edi_4, esi_3, ecx_3 & 3);
    g_57bab8 = ebx + 1;
    return ebp * 0x30 + &g_57b1a8;
}
