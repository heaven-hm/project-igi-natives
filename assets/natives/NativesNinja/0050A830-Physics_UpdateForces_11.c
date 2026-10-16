#include "0050A830-Physics_UpdateForces_11.h"
/* 0x0050a830 Physics_UpdateForces_11 full linked: callers=0 callees=0 */
int32_t* sub_50a830(int32_t* a1)

{
    int32_t eax = g_bcac90;
    int32_t var_c = eax;

    if (eax >= 0x100)
        var_c = 0x100;

    int32_t esi = *a1;
    int32_t edi = a1[1];

    if ((~(esi - 1) & esi) != esi)
    {
        int32_t eflags_1;
        char eax_5;
        eax_5 = __bsr_gprv_memv(esi);
        esi = 1 << ((eax_5 + 1) & 0x1f);
    }

    if ((~(edi - 1) & edi) != edi)
    {
        int32_t eflags_2;
        char eax_6;
        eax_6 = __bsr_gprv_memv(edi);
        edi = 1 << ((eax_6 + 1) & 0x1f);
    }

    int32_t eax_8 = g_bcac7c;

    if (eax_8 <= 1)
        eax_8 = 1;

    int32_t ecx_4 = g_bcac80;
    int32_t edx_3 = g_bcac84;

    if (ecx_4 <= 1)
        ecx_4 = 1;

    int32_t ebx = g_bcac88;

    if (esi < eax_8)
        esi = eax_8;
    else if (esi > edx_3)
        esi = edx_3;

    if (edi < ecx_4)
        edi = ecx_4;
    else if (edi > ebx)
        edi = ebx;

    if (esi <= edi)
    {
        uint32_t temp0_2 = COMBINE(0, edi) / esi;

        if (temp0_2 > var_c && var_c)
            esi = COMBINE(0, temp0_2 * esi) / var_c;
    }
    else
    {
        uint32_t temp0 = COMBINE(0, esi) / edi;

        if (temp0 > var_c && var_c)
        {
            a1[3] = COMBINE(0, temp0 * edi) / var_c;
            a1[2] = esi;
            return a1;
        }
    }

    a1[3] = edi;
    a1[2] = esi;
    return a1;
}
