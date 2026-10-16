#include "00496E60-Display_SyncVSync_12.h"
/* 0x00496e60 Display_SyncVSync_12 full linked: callers=4 callees=5 */
char sub_496e60(int32_t a1, int32_t* a2)

{
    char eax_11 = g_6840e9;

    if (eax_11)
    {
        int16_t eax_1 = *(*(a1 + 0xc) + 0x14);

        if (eax_1 == 2 || !eax_1)
        {
            char eax_2 = sub_4972b0(a1);

            if (!eax_2)
            {
                *a2 = 0;
                return eax_2;
            }
        }

        long double x87_r7_2 = *(a2 + 0x10) * 4096.0;
        char eax_3 = *(a1 + 8);
        float var_20;
        memcpy(&var_20, a2, 0x20);
        double var_10_1 = x87_r7_2;
        double var_8_1 = *(a2 + 0x18) * 4096.0;
        float var_18;

        if (eax_3 & 2 && !(eax_3 & 4))
        {
            double var_50 = *(a2 + 0x20) - g_5ca138;
            double var_48_1 = *(a2 + 0x28) - g_5ca140;
            double var_40 = *(a2 + 0x30) - g_5ca148;
            long double st0_1 = sub_4b3130(&var_50);
            long double temp0_1 = var_8_1;
            st0_1 - temp0_1;

            if (!(*(&((st0_1 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp0_1) ? 1 : 0) << 0xa
                    | (st0_1 == temp0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                var_20 = 0f;
            else
            {
                long double temp2_1 = var_10_1;
                st0_1 - temp2_1;

                if (!(*(&((st0_1 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp2_1) ? 1 : 0) << 0xa
                    | (st0_1 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double x87_r6_5 =
                        (1.0 - (st0_1 - var_10_1) / (var_8_1 - var_10_1)) * var_20;
                    var_20 = x87_r6_5;
                    long double temp4_1 = 0f;
                    x87_r6_5 - temp4_1;

                    if (*(&((x87_r6_5 < temp4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r6_5, temp4_1) ? 1 : 0) << 0xa
                            | (x87_r6_5 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                        var_20 = 0f;
                    else
                    {
                        long double x87_r6_6 = var_20;
                        long double temp5_1 = 1f;
                        x87_r6_6 - temp5_1;

                        if (!(*(&((x87_r6_6 < temp5_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r6_6, temp5_1) ? 1 : 0) << 0xa
                                | (x87_r6_6 == temp5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                            var_20 = 1f;
                    }
                }
            }

            long double temp3_1 = 0.0;
            st0_1 - temp3_1;

            if (*(&((st0_1 < temp3_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp3_1) ? 1 : 0) << 0xa
                    | (st0_1 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
                var_18 = 0f;
            else
            {
                double var_38 =
                    g_5ca178 * var_40 + g_5ca16c * var_48_1 + g_5ca160 * var_50;
                double var_30_1 =
                    g_5ca17c * var_40 + g_5ca170 * var_48_1 + g_5ca164 * var_50;
                double var_28_1 =
                    g_5ca180 * var_40 + g_5ca174 * var_48_1 + g_5ca168 * var_50;
                memcpy(&var_50, &var_38, 0x18);
                var_18 = st0_1 / (var_8_1 + var_10_1) * var_38 / st0_1;
                long double x87_r7_13 = var_18;
                long double temp9_1 = -1f;
                x87_r7_13 - temp9_1;

                if (!(*(&((x87_r7_13 < temp9_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_13, temp9_1) ? 1 : 0) << 0xa
                    | (x87_r7_13 == temp9_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_14 = var_18;
                    long double temp10_1 = 1f;
                    x87_r7_14 - temp10_1;

                    if (!(*(&((x87_r7_14 < temp10_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_14, temp10_1) ? 1 : 0) << 0xa
                            | (x87_r7_14 == temp10_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        var_18 = 1f;
                }
                else
                    var_18 = -1f;
            }
        }

        int32_t ecx_2;

        if (!(*(a1 + 8) & 0x20))
            ecx_2 = g_54390c * var_20 * 10000f;
        else
            ecx_2 = g_543908 * g_543904 * var_20 * 10000f;

        int32_t* eax_6 = *(a1 + 0x10);
        (*(*eax_6 + 0x3c))(eax_6, (&g_67a4a0)[ecx_2]);
        long double x87_r7_23 = var_18;
        long double temp1_1 = 0f;
        x87_r7_23 - temp1_1;
        int32_t ecx_4;
        int32_t edx_2;

        if (!(*(&((x87_r7_23 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_23, temp1_1) ? 1 : 0) << 0xa
            | (x87_r7_23 == temp1_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            edx_2 = 1;
            ecx_4 = (1f - var_18) * 10000f;
        }
        else
        {
            edx_2 = 0xffffffff;
            ecx_4 = (var_18 + 1f) * 10000f;
        }

        if (!(*(a1 + 8) & 4))
        {
            int32_t edi_1 = g_543914;
            int32_t edi_2 = -(edi_1);
            int32_t* eax_9 = *(a1 + 0x10);
            (*(*eax_9 + 0x40))(eax_9,
                (&g_67a4a0)[ecx_4] * (((edi_2 - edi_2) & 0xfffffffe) + 1) * edx_2);
        }

        float var_1c;
        long double x87_r7_30 = var_1c;
        long double temp6_1 = 0.5f;
        x87_r7_30 - temp6_1;

        if (!(*(&((x87_r7_30 < temp6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_30, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_30 == temp6_1 ? 1 : 0) << 0xe) + 1) & 1))
        {
            long double x87_r7_31 = var_1c;
            long double temp8_1 = 2f;
            x87_r7_31 - temp8_1;

            if (!(*(&((x87_r7_31 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_31, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_31 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                var_1c = 2f;
        }
        else
            var_1c = 0.5f;

        int32_t* eax_10 = *(a1 + 0x10);
        (*(*eax_10 + 0x44))(eax_10, *(*(a1 + 0xc) + 0x1c) * var_1c);
        eax_11 = *(a1 + 8);

        if (eax_11 & 1)
        {
            int32_t ecx_10;

            if (!(eax_11 & 0x20))
                ecx_10 = g_54390c * var_20 * 10000f;
            else
                ecx_10 = g_543908 * g_543904 * var_20 * 10000f;

            int32_t* eax_12 = *(a1 + 0x10);
            (*(*eax_12 + 0x3c))(eax_12, (&g_67a4a0)[ecx_10]);
            long double x87_r7_41 = var_18;
            long double temp11_1 = 0f;
            x87_r7_41 - temp11_1;
            int32_t ecx_12;
            int32_t edx_5;

            if (!(*(&((x87_r7_41 < temp11_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_41, temp11_1) ? 1 : 0) << 0xa
                | (x87_r7_41 == temp11_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                edx_5 = 1;
                ecx_12 = (1f - var_18) * 10000f;
            }
            else
            {
                edx_5 = 0xffffffff;
                ecx_12 = (var_18 + 1f) * 10000f;
            }

            if (!(*(a1 + 8) & 4))
            {
                int32_t edi_6 = g_543914;
                int32_t edi_7 = -(edi_6);
                int32_t* eax_15 = *(a1 + 0x10);
                (*(*eax_15 + 0x40))(eax_15,
                    (&g_67a4a0)[ecx_12] * (((edi_7 - edi_7) & 0xfffffffe) + 1) * edx_5);
            }

            long double x87_r7_48 = var_1c;
            long double temp12_1 = 0.5f;
            x87_r7_48 - temp12_1;

            if (!(*(&((x87_r7_48 < temp12_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_48, temp12_1) ? 1 : 0) << 0xa
                | (x87_r7_48 == temp12_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double x87_r7_49 = var_1c;
                long double temp14_1 = 2f;
                x87_r7_49 - temp14_1;

                if (!(*(&((x87_r7_49 < temp14_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_49, temp14_1) ? 1 : 0) << 0xa
                        | (x87_r7_49 == temp14_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    var_1c = 2f;
            }
            else
                var_1c = 0.5f;

            int32_t* eax_16 = *(a1 + 0x10);
            eax_11 = (*(*eax_16 + 0x44))(eax_16, *(*(a1 + 0xc) + 0x1c) * var_1c);
        }

        memcpy(a2, &var_20, 0x20);
    }

    return eax_11;
}
