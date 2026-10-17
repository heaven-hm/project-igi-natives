// Original IGI.EXE function: Render_ClipMesh_15 (VA 0x004DF500; static CFG gate PASS, CFG score 1.000).
#include "Render_ClipMesh_15.h"
int32_t* Render_ClipMesh_15(float context, int32_t* param_2, int32_t* param_3)

{
    void* data_val = *(context + 0x148);

    if (data_val)
    {
        int32_t* data_1 = *(data_val + 8);

        if (*data_1 && data_1)
        {
            int32_t item_18;
            Sys_FreeMemory_2(&item_18, 0x10, 0x3e8, 0);
            void* data_5 = *(context + 0x148);
            int32_t* item_14;
            int32_t i_2;
            int32_t item_8;
            int32_t* item_4;

            if (data_5)
            {
                int32_t* i = *(data_5 + 8);

                if (*i && i)
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
                        data_5 = i[0x3a];

                        if (data_5)
                            Render_TransformVertices_14(&item_18, data_5);

                        i = *i;

                        if (!i)
                            break;

                        if (!*i)
                            break;
                    } while (i);
                }
            }

            int32_t i_1 = i_2;
            int32_t* dest_4 = item_14;

            if (i_1 > 1)
            {
                int32_t* context_3 = param_2;
                int32_t* flagP1 = param_2;

                do
                {
                    context = 3.40282347e+38.0f;
                    int32_t item_54_1 = 0;
                    long double fpu_val_7_5;
                    long double f3_1;

                    if (i_1 > 0)
                    {
                        int32_t* item_50_1 = dest_4;
                        bool flag_2_1;

                        do
                        {
                            int32_t data_12 = 0;
                            int32_t* item_58_1 = dest_4;
                            int32_t item_4c_1 = 0;

                            do
                            {
                                if (item_54_1 != data_12)
                                {
                                    int32_t* entity_9 = *item_50_1 * item_8 + item_18;
                                    int32_t* temp_13 = *item_58_1 * item_8 + item_18;
                                    long double fpu_val_7_2 = temp_13[2] - entity_9[2];
                                    long double fpu_val_6_2 = temp_13[1] - entity_9[1];
                                    long double fpu_val_5_2 = *temp_13 - *entity_9;
                                    long double fpu_val_4_5 = sqrtl(fpu_val_5_2 * fpu_val_5_2
                                        + fpu_val_6_2 * fpu_val_6_2 + fpu_val_7_2 * fpu_val_7_2);
                                    long double f2_1 = context;
                                    fpu_val_4_5 - f2_1;

                                    if (*(&((fpu_val_4_5 < f2_1 ? 1 : 0) << 8
                                        | (FCMP_UO(fpu_val_4_5, f2_1) ? 1 : 0) << 0xa
                                        | (fpu_val_4_5 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                                    {
                                        context = fpu_val_4_5;
                                        context_3 = entity_9;
                                        flagP1 = temp_13;
                                    }
                                }

                                data_12 = item_4c_1 + 1;
                                item_4c_1 = data_12;
                                item_58_1 = &item_58_1[1];
                            } while (data_12 < i_1);

                            flag_2_1 = item_54_1 + 1 < i_1;
                            item_54_1 += 1;
                            item_50_1 = &item_50_1[1];
                        } while (flag_2_1);
                        fpu_val_7_5 = context;
                        f3_1 = 0.0f;
                        fpu_val_7_5 - f3_1;
                    }

                    if (i_1 <= 0 || !(*(&((fpu_val_7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                    {
                        long double fpu_val_7_9 = context + flagP1[3];
                        long double f0_1 = context_3[3];
                        fpu_val_7_9 - f0_1;
                        int32_t* data_20;

                        if (!(*(&((fpu_val_7_9 < f0_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_9, f0_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_9 == f0_1 ? 1 : 0) << 0xe) + 1) & 1))
                        {
                            long double fpu_val_7_11 = context + context_3[3];
                            long double f1_1 = flagP1[3];
                            fpu_val_7_11 - f1_1;

                            if (!(*(&((fpu_val_7_11 < f1_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_11, f1_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_11 == f1_1 ? 1 : 0) << 0xe) + 1) & 1))
                            {
                                float item_30_1 = *flagP1 - *context_3;
                                float item_48_1 = item_30_1;
                                float item_3c_1 = item_30_1;
                                float item_2c_1 = flagP1[1] - context_3[1];
                                float item_28_1 = flagP1[2] - context_3[2];
                                long double fpu_val_7_18 = item_28_1;
                                long double fpu_val_6_5 = item_2c_1;
                                long double fpu_val_5_4 = item_30_1;
                                long double fpu_val_4_10 = sqrtl(fpu_val_5_4 * fpu_val_5_4
                                    + fpu_val_6_5 * fpu_val_6_5 + fpu_val_7_18 * fpu_val_7_18);
                                long double fpu_val_6_8 = context_3[3] / fpu_val_4_10;
                                float item_48_4 = -((item_30_1 * fpu_val_6_8)) + *context_3;
                                float item_44_4 = -((item_2c_1 * fpu_val_6_8)) + context_3[1];
                                float item_40_2 = -((fpu_val_6_8 * item_28_1)) + context_3[2];
                                long double fpu_val_7_20 = flagP1[3] / fpu_val_4_10;
                                float item_3c_3 = item_30_1 * fpu_val_7_20 + *flagP1;
                                float item_38_3 = item_2c_1 * fpu_val_7_20 + flagP1[1];
                                long double fpu_val_7_22 = fpu_val_7_20 * item_28_1 + flagP1[2];
                                float item_24_1 = (item_3c_3 - item_48_4) * 0.5f + item_48_4;
                                *context_3 = item_24_1;
                                float item_20_1 = (item_38_3 - item_44_4) * 0.5f + item_44_4;
                                context_3[1] = item_20_1;
                                float item_1c_1 = (fpu_val_7_22 - item_40_2) * 0.5f + item_40_2;
                                long double fpu_val_7_23 = fpu_val_7_22 - item_1c_1;
                                context_3[2] = item_1c_1;
                                long double fpu_val_6_33 = item_38_3 - item_20_1;
                                long double fpu_val_5_19 = item_3c_3 - item_24_1;
                                context_3[3] = sqrtl(fpu_val_5_19 * fpu_val_5_19 + fpu_val_6_33 * fpu_val_6_33
                                    + fpu_val_7_23 * fpu_val_7_23);
                                int32_t** temp_30 = item_4;
                                i_1 = i_2 - 1;
                                data_20 = *(temp_30 + flagP1);
                                i_2 = i_1;

                                if (data_20 == i_1)
                                    dest_4 = item_14;
                                else
                                {
                                    int32_t* source_16 = item_14[i_1] * item_8 + item_18;
                                    int32_t dest_12 = item_14[data_20];
                                    int32_t temp_31 = *(source_16 + temp_30);
                                    item_14[data_20] = item_14[temp_31];
                                    item_14[temp_31] = dest_12;
                                    *(source_16 + item_4) = data_20;
                                    i_1 = i_2;
                                    dest_4 = item_14;
                                }
                            }
                            else
                            {
                                i_1 -= 1;
                                data_20 = *(context_3 + item_4);
                                i_2 = i_1;

                                if (data_20 != i_1)
                                {
                                    int32_t* source_12 = dest_4[i_1] * item_8 + item_18;
                                    int32_t temp_25 = dest_4[data_20];
                                    int32_t entity_17 = *(source_12 + item_4);
                                    dest_4[data_20] = dest_4[entity_17];
                                    item_14[entity_17] = temp_25;
                                    *(source_12 + item_4) = data_20;
                                    i_1 = i_2;
                                    dest_4 = item_14;
                                }
                            }
                        }
                        else
                        {
                            i_1 -= 1;
                            data_20 = *(item_4 + flagP1);
                            i_2 = i_1;

                            if (data_20 != i_1)
                            {
                                int32_t temp_21 = dest_4[data_20];
                                int32_t* source_9 = dest_4[i_1] * item_8 + item_18;
                                int32_t entity_13 = *(source_9 + item_4);
                                dest_4[data_20] = dest_4[entity_13];
                                item_14[entity_13] = temp_21;
                                *(source_9 + item_4) = data_20;
                                i_1 = i_2;
                                dest_4 = item_14;
                            }
                        }
                    }
                    else
                    {
                        long double fpu_val_7_6 = context_3[3];
                        long double fpu_val_6_4 = flagP1[3];
                        fpu_val_6_4 - fpu_val_7_6;
                        long double fpu_val_7_7;

                        if (!(*(&((fpu_val_6_4 < fpu_val_7_6 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_6_4, fpu_val_7_6) ? 1 : 0) << 0xa
                                | (fpu_val_6_4 == fpu_val_7_6 ? 1 : 0) << 0xe) + 1) & 1))
                            fpu_val_7_7 = flagP1[3];
                        else
                            fpu_val_7_7 = context_3[3];

                        context_3[3] = fpu_val_7_7;
                        i_1 = i_2 - 1;
                        int32_t entity_10 = *(item_4 + flagP1);
                        i_2 = i_1;

                        if (entity_10 == i_1)
                            dest_4 = item_14;
                        else
                        {
                            int32_t* source_6 = item_14[i_1] * item_8 + item_18;
                            int32_t dest_6 = item_14[entity_10];
                            int32_t temp_19 = *(source_6 + item_4);
                            item_14[entity_10] = item_14[temp_19];
                            item_14[temp_19] = dest_6;
                            *(source_6 + item_4) = entity_10;
                            i_1 = i_2;
                            dest_4 = item_14;
                        }
                    }
                } while (i_1 > 1);
            }

            int32_t* data_28 = *dest_4 * item_8 + item_18;
            *param_2 = *data_28;
            param_2[1] = data_28[1];
            param_2[2] = data_28[2];
            *param_3 = data_28[3];
            int32_t data_29 = *(data_28 + item_4);
            int32_t item_10 = i_1 - 1;

            if (data_29 != i_1 - 1)
            {
                int32_t* source_20 = dest_4[i_1 - 1] * item_8 + item_18;
                int32_t temp_35 = dest_4[data_29];
                int32_t entity_28 = *(source_20 + item_4);
                dest_4[data_29] = dest_4[entity_28];
                item_14[entity_28] = temp_35;
                *(source_20 + item_4) = data_29;
            }

            return Sys_OpenFileStream_2(&item_18);
        }
    }

    int32_t* data_30 = *(context + 0x6c);

    if (!data_30)
        return data_30;

    void* data_3 = *(*(*data_30 + 0xc) + 0xc);
    *param_2 = *(data_3 + 0x50);
    param_2[1] = *(data_3 + 0x54);
    param_2[2] = *(data_3 + 0x58);
    int32_t data_4 = *(data_3 + 0x5c);
    *param_3 = data_4;
    return data_4;
}
