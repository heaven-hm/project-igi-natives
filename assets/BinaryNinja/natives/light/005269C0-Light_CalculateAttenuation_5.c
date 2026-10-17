// Original IGI.EXE function: Light_CalculateAttenuation_5 (VA 0x005269C0; static CFG gate PASS, CFG score 0.976).
#include "Light_CalculateAttenuation_5.h"
int32_t* Light_CalculateAttenuation_5(float context)

{
    float source_val = context;
    DynObj_UpdateDynTree_11(*(source_val + 0x20));
    int32_t* item_64_1;
    int32_t* item_60_1;
    int32_t* item_5c_3;
    char item_58_5;
    char item_54_7;
    int32_t* data_14;
    int32_t* entity_4;
    int32_t* temp_5;
    int32_t dest_7;
    int32_t* dest_9;

    if (!QTask_DeleteTask_2(source_val, g_a83d4c))
    {
        temp_5 = *(source_val + 0x48);
        data_14 = source_val + 0x30;
        entity_4 = source_val + 0x3c;
        dest_9 = source_val + 0x24;
        *data_14 = 0;
        memset(source_val + 0x34, 0, 0x14);
        *dest_9 = 0;
        *(source_val + 0x28) = 0;
        *(source_val + 0x2c) = 0x3f800000;

        if (temp_5)
        {
        label_526e79:
            *temp_5 = *dest_9;
            temp_5[1] = dest_9[1];
            dest_7 = dest_9[2];
        label_526e84:
            temp_5[2] = dest_7;
            int32_t* temp_21 = *(source_val + 0x48) + 0xc;
            *temp_21 = *data_14;
            temp_21[1] = data_14[1];
            temp_21[2] = data_14[2];
            int32_t* temp_23 = *(source_val + 0x48) + 0x18;
            *temp_23 = *entity_4;
            temp_23[1] = entity_4[1];
            temp_23[2] = entity_4[2];
        label_526eb9:
            *(*(source_val + 0x48) + 0x24) = *(source_val + 0x4c);
            *(*(source_val + 0x48) + 0x25) = *(source_val + 0x4d);
            return DynObj_RemoveSymbol_12(*(source_val + 0x20));
        }

        temp_5 = *(source_val + 0x4d);
        item_54_7 = temp_5;
        temp_5 = *(source_val + 0x4c);
        item_58_5 = temp_5;
        item_5c_3 = entity_4;
        item_60_1 = data_14;
        item_64_1 = dest_9;
    }
    else
    {
        long double fpu_val_7_1 = *(source_val + 0x58);
        long double f0_1 = *(source_val + 0x54);
        fpu_val_7_1 - f0_1;

        if (*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            int32_t* data_19 = QTask_DeleteTask_2(source_val, g_a83d4c);
            *(source_val + 0x30) = data_19[0xd];
            *(source_val + 0x34) = data_19[0xe];
            *(source_val + 0x38) = data_19[0xf];
            int32_t* data_20 = &data_19[0xa];
            *(source_val + 0x3c) = data_19[0x10];
            *(source_val + 0x40) = data_19[0x11];
            *(source_val + 0x44) = data_19[0x12];
            *(source_val + 0x24) = *data_20;
            *(source_val + 0x28) = data_20[1];
            *(source_val + 0x2c) = data_20[2];
            int32_t* dest_14 = *(source_val + 0x48);

            if (dest_14)
            {
                *dest_14 = *data_20;
                dest_14[1] = data_20[1];
                dest_14[2] = data_20[2];
                int32_t* data_23 = *(source_val + 0x48) + 0xc;
                *data_23 = *(source_val + 0x30);
                data_23[1] = *(source_val + 0x34);
                data_23[2] = *(source_val + 0x38);
                int32_t* data_25 = *(source_val + 0x48) + 0x18;
                *data_25 = *(source_val + 0x3c);
                data_25[1] = *(source_val + 0x40);
                data_25[2] = *(source_val + 0x44);
                *(*(source_val + 0x48) + 0x24) = *(source_val + 0x4c);
                *(*(source_val + 0x48) + 0x25) = *(source_val + 0x4d);
                return DynObj_RemoveSymbol_12(*(source_val + 0x20));
            }

            data_20 = *(source_val + 0x4d);
            item_54_7 = data_20;
            data_20 = *(source_val + 0x4c);
            item_58_5 = data_20;
            item_5c_3 = source_val + 0x3c;
            item_60_1 = source_val + 0x30;
            item_64_1 = source_val + 0x24;
        }
        else
        {
            int32_t* i_4 = nullptr;
            int32_t* i_3 = nullptr;
            int32_t* i_2 = QTask_DeleteTask_2(source_val, g_a83d4c);
            int32_t* i = i_2;

            if (i)
            {
                do
                {
                    long double fpu_val_7_2 = i[0x14];
                    long double f1_1 = *(source_val + 0x5c);
                    fpu_val_7_2 - f1_1;
                    i_2 = (fpu_val_7_2 < f1_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe;

                    if (*(&i_2 + 1) & 0x40)
                    {
                        i_4 = i;
                        i_3 = i;
                        break;
                    }

                    long double fpu_val_7_3 = i[0x14];
                    long double f2_1 = *(source_val + 0x5c);
                    fpu_val_7_3 - f2_1;
                    i_2 = (fpu_val_7_3 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_3, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_3 == f2_1 ? 1 : 0) << 0xe;

                    if (*(&i_2 + 1) & 1)
                    {
                        if (i_4)
                        {
                            long double fpu_val_7_4 = i[0x14];
                            long double f4_1 = i_4[0x14];
                            fpu_val_7_4 - f4_1;
                            i_2 = (fpu_val_7_4 < f4_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_4, f4_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_4 == f4_1 ? 1 : 0) << 0xe;
                        }

                        if (!i_4 || !(*(&i_2 + 1) & 0x41))
                            i_4 = i;
                    }

                    long double fpu_val_7_5 = i[0x14];
                    long double f3_1 = *(source_val + 0x5c);
                    fpu_val_7_5 - f3_1;
                    i_2 = (fpu_val_7_5 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe;

                    if (!(*(&i_2 + 1) & 0x41))
                    {
                        if (i_3)
                        {
                            long double fpu_val_7_6 = i[0x14];
                            long double f5_1 = i_3[0x14];
                            fpu_val_7_6 - f5_1;
                            i_2 = (fpu_val_7_6 < f5_1 ? 1 : 0) << 8
                                | (FCMP_UO(fpu_val_7_6, f5_1) ? 1 : 0) << 0xa
                                | (fpu_val_7_6 == f5_1 ? 1 : 0) << 0xe;
                        }

                        if (!i_3 || *(&i_2 + 1) & 1)
                            i_3 = i;
                    }

                    i_2 = g_a83d4c;
                    i_2 = QTask_TriggerEvent_2(i, i_2);
                    i = i_2;
                } while (i);

                if (!i_4)
                    goto label_526a86;

                long double fpu_val_7_7;
                long double f6_1;

                if (i_3 && i_4 != i_3)
                {
                    fpu_val_7_7 = i_4[0x14];
                    f6_1 = i_3[0x14];
                    fpu_val_7_7 - f6_1;
                }

                if (!i_3 || i_4 == i_3 || *(&((fpu_val_7_7 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                {
                    data_14 = source_val + 0x30;
                    *data_14 = i_4[0xd];
                    data_14[1] = i_4[0xe];
                    data_14[2] = i_4[0xf];
                    entity_4 = source_val + 0x3c;
                    dest_9 = &i_4[0xa];
                    *entity_4 = i_4[0x10];
                    entity_4[1] = i_4[0x11];
                    entity_4[2] = i_4[0x12];
                    *(source_val + 0x24) = *dest_9;
                    *(source_val + 0x28) = dest_9[1];
                    *(source_val + 0x2c) = dest_9[2];
                    temp_5 = *(source_val + 0x48);

                    if (temp_5)
                        goto label_526e79;

                    goto label_526d3b;
                }

                int32_t* i_1 = i;
                context = (*(source_val + 0x5c) - i_4[0x14]) / (i_3[0x14] - i_4[0x14]);
                *(source_val + 0x30) = (i_3[0xd] - i_4[0xd]) * context + i_4[0xd];
                *(source_val + 0x34) = (i_3[0xe] - i_4[0xe]) * context + i_4[0xe];
                *(source_val + 0x38) = (i_3[0xf] - i_4[0xf]) * context + i_4[0xf];
                *(source_val + 0x3c) = (i_3[0x10] - i_4[0x10]) * context + i_4[0x10];
                *(source_val + 0x40) = (i_3[0x11] - i_4[0x11]) * context + i_4[0x11];
                *(source_val + 0x44) = (i_3[0x12] - i_4[0x12]) * context + i_4[0x12];
                long double fp0_1 =
                    Sys_DispatchOpcode_9(i_3[0xa] * i_4[0xa] + i_4[0xb] * i_3[0xb] + i_4[0xc] * i_3[0xc]);
                float item_3c_1 = -((i_3[0xc] * i_4[0xa] - i_3[0xa] * i_4[0xc]));
                long double fpu_val_7_47 = i_3[0xb] * i_4[0xa];
                long double fpu_val_6_12 = i_3[0xa] * i_4[0xb];
                float item_34 = i_3[0xc] * i_4[0xb] - i_4[0xc] * i_3[0xb];
                float item_30_1 = item_3c_1;
                float item_2c_1 = fpu_val_7_47 - fpu_val_6_12;
                float item_28;
                Sys_PopStack_12(&item_28, &item_34, fp0_1 * context);
                float item_24;
                float item_20;
                float temp_7 = item_20 * i_4[0xc] + item_24 * i_4[0xb] + item_28 * i_4[0xa];
                float item_1c;
                float item_18;
                float item_14;
                float item_3c_2 = item_14 * i_4[0xc] + item_18 * i_4[0xb] + item_1c * i_4[0xa];
                float item_c;
                float item_8;
                long double fpu_val_0_13 = item_8 * i_4[0xc] + item_c * i_4[0xb];
                float item_10;
                long double fpu_val_7_60 = item_10 * i_4[0xa];
                *(source_val + 0x24) = temp_7;
                *(source_val + 0x28) = item_3c_2;
                float item_38_2 = fpu_val_0_13 + fpu_val_7_60;
                *(source_val + 0x2c) = item_38_2;
                float* data_6 = *(source_val + 0x48);

                if (!data_6)
                {
                    temp_7 = *(source_val + 0x4d);
                    data_6 = *(source_val + 0x4c);
                    *(source_val + 0x48) = Render_TransformVertices_13(source_val + 0x24, source_val + 0x30, source_val + 0x3c, data_6, temp_7);
                    return DynObj_RemoveSymbol_12(*(source_val + 0x20));
                }

                *data_6 = temp_7;
                data_6[1] = item_3c_2;
                data_6[2] = item_38_2;
                float* entity_8 = *(source_val + 0x48) + 0xc;
                *entity_8 = *(source_val + 0x30);
                entity_8[1] = *(source_val + 0x34);
                entity_8[2] = *(source_val + 0x38);
                int32_t* data_13 = *(source_val + 0x48) + 0x18;
                *data_13 = *(source_val + 0x3c);
                data_13[1] = *(source_val + 0x40);
                data_13[2] = *(source_val + 0x44);
                goto label_526eb9;
            }

        label_526a86:
            data_14 = source_val + 0x30;
            *data_14 = i_3[0xd];
            data_14[1] = i_3[0xe];
            data_14[2] = i_3[0xf];
            entity_4 = source_val + 0x3c;
            *entity_4 = i_3[0x10];
            entity_4[1] = i_3[0x11];
            entity_4[2] = i_3[0x12];
            *(source_val + 0x24) = i_3[0xa];
            *(source_val + 0x28) = i_3[0xb];
            *(source_val + 0x2c) = i_3[0xc];
            temp_5 = *(source_val + 0x48);

            if (temp_5)
            {
                *temp_5 = i_3[0xa];
                temp_5[1] = i_3[0xb];
                dest_7 = i_3[0xc];
                goto label_526e84;
            }

        label_526d3b:
            temp_5 = *(source_val + 0x4d);
            item_54_7 = temp_5;
            temp_5 = *(source_val + 0x4c);
            item_58_5 = temp_5;
            item_5c_3 = entity_4;
            item_60_1 = data_14;
            item_64_1 = source_val + 0x24;
        }
    }
    *(source_val + 0x48) = Render_TransformVertices_13(item_64_1, item_60_1, item_5c_3, item_58_5, item_54_7);
    return DynObj_RemoveSymbol_12(*(source_val + 0x20));
}
