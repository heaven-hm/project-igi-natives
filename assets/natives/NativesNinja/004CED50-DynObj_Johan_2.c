#include "004CED50-DynObj_Johan_2.h"
/* 0x004ced50 DynObj_Johan_2 full linked: callers=2 callees=4 */
int32_t* sub_4ced50(int32_t* a1)

{
    int32_t* ebx = a1;
    void* edi = &ebx[5];
    int32_t i = 0xffffffff;
    ebx[9] = 0;

    while (i)
    {
        bool cond:0_1 = 0 != *edi;
        edi += 1;
        i -= 1;

        if (!cond:0_1)
            break;
    }

    int32_t ecx = ~i;
    void var_20;
    int32_t esi_1;
    int32_t edi_2;
    edi_2 = memcpy(&var_20, edi - ecx, ecx & 0xfffffffc);
    memcpy(edi_2, esi_1, ecx & 3);
    sub_4a5bb0(&var_20, "johan");
    int32_t var_24 = 0;
    int32_t i_1 = 1;
    int16_t* ebp = ebx + 0x3e;
    int32_t eax_5;

    do
    {
        *ebp = 0x64 / (i_1 * i_1);
        int32_t* eax_3 = sub_4cee30(&var_20);
        *ebx = eax_3;

        if (!eax_3)
        {
            a1[0xf] = var_24;
            return a1;
        }

        void* edi_3 = &var_20;
        int32_t j = 0xffffffff;
        ebp = &ebp[1];

        while (j)
        {
            bool cond:1_1 = 0 != *edi_3;
            edi_3 += 1;
            j -= 1;

            if (!cond:1_1)
                break;
        }

        void* edi_4 = &var_20;
        ebx = &ebx[1];
        int16_t edx_3;
        edx_3 = *((&var_24 + 3) + ~j - 1);
        int32_t j_1 = 0xffffffff;
        edx_3 += 1;

        while (j_1)
        {
            bool cond:2_1 = 0 != *edi_4;
            edi_4 += 1;
            j_1 -= 1;

            if (!cond:2_1)
                break;
        }

        eax_5 = var_24 + 1;
        i_1 += 1;
        var_24 = eax_5;
        *((&var_24 + 3) + ~j_1 - 1) = edx_3;
    } while (i_1 < 6);

    a1[0xf] = eax_5;
    return a1;
}
