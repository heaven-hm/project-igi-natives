// Original IGI.EXE function: HumanPlayer_Update (VA 0x00412990; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_Update.h"
int32_t HumanPlayer_Update(float a1, float a2)

{
    float srcS = a1;
    int16_t valA;
    valA = *(srcS + 0xcf6);

    if (valA)
    {
        int32_t* valA1 = Config_GetActivePlayerProfileRecord();

        if (!valA1)
            return Warning_Show("No active playerprofile found");

        double v_18;
        AI_FireWeapon_23(&v_18, *(srcS + 0x4ec));
        double* valA4 = *(a2 + 4);
        double v_30 = v_18 - *valA4;
        double v_10;
        double v_28_1 = v_10 - valA4[1];
        double v_8;
        double v_20_1 = v_8 - valA4[2];
        long double fp0_1 = Sys_OpenFileStream_11(&v_30);
        long double x87_r6_3 = (*(a2 + 0x10) + *(a2 + 0xc)) * 1.5f;
        fp0_1 - x87_r6_3;
        int16_t valA6 = (fp0_1 < x87_r6_3 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, x87_r6_3) ? 1 : 0) << 0xa
            | (fp0_1 == x87_r6_3 ? 1 : 0) << 0xe | 0x3800;

        if (*(&valA6 + 1) & 1)
        {
            valA6 = *(srcS + 0x52c);

            if (!valA6)
            {
                long double x87_r6_4 = v_30;
                float v_38_1 = v_28_1;
                long double x87_r5_3 = v_20_1;
                long double f3_1 = 0f;
                x87_r6_4 - f3_1;

                if (!(*(&((x87_r6_4 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r6_4, f3_1) ? 1 : 0) << 0xa
                    | (x87_r6_4 == f3_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                {
                label_412a79:
                    long double x87_r4_3 = v_38_1;
                    long double x87_r5_5 = 1.0
                        / sqrtl(x87_r6_4 * x87_r6_4 + x87_r4_3 * x87_r4_3 + x87_r5_3 * x87_r5_3);
                    x87_r6_4 = x87_r6_4 * x87_r5_5;
                    v_38_1 = v_38_1 * x87_r5_5;
                }
                else
                {
                    long double x87_r4_2 = v_38_1;
                    long double f5_1 = 0f;
                    x87_r4_2 - f5_1;

                    if (!(*(&((x87_r4_2 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r4_2, f5_1) ? 1 : 0) << 0xa
                            | (x87_r4_2 == f5_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                        goto label_412a79;

                    long double f7_1 = 0f;
                    x87_r5_3 - f7_1;

                    if (!(*(&((x87_r5_3 < f7_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r5_3, f7_1) ? 1 : 0) << 0xa
                            | (x87_r5_3 == f7_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 0x40))
                        goto label_412a79;
                }

                *(srcS + 0x678) = *(srcS + 0x678);
                *(srcS + 0x670) = x87_r6_4 * 758.518494f + *(srcS + 0x670);
                *(srcS + 0x674) = v_38_1 * 758.518494f + *(srcS + 0x674);
            }
        }

        long double f1_1 = 102400f;
        fp0_1 - f1_1;

        if (*(&((fp0_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f1_1) ? 1 : 0) << 0xa
                | (fp0_1 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            *(srcS + 0xdc8) = 1.0 - fp0_1 * 9.76562478e-06f + *(srcS + 0xdc8);

        long double x87_r7_8 = fp0_1 - *(a2 + 0xc) * 3f;
        long double f2_1 = 0f;
        x87_r7_8 - f2_1;
        long double x87_r7_10;

        if (!(*(&((x87_r7_8 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_8, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_8 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            x87_r7_10 = 1f - x87_r7_8 / (*(a2 + 0xc) * 6f);
            long double f4_1 = 0f;
            x87_r7_10 - f4_1;

            if (!(*(&((x87_r7_10 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
            {
                long double f6_1 = 0f;
                x87_r7_10 - f6_1;

                if (!(*(&((x87_r7_10 < f6_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_10, f6_1) ? 1 : 0) << 0xa
                        | (x87_r7_10 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
                    goto label_412b63;
            }
        }
        else
        {
            x87_r7_10 = 1f;
        label_412b63:
            int32_t objC1 = *(a2 + 0x14);
            int32_t v_54_2 = objC1;
            int32_t v_58_2 = objC1;
            AI_CheckSector_23(*(srcS + 0x4ec), x87_r7_10 * 204.800003f, x87_r7_10 * 0.0130899698f, objC1);
        }
        *(srcS + 0x2e8) = 0xd;
        int32_t v_50_3 = 1;
        int32_t v_54_5 = FX_FragmentSimulate_14(srcS + 0x254, 0xd);
        float v_5c_2 = srcS;
        long double fp0_2 = Level_CheckQTaskID_5(a2, srcS + 0x20, *(srcS + 0xa0) * 0.333333343f);
        long double f8_1 = 0f;
        fp0_2 - f8_1;
        valA = (fp0_2 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_2, f8_1) ? 1 : 0) << 0xa
            | (fp0_2 == f8_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&valA + 1) & 0x40))
        {
            int32_t __saved_edi_3 = *valA1;
            a1 = fp0_2 * *(srcS + 0x2cc);

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
                *(srcS + 0x2c8) = a1 + *(srcS + 0x2c8);
                *(srcS + 0x254) = a1 + *(srcS + 0x254);
            }

            if (!*(srcS + 0xcf5))
                AI_MoveToNode_21(srcS, "player_xplhit_", 1);

            *(srcS + 0xdcc) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(srcS + 0xdd0) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            *(srcS + 0xdd4) = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.40000000000000002;
            int32_t valA19;
            long double fp0_6;
            fp0_6 = Sys_AllocateMemory_14(Level_SetMission_5());
            *(srcS + 0xdd8) = (fp0_6 + 1.0) * 0.40000000000000002;
            return valA19;
        }
    }

    return valA;
}
