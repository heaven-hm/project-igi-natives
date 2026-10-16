#include "004BB180-Sys_DispatchOpcode_26.h"
/* 0x004bb180 Sys_DispatchOpcode_26 full linked: callers=1 callees=4 */
int32_t sub_4bb180(int32_t* a1, char* a2)

{
    int32_t* eax = &a1[0xb];
    int32_t* edi = *eax;
    int32_t result = 0;
    int32_t* ebp = *edi;

    if (!ebp)
    {
    label_4bb1e4:
        int32_t* eax_4 = Mem_Alloc(0x88, 4);
        eax_4[1] = 0;
        *eax_4 = 0;
        sub_4af8f0(eax, eax_4);
        char* edi_1 = a2;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 = &edi_1[1];
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_2 = ~i;
        int32_t esi_4;
        int32_t edi_4;
        edi_4 = memcpy(&eax_4[2], edi_1 - ecx_2, ecx_2 & 0xfffffffc);
        memcpy(edi_4, esi_4, ecx_2 & 3);
    }
    else
    {
        while (true)
        {
            char* esi_1 = a2;
            char* eax_1 = &edi[2];
            int32_t eax_3;

            while (true)
            {
                char edx_1 = *eax_1;
                char temp0_1 = *esi_1;
                bool c_1 = edx_1 < temp0_1;

                if (edx_1 == temp0_1)
                {
                    if (!edx_1)
                    {
                        eax_3 = 0;
                        break;
                    }

                    edx_1 = eax_1[1];
                    char temp3_1 = esi_1[1];
                    c_1 = edx_1 < temp3_1;

                    if (edx_1 == temp3_1)
                    {
                        eax_1 = &eax_1[2];
                        esi_1 = &esi_1[2];

                        if (edx_1)
                            continue;

                        eax_3 = 0;
                        break;
                    }
                }

                eax_3 = eax_1 - eax_1 + 1;
                break;
            }

            if (!eax_3)
                break;

            edi = ebp;
            ebp = *ebp;
            result += 1;

            if (!ebp)
                goto label_4bb1e4;
        }

        if (!edi)
            goto label_4bb1e4;
    }

    return result;
}
