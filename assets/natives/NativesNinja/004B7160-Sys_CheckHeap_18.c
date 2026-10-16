#include "004B7160-Sys_CheckHeap_18.h"
/* 0x004b7160 Sys_CheckHeap_18 full linked: callers=1 callees=3 */
int32_t sub_4b7160()

{
    int32_t ebp;
    int32_t var_4 = ebp;
    sub_4a54a0(0x1014);
    int32_t i_6;
    int32_t i_4 = i_6;
    void* __return_addr_1;
    __return_addr = __return_addr_1;
    int32_t edi;
    var_4 = edi;
    int32_t var_1018[0x100];
    __builtin_memset(&var_1018, 0, 0x1000);
    int32_t* entry_ebx;

    if (i_4 > 0)
    {
        int32_t i_3 = i_4;
        int32_t* edx_1 = &entry_ebx[2];
        int32_t i;

        do
        {
            int32_t eax_2 = *edx_1;
            int24_t var_8_1 = eax_2;

            if (!(eax_2 & 0x80000000))
            {
                eax_2 ^= 0x7fffffff;
                var_8_1 = eax_2;
            }

            *edx_1 = eax_2;
            uint32_t ecx_2 = eax_2;
            edx_1 = &edx_1[3];
            (&var_4)[ecx_2 - 0x405] = var_1018[ecx_2] + 1;
            int32_t ecx_4 = 0;
            ecx_4 = *(&eax_2 + 1);
            int32_t var_c18[0x100];
            (&var_4)[ecx_4 - 0x305] = var_c18[ecx_4] + 1;
            int32_t ecx_6 = 0;
            ecx_6 = *(&var_8_1 + 2);
            int32_t var_818[0x200];
            (&var_4)[ecx_6 - 0x205] = var_818[ecx_6] + 1;
            i = i_3;
            i_3 -= 1;
            (&var_4)[(eax_2 >> 0x18) - 0x105] += 1;
        } while (i != 1);
    }

    int32_t (* edx_2)[0x100] = &var_1018;
    int32_t i_2 = 4;
    int32_t i_1;

    do
    {
        int32_t ecx_8 = 0;
        int32_t j_1 = 0x100;
        int32_t j;

        do
        {
            int32_t eax_6 = ecx_8 + *edx_2;
            *edx_2 = ecx_8;
            edx_2 = &(*edx_2)[1];
            j = j_1;
            j_1 -= 1;
            ecx_8 = eax_6;
        } while (j != 1);
        i_1 = i_2;
        i_2 -= 1;
    } while (i_1 != 1);
    int32_t eax_9 = i_4 * 0xc + 3;
    eax_9 &= 0xfc;
    sub_4a54a0(eax_9);
    int32_t* esi_8 = entry_ebx;
    int32_t* edi_1 = &i_6;
    int32_t* var_18 = &i_6;
    int32_t* var_c = esi_8;
    int32_t* var_10 = &i_6;
    int32_t (* edx_3)[0x100] = &var_1018;
    int32_t* arg_4 = nullptr;
    int32_t result_1 = 4;
    int32_t result;
    bool cond:4_1;

    do
    {
        if (i_4 > 0)
        {
            int32_t i_5 = i_4;

            while (true)
            {
                uint32_t eax_12 = esi_8[2] >> (arg_4 & 0x1f);
                int32_t* ecx_12 = &edi_1[(*edx_3)[eax_12] * 3];
                int32_t* edi_2 = esi_8;
                esi_8 = &esi_8[3];
                *ecx_12 = *edi_2;
                ecx_12[1] = edi_2[1];
                ecx_12[2] = edi_2[2];
                (*edx_3)[eax_12] += 1;
                bool cond:5_1 = i_5 != 1;
                i_5 -= 1;

                if (!cond:5_1)
                    break;

                edi_1 = var_18;
            }

            i_4 = i_6;
            esi_8 = var_c;
        }

        edi_1 = esi_8;
        esi_8 = var_10;
        edx_3 = &edx_3[1];
        result = result_1 - 1;
        cond:4_1 = result_1 != 1;
        var_18 = edi_1;
        var_c = esi_8;
        var_10 = edi_1;
        arg_4 = &arg_4[2];
        result_1 = result;
    } while (cond:4_1);
    return result;
}
