#include "00478640-Gun_Tick.h"
/* 0x00478640 Gun_Tick full linked: callers=0 callees=1 */
uint32_t sub_478640(int32_t* a1)

{
    void* ebp = a1[0x4a];

    if (a1[0x51] == 0xfffffffe)
        a1[0x51] = *(ebp + 0x648);

    if (a1[0x3f])
        return QTask_FindType(a1);

    int32_t eax_3 = a1[0x4f];

    if (eax_3)
        a1[0x4f] = eax_3 - 1;

    int32_t* i = *(a1[0x3a] + 8);

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* edi_1 = *i;
            void* eax_7;

            if (!edi_1)
                eax_7 = nullptr;
            else
            {
                int32_t eax_4 = *edi_1;
                int32_t eax_5 = -(eax_4);
                eax_7 = (eax_5 - eax_5) & edi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_7;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_8 = 0;
            g_afa7e0 = edx_2;
            eax_8 = i[7];
            eax_3 = *((eax_8 << 2) + &g_a970e0);

            if (eax_3)
            {
                eax_3(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    long double x87_r7 = a1[0x66];
    long double temp0 = 0f;
    x87_r7 - temp0;

    if (!(*(&((x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = a1[0x66];
        long double temp1_1 = 0f;
        x87_r7_6 - temp1_1;

        if (!(*(&((x87_r7_6 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp1_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double x87_r7_11 = a1[0x66] - 60.0 / (60.0 / *(ebp + 0x644) * 30.0);
            a1[0x66] = x87_r7_11;
            long double temp3_1 = 0f;
            x87_r7_11 - temp3_1;

            if (*(&((x87_r7_11 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == temp3_1 ? 1 : 0) << 0xe) + 1) & 1)
                a1[0x66] = 0;
        }
    }
    else
    {
        long double x87_r7_5 = 60.0 / (60.0 / *(ebp + 0x644) * 30.0) + a1[0x66];
        a1[0x66] = x87_r7_5;
        long double temp2_1 = 0f;
        x87_r7_5 - temp2_1;

        if (!(*(&((x87_r7_5 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp2_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == temp2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
            a1[0x66] = 0;
    }

    int32_t eax_10 = a1[0x69];

    if (eax_10)
    {
        int32_t ecx_1 = a1[0x6a];

        if (!ecx_1)
        {
            a1[0x69] = eax_10 + 1;
            int32_t eax_12;
            int32_t edx_3;
            edx_3 = HIGHD(0x55555556 * 60.0 / *(ebp + 0x644) * 30.0);
            eax_12 = LOWD(0x55555556 * 60.0 / *(ebp + 0x644) * 30.0);
            a1[0x6a] = edx_3 + (edx_3 >> 0x1f);
        }
        else
            a1[0x6a] = ecx_1 - 1;
    }

    uint32_t result = a1[0x67];

    if (result)
    {
        int32_t ecx_6 = a1[0x68];

        if (ecx_6)
        {
            a1[0x68] = ecx_6 - 1;
            return result;
        }

        a1[0x67] = result + 1;
        int32_t eax_14;
        int32_t edx_5;
        edx_5 = HIGHD(0x66666667 * 60.0 / *(ebp + 0x644) * 30.0);
        eax_14 = LOWD(0x66666667 * 60.0 / *(ebp + 0x644) * 30.0);
        int32_t edx_6 = edx_5 >> 2;
        result = edx_6 >> 0x1f;
        a1[0x68] = edx_6 + result;
    }

    return result;
}
