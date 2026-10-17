// IGI native provenance: Body_ResolveCollision - 0x004FB9A0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004FB9A0-Body_ResolveCollision.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Body_ResolveCollision.h"
❓  int32_t* Body_ResolveCollision(float context , float param_2)
// This function has unresolved stack usage. View graph of stack usage to resolve.

{
    Camera_UpdateTransform_5(0x1058);
    float arg_4;
    float source_val = arg_4;
    int32_t i = 0;
    int32_t arg_1c = 0;
    double* arg_18 = nullptr;
    float arg_20 = 0.0f;

    if (!*(source_val + 0x68c))
        return 0;

    void arg_708;
    return_addr = &arg_708;
    char* entity_val = source_val + 0x1d4;
    int32_t* saved_ebp_2 = nullptr;
    int32_t i_1 = 0;
    int32_t arg_130[0x16];
    int32_t (* item_8)[0x16] = &arg_130;
    char* arg_10 = entity_val;
    int32_t (* saved_frame)[0x16] = nullptr;
    int32_t dest_val = 0;
    double* item_1c;
    float* item_18;
    double arg_188;
    void arg_39c;
    void arg_3a0;
    double arg_4a0;

    do
    {
        *return_addr = 0;

        if (entity_val[1] && *entity_val)
        {
            entity_val[2] = 0;
            long double fpu_val_7_1 = *(source_val + 0x78);
            float context_val = *(entity_val - 0xc);
            int32_t saved_target;
            item_18 = &saved_target + saved_ebp_2 + 0x3c;
            *(&saved_target + saved_ebp_2 + 0x3c) = context_val;
            *(&saved_target + saved_ebp_2 + 0x40) = *(entity_val - 8);
            *(&saved_target + saved_ebp_2 + 0x44) = *(entity_val - 4);
            void arg_2c;
            void arg_30;
            long double fpu_val_7_4 = fpu_val_7_1 * *(&arg_30 + saved_frame)
                + *(source_val + 0x74) * *(&arg_2c + saved_frame)
                + *(source_val + 0x70) * *(&saved_target + saved_ebp_2 + 0x3c);
            arg_4 = fpu_val_7_4;
            long double fpu_val_7_8 = *(source_val + 0x84) * *(&arg_30 + saved_frame)
                + *(source_val + 0x80) * *(&arg_2c + saved_frame)
                + *(source_val + 0x7c) * *(&saved_target + saved_ebp_2 + 0x3c);
            context = fpu_val_7_8;
            long double fpu_val_7_11 =
                *(source_val + 0x90) * *(&arg_30 + saved_frame) + *(source_val + 0x8c) * *(&arg_2c + saved_frame);
            long double fpu_val_6_12 = *(source_val + 0x88) * *(&saved_target + saved_ebp_2 + 0x3c);
            *(&saved_target + saved_ebp_2 + 0x3c) = arg_4;
            *(&saved_target + saved_ebp_2 + 0x40) = context;
            param_2 = fpu_val_7_11 + fpu_val_6_12;
            *(&saved_target + saved_ebp_2 + 0x44) = param_2;
            *(&arg_188 + dest_val) = *(&saved_target + saved_ebp_2 + 0x3c);
            long double fpu_val_7_14 = *(&arg_2c + saved_frame);
            item_1c = source_val + 0xf0;
            void arg_190;
            *(&arg_190 + dest_val) = fpu_val_7_14;
            void arg_198;
            *(&arg_198 + dest_val) = *(&arg_30 + saved_frame);
            *(&arg_188 + dest_val) = *(source_val + 0x20) + *(&arg_188 + dest_val);
            *(&arg_190 + dest_val) = *(source_val + 0x28) + *(&arg_190 + dest_val);
            *(&arg_198 + dest_val) = *(source_val + 0x30) + *(&arg_198 + dest_val);
            SoundSys_SetMasterVolume_17(&item_18 + saved_frame + 0x3b0, item_1c, item_18);
            long double fpu_val_7_23 = *(&item_18 + saved_frame + 0x3b0) + *(&arg_188 + dest_val);
            i = i_1;
            *item_8 = i;
            *(&arg_4a0 + dest_val) = fpu_val_7_23;
            void arg_4a8;
            *(&arg_4a8 + dest_val) = *(&arg_39c + saved_frame) + *(&arg_190 + dest_val);
            void arg_4b0;
            *(&arg_4b0 + dest_val) = *(&arg_3a0 + saved_frame) + *(&arg_198 + dest_val);
            saved_ebp_2 = &(*saved_frame)[3];
            dest_val += 0x18;
            arg_18 += 1;
            entity_val = arg_10;
            saved_frame = saved_ebp_2;
            item_8 = &(*item_8)[1];
        }

        i += 1;
        entity_val = &entity_val[0x38];
        i_1 = i;
        return_addr += 0x70;
        arg_10 = entity_val;
    } while (i < 0x16);

    int32_t* data_10 = arg_18;

    if (!data_10)
        return data_10;

    item_18 = 0xffffffff;
    item_1c = arg_18;
    *(source_val + 0x1b8) = 0;
    void arg_6b0;
    DynObj_FindSymbol_11(arg_10, &arg_6b0, &arg_188, &arg_4a0, data_10, i_1, item_1c, item_18);
    i_1 = 0;

    if (arg_18 > 0)
    {
        void* dest_1 = &arg_708;
        saved_frame = &arg_130;
        return_addr = nullptr;
        float arg_24;

        while (true)
        {
            if (*dest_1)
            {
                void* data_14 = *(dest_1 - 8);
                int32_t item_8_1 = 0;

                if (data_14)
                {
                    long double fpu_val_7_28 = *(data_14 + 0xc);
                    long double f0_1 = 0.0f;
                    fpu_val_7_28 - f0_1;
                    item_8_1 = 1;

                    if (*(&((fpu_val_7_28 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_28, f0_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_28 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                        item_8_1 = 0;
                }

                double* data_16 = *(dest_1 - 0x58);
                int32_t entity_11;

                if (data_16)
                {
                    arg_4 = source_val;
                    context = dest_1 - 0x58;
                    param_2 = 0.0f;
                    uint32_t data_18 = Script_CallNativeHandler_29();
                    int32_t data_19 = 0;
                    data_19 = *(data_16 + 0x1c);
                    int32_t data_20 = *(((data_18 * 0x180 + data_19) << 2) + &g_a96ae0);

                    if (data_20)
                    {
                        item_18 = &arg_4;
                        item_1c = data_16;
                        data_20(item_1c, item_18);
                    }

                    entity_11 = 0;
                    entity_11 = !param_2;
                    arg_20 = param_2;
                }

                long double fpu_val_7_31;
                long double f1_1;

                if ((!data_16 || entity_11) && !item_8_1)
                {
                    long double fpu_val_7_29 = *(&arg_3a0 + return_addr);
                    long double fpu_val_6_13 = *(&arg_39c + return_addr);
                    void arg_398;
                    long double fpu_val_5_1 = *(&arg_398 + return_addr);
                    fpu_val_7_31 =
sqrtl Body_ResolveCollision(fpu_val_5_1 * fpu_val_5_1 + fpu_val_7_29 * fpu_val_7_29 + fpu_val_6_13 * fpu_val_6_13)
                        + 40.9599991f;
                    f1_1 = *(dest_1 + 8);
                    fpu_val_7_31 - f1_1;
                }

                int32_t data_25;

                data_25 = (data_16 && !entity_11) || (!item_8_1 && *(&((fpu_val_7_31 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_31, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_31 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41) ? 0 : 1;

                *dest_1 = data_25;

                if (data_25)
                {
                    int32_t temp_7 = *saved_frame * 7;
                    *(source_val + (temp_7 << 3) + 0x1ec) = *(dest_1 + 8);
                    long double fpu_val_7_33 = *(dest_1 - 0x20);
                    long double f2_1 = 0.0f;
                    fpu_val_7_33 - f2_1;

                    if (!(*(&((fpu_val_7_33 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_33, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_33 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                    label_4fbd5a:
                        long double fpu_val_7_36 = *(dest_1 - 0x18);
                        long double fpu_val_6_15 = *(dest_1 - 0x1c);
                        long double fpu_val_5_3 = *(dest_1 - 0x20);
                        long double fpu_val_7_38 = 1.0 / sqrtl(fpu_val_5_3 * fpu_val_5_3
                            + fpu_val_6_15 * fpu_val_6_15 + fpu_val_7_36 * fpu_val_7_36);
                        *(dest_1 - 0x20) = *(dest_1 - 0x20) * fpu_val_7_38;
                        *(dest_1 - 0x1c) = *(dest_1 - 0x1c) * fpu_val_7_38;
                        *(dest_1 - 0x18) = *(dest_1 - 0x18) * fpu_val_7_38;
                    }
                    else
                    {
                        long double fpu_val_7_34 = *(dest_1 - 0x1c);
                        long double f3_1 = 0.0f;
                        fpu_val_7_34 - f3_1;

                        if (!(*(&((fpu_val_7_34 < f3_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_34, f3_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_34 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4fbd5a;

                        long double fpu_val_7_35 = *(dest_1 - 0x18);
                        long double f4_1 = 0.0f;
                        fpu_val_7_35 - f4_1;

                        if (!(*(&((fpu_val_7_35 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_35, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_35 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                            goto label_4fbd5a;
                    }

                    *(source_val + (temp_7 << 3) + 0x1e0) = *(dest_1 - 0x20);
                    *(source_val + (temp_7 << 3) + 0x1e4) = *(dest_1 - 0x1c);
                    *(source_val + (temp_7 << 3) + 0x1e8) = *(dest_1 - 0x18);
                    item_18 = &arg_24;
                    item_1c = source_val + 0x70;

                    if (Script_EvaluateCondition_29(dest_1 - 0x20, source_val + 0xf0, &item_1c + return_addr + 0x44, item_18)
                            == 2)
                        break;
                }
            }

            return_addr += 0xc;
            dest_1 += 0x70;
            bool flag_3_1 = i_1 + 1 < arg_18;
            i_1 += 1;
            saved_frame = &(*saved_frame)[1];

            if (!flag_3_1)
                return arg_1c;
        }

        int32_t data_37 = *(source_val + 0x1b8);
        item_18 = 1;
        arg_1c = 2;
        *(source_val + 0x1b8) = data_37 + 1;
        double* dest_2 = arg_130[i_1];
        item_1c = dest_2;
        *(source_val + dest_2 * 0x38 + 0x1d6) = 1;
        Script_ExecuteLevelScript_28(source_val, dest_1 - 0x20, &(&item_1c)[i_1 * 3 + 0x11], &arg_24, context, item_1c);
        float* item_38_1 = &(&item_1c)[i_1 * 3 + 0x11];
        char* item_48_1 = dest_1 - 0x20;
        Script_CallNativeHandler_28(source_val, dest_1 - 0x20, context, dest_2, param_2);

        if (arg_20)
        {
            item_18 = source_val + 0xf0;
            arg_4 = *(source_val + 0x108);
            float source_2 = *(source_val + 0x10c);
            float temp_14 = *(source_val + 0x110);
            arg_4 = arg_4 * 0.25f;
            *(source_val + 0x108) = arg_4;
            *(source_val + 0x10c) = source_2 * 0.25f;
            *(source_val + 0x110) = temp_14 * 0.25f;
            SoundSys_InitSoundSys_17(item_18);
        }
    }

    return arg_1c;
}
