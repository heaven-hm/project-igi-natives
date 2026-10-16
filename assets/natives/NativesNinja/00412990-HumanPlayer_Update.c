#include "00412990-HumanPlayer_Update.h"
/* 0x00412990 HumanPlayer_Update full linked: callers=0 callees=18 */
int32_t HumanPlayer_Update(float a1, float a2)

{
    float esi = a1;
    int16_t eax;
    eax = *(esi + 0xcf6);

    if (eax)
    {
        int32_t* eax_1 = Config_GetActivePlayerProfileRecord();

        if (!eax_1)
            return Warning_Show("No active playerprofile found");

        double var_18;
        sub_465800(&var_18, *(esi + 0x4ec));
        double* eax_4 = *(a2 + 4);
        double var_30 = var_18 - *eax_4;
        double var_10;
        double var_28_1 = var_10 - eax_4[1];
        double var_8;
        double var_20_1 = var_8 - eax_4[2];
        long double st0_1 = sub_4b3130(&var_30);
        long double x87_r6_3 = (*(a2 + 0x10) + *(a2 + 0xc)) * 1.5f;
        st0_1 - x87_r6_3;
        int16_t eax_6 = (st0_1 < x87_r6_3 ? 1 : 0) << 8 | (FCMP_UO(st0_1, x87_r6_3) ? 1 : 0) << 0xa
            | (st0_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800;

        if (*(&eax_6 + 1) & 1)
        {
            eax_6 = *(esi + 0x52c);

            if (!eax_6)
            {
                long double x87_r6_4 = var_30;
                float var_38_1 = var_28_1;
                long double x87_r5_3 = var_20_1;
                long double temp3_1 = 0f;
                x87_r6_4 - temp3_1;

                if (!(*(&((x87_r6_4 < temp3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, temp3_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == temp3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                {
                label_412a79:
                    long double x87_r4_3 = var_38_1;
                    long double x87_r5_5 = 1.0
                        / sqrtl(x87_r6_4 * x87_r6_4 + x87_r4_3 * x87_r4_3 + x87_r5_3 * x87_r5_3);
                    x87_r6_4 = x87_r6_4 * x87_r5_5;
                    var_38_1 = var_38_1 * x87_r5_5;
                }
                else
                {
                    long double x87_r4_2 = var_38_1;
                    long double temp5_1 = 0f;
                    x87_r4_2 - temp5_1;

                    if (!(*(&((x87_r4_2 < temp5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_2, temp5_1) ? 1 : 0) << 0xa
                            | (x87_r4_2 == temp5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                        goto label_412a79;

                    long double temp7_1 = 0f;
                    x87_r5_3 - temp7_1;

                    if (!(*(&((x87_r5_3 < temp7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_3, temp7_1) ? 1 : 0) << 0xa
                            | (x87_r5_3 == temp7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                        goto label_412a79;
                }

                *(esi + 0x678) = *(esi + 0x678);
                *(esi + 0x670) = x87_r6_4 * 758.518494f + *(esi + 0x670);
                *(esi + 0x674) = var_38_1 * 758.518494f + *(esi + 0x674);
            }
        }

        long double temp1_1 = 102400f;
        st0_1 - temp1_1;

        if (*(&((st0_1 < temp1_1 ? 1 : 0) << 8 | (FCMP_UO(st0_1, temp1_1) ? 1 : 0) << 0xa
                | (st0_1 == temp1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            *(esi + 0xdc8) = 1.0 - st0_1 * 9.76562478e-06f + *(esi + 0xdc8);

        long double x87_r7_8 = st0_1 - *(a2 + 0xc) * 3f;
        long double temp2_1 = 0f;
        x87_r7_8 - temp2_1;
        long double x87_r7_10;

        if (!(*(&((x87_r7_8 < temp2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, temp2_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == temp2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            x87_r7_10 = 1f - x87_r7_8 / (*(a2 + 0xc) * 6f);
            long double temp4_1 = 0f;
            x87_r7_10 - temp4_1;

            if (!(*(&((x87_r7_10 < temp4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, temp4_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == temp4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double temp6_1 = 0f;
                x87_r7_10 - temp6_1;

                if (!(*(&((x87_r7_10 < temp6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_10, temp6_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == temp6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_412b63;
            }
        }
        else
        {
            x87_r7_10 = 1f;
        label_412b63:
            int32_t ecx_1 = *(a2 + 0x14);
            int32_t var_54_2 = ecx_1;
            int32_t var_58_2 = ecx_1;
            sub_465970(*(esi + 0x4ec), x87_r7_10 * 204.800003f, x87_r7_10 * 0.0130899698f, ecx_1);
        }
        *(esi + 0x2e8) = 0xd;
        int32_t var_50_3 = 1;
        int32_t var_54_5 = sub_489e10(esi + 0x254, 0xd);
        float var_5c_2 = esi;
        long double st0_2 = Level_CheckQTaskID_5(a2, esi + 0x20, *(esi + 0xa0) * 0.333333343f);
        long double temp8_1 = 0f;
        st0_2 - temp8_1;
        eax = (st0_2 < temp8_1 ? 1 : 0) << 8 | (FCMP_UO(st0_2, temp8_1) ? 1 : 0) << 0xa
            | (st0_2 == temp8_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&eax + 1) & 0x40))
        {
            int32_t __saved_edi_3 = *eax_1;
            a1 = st0_2 * *(esi + 0x2cc);

            if (!__saved_edi_3)
                a1 = a1 * 0.75f;
            else if (__saved_edi_3 != 1)
            {
                if (__saved_edi_3 == 2)
                    a1 = a1 * 1.25f;
                else
                {
                    int32_t __saved_edi_1 = __saved_edi_3;
                    Warning_Show("Difficulty level not defined %d");
                }
            }

            if (!Human_HitDamage())
            {
                *(esi + 0x2c8) = a1 + *(esi + 0x2c8);
                *(esi + 0x254) = a1 + *(esi + 0x254);
            }

            if (!*(esi + 0xcf5))
                sub_4637c0(esi, "player_xplhit_", 1);

            *(esi + 0xdcc) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(esi + 0xdd0) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(esi + 0xdd4) = (sub_4b4770(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            int32_t eax_19;
            long double st0_6;
            st0_6 = sub_4b4770(Level_SetMission_5());
            *(esi + 0xdd8) = (st0_6 + 1.0) * 0.40000000000000002;
            return eax_19;
        }
    }

    return eax;
}
