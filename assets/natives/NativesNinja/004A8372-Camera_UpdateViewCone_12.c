#include "004A8372-Camera_UpdateViewCone_12.h"
/* 0x004a8372 Camera_UpdateViewCone_12 full linked: callers=2 callees=6 */
int32_t sub_4a8372(int32_t a1, double* a2, char a3)

{
    int32_t edi_1 = a1 & 0x1f;
    long double st0;
    int80_t x87_r0;

    if (a1 & 8 && a3 & 1)
    {
        sub_4a881f(x87_r0, 1);
        edi_1 &= 0xfffffff7;
    }
    else if (a1 & 4 && a3 & 4)
    {
        sub_4a881f(x87_r0, 4);
        edi_1 &= 0xfffffffb;
    }
    else if (1 & a1 && a3 & 8)
    {
        sub_4a881f(x87_r0, 8);
        int32_t ecx_4 = a3 & 0xc00;

        if (!ecx_4)
        {
            long double x87_r0_10 = *a2;
            long double temp0_1 = 0.0;
            x87_r0_10 - temp0_1;
            long double x87_r0_11 = g_544368;
            int16_t eax_5 = (x87_r0_10 < temp0_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_10, temp0_1) ? 1 : 0) << 0xa
                | (x87_r0_10 == temp0_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&eax_5 + 1), 6) || TEST_BITB(*(&eax_5 + 1), 0))
                x87_r0_11 = -(x87_r0_11);

            *a2 = x87_r0_11;
        }
        else if (ecx_4 == 0x400)
        {
            long double x87_r0_7 = *a2;
            long double temp2_1 = 0.0;
            x87_r0_7 - temp2_1;
            int16_t eax_4 = (x87_r0_7 < temp2_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_7, temp2_1) ? 1 : 0) << 0xa
                | (x87_r0_7 == temp2_1 ? 1 : 0) << 0xe | 0x800;
            long double x87_r0_8;

            if (TEST_BITB(*(&eax_4 + 1), 6) || TEST_BITB(*(&eax_4 + 1), 0))
                x87_r0_8 = -(g_544368);
            else
                x87_r0_8 = g_544378;

            *a2 = x87_r0_8;
        }
        else if (ecx_4 == 0x800)
        {
            long double x87_r0_4 = *a2;
            long double temp3_1 = 0.0;
            x87_r0_4 - temp3_1;
            int16_t eax_3 = (x87_r0_4 < temp3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_4, temp3_1) ? 1 : 0) << 0xa
                | (x87_r0_4 == temp3_1 ? 1 : 0) << 0xe | 0x800;
            long double x87_r0_5;

            if (TEST_BITB(*(&eax_3 + 1), 6) || TEST_BITB(*(&eax_3 + 1), 0))
                x87_r0_5 = -(g_544378);
            else
                x87_r0_5 = g_544368;

            *a2 = x87_r0_5;
        }
        else if (ecx_4 == 0xc00)
        {
            long double x87_r0_1 = *a2;
            long double temp5_1 = 0.0;
            x87_r0_1 - temp5_1;
            long double x87_r0_2 = g_544378;
            int16_t eax_2 = (x87_r0_1 < temp5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r0_1, temp5_1) ? 1 : 0) << 0xa
                | (x87_r0_1 == temp5_1 ? 1 : 0) << 0xe;

            if (TEST_BITB(*(&eax_2 + 1), 6) || TEST_BITB(*(&eax_2 + 1), 0))
                x87_r0_2 = -(x87_r0_2);

            *a2 = x87_r0_2;
        }

        edi_1 &= 0xfffffffe;
    }
    else if (a1 & 2 && a3 & 0x10)
    {
        int32_t esi_1 = 0;

        if (a1 & 0x10)
            esi_1 = 1;

        double var_10_5 = *a2;
        long double x87_r7_2 = var_10_5;
        long double temp1_1 = 0.0;
        x87_r7_2 - temp1_1;

        if (TEST_BITB(
                *(&((x87_r7_2 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, temp1_1) ? 1 : 0) << 0xa
                    | (x87_r7_2 == temp1_1 ? 1 : 0) << 0xe) + 1),
                6))
            esi_1 = 1;
        else
        {
            int32_t ecx;
            int32_t var_24_1 = ecx;
            int32_t var_28_1 = ecx;
            var_28_1 = var_10_5;
            int32_t var_8;
            st0 = sub_4a871e(var_28_1, &var_8);
            int32_t eax_8 = var_8;
            double var_10_6 = st0;
            int32_t ecx_6 = eax_8 - 0x600;

            if (ecx_6 >= 0xfffffbce)
            {
                long double x87_r7_6 = var_10_6;
                long double temp4_1 = 0.0;
                x87_r7_6 - temp4_1;
                eax_8 = (x87_r7_6 < temp4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_6, temp4_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == temp4_1 ? 1 : 0) << 0xe;
                int32_t edx_1;

                edx_1 = !TEST_BITB(*(&eax_8 + 1), 0) ? 0 : 1;

                eax_8 = *(&var_10_6 + 6);
                int16_t eax_9 = eax_8 & 0xf;
                eax_9 |= 0x10;
                *(&var_10_6 + 6) = eax_9;

                if (ecx_6 < 0xfffffc03)
                {
                    int32_t i_1 = 0xfffffc03 - ecx_6;
                    int32_t i;

                    do
                    {
                        if (var_10_6 & 1 && !esi_1)
                            esi_1 = 1;

                        var_10_6 u>>= 1;

                        if (*(&var_10_6 + 4) & 1)
                            *(&var_10_6 + 3) |= 0x80;

                        *(&var_10_6 + 4) u>>= 1;
                        i = i_1;
                        i_1 -= 1;
                    } while (i != 1);
                }

                if (edx_1)
                    var_10_6 = -(var_10_6);
            }
            else
            {
                esi_1 = 1;
                var_10_6 = 0;
            }

            *a2 = var_10_6;
        }

        if (esi_1)
            sub_4a881f(x87_r0, 0x10);

        edi_1 &= 0xfffffffd;
    }

    if (a1 & 0x10 && a3 & 0x20)
    {
🚫🚫        sub_4a881f(st0, 0x20);
        edi_1 &= 0xffffffef;
    }

    int32_t result = 0;
    result = !edi_1;
    return result;
}
