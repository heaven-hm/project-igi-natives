#include "0052E2D0-Light_ApplyLightmap_12.h"
/* 0x0052e2d0 Light_ApplyLightmap_12 full linked: callers=1 callees=17 */
int32_t sub_52e2d0(int32_t a1 @ ebp, float a2)

{
    int32_t eax = *(a2 + 0x4ab4);
    int32_t var_e8 = 0;

    if (eax > 0)
    {
        int32_t* esi_1 = a2 + 0x40;
        int32_t* var_ec_1 = esi_1;
        bool cond:0_1;

        do
        {
            int32_t i = 0;

            if (eax > 0)
            {
                do
                {
                    int32_t eax_1 = esi_1[0xa];
                    esi_1[6] = 0;

                    if (!eax_1)
                    {
                        sub_52fe60(a2, esi_1);
                        int32_t var_104_1 = 0;
                        int32_t var_108_1 = 0;
                        int32_t var_10c_1 = 0;
                        void var_8;
                        sub_52e660(a2, esi_1, var_8, a1, __return_addr);
                    }

                    i += 1;
                    esi_1 = &esi_1[0xc];
                } while (i < *(a2 + 0x4ab4));
            }

            eax = *(a2 + 0x4ab4);
            esi_1 = &var_ec_1[0x60];
            cond:0_1 = var_e8 + 1 < eax;
            var_e8 += 1;
            var_ec_1 = esi_1;
        } while (cond:0_1);
    }

    int32_t var_ec_2 = 0;
    double var_c8;

    if (*(a2 + 0x4abc) > 0)
    {
        int32_t* edx_1 = a2 + 0xc48;
        bool cond:6_1;

        do
        {
            long double x87_r7_1 = *(edx_1 - 8);
            int32_t var_d8_1 = *edx_1;
            int32_t var_dc_1 = 0;
            long double x87_r6_1 = edx_1[6];
            int32_t var_d4_1 = edx_1[1];
            double* ecx_4 = &edx_1[0xa];
            double* var_e8_1 = ecx_4;
            int32_t var_e4_1 = 4;
            bool cond:4_1;

            do
            {
                int32_t i_5 = 3;
                int32_t i_1;

                do
                {
                    long double temp1_1 = *ecx_4;
                    x87_r7_1 - temp1_1;

                    if (!(*(&((x87_r7_1 < temp1_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_1, temp1_1) ? 1 : 0) << 0xa
                            | (x87_r7_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
                        x87_r7_1 = *ecx_4;

                    long double x87_r6_3 = ecx_4[1];
                    long double temp3_1 = var_d8_1;
                    x87_r6_3 - temp3_1;

                    if (*(&((x87_r6_3 < temp3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r6_3, temp3_1) ? 1 : 0) << 0xa
                        | (x87_r6_3 == temp3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                    {
                        var_d8_1 = ecx_4[1];
                        int32_t var_d4_2 = *(ecx_4 + 0xc);
                    }

                    ecx_4 = &ecx_4[6];
                    i_1 = i_5;
                    i_5 -= 1;
                } while (i_1 != 1);
                ecx_4 = &var_e8_1[0x18];
                cond:4_1 = var_e4_1 != 1;
                var_e8_1 = ecx_4;
                var_e4_1 -= 1;
            } while (cond:4_1);
            long double temp7_1 = *(edx_1 + 0x58);
            x87_r7_1 - temp7_1;

            if (*(&((x87_r7_1 < temp7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, temp7_1) ? 1 : 0) << 0xa
                | (x87_r7_1 == temp7_1 ? 1 : 0) << 0xe) + 1) & 1)
            {
                long double x87_r7_4 = x87_r6_1 + x87_r6_1 + var_d8_1;
                long double temp8_1 = *(edx_1 + 0x60);
                x87_r7_4 - temp8_1;

                if (!(*(&((x87_r7_4 < temp8_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, temp8_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == temp8_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    memcpy(&var_c8, &edx_1[0x16], 0x30);
                    memcpy(&edx_1[0x16], &edx_1[0x5e], 0x30);
                    memcpy(&edx_1[0x5e], &var_c8, 0x30);
                    void var_68;
                    memcpy(&var_68, &edx_1[0x22], 0x30);
                    memcpy(&edx_1[0x22], &edx_1[0x6a], 0x30);
                    memcpy(&edx_1[0x6a], &var_68, 0x30);
                    void var_98;
                    memcpy(&var_98, &edx_1[0x46], 0x30);
                    memcpy(&edx_1[0x46], &edx_1[0x8e], 0x30);
                    memcpy(&edx_1[0x8e], &var_98, 0x30);
                    void var_38;
                    memcpy(&var_38, &edx_1[0x52], 0x30);
                    memcpy(&edx_1[0x52], &edx_1[0x9a], 0x30);
                    memcpy(&edx_1[0x9a], &var_38, 0x30);
                }
            }

            edx_1 = &edx_1[0xc0];
            cond:6_1 = var_ec_2 + 1 < *(a2 + 0x4abc);
            var_ec_2 += 1;
        } while (cond:6_1);
    }

    int32_t var_ec_3 = 0;

    if (*(a2 + 0x4abc) > 0)
    {
        int32_t* esi_11 = a2 + 0xc60;
        bool cond:3_1;

        do
        {
            int32_t var_e4_2 = 4;
            bool cond:2_1;

            do
            {
                int32_t i_6 = 4;
                int32_t i_2;

                do
                {
                    int32_t eax_17 = *esi_11;
                    int32_t var_dc_2 = 0;
                    long double x87_r7_5 = (eax_17 >> 1);
                    var_c8 = x87_r7_5 + *(esi_11 - 0x20);
                    double var_c0_1 = x87_r7_5 + *(esi_11 - 0x18);
                    double var_b8_1 = *(a2 + 0x4a94);
                    esi_11[-4] = sub_52dcb0(a2, &var_c8, eax_17);
                    esi_11 = &esi_11[0xc];
                    i_2 = i_6;
                    i_6 -= 1;
                } while (i_2 != 1);
                cond:2_1 = var_e4_2 != 1;
                var_e4_2 -= 1;
            } while (cond:2_1);
            cond:3_1 = var_ec_3 + 1 < *(a2 + 0x4abc);
            var_ec_3 += 1;
        } while (cond:3_1);
    }

    int32_t result = *(a2 + 0x4abc);
    int32_t ecx_10 = 0;
    int32_t var_ec_4 = 0;

    if (result > 0)
    {
        int32_t* edi_10 = a2 + 0xc5c;
        int32_t* var_e4_3 = edi_10;

        do
        {
            int32_t var_dc_3 = 0;
            long double x87_r7_9 = edi_10[1];
            long double temp0_1 = 8388608.0;
            x87_r7_9 - temp0_1;

            if (*(&((x87_r7_9 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_9, temp0_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == temp0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                *(a2 + 0x4ab8) = *edi_10;

            int32_t i_3 = 0;
            int32_t* edi_11 = &edi_10[-1];
            int32_t i_4 = 0;

            do
            {
                for (int32_t j = 0; j < 4; )
                {
                    if (edi_11[4])
                        *edi_11 = 0;
                    else
                    {
                        sub_52fba0(a2, ecx_10, i_3, j);
                        sub_52e660(a2, &edi_11[-6], var_ec_4, i_4, j);
                        ecx_10 = var_ec_4;
                        i_3 = i_4;
                    }

                    j += 1;
                    edi_11 = &edi_11[0xc];
                }

                i_3 += 1;
                i_4 = i_3;
            } while (i_3 < 4);

            result = *(a2 + 0x4abc);
            ecx_10 += 1;
            edi_10 = &var_e4_3[0xc0];
            var_ec_4 = ecx_10;
            var_e4_3 = edi_10;
        } while (ecx_10 < result);
    }

    return result;
}
