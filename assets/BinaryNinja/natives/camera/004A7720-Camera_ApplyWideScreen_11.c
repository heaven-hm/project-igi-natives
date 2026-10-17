// Original IGI.EXE function: Camera_ApplyWideScreen_11 (VA 0x004A7720; static CFG gate PASS, CFG score 0.964).
#include "Camera_ApplyWideScreen_11.h"
int32_t Camera_ApplyWideScreen_11(int32_t* context, char* param_2)

{
    int32_t source_val = 0;
    char context_val = *param_2;
    char* dest_1 = &param_2[1];
    int32_t* j_1 = nullptr;
    int32_t i = 0;
    param_2 = dest_1;

    if (context_val)
    {
        int32_t item_14;
        int32_t entity_1 = item_14;

        while (i >= 0)
        {
            int32_t data_2;

            if (context_val < 0x20 || context_val > 0x78)
                data_2 = 0;
            else
            {
                int32_t data_1 = context_val;
                data_1 = g_534650[0x10][data_1];
                data_2 = data_1 & 0xf;
            }

            int32_t data_4 = *(source_val + (data_2 << 3) + 0x534680) >> 4;
            int32_t item_34_1 = data_4;
            int32_t item_38;
            int32_t item_2c;
            int32_t item_28;
            int32_t item_24;
            int32_t* item_20;
            int16_t* item_8;
            void* arg_c;

            switch (data_4)
            {
                case 0:
                {
                    goto label_4a78c5;
                }
                case 1:
                {
                    item_14 = 0xffffffff;
                    item_38 = 0;
                    item_2c = 0;
                    item_24 = 0;
                    item_20 = nullptr;
                    item_8 = nullptr;
                    item_28 = 0;
                    break;
                }
                case 2:
                {
                    int32_t data_5 = context_val;

                    if (data_5 == 0x20)
                        item_8 |= 2;
                    else if (data_5 == 0x23)
                        item_8 |= 0x80;
                    else if (data_5 == 0x2b)
                        item_8 |= 1;
                    else if (data_5 == 0x2d)
                        item_8 |= 4;
                    else if (data_5 == 0x30)
                        item_8 |= 8;
                    break;
                }
                case 3:
                {
                    if (context_val != 0x2a)
                        item_24 = context_val + item_24 * 0xa - 0x30;
                    else
                    {
                        int32_t data_12 = Camera_UpdateTransform_12(&arg_c);
                        item_24 = data_12;

                        if (data_12 < 0)
                        {
                            item_8 |= 4;
                            item_24 = -(data_12);
                        }
                    }
                    break;
                }
                case 4:
                {
                    item_14 = 0;
                    break;
                }
                case 5:
                {
                    if (context_val != 0x2a)
                        item_14 = context_val + entity_1 * 0xa - 0x30;
                    else
                    {
                        int32_t data_16 = Camera_UpdateTransform_12(&arg_c);
                        item_14 = data_16;

                        if (data_16 < 0)
                            item_14 = 0xffffffff;
                    }
                    break;
                }
                case 6:
                {
                    if (context_val == 0x49)
                    {
                        if (*dest_1 != 0x36 || dest_1[1] != 0x34)
                        {
                            item_34_1 = 0;
                        label_4a78c5:
                            item_28 = 0;

                            if (*(&(**&g_544070)[context_val] + 1) & 0x80)
                            {
                                Camera_ApplyPostProcess_11(context_val, context, &i);
                                context_val = *dest_1;
                                param_2 = &dest_1[1];
                            }

                            Camera_ApplyPostProcess_11(context_val, context, &i);
                        }
                        else
                        {
                            *(&item_8 + 1) |= 0x80;
                            param_2 = &dest_1[2];
                        }
                    }
                    else if (context_val == 0x68)
                        item_8 |= 0x20;
                    else if (context_val == 0x6c)
                        item_8 |= 0x10;
                    else if (context_val == 0x77)
                        *(&item_8 + 1) |= 8;
                    break;
                }
                case 7:
                {
                    int32_t data_22 = context_val;
                    char item_1a;
                    char* item_c;
                    int32_t* j_4;

                    if (data_22 > 0x67)
                    {
                        int32_t item_30;
                        int32_t item_10;

                        if (data_22 == 0x69)
                        {
                        label_4a7c05:
                            item_8 |= 0x40;
                        label_4a7c09:
                            item_10 = 0xa;
                        label_4a7c14:
                            int32_t data_55;
                            int32_t temp_3;

                            if (*(&item_8 + 1) & 0x80)
                                data_55 = Camera_SetFieldOfView_12(&arg_c);
                            else if (!(item_8 & 0x20))
                            {
                                void** item_25c_15 = &arg_c;

                                if (!(item_8 & 0x40))
                                {
                                    data_55 = Camera_UpdateTransform_12(item_25c_15);
                                    temp_3 = 0;
                                }
                                else
                                    temp_3 = HIGHD(Camera_UpdateTransform_12(item_25c_15));
                                    data_55 = LOWD(Camera_UpdateTransform_12(item_25c_15));
                            }
                            else
                            {
                                void** item_25c_14 = &arg_c;
                                int32_t data_57;

                                if (!(item_8 & 0x40))
                                    data_57 = Camera_UpdateTransform_12(item_25c_14);
                                else
                                    data_57 = Camera_UpdateTransform_12(item_25c_14);

                                temp_3 = HIGHD(data_57);
                                data_55 = LOWD(data_57);
                            }

                            int32_t source_4;
                            int32_t dest_6;

                            if (!(item_8 & 0x40) || temp_3 > 0 || (temp_3 >= 0 && data_55 >= 0))
                            {
                                source_4 = data_55;
                                dest_6 = temp_3;
                            }
                            else
                            {
                                source_4 = -(data_55);
                                *(&item_8 + 1) |= 1;
                                dest_6 = -((temp_3 + 0));
                            }

                            if (!(*(&item_8 + 1) & 0x80))
                                dest_6 = 0;

                            if (item_14 >= 0)
                                item_8 &= 0xfffffff7;
                            else
                                item_14 = 1;

                            if (!(source_4 | dest_6))
                                item_20 = nullptr;

                            void item_4d;
                            char* item_c_1 = &item_4d;

                            while (true)
                            {
                                int32_t data_62 = item_14;
                                item_14 -= 1;

                                if (data_62 <= 0 && !(source_4 | dest_6))
                                    break;

                                int32_t data_66;
                                uint32_t temp_6;
                                temp_6 = HIGHD(item_10);
                                data_66 = LOWD(item_10);
                                int32_t context_2 = __aullrem(source_4, dest_6, data_66, temp_6) + 0x30;
                                uint32_t data_68;
                                int32_t temp_7;
                                data_68 = __aulldiv(source_4, dest_6, data_66, temp_6);
                                source_4 = data_68;
                                dest_6 = temp_7;

                                if (context_2 > 0x39)
                                    context_2 += item_30;

                                char* data_69 = item_c_1;
                                item_c_1 -= 1;
                                *data_69 = context_2;
                            }

                            int32_t* j_5 = &item_4d - item_c_1;
                            item_c = &item_c_1[1];
                            j_1 = j_5;

                            if (!(*(&item_8 + 1) & 2) || (*item_c == 0x30 && j_5))
                                goto label_4a7d2a;

                            item_c -= 1;
                            j_4 = j_5 + 1;
                            *item_c = 0x30;
                            goto label_4a7d27;
                        }

                        if (data_22 != 0x6e)
                        {
                            int32_t data_47 = data_22 - 0x6f;

                            if (data_22 == 0x6f)
                            {
                                item_10 = 8;

                                if (item_8 & 0x80)
                                    *(&item_8 + 1) |= 2;

                                goto label_4a7c14;
                            }

                            if (data_47 == 1)
                            {
                                item_14 = 8;
                            label_4a7b9f:
                                item_30 = 7;
                            label_4a7baa:
                                item_10 = 0x10;

                                if (item_8 & 0x80)
                                {
                                    item_1a = 0x30;
                                    item_20 = 2;
                                    char item_19_1 = item_30 + 0x51;
                                }

                                goto label_4a7c14;
                            }

                            if (data_47 != 4)
                            {
                                if (data_47 == 6)
                                    goto label_4a7c09;

                                if (data_47 != 9)
                                    goto label_4a7d2a;

                                item_30 = 0x27;
                                goto label_4a7baa;
                            }

                        label_4a794d:
                            int32_t source_1 = item_14;

                            if (source_1 == 0xffffffff)
                                source_1 = 0x7fffffff;

                            int16_t* entity_7 = Camera_UpdateTransform_12(&arg_c);
                            item_c = entity_7;

                            if (!(item_8 & 0x810))
                            {
                                if (!entity_7)
                                {
                                    entity_7 = g_544068;
                                    item_c = entity_7;
                                }

                                int16_t* data_52 = entity_7;

                                while (true)
                                {
                                    int32_t temp_2 = source_1;
                                    source_1 -= 1;

                                    if (!temp_2)
                                        break;

                                    if (!*data_52)
                                        break;

                                    data_52 += 1;
                                }

                                j_4 = data_52 - entity_7;
                            }
                            else
                            {
                                if (!entity_7)
                                {
                                    entity_7 = g_54406c;
                                    item_c = entity_7;
                                }

                                item_28 = 1;
                                int16_t* data_30 = entity_7;

                                while (true)
                                {
                                    int32_t temp_1 = source_1;
                                    source_1 -= 1;

                                    if (!temp_1)
                                        break;

                                    if (!*data_30)
                                        break;

                                    data_30 = &data_30[1];
                                }

                                j_4 = (data_30 - entity_7) >> 1;
                            }

                            goto label_4a7d27;
                        }

                        int16_t* data_54 = Camera_UpdateTransform_12(&arg_c);

                        if (!(item_8 & 0x20))
                            *data_54 = i;
                        else
                            *data_54 = i;

                        item_2c = 1;
                    }
                    else
                    {
                        if (data_22 >= 0x65)
                            goto label_4a79ae;

                        char* item_25c_8;
                        char item_24c;

                        if (data_22 <= 0x58)
                        {
                            if (data_22 == 0x58)
                                goto label_4a7b9f;

                            if (data_22 == 0x43)
                            {
                                if (!(item_8 & 0x830))
                                    *(&item_8 + 1) |= 8;

                                goto label_4a79e4;
                            }

                            if (data_22 != 0x45 && data_22 != 0x47)
                            {
                                if (data_22 != 0x53)
                                    goto label_4a7d2a;

                                if (!(item_8 & 0x830))
                                    *(&item_8 + 1) |= 8;

                                goto label_4a794d;
                            }

                            item_38 = 1;
                            context_val += 0x20;
                        label_4a79ae:
                            item_8 |= 0x40;
                            char* dest_5 = &item_24c;
                            item_c = &item_24c;

                            if (entity_1 < 0)
                                item_14 = 6;
                            else if (!entity_1 && context_val == 0x67)
                                item_14 = 1;

                            void* data_42 = arg_c + 8;
                            arg_c = data_42;
                            int32_t item_4c = *(data_42 - 8);
                            int32_t item_48_1 = *(data_42 - 4);
                            g_544050(&item_4c, &item_24c, context_val, item_14, item_38);
                            void* source_3 = item_8 & 0x80;

                            if (source_3 && !item_14)
                                g_54405c(&item_24c);

                            if (context_val == 0x67 && !source_3)
                                g_544054(&item_24c);

                            if (item_24c == 0x2d)
                            {
                                *(&item_8 + 1) |= 1;
                                void item_24b;
                                dest_5 = &item_24b;
                                item_c = &item_24b;
                            }

                            item_25c_8 = dest_5;
                            goto label_4a7b20;
                        }

                        if (data_22 != 0x5a)
                        {
                            if (data_22 != 0x63)
                            {
                                if (data_22 == 0x64)
                                    goto label_4a7c05;

                                goto label_4a7d2a;
                            }

                        label_4a79e4:
                            int32_t* item_25c_6 = &arg_c;

                            if (!(item_8 & 0x810))
                            {
                                item_24c = Camera_UpdateTransform_12(item_25c_6);
                                j_1 = 1;
                            }
                            else
                            {
                                BOOL j_3 = Camera_UpdateViewCone_26(&item_24c, Camera_ApplyLineFilter_12(item_25c_6));
                                j_1 = j_3;

                                if (j_3 < 0)
                                    item_2c = 1;
                            }

                            item_c = &item_24c;
                            goto label_4a7d2a;
                        }

                        int16_t* data_37 = Camera_UpdateTransform_12(&arg_c);
                        char* entity_10;

                        if (data_37)
                            entity_10 = *(data_37 + 4);

                        if (!data_37 || !entity_10)
                        {
                            char* data_40 = g_544068;
                            item_c = data_40;
                            item_25c_8 = data_40;
                        label_4a7b20:
                            j_4 = Camera_UpdateViewCone_20(item_25c_8);
                        label_4a7d27:
                            j_1 = j_4;
                            goto label_4a7d2a;
                        }

                        if (!(*(&item_8 + 1) & 8))
                        {
                            item_28 = 0;
                            item_c = entity_10;
                            j_4 = *data_37;
                            goto label_4a7d27;
                        }

                        item_c = entity_10;
                        j_1 = *data_37 >> 1;
                        item_28 = 1;
                    label_4a7d2a:

                        if (!item_2c)
                        {
                            if (item_8 & 0x40)
                            {
                                if (*(&item_8 + 1) & 1)
                                {
                                    item_1a = 0x2d;
                                    item_20 = 1;
                                }
                                else if (item_8 & 1)
                                {
                                    item_1a = 0x2b;
                                    item_20 = 1;
                                }
                                else if (item_8 & 2)
                                {
                                    item_1a = 0x20;
                                    item_20 = 1;
                                }
                            }

                            int32_t* source_7 = item_24 - item_20 - j_1;

                            if (!(item_8 & 0xc))
                                Camera_UpdateViewCone_11(0x20, source_7, context, &i);

                            Camera_ResetMatrix_11(&item_1a, item_20, context, &i);

                            if (item_8 & 8 && !(item_8 & 4))
                                Camera_UpdateViewCone_11(0x30, source_7, context, &i);

                            if (!item_28 || j_1 <= 0)
                                Camera_ResetMatrix_11(item_c, j_1, context, &i);
                            else
                            {
                                int32_t* j = j_1;
                                int16_t* context_3 = item_c;
                                int32_t* j_2 = j - 1;

                                do
                                {
                                    j = *context_3;
                                    context_3 = &context_3[1];
                                    void item_3c;
                                    BOOL data_70 = Camera_UpdateViewCone_26(&item_3c, j);

                                    if (data_70 <= 0)
                                        break;

                                    Camera_ResetMatrix_11(&item_3c, data_70, context, &i);
                                    j = j_2;
                                    j_2 -= 1;
                                } while (j);
                            }

                            if (item_8 & 4)
                                Camera_UpdateViewCone_11(0x20, source_7, context, &i);
                        }
                    }
                    break;
                }
            }

            context_val = *param_2;
            dest_1 = &param_2[1];
            param_2 = dest_1;

            if (!context_val)
                break;

            entity_1 = item_14;
            source_val = item_34_1;
        }
    }

    return i;
}
