#include "004B5F80-Sys_Resource.h"
/* 0x004b5f80 Sys_Resource full linked: callers=1 callees=12 */
int32_t* sub_4b5f80(char* a1, int32_t* a2, void* a3)

{
    void var_8;
    sub_4b1820(&var_8, a1);

    if (sub_4b7580(a2) == 0x46464c49 && sub_4b7570(a2) == 0x53455249)
    {
        int32_t* eax_2 = sub_4b59f0(a1, 0, a2, 0, 0, &var_8);
        sub_4b60f0(a1, eax_2, a2, &var_8);
        eax_2[0xb] = 1;
        return a2;
    }

    if (a3 < 8)
        sub_4b59f0(a1, 0, a2, a3, 2, &var_8)[0xb] = 1;
    else if (sub_4aad10(a2, "RESOURCE", 8))
        sub_4b59f0(a1, 0, a2, a3, 2, &var_8)[0xb] = 1;
    else
    {
        int32_t* eax_5 = sub_4b59f0(a1, 0, a2, 0, 0, &var_8);
        eax_5[0xb] = 1;
        char* ecx_1 = a2[2];
        void* ebx_2 = &a2[8];

        if (ecx_1 > 0)
        {
            a1 = ecx_1;
            bool cond:0_1;

            do
            {
                void* eax_7 = *(ebx_2 + 8);
                int32_t edx_1 = *(ebx_2 + 4);
                int32_t esi_2;
                int32_t edi_1;
                edi_1 = memcpy(0x943c20, ebx_2 + 0xc, eax_7 & 0xfffffffc);
                void* eax_8 = eax_7 + 0x2b;
                memcpy(edi_1, esi_2, eax_7 & 3);
                *(eax_8 + 0x943bf5) = 0;
                eax_8 &= 0xe0;
                int32_t* ebx_3 = ebx_2 + eax_8;
                ebx_2 = ebx_3 + ((edx_1 + 0x1f) & 0xffffffe0);
                sub_4af8f0(&eax_5[5], &sub_4b59f0(0x943c20, 0, ebx_3, edx_1, 1, &var_8)[2]);
                cond:0_1 = a1 != 1;
                a1 -= 1;
            } while (cond:0_1);
        }
    }

    return a2;
}
