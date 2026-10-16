#include "0050AA70-Physics_CalculateSplineLength_12.h"
/* 0x0050aa70 Physics_CalculateSplineLength_12 full linked: callers=2 callees=3 */
int32_t* sub_50aa70(int32_t a1, int32_t a2 @ 0xc, float a3)

{
    long double x87_r7 = a3;
    long double temp0 = 0.200000003f;
    x87_r7 - temp0;
    void* esi = nullptr;
    int32_t* eax;
    eax = (x87_r7 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7, temp0) ? 1 : 0) << 0xa
        | (x87_r7 == temp0 ? 1 : 0) << 0xe;

    if (*(&eax + 1) & 0x41 || a2 & 0x20000000)
    {
        long double x87_r7_1 = a3;
        long double temp1_1 = 0f;
        x87_r7_1 - temp1_1;
        eax = (x87_r7_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe;

        if (*(&eax + 1) & 0x41 || a2 & 0x20000000)
        {
            int32_t i_8 = g_a7cebc;
            int32_t edx_2 = 0xffffffff;

            if (i_8 > 0)
            {
                eax = &g_a7c180;
                int32_t i_5 = i_8;
                int32_t i;

                do
                {
                    int32_t ecx_3 = *eax;

                    if (ecx_3 > edx_2)
                    {
                        edx_2 = ecx_3;
                        esi = &eax[-0x10];
                    }

                    eax = &eax[0x11];
                    i = i_5;
                    i_5 -= 1;
                } while (i != 1);
            }
        }
        else
        {
            int32_t i_7 = g_a7cebc;
            int32_t edx_1 = 0xffffffff;

            if (i_7 > 0)
            {
                int32_t* eax_2 = &g_a7c180;
                int32_t i_4 = i_7;
                int32_t i_1;

                do
                {
                    int32_t ecx_2 = *eax_2;

                    if (ecx_2 > edx_1 && eax_2[-4])
                    {
                        edx_1 = ecx_2;
                        esi = &eax_2[-0x10];
                    }

                    eax_2 = &eax_2[0x11];
                    i_1 = i_4;
                    i_4 -= 1;
                } while (i_1 != 1);
                memcpy(a1, esi, 0x20);
                return eax_2;
            }
        }
    }
    else
    {
        int32_t i_6 = g_a7cebc;
        int32_t edx = 0xffffffff;

        if (i_6 > 0)
        {
            int32_t* eax_1 = &g_a7c170;
            int32_t i_3 = i_6;
            int32_t i_2;

            do
            {
                int32_t ecx_1 = *eax_1;

                if (ecx_1 > edx)
                {
                    edx = ecx_1;
                    esi = &eax_1[-0xc];
                }

                eax_1 = &eax_1[0x11];
                i_2 = i_3;
                i_3 -= 1;
            } while (i_2 != 1);
            memcpy(a1, esi, 0x20);
            return eax_1;
        }
    }

    memcpy(a1, esi, 0x20);
    return eax;
}
