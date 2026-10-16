#include "004BB030-Sys_CloseFileStream_26.h"
/* 0x004bb030 Sys_CloseFileStream_26 full linked: callers=1 callees=5 */
int32_t sub_4bb030(void* a1, void* a2)

{
    int32_t result = 0;
    void var_800;
    sub_4bb110(&var_800, a2);
    int32_t* ebp = *(a1 + 0x38);
    int32_t* edi = *ebp;

    if (!edi)
    {
    label_4bb0b3:
        int32_t* eax_5 = Mem_Alloc(0x808, 4);
        eax_5[1] = 0;
        *eax_5 = 0;
        sub_4af8f0(a1 + 0x38, eax_5);
        void* edi_1 = &var_800;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool cond:0_1 = 0 != *edi_1;
            edi_1 += 1;
            i -= 1;

            if (!cond:0_1)
                break;
        }

        int32_t ecx_2 = ~i;
        int32_t esi_4;
        int32_t edi_4;
        edi_4 = memcpy(&eax_5[2], edi_1 - ecx_2, ecx_2 & 0xfffffffc);
        memcpy(edi_4, esi_4, ecx_2 & 3);
    }
    else
    {
        while (true)
        {
            char* esi_1 = &var_800;
            char* eax_2 = &ebp[2];
            int32_t eax_4;

            while (true)
            {
                char edx_1 = *eax_2;
                char temp0_1 = *esi_1;
                bool c_1 = edx_1 < temp0_1;

                if (edx_1 == temp0_1)
                {
                    if (!edx_1)
                    {
                        eax_4 = 0;
                        break;
                    }

                    edx_1 = eax_2[1];
                    char temp3_1 = esi_1[1];
                    c_1 = edx_1 < temp3_1;

                    if (edx_1 == temp3_1)
                    {
                        eax_2 = &eax_2[2];
                        esi_1 = &esi_1[2];

                        if (edx_1)
                            continue;

                        eax_4 = 0;
                        break;
                    }
                }

                eax_4 = eax_2 - eax_2 + 1;
                break;
            }

            if (!eax_4)
                break;

            ebp = edi;
            edi = *edi;
            result += 1;

            if (!edi)
                goto label_4bb0b3;
        }

        if (!ebp)
            goto label_4bb0b3;
    }

    return result;
}
