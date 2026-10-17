// IGI native provenance: camera_move - 0x00441BF0 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 00441BF0-camera_move.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "camera_move.h"
struct status_msg* camera_move(long double context , float param_2)

{
    void* flagP = param_2;
    void* context_val = *(flagP + 0x25d0);
    int32_t item_34 = *(flagP + 0xf4);
    void* source_val = nullptr;
    *(context_val + 0x169) = 0;
    *(context_val + 0x164) = 0;
    int32_t* i_2 = *(flagP + 0x1ac);

    for (int32_t* i = *i_2; i; i = *i)
    {
        if (*(i_2 + 0x29))
        {
            source_val = *i_2[2];
            *(context_val + 0x164) = 1;
            break;
        }

        i_2 = i;
    }

    int32_t* i_3 = *(flagP + 0x1a0);

    for (int32_t* i_1 = *i_3; i_1; i_1 = *i_1)
    {
        if (*(i_3 + 0x29))
        {
            source_val = *i_3[2];
            *(context_val + 0x164) = 0;
            break;
        }

        i_3 = i_1;
    }

    int16_t idx;

    if (!source_val)
    {
        *(context_val + 0x16c) = 0;

        if (*(flagP + 0x25b8))
        {
            *(flagP + 0x25b8) = 0;
            *(flagP + 0x25bc) = 0x3c;
        }

        int32_t data_10 = *(flagP + 0x25bc);

        if (data_10)
            *(flagP + 0x25bc) = data_10 - 1;

        if (!*(flagP + 0x25bc))
        {
            if (!*(flagP + 0x100))
            {
                param_2 = *(context_val + 0x14a);
                *(flagP + 0x100) = 1;
                *(flagP + 0xf8) = param_2 * 0.0174532924f;
                idx = 0;
            }

            int32_t data_11 = *(flagP + 0xfc);

            if (data_11)
                *(flagP + 0xfc) = data_11 - 1;
            else
            {
                long double fpu_val_7_9 = *(flagP + 0xf4);
                long double f1_1 = *(flagP + 0xf8);
                fpu_val_7_9 - f1_1;

                if (!(*(&((fpu_val_7_9 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_9, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_9 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                {
                    long double fpu_val_7_14 = *(flagP + 0xf4);
                    long double f3_1 = *(flagP + 0xf8);
                    fpu_val_7_14 - f3_1;

                    if (!(*(&((fpu_val_7_14 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_14, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_14 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        long double fpu_val_7_18 =
                            *(flagP + 0xf4) - *(context_val + 0x14c) * 0.0174532924f * 0.0333333351f;
                        *(flagP + 0xf4) = fpu_val_7_18;
                        long double f7_1 = *(flagP + 0xf8);
                        fpu_val_7_18 - f7_1;

                        if (*(&((fpu_val_7_18 < f7_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_18, f7_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_18 == f7_1 ? 1 : 0) << 0xe) + 1) & 1)
                            *(flagP + 0xf4) = *(flagP + 0xf8);
                    }
                }
                else
                {
                    long double fpu_val_7_13 =
                        *(context_val + 0x14c) * 0.0174532924f * 0.0333333351f + *(flagP + 0xf4);
                    *(flagP + 0xf4) = fpu_val_7_13;
                    long double f4_1 = *(flagP + 0xf8);
                    fpu_val_7_13 - f4_1;

                    if (!(*(&((fpu_val_7_13 < f4_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_13, f4_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_13 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                        *(flagP + 0xf4) = *(flagP + 0xf8);
                }

                long double fpu_val_7_19 = *(flagP + 0xf4);
                long double f6_1 = *(flagP + 0xf8);
                fpu_val_7_19 - f6_1;
                idx = 0;

                if (*(&((fpu_val_7_19 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_19, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_19 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    int32_t entity_3 = *(flagP + 0x100);
                    *(flagP + 0xfc) = *(context_val + 0x150) * 30.0f;

                    if (entity_3 != 0xffffffff)
                    {
                        float temp_4 = -(*(context_val + 0x148));
                        *(flagP + 0x100) = 0xffffffff;
                        *(flagP + 0xf8) = temp_4 * 0.0174532924f;
                        idx = 0;
                    }
                    else
                    {
                        float entity_4 = *(context_val + 0x14a);
                        *(flagP + 0x100) = 1;
                        *(flagP + 0xf8) = entity_4 * 0.0174532924f;
                        idx = 0;
                    }
                }
            }
        }
    }
    else
    {
        if (*(flagP + 0x25b8) != source_val)
        {
            *(flagP + 0x25b8) = source_val;

            if (!*(context_val + 0x164))
                *(context_val + 0x16c) = 0x5a;
            else
                *(context_val + 0x16c) = 0;
        }

        int32_t data_3 = *(context_val + 0x16c);

        if (data_3)
            *(context_val + 0x16c) = data_3 - 1;

        if (!*(context_val + 0x16c))
            *(context_val + 0x169) = 1;

        double item_30;
        Env_UpdateCameraLens_2(&item_30, source_val);
        long double fpu_val_7_2 = item_30 - *(flagP + 0x20);
        double item_28;
        long double fpu_val_6_2 = item_28 - *(flagP + 0x28);
        double item_20;
        long double fpu_val_5_2 = item_20 - *(flagP + 0x30);
        double item_18 =
            *(flagP + 0x88) * fpu_val_5_2 + *(flagP + 0x7c) * fpu_val_6_2 + *(flagP + 0x70) * fpu_val_7_2;
        double item_10_1 =
            *(flagP + 0x8c) * fpu_val_5_2 + *(flagP + 0x80) * fpu_val_6_2 + *(flagP + 0x74) * fpu_val_7_2;
        double item_8_1 =
            *(flagP + 0x90) * fpu_val_5_2 + *(flagP + 0x84) * fpu_val_6_2 + *(flagP + 0x78) * fpu_val_7_2;
        void item_64;
        memcpy(&item_64, &item_18, 0x18);
        WeaponType_GetConfig();
        long double f2_1 = 0.0f;
        context - f2_1;
        long double fpu_val_7_4 = context;

        if (*(&((context < f2_1 ? 1 : 0) << 8 | (FCMP_UO(context, f2_1) ? 1 : 0) << 0xa
                | (context == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            fpu_val_7_4 = -(fpu_val_7_4);

        long double f5_1 = 0.0872664675f;
        fpu_val_7_4 - f5_1;

        if (*(&((fpu_val_7_4 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            idx = 1;
        else
        {
            long double f8_1 = -0.0130899698f;
            context - f8_1;

            if (!(*(&((context < f8_1 ? 1 : 0) << 8 | (FCMP_UO(context, f8_1) ? 1 : 0) << 0xa
                | (context == f8_1 ? 1 : 0) << 0xe) + 1) & 1))
            {
                long double f9_1 = 0.0130899698f;
                context - f9_1;

                if (!(*(&((context < f9_1 ? 1 : 0) << 8 | (FCMP_UO(context, f9_1) ? 1 : 0) << 0xa
                        | (context == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    context = 0.0130899698f;
            }
            else
                context = -0.0130899698f;

            long double fpu_val_0_2 = context + *(flagP + 0xf4);
            param_2 = fpu_val_0_2;
            *(flagP + 0xf4) = fpu_val_0_2;
            long double fpu_val_0_4 = -(*(context_val + 0x148)) * 0.0174532924f;
            long double fpu_val_7_5 = param_2;
            fpu_val_7_5 - fpu_val_0_4;

            if (!(*(&((fpu_val_7_5 < fpu_val_0_4 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_5, fpu_val_0_4) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == fpu_val_0_4 ? 1 : 0) << 0xe) + 1) & 1))
            {
                context = *(context_val + 0x14a) * 0.0174532924f;
                long double fpu_val_7_6 = param_2;
                fpu_val_7_6 - context;

                if (*(&((fpu_val_7_6 < context ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, context) ? 1 : 0) << 0xa
                        | (fpu_val_7_6 == context ? 1 : 0) << 0xe) + 1) & 0x41)
                    idx = 1;
                else
                {
                    *(flagP + 0xf4) = context;
                    idx = 1;
                }
            }
            else
            {
                *(flagP + 0xf4) = fpu_val_0_4;
                idx = 1;
            }
        }
    }

🚫🚫    /* unimplemented  {fld fp0, dword [stack_ptr+0x18]} */
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
