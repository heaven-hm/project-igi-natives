// Original IGI.EXE function: GunShot_Update (VA 0x0047ABD0; static CFG gate PASS, CFG score 0.944).
#include "GunShot_Update.h"
void* GunShot_Update(int32_t context)

{
    float* dest_val = context;
    void* flagP = *dest_val[0x1b];

    if (flagP)
    {
        void* data_1 = *(flagP + 0x12c);

        if (data_1 && *(data_1 + 0x20))
        {
            int32_t* i = nullptr;
            float item_c_1 = (*(data_1 + 0x14) - *(data_1 + 8)) * 0.00392156886f;
            float item_8_1 = (*(data_1 + 0x18) - *(data_1 + 0xc)) * 0.00392156886f;
            float item_4_1 = (*(data_1 + 0x1c) - *(data_1 + 0x10)) * 0.00392156886f;

            if (dest_val[0x27] > 0)
            {
                int32_t* source_2 = &dest_val[0x240];

                do
                {
                    double* entity_6 = *source_2;
                    long double fpu_val_7_8 = entity_6[7] / entity_6[8];
                    context = *(entity_6 + 0x3c) / entity_6[8];
                    float item_18 = *(*(flagP + 0x12c) + 8) * 0.00392156886f + fpu_val_7_8 * item_c_1;
                    float item_14_1 = *(*(flagP + 0x12c) + 0xc) * 0.00392156886f + fpu_val_7_8 * item_8_1;
                    float item_10_1 = *(*(flagP + 0x12c) + 0x10) * 0.00392156886f + fpu_val_7_8 * item_4_1;
                    long double fpu_val_7_11 = 0.0f;
                    long double f1_1 = item_18;
                    fpu_val_7_11 - f1_1;

                    if (*(&((fpu_val_7_11 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_11, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_11 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_12 = 1.0f;
                        long double f2_1 = item_18;
                        fpu_val_7_12 - f2_1;

                        if (*(&((fpu_val_7_12 < f2_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_12, f2_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_12 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_18 = 1.0f;
                    }
                    else
                        item_18 = 0.0f;

                    long double fpu_val_7_13 = 0.0f;
                    long double f3_1 = item_14_1;
                    fpu_val_7_13 - f3_1;

                    if (*(&((fpu_val_7_13 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_13, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_13 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_14 = 1.0f;
                        long double f4_1 = item_14_1;
                        fpu_val_7_14 - f4_1;

                        if (*(&((fpu_val_7_14 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_14, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_14 == f4_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_14_1 = 1.0f;
                    }
                    else
                        item_14_1 = 0.0f;

                    long double fpu_val_7_15 = 0.0f;
                    long double f5_1 = item_10_1;
                    fpu_val_7_15 - f5_1;

                    if (*(&((fpu_val_7_15 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_15, f5_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_15 == f5_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_16 = 1.0f;
                        long double f6_1 = item_10_1;
                        fpu_val_7_16 - f6_1;

                        if (*(&((fpu_val_7_16 < f6_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_16, f6_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_16 == f6_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_10_1 = 1.0f;
                    }
                    else
                        item_10_1 = 0.0f;

                    float item_24 = *(*(flagP + 0x12c) + 8) * 0.00392156886f + context * item_c_1;
                    float item_20_1 = *(*(flagP + 0x12c) + 0xc) * 0.00392156886f + context * item_8_1;
                    float item_1c_1 = *(*(flagP + 0x12c) + 0x10) * 0.00392156886f + context * item_4_1;
                    long double fpu_val_7_26 = 0.0f;
                    long double f7_1 = item_24;
                    fpu_val_7_26 - f7_1;

                    if (*(&((fpu_val_7_26 < f7_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_26, f7_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_26 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_27 = 1.0f;
                        long double f8_1 = item_24;
                        fpu_val_7_27 - f8_1;

                        if (*(&((fpu_val_7_27 < f8_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_27, f8_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_27 == f8_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_24 = 1.0f;
                    }
                    else
                        item_24 = 0.0f;

                    long double fpu_val_7_28 = 0.0f;
                    long double f9_1 = item_20_1;
                    fpu_val_7_28 - f9_1;

                    if (*(&((fpu_val_7_28 < f9_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_28, f9_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_28 == f9_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_29 = 1.0f;
                        long double f10_1 = item_20_1;
                        fpu_val_7_29 - f10_1;

                        if (*(&((fpu_val_7_29 < f10_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_29, f10_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_29 == f10_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_20_1 = 1.0f;
                    }
                    else
                        item_20_1 = 0.0f;

                    long double fpu_val_7_30 = 0.0f;
                    long double f11_1 = item_1c_1;
                    fpu_val_7_30 - f11_1;

                    if (*(&((fpu_val_7_30 < f11_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_30, f11_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_30 == f11_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_31 = 1.0f;
                        long double f12_1 = item_1c_1;
                        fpu_val_7_31 - f12_1;

                        if (*(&((fpu_val_7_31 < f12_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_31, f12_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_31 == f12_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_1c_1 = 1.0f;
                    }
                    else
                        item_1c_1 = 0.0f;

                    float item_40_1 = entity_6[7] / entity_6[8];
                    long double fpu_val_7_34 = 0.0f;
                    long double f13_1 = item_40_1;
                    fpu_val_7_34 - f13_1;

                    if (*(&((fpu_val_7_34 < f13_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_34, f13_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_34 == f13_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_35 = 1.0f;
                        long double f14_1 = item_40_1;
                        fpu_val_7_35 - f14_1;

                        if (*(&((fpu_val_7_35 < f14_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_35, f14_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_35 == f14_1 ? 1 : 0) << 0xe) + 1) & 1)
                            item_40_1 = 1.0f;
                    }
                    else
                        item_40_1 = 0.0f;

                    context = *(entity_6 + 0x3c) / entity_6[8];
                    long double fpu_val_7_38 = 0.0f;
                    long double f15_1 = context;
                    fpu_val_7_38 - f15_1;

                    if (*(&((fpu_val_7_38 < f15_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_38, f15_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_38 == f15_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                    {
                        long double fpu_val_7_39 = 1.0f;
                        long double f16_1 = context;
                        fpu_val_7_39 - f16_1;

                        if (*(&((fpu_val_7_39 < f16_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_39, f16_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_39 == f16_1 ? 1 : 0) << 0xe) + 1) & 1)
                            context = 0x3f800000;
                    }
                    else
                        context = 0;

                    float item_3c;
                    float item_34;
                    Display_RestoreDevice_15(&item_34, &item_3c, entity_6);
                    float item_38;
                    float item_2c;
                    Display_RestoreDevice_15(&item_2c, &item_38, *source_2 + 0x18);
                    long double fpu_val_7_40 = item_38;
                    long double f17_1 = 0.0f;
                    fpu_val_7_40 - f17_1;
                    int32_t entity_7;

                    entity_7 = !(*(&((fpu_val_7_40 < f17_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_40, f17_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_40 == f17_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    long double fpu_val_7_41 = item_3c;
                    long double f18_1 = 0.0f;
                    fpu_val_7_41 - f18_1;
                    int32_t data_12;

                    data_12 = !(*(&((fpu_val_7_41 < f18_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_41, f18_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_41 == f18_1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

                    if (entity_7 == data_12)
                    {
                        long double fpu_val_7_43 = 0.0f;
                        long double f19_1 = item_38;
                        fpu_val_7_43 - f19_1;

                        if (*(&((fpu_val_7_43 < f19_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_43, f19_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_43 == f19_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double fpu_val_7_44 = 2048000.0f;
                            long double f20_1 = item_38;
                            fpu_val_7_44 - f20_1;

                            if (*(&((fpu_val_7_44 < f20_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_44, f20_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_44 == f20_1 ? 1 : 0) << 0xe) + 1) & 1)
                                item_38 = 2048000.0f;
                        }
                        else
                            item_38 = 0.0f;

                        long double fpu_val_7_45 = 0.0f;
                        long double f22_1 = item_3c;
                        fpu_val_7_45 - f22_1;

                        if (*(&((fpu_val_7_45 < f22_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_45, f22_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_45 == f22_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                        {
                            long double fpu_val_7_46 = 2048000.0f;
                            long double f23_1 = item_3c;
                            fpu_val_7_46 - f23_1;

                            if (*(&((fpu_val_7_46 < f23_1 ? 1 : 0) << 8
                                    | (FCMP_UO(fpu_val_7_46, f23_1) ? 1 : 0) << 0xa
                                    | (fpu_val_7_46 == f23_1 ? 1 : 0) << 0xe) + 1) & 1)
                                item_3c = 2048000.0f;
                        }
                        else
                            item_3c = 0.0f;

                        long double fpu_val_7_51 =
                            (1.0f - item_3c * 4.88281273e-07.0f * 0.100000001f) * item_40_1;
                        float item_40_2 = fpu_val_7_51;
                        context = (1.0f - item_38 * 4.88281273e-07.0f * 0.100000001f) * context;
                        long double f24_1 = 0.200000003f;
                        fpu_val_7_51 - f24_1;

                        if (*(&((fpu_val_7_51 < f24_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_51, f24_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_51 == f24_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            item_40_2 = 0.200000003f;

                        long double fpu_val_7_52 = context;
                        long double f25_1 = 0.200000003f;
                        fpu_val_7_52 - f25_1;

                        if (*(&((fpu_val_7_52 < f25_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_52, f25_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_52 == f25_1 ? 1 : 0) << 0xe) + 1) & 0x41)
                            context = 0x3e4ccccd;

                        int32_t data_19 = *source_2;
                        SoundSys_StopSoundSample(data_19, data_19 + 0x18, &item_18, item_40_2, &item_24, context);
                    }
                    else if (!*(*source_2 + 0xc0))
                    {
                        long double fpu_val_7_42 = item_3c;
                        long double f21_1 = 0.0f;
                        fpu_val_7_42 - f21_1;
                        int32_t* data_15;

                        data_15 = *(&((fpu_val_7_42 < f21_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_42, f21_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_42 == f21_1 ? 1 : 0) << 0xe) + 1) & 0x41 ? nullptr : 1;

                        int32_t item_70_1 = context;
                        float item_74_1 = item_40_1;
                        Weapon_UpdateRecoil_7(dest_val, i, item_18, item_14_1, item_10_1, item_24, item_20_1, item_1c_1,
                            data_15);
                    }

                    void* temp_11 = *source_2;
                    i += 1;
                    source_2 = &source_2[1];
                    *(temp_11 + 0x34) = 0;
                } while (i < dest_val[0x27]);
            }
        }
    }

    void* result = dest_val[0x245];

    if (*(result + 0x9c) <= 0)
        return result;

    Display_ClearSurfaces_18(result, &dest_val[0x146]);
    void* data_21 = dest_val[0x245];
    int32_t temp_12 = 0;
    temp_12 = *(data_21 + 0x1c);
    return (*((temp_12 << 2) + &g_a982e0))(data_21, 0);
}
