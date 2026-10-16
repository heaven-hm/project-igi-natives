#include "camera_move.h"
struct status_msg* camera_move(long double a1 @ fp0, float a2)

{
    void* flagP = a2;
    void* ctxB = *(flagP + 0x25d0);
    int32_t v_34 = *(flagP + 0xf4);
    void* srcS = nullptr;
    *(ctxB + 0x169) = 0;
    *(ctxB + 0x164) = 0;
    int32_t* i_2 = *(flagP + 0x1ac);

    for (int32_t* i = *i_2; i; i = *i)
    {
        if (*(i_2 + 0x29))
        {
            srcS = *i_2[2];
            *(ctxB + 0x164) = 1;
            break;
        }

        i_2 = i;
    }

    int32_t* i_3 = *(flagP + 0x1a0);

    for (int32_t* i_1 = *i_3; i_1; i_1 = *i_1)
    {
        if (*(i_3 + 0x29))
        {
            srcS = *i_3[2];
            *(ctxB + 0x164) = 0;
            break;
        }

        i_3 = i_1;
    }

    int16_t idx;

    if (!srcS)
    {
        *(ctxB + 0x16c) = 0;

        if (*(flagP + 0x25b8))
        {
            *(flagP + 0x25b8) = 0;
            *(flagP + 0x25bc) = 0x3c;
        }

        int32_t valA10 = *(flagP + 0x25bc);

        if (valA10)
            *(flagP + 0x25bc) = valA10 - 1;

        if (!*(flagP + 0x25bc))
        {
            if (!*(flagP + 0x100))
            {
                a2 = *(ctxB + 0x14a);
                *(flagP + 0x100) = 1;
                *(flagP + 0xf8) = a2 * 0.0174532924f;
                idx = 0;
            }

            int32_t valA11 = *(flagP + 0xfc);

            if (valA11)
                *(flagP + 0xfc) = valA11 - 1;
            else
            {
                long double x87_r7_9 = *(flagP + 0xf4);
                long double f1_1 = *(flagP + 0xf8);
                x87_r7_9 - f1_1;

                if (!(*(&((x87_r7_9 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_9, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_9 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double x87_r7_14 = *(flagP + 0xf4);
                    long double f3_1 = *(flagP + 0xf8);
                    x87_r7_14 - f3_1;

                    if (!(*(&((x87_r7_14 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_14, f3_1) ? 1 : 0) << 0xa
                        | (x87_r7_14 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double x87_r7_18 =
                            *(flagP + 0xf4) - *(ctxB + 0x14c) * 0.0174532924f * 0.0333333351f;
                        *(flagP + 0xf4) = x87_r7_18;
                        long double f7_1 = *(flagP + 0xf8);
                        x87_r7_18 - f7_1;

                        if (*(&((x87_r7_18 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(x87_r7_18, f7_1) ? 1 : 0) << 0xa
                                | (x87_r7_18 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                            *(flagP + 0xf4) = *(flagP + 0xf8);
                    }
                }
                else
                {
                    long double x87_r7_13 =
                        *(ctxB + 0x14c) * 0.0174532924f * 0.0333333351f + *(flagP + 0xf4);
                    *(flagP + 0xf4) = x87_r7_13;
                    long double f4_1 = *(flagP + 0xf8);
                    x87_r7_13 - f4_1;

                    if (!(*(&((x87_r7_13 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(x87_r7_13, f4_1) ? 1 : 0) << 0xa
                            | (x87_r7_13 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        *(flagP + 0xf4) = *(flagP + 0xf8);
                }

                long double x87_r7_19 = *(flagP + 0xf4);
                long double f6_1 = *(flagP + 0xf8);
                x87_r7_19 - f6_1;
                idx = 0;

                if (*(&((x87_r7_19 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_19, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_19 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    int32_t objC3 = *(flagP + 0x100);
                    *(flagP + 0xfc) = *(ctxB + 0x150) * 30f;

                    if (objC3 != 0xffffffff)
                    {
                        float tmpD4 = -(*(ctxB + 0x148));
                        *(flagP + 0x100) = 0xffffffff;
                        *(flagP + 0xf8) = tmpD4 * 0.0174532924f;
                        idx = 0;
                    }
                    else
                    {
                        float objC4 = *(ctxB + 0x14a);
                        *(flagP + 0x100) = 1;
                        *(flagP + 0xf8) = objC4 * 0.0174532924f;
                        idx = 0;
                    }
                }
            }
        }
    }
    else
    {
        if (*(flagP + 0x25b8) != srcS)
        {
            *(flagP + 0x25b8) = srcS;

            if (!*(ctxB + 0x164))
                *(ctxB + 0x16c) = 0x5a;
            else
                *(ctxB + 0x16c) = 0;
        }

        int32_t valA3 = *(ctxB + 0x16c);

        if (valA3)
            *(ctxB + 0x16c) = valA3 - 1;

        if (!*(ctxB + 0x16c))
            *(ctxB + 0x169) = 1;

        double v_30;
        Env_UpdateCameraLens_2(&v_30, srcS);
        long double x87_r7_2 = v_30 - *(flagP + 0x20);
        double v_28;
        long double x87_r6_2 = v_28 - *(flagP + 0x28);
        double v_20;
        long double x87_r5_2 = v_20 - *(flagP + 0x30);
        double v_18 =
            *(flagP + 0x88) * x87_r5_2 + *(flagP + 0x7c) * x87_r6_2 + *(flagP + 0x70) * x87_r7_2;
        double v_10_1 =
            *(flagP + 0x8c) * x87_r5_2 + *(flagP + 0x80) * x87_r6_2 + *(flagP + 0x74) * x87_r7_2;
        double v_8_1 =
            *(flagP + 0x90) * x87_r5_2 + *(flagP + 0x84) * x87_r6_2 + *(flagP + 0x78) * x87_r7_2;
        void v_64;
        memcpy(&v_64, &v_18, 0x18);
        WeaponType_GetConfig();
        long double f2_1 = 0f;
        a1 - f2_1;
        long double x87_r7_4 = a1;

        if (*(&((a1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f2_1) ? 1 : 0) << 0xa
                | (a1 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_4 = -(x87_r7_4);

        long double f5_1 = 0.0872664675f;
        x87_r7_4 - f5_1;

        if (*(&((x87_r7_4 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f5_1) ? 1 : 0) << 0xa
                | (x87_r7_4 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            idx = 1;
        else
        {
            long double f8_1 = -0.0130899698f;
            a1 - f8_1;

            if (!(*(&((a1 < f8_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f8_1) ? 1 : 0) << 0xa
                | (a1 == f8_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double f9_1 = 0.0130899698f;
                a1 - f9_1;

                if (!(*(&((a1 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f9_1) ? 1 : 0) << 0xa
                        | (a1 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    a1 = 0.0130899698f;
            }
            else
                a1 = -0.0130899698f;

            long double x87_r0_2 = a1 + *(flagP + 0xf4);
            a2 = x87_r0_2;
            *(flagP + 0xf4) = x87_r0_2;
            long double x87_r0_4 = -(*(ctxB + 0x148)) * 0.0174532924f;
            long double x87_r7_5 = a2;
            x87_r7_5 - x87_r0_4;

            if (!(*(&((x87_r7_5 < x87_r0_4 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_5, x87_r0_4) ? 1 : 0) << 0xa
                | (x87_r7_5 == x87_r0_4 ? 1 : 0) << 0xe) + 1) & 1))
            {
                a1 = *(ctxB + 0x14a) * 0.0174532924f;
                long double x87_r7_6 = a2;
                x87_r7_6 - a1;

                if (*(&((x87_r7_6 < a1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, a1) ? 1 : 0) << 0xa
                        | (x87_r7_6 == a1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    idx = 1;
                else
                {
                    *(flagP + 0xf4) = a1;
                    idx = 1;
                }
            }
            else
            {
                *(flagP + 0xf4) = x87_r0_4;
                idx = 1;
            }
        }
    }

🚫🚫    /* unimplemented  {fld fp0, dword [esp+0x18]} */
⋯    long double f0 = *(flagP + 0xf4);
    /* unimplemented  {fcomp fp0, dword [flagP+0xf4]} f- f0 */ - f0;
    bool c0_12 = /* bool c0_12 = unimplemented  {fcomp fp0, dword [flagP+0xf4]} f< f0 */ < f0;
    bool c2_12 = FCMP_UO(/* bool c2_12 =
        is_unordered.t(unimplemented  {fcomp fp0, dword [flagP+0xf4]}, f0) */, f0);
    bool c3_12 = /* bool c3_12 = unimplemented  {fcomp fp0, dword [flagP+0xf4]} f== f0 */ == f0;
    /* unimplemented  {fcomp fp0, dword [flagP+0xf4]} */
    struct status_msg* result = *(flagP + 0x25c0);

    if (*(
        &((c0_12 ? 1 : 0) << 8 | (c2_12 ? 1 : 0) << 0xa | (c3_12 ? 1 : 0) << 0xe | (idx & 7) << 0xb)
        + 1) & 0x40)
    {
        if (result)
        {
            result = SoundSys_SetFrequency_7(result);
            *(flagP + 0x25c0) = 0;
        }
    }
    else if (!result)
    {
        result = SoundSys_SetMasterVolume_7(flagP, "camera_move");
        *(flagP + 0x25c0) = result;

        if (result)
            return SoundSys_StopSoundSample_7(result, flagP + 0x20);
    }

    return result;
}
