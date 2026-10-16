#include "00411000-HumanPlayer_UpdateHealth_9.h"
/* 0x00411000 HumanPlayer_UpdateHealth_9 full linked: callers=1 callees=1 */
int32_t* HumanPlayer_UpdateHealth_9(int32_t a1)

{
    int32_t ecx;
    int32_t var_4 = ecx;
    int32_t esi = a1;
    int32_t ebx = 0xffffffff;
    long double x87_r7 = *(esi + 0x20c);
    long double temp0 = 0f;
    x87_r7 - temp0;
    int32_t* eax;
    eax = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        long double x87_r7_1 = *(esi + 0x16c);
        long double temp2_1 = 0f;
        x87_r7_1 - temp2_1;
        eax = (x87_r7_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp2_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x40)
            ebx = 0;
    }

    long double x87_r7_2 = *(esi + 0x210);
    long double temp1 = 0f;
    x87_r7_2 - temp1;
    eax = (x87_r7_2 < temp1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1) ? 1 : 0) << 0xa
        | (x87_r7_2 == temp1 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        long double x87_r7_3 = *(esi + 0x170);
        long double temp4_1 = 0f;
        x87_r7_3 - temp4_1;
        eax = (x87_r7_3 < temp4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, temp4_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == temp4_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x40)
            ebx = 1;
    }

    long double x87_r7_4 = *(esi + 0x214);
    long double temp3 = 0f;
    x87_r7_4 - temp3;
    eax = (x87_r7_4 < temp3 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, temp3) ? 1 : 0) << 0xa
        | (x87_r7_4 == temp3 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        long double x87_r7_5 = *(esi + 0x174);
        long double temp6_1 = 0f;
        x87_r7_5 - temp6_1;
        eax = (x87_r7_5 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == temp6_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x40)
            ebx = 2;
    }

    long double x87_r7_6 = *(esi + 0x218);
    long double temp5 = 0f;
    x87_r7_6 - temp5;
    eax = (x87_r7_6 < temp5 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, temp5) ? 1 : 0) << 0xa
        | (x87_r7_6 == temp5 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        long double x87_r7_7 = *(esi + 0x178);
        long double temp8_1 = 0f;
        x87_r7_7 - temp8_1;
        eax = (x87_r7_7 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, temp8_1) ? 1 : 0) << 0xa
            | (x87_r7_7 == temp8_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x40)
            ebx = 3;
    }

    long double x87_r7_8 = *(esi + 0x21c);
    long double temp7 = 0f;
    x87_r7_8 - temp7;
    eax = (x87_r7_8 < temp7 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp7) ? 1 : 0) << 0xa
        | (x87_r7_8 == temp7 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        long double x87_r7_9 = *(esi + 0x17c);
        long double temp10_1 = 0f;
        x87_r7_9 - temp10_1;
        eax = (x87_r7_9 < temp10_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp10_1) ? 1 : 0) << 0xa
            | (x87_r7_9 == temp10_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x40)
            ebx = 4;
    }

    long double x87_r7_10 = *(esi + 0x220);
    long double temp9 = 0f;
    x87_r7_10 - temp9;
    eax = (x87_r7_10 < temp9 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, temp9) ? 1 : 0) << 0xa
        | (x87_r7_10 == temp9 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        long double x87_r7_11 = *(esi + 0x180);
        long double temp12_1 = 0f;
        x87_r7_11 - temp12_1;
        eax = (x87_r7_11 < temp12_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_11, temp12_1) ? 1 : 0) << 0xa
            | (x87_r7_11 == temp12_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x40)
            ebx = 5;
    }

    long double x87_r7_12 = *(esi + 0x224);
    long double temp11 = 0f;
    x87_r7_12 - temp11;
    eax = (x87_r7_12 < temp11 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_12, temp11) ? 1 : 0) << 0xa
        | (x87_r7_12 == temp11 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        long double x87_r7_13 = *(esi + 0x184);
        long double temp14_1 = 0f;
        x87_r7_13 - temp14_1;
        eax = (x87_r7_13 < temp14_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_13, temp14_1) ? 1 : 0) << 0xa
            | (x87_r7_13 == temp14_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x40)
            ebx = 6;
    }

    long double x87_r7_14 = *(esi + 0x228);
    long double temp13 = 0f;
    x87_r7_14 - temp13;
    eax = (x87_r7_14 < temp13 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, temp13) ? 1 : 0) << 0xa
        | (x87_r7_14 == temp13 ? 1 : 0) << 0xe;

    if (!(*(&eax + 1) & 0x40))
    {
        long double x87_r7_15 = *(esi + 0x188);
        long double temp16_1 = 0f;
        x87_r7_15 - temp16_1;
        eax = (x87_r7_15 < temp16_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_15, temp16_1) ? 1 : 0) << 0xa
            | (x87_r7_15 == temp16_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x40)
            ebx = 7;
    }

    long double x87_r7_16 = *(esi + 0x22c);
    long double temp15 = 0f;
    x87_r7_16 - temp15;
    eax = (x87_r7_16 < temp15 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_16, temp15) ? 1 : 0) << 0xa
        | (x87_r7_16 == temp15 ? 1 : 0) << 0xe;

    if (*(&eax + 1) & 0x40)
    {
    label_41118c:

        if (ebx != 0xffffffff)
            goto label_41119b;
    }
    else
    {
        long double x87_r7_17 = *(esi + 0x18c);
        long double temp17_1 = 0f;
        x87_r7_17 - temp17_1;
        eax = (x87_r7_17 < temp17_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_17, temp17_1) ? 1 : 0) << 0xa
            | (x87_r7_17 == temp17_1 ? 1 : 0) << 0xe;

        if (!(*(&eax + 1) & 0x40))
            goto label_41118c;

        ebx = 8;
    label_41119b:

        if (ebx != *(esi + 0xd50))
            *(esi + 0xd54) = 0;

        int32_t edi_1 = ebx * 9;
        a1 = 0;
        eax = *((edi_1 << 2) + &g_56e0a0);

        if (eax > 0)
        {
            while (true)
            {
                int32_t eax_1 = *(esi + 0xd54);
                int32_t ecx_2 = *(((eax_1 + ebx * 9) << 2) + &g_56e0a4);
                *(esi + 0xd54) = eax_1 + 1;

                if (eax_1 + 1 >= *((edi_1 << 2) + &g_56e0a0))
                    *(esi + 0xd54) = 0;

                eax = HumanPlayer_UpdateMotion_11(esi, edi_1, esi, ecx_2);

                if (eax)
                {
                    *(esi + 0x1e4) = ecx_2;
                    break;
                }

                int32_t eax_4 = a1 + 1;
                a1 = eax_4;

                if (eax_4 >= *((edi_1 << 2) + &g_56e0a0))
                {
                    *(esi + 0xd50) = ebx;
                    return eax_4;
                }
            }
        }

        *(esi + 0xd50) = ebx;
    }

    return eax;
}
