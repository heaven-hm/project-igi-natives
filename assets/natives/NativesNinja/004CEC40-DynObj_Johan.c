#include "004CEC40-DynObj_Johan.h"
/* 0x004cec40 DynObj_Johan full linked: callers=2 callees=5 */
void* sub_4cec40(char* a1)

{
    int32_t ebx;
    int32_t var_4 = ebx;
    sub_4a5bb0(a1, "johan");
    int32_t ebp = g_a4edec;
    int32_t edi = 0;

    if (ebp > 0)
    {
        char* edx_1 = &g_a443b4;

        while (true)
        {
            char* eax = a1;
            char* esi_1 = edx_1;
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
                int32_t eax_4 = edi * 0x48;

                if (*(eax_4 + &g_a443dc))
                    return eax_4 + &g_a443a0;

                goto label_4ced39;
            }

            edi += 1;
            edx_1 = &edx_1[0x48];

            if (edi >= ebp)
                break;
        }
    }

    if (ebp < 0x258)
    {
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
        edi_4 = memcpy(ebp * 0x48 + &g_a443b4, edi_1 - ecx_3, ecx_3 & 0xfffffffc);
        memcpy(edi_4, esi_3, ecx_3 & 3);
        sub_4ced50(g_a4edec * 0x48 + &g_a443a0);
        int32_t eax_8 = g_a4edec;

        if (*(eax_8 * 0x48 + &g_a443dc))
        {
            g_a4edec = eax_8 + 1;
            return ebp * 0x48 + &g_a443a0;
        }

    label_4ced39:
        return 0;
    }

    int32_t var_14_1 = 0x258;
    Error_Show("MTP_nLODVirModel >= %d");

    while (true)
        /* nop */
}
