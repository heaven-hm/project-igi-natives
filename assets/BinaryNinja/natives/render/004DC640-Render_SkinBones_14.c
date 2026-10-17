// Original IGI.EXE function: Render_SkinBones_14 (VA 0x004DC640; static CFG gate PASS, CFG score 1.000).
#include "Render_SkinBones_14.h"
int32_t* Render_SkinBones_14(float context, int32_t* param_2, int32_t* param_3)

{
    void* data_val = *(context + 0x148);

    if (data_val)
    {
        int32_t* data_1 = *(data_val + 8);

        if (*data_1 && data_1)
        {
            int32_t item_18;
            Sys_FreeMemory_2(&item_18, 0x10, 0x3e8, 0);
            int32_t* i = context;
            int32_t* item_14;
            int32_t i_2;
            int32_t item_8;
            int32_t* item_4;

            if (context)
            {
                do
                {
                    void* entity_5 = *(*(*i[0x1b] + 0xc) + 0xc);
                    int32_t* data_10 = item_14[i_2] * item_8 + item_18;
                    *(item_4 + data_10) = i_2;
                    i_2 += 1;
                    *data_10 = *(entity_5 + 0x50);
                    data_10[1] = *(entity_5 + 0x54);
                    data_10[2] = *(entity_5 + 0x58);
                    data_10[3] = *(entity_5 + 0x5c);
                    void* data_5 = i[0x3a];

                    if (data_5)
                        Render_TransformVertices_14(&item_18, data_5);

                    if (i != context)
                    {
                        i = *i;

                        if (!i)
                            break;

                        if (!*i)
                            break;
                    }
                    else
                    {
                        void* source_3 = i[0x52];

                        if (!source_3)
                            break;

                        i = *(source_3 + 8);

                        if (!*i)
                            break;
                    }
                } while (i);
            }

            int32_t i_1 = i_2;
            int32_t* dest_1 = item_14;

            if (i_1 > 1)
            {
                int32_t* context_4 = param_2;
                int32_t* flagP3 = param_2;

                do
                {
                    context = 3.40282347e+38.0f;
                    int32_t item_54_1 = 0;
                    long double fpu_val_7_5;
                    long double f3_1;

                    if (i_1 > 0)
                    {
                        int32_t* item_50_1 = dest_1;
                        bool flag_1_1;

                        do
                        {
                            int32_t data_12 = 0;
                            int32_t* item_58_1 = dest_1;
                            int32_t item_4c_1 = 0;

                            do
                            {
                                if (item_54_1 != data_12)
                                {
                                    int32_t* entity_9 = item_8 * *item_50_1 + item_18;
                                    int32_t* temp_14 = *item_58_1 * item_8 + item_18;
                                    long double fpu_val_7_2 = temp_14[2] - entity_9[2];
                                    long double fpu_val_6_2 = temp_14[1] - entity_9[1];
                                    long double fpu_val_5_2 = *temp_14 - *entity_9;
                                    long double fpu_val_4_5 = sqrtl(fpu_val_5_2 * fpu_val_5_2
                                        + fpu_val_6_2 * fpu_val_6_2 + fpu_val_7_2 * fpu_val_7_2);
                                    long double f2_1 = context;
                                    fpu_val_4_5 - f2_1;

                                    if (*(&((fpu_val_4_5 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_4_5, f2_1) ? 1 : 0) << 0xa
                                        | (fpu_val_4_5 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    {
                                        context = fpu_val_4_5;
                                        context_4 = entity_9;
                                        flagP3 = temp_14;
                                    }
                                }

                                data_12 = item_4c_1 + 1;
                                item_4c_1 = data_12;
                                item_58_1 = &item_58_1[1];
                            } while (data_12 < i_1);

                            flag_1_1 = item_54_1 + 1 < i_1;
                            item_54_1 += 1;
                            item_50_1 = &item_50_1[1];
                        } while (flag_1_1);
                        fpu_val_7_5 = context;
                        f3_1 = 0.0f;
                        fpu_val_7_5 - f3_1;
                    }

                    if (i_1 <= 0 || !(*(&((fpu_val_7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        long double fpu_val_7_9 = context + flagP3[3];
                        long double f0_1 = context_4[3];
                        fpu_val_7_9 - f0_1;
                        int32_t* data_19;

                        if (!(*(&((fpu_val_7_9 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_9, f0_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double fpu_val_7_11 = context + context_4[3];
                            long double f1_1 = flagP3[3];
                            fpu_val_7_11 - f1_1;

                            if (!(*(&((fpu_val_7_11 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_11, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_11 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                float item_30_1 = *flagP3 - *context_4;
                                float item_48_1 = item_30_1;
                                float item_3c_1 = item_30_1;
                                float item_2c_1 = flagP3[1] - context_4[1];
                                float item_28_1 = flagP3[2] - context_4[2];
                                long double fpu_val_7_18 = item_28_1;
                                long double fpu_val_6_5 = item_2c_1;
                                long double fpu_val_5_4 = item_30_1;
                                long double fpu_val_4_10 = sqrtl(fpu_val_5_4 * fpu_val_5_4
                                    + fpu_val_6_5 * fpu_val_6_5 + fpu_val_7_18 * fpu_val_7_18);
                                long double fpu_val_6_8 = context_4[3] / fpu_val_4_10;
                                float item_48_4 = -((item_30_1 * fpu_val_6_8)) + *context_4;
                                float item_44_4 = -((item_2c_1 * fpu_val_6_8)) + context_4[1];
                                float item_40_2 = -((fpu_val_6_8 * item_28_1)) + context_4[2];
                                long double fpu_val_7_20 = flagP3[3] / fpu_val_4_10;
                                float item_3c_3 = item_30_1 * fpu_val_7_20 + *flagP3;
                                float item_38_3 = item_2c_1 * fpu_val_7_20 + flagP3[1];
                                long double fpu_val_7_22 = fpu_val_7_20 * item_28_1 + flagP3[2];
                                float item_24_1 = (item_3c_3 - item_48_4) * 0.5f + item_48_4;
                                *context_4 = item_24_1;
                                float item_20_1 = (item_38_3 - item_44_4) * 0.5f + item_44_4;
                                context_4[1] = item_20_1;
                                float item_1c_1 = (fpu_val_7_22 - item_40_2) * 0.5f + item_40_2;
                                long double fpu_val_7_23 = fpu_val_7_22 - item_1c_1;
                                context_4[2] = item_1c_1;
                                long double fpu_val_6_33 = item_38_3 - item_20_1;
                                long double fpu_val_5_19 = item_3c_3 - item_24_1;
                                context_4[3] = sqrtl(fpu_val_5_19 * fpu_val_5_19 + fpu_val_6_33 * fpu_val_6_33
                                    + fpu_val_7_23 * fpu_val_7_23);
                                int32_t** temp_31 = item_4;
                                i_1 = i_2 - 1;
                                data_19 = *(temp_31 + flagP3);
                                i_2 = i_1;

                                if (data_19 == i_1)
                                    dest_1 = item_14;
                                else
                                {
                                    int32_t* source_17 = item_14[i_1] * item_8 + item_18;
                                    int32_t dest_9 = item_14[data_19];
                                    int32_t temp_32 = *(source_17 + temp_31);
                                    item_14[data_19] = item_14[temp_32];
                                    item_14[temp_32] = dest_9;
                                    *(source_17 + item_4) = data_19;
                                    i_1 = i_2;
                                    dest_1 = item_14;
                                }
                            }
                            else
                            {
                                i_1 -= 1;
                                data_19 = *(context_4 + item_4);
                                i_2 = i_1;

                                if (data_19 != i_1)
                                {
                                    int32_t* source_13 = dest_1[i_1] * item_8 + item_18;
                                    int32_t temp_26 = dest_1[data_19];
                                    int32_t entity_17 = *(source_13 + item_4);
                                    dest_1[data_19] = dest_1[entity_17];
                                    item_14[entity_17] = temp_26;
                                    *(source_13 + item_4) = data_19;
                                    i_1 = i_2;
                                    dest_1 = item_14;
                                }
                            }
                        }
                        else
                        {
                            i_1 -= 1;
                            data_19 = *(item_4 + flagP3);
                            i_2 = i_1;

                            if (data_19 != i_1)
                            {
                                int32_t temp_22 = dest_1[data_19];
                                int32_t* source_10 = dest_1[i_1] * item_8 + item_18;
                                int32_t entity_13 = *(source_10 + item_4);
                                dest_1[data_19] = dest_1[entity_13];
                                item_14[entity_13] = temp_22;
                                *(source_10 + item_4) = data_19;
                                i_1 = i_2;
                                dest_1 = item_14;
                            }
                        }
                    }
                    else
                    {
                        long double fpu_val_7_6 = context_4[3];
                        long double fpu_val_6_4 = flagP3[3];
                        fpu_val_6_4 - fpu_val_7_6;
                        long double fpu_val_7_7;

                        if (!(*(&((fpu_val_6_4 < fpu_val_7_6 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_4, fpu_val_7_6) ? 1 : 0) << 0xa
                                | (fpu_val_6_4 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
                            fpu_val_7_7 = flagP3[3];
                        else
                            fpu_val_7_7 = context_4[3];

                        context_4[3] = fpu_val_7_7;
                        i_1 = i_2 - 1;
                        int32_t entity_10 = *(item_4 + flagP3);
                        i_2 = i_1;

                        if (entity_10 == i_1)
                            dest_1 = item_14;
                        else
                        {
                            int32_t* source_7 = item_14[i_1] * item_8 + item_18;
                            int32_t dest_3 = item_14[entity_10];
                            int32_t temp_20 = *(source_7 + item_4);
                            item_14[entity_10] = item_14[temp_20];
                            item_14[temp_20] = dest_3;
                            *(source_7 + item_4) = entity_10;
                            i_1 = i_2;
                            dest_1 = item_14;
                        }
                    }
                } while (i_1 > 1);
            }

            int32_t* data_27 = *dest_1 * item_8 + item_18;
            *param_2 = *data_27;
            param_2[1] = data_27[1];
            param_2[2] = data_27[2];
            *param_3 = data_27[3];
            int32_t data_28 = *(data_27 + item_4);
            int32_t item_10 = i_1 - 1;

            if (data_28 != i_1 - 1)
            {
                int32_t* source_21 = dest_1[i_1 - 1] * item_8 + item_18;
                int32_t temp_36 = dest_1[data_28];
                int32_t entity_28 = *(source_21 + item_4);
                dest_1[data_28] = dest_1[entity_28];
                item_14[entity_28] = temp_36;
                *(source_21 + item_4) = data_28;
            }

            return Sys_OpenFileStream_2(&item_18);
        }
    }

    int32_t* data_29 = *(context + 0x6c);

    if (!data_29)
        return data_29;

    void* data_3 = *(*(*data_29 + 0xc) + 0xc);
    *param_2 = *(data_3 + 0x50);
    param_2[1] = *(data_3 + 0x54);
    param_2[2] = *(data_3 + 0x58);
    int32_t data_4 = *(data_3 + 0x78);
    *param_3 = data_4;
    return data_4;
}
