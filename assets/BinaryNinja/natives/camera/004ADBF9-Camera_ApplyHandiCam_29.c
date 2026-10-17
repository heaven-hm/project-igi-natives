// Original IGI.EXE function: Camera_ApplyHandiCam_29 (VA 0x004ADBF9; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyHandiCam_29.h"
int32_t Camera_ApplyHandiCam_29(int16_t* context, char** param_2, int32_t param_3, int32_t param_4, int32_t param_5, int32_t param_6, int32_t param_7)

{
    int32_t context_val;
    int32_t item_64 = context_val;
    char* i_20 = param_3;
    void item_60;
    char* item_10 = &item_60;
    int32_t data_val = 0;
    int32_t temp_val = 1;
    int16_t item_2c = 0;
    int32_t item_1c = 1;
    int32_t item_8 = 0;
    int32_t item_14 = 0;
    int32_t item_28 = 0;
    int32_t item_24 = 0;
    int32_t item_30 = 0;
    int32_t item_34 = 0;
    int32_t item_20 = 0;
    int32_t item_c = 0;
    int32_t result = 0;
    param_3 = i_20;

    while (true)
    {
        int32_t i_14;
        i_14 = *i_20;

        if (i_14 != 0x20 && i_14 != 9 && i_14 != 0xa && i_14 != 0xd)
        {
            while (true)
            {
                char i = *i_20;
                i_20 = &i_20[1];
                int32_t item_70_1;

                switch (data_val)
                {
                    case 0:
                    {
                        if (i >= 0x31 && i <= 0x39)
                        {
                        label_4adc6d:
                            item_70_1 = 3;
                        label_4ade91:
                            data_val = item_70_1;
                            i_20 -= 1;
                            continue;
                        }
                        else if (i != g_544280)
                        {
                            int32_t i_1 = i;

                            if (i_1 == 0x2b)
                            {
                                item_2c = 0;
                                data_val = 2;
                                continue;
                            }
                            else if (i_1 == 0x2d)
                            {
                                item_2c = -0x8000;
                                data_val = 2;
                                continue;
                            }
                            else
                            {
                                if (i_1 != 0x30)
                                {
                                    i_20 -= 1;
                                    break;
                                }

                                data_val = 1;
                                continue;
                            }
                        }
                        else
                        {
                        label_4adc7c:
                            data_val = 5;
                            continue;
                        }
                        break;
                    }
                    case 1:
                    {
                        item_14 = 1;

                        if (i >= 0x31 && i <= 0x39)
                            goto label_4adc6d;

                        if (i == g_544280)
                        {
                            data_val = 4;
                            continue;
                        }
                        else if (i == 0x2b || i == 0x2d)
                        {
                        label_4add01:
                            i_20 -= 1;
                            data_val = 0xb;
                            continue;
                        }
                        else if (i == 0x30)
                        {
                            data_val = 1;
                            continue;
                        }
                        else
                        {
                        label_4adcda:

                            if (i <= 0x43 || (i > 0x45 && (i <= 0x63 || i > 0x65)))
                            {
                                i_20 -= 1;
                                break;
                            }

                            data_val = 6;
                            continue;
                        }
                        break;
                    }
                    case 2:
                    {
                        if (i >= 0x31 && i <= 0x39)
                            goto label_4adc6d;

                        if (i == g_544280)
                            goto label_4adc7c;

                        if (i != 0x30)
                        {
                            i_20 = param_3;
                            break;
                        }

                        data_val = 1;
                        continue;
                    }
                    case 3:
                    {
                        item_14 = 1;

                        while (true)
                        {
                            BOOL data_5;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_3 = i;
                                i_3 = *(i_14 + (i_3 << 1));
                                data_5 = i_3 & 4;
                            }
                            else
                            {
                                uint32_t i_2 = i;
                                uint32_t i_15 = i_2;
                                data_5 = Camera_ApplyBandFilter_12(i_2, 1, i_14, 4);
                                i_14 = 4;
                                temp_val = 1;
                            }

                            if (!data_5)
                                break;

                            if (item_8 >= 0x19)
                                item_c += 1;
                            else
                            {
                                char* data_6 = item_10;
                                item_8 += 1;
                                item_10 = &item_10[1];
                                *data_6 = i - 0x30;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        if (i == g_544280)
                        {
                            data_val = 4;
                            continue;
                        }

                    label_4addee:

                        if (i == 0x2b || i == 0x2d)
                            goto label_4add01;

                        goto label_4adcda;
                    }
                    case 4:
                    {
                        item_14 = 1;
                        item_28 = 1;

                        if (!item_8)
                        {
                            while (i == 0x30)
                            {
                                item_c -= 1;
                                i = *i_20;
                                i_20 = &i_20[1];
                            }
                        }

                        while (true)
                        {
                            BOOL data_7;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_5 = i;
                                i_5 = *(i_14 + (i_5 << 1));
                                data_7 = i_5 & 4;
                            }
                            else
                            {
                                uint32_t i_4 = i;
                                uint32_t i_16 = i_4;
                                data_7 = Camera_ApplyBandFilter_12(i_4, 1, i_14, 4);
                                i_14 = 4;
                                temp_val = 1;
                            }

                            if (!data_7)
                                break;

                            if (item_8 < 0x19)
                            {
                                char* data_8 = item_10;
                                item_8 += 1;
                                item_10 = &item_10[1];
                                item_c -= 1;
                                *data_8 = i - 0x30;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        goto label_4addee;
                    }
                    case 5:
                    {
                        item_28 = 1;
                        BOOL data_9;

                        if (g_54427c <= 1)
                        {
                            i_14 = g_544070;
                            uint32_t i_7 = i;
                            i_7 = *(i_14 + (i_7 << 1));
                            data_9 = i_7 & 4;
                        }
                        else
                        {
                            uint32_t i_6 = i;
                            uint32_t i_17 = i_6;
                            data_9 = Camera_ApplyBandFilter_12(i_6, 1, i_14, 4);
                            i_14 = 4;
                            temp_val = 1;
                        }

                        if (!data_9)
                        {
                            i_20 = param_3;
                            break;
                        }

                        data_val = 4;
                        i_20 -= 1;
                        continue;
                    }
                    case 6:
                    {
                        i_14 = &i_20[0xfffffffe];
                        param_3 = i_14;

                        if (i >= 0x31 && i <= 0x39)
                        {
                        label_4ade8f:
                            item_70_1 = 9;
                            goto label_4ade91;
                        }

                        int32_t i_8 = i;

                        if (i_8 == 0x2b)
                            goto label_4adec7;

                        if (i_8 == 0x2d)
                            goto label_4adebb;

                        if (i_8 == 0x30)
                            goto label_4ade60;

                        i_20 = i_14;
                        break;
                        break;
                    }
                    case 7:
                    {
                        if (i >= 0x31 && i <= 0x39)
                            goto label_4ade8f;

                        if (i != 0x30)
                        {
                            i_20 = param_3;
                            break;
                        }

                    label_4ade60:
                        data_val = 8;
                        continue;
                    }
                    case 8:
                    {
                        item_24 = 1;

                        while (i == 0x30)
                        {
                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        if (i >= 0x31 && i <= 0x39)
                            goto label_4ade8f;

                        i_20 -= 1;
                        break;
                        break;
                    }
                    case 9:
                    {
                        item_24 = 1;
                        int32_t source_1 = 0;

                        while (true)
                        {
                            BOOL data_17;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_11 = i;
                                i_11 = *(i_14 + (i_11 << 1));
                                data_17 = i_11 & 4;
                            }
                            else
                            {
                                uint32_t i_10 = i;
                                uint32_t i_18 = i_10;
                                data_17 = Camera_ApplyBandFilter_12(i_10, temp_val, i_14, 4);
                                i_14 = 4;
                            }

                            if (!data_17)
                                break;

                            i_14 = i;
                            source_1 = i_14 + source_1 * 0xa - 0x30;

                            if (source_1 > 0x1450)
                            {
                                source_1 = 0x1451;
                                break;
                            }

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        item_20 = source_1;

                        while (true)
                        {
                            BOOL data_19;

                            if (g_54427c <= 1)
                            {
                                i_14 = g_544070;
                                uint32_t i_13 = i;
                                i_13 = *(i_14 + (i_13 << 1));
                                data_19 = i_13 & 4;
                            }
                            else
                            {
                                uint32_t i_12 = i;
                                uint32_t i_19 = i_12;
                                data_19 = Camera_ApplyBandFilter_12(i_12, temp_val, i_14, 4);
                                i_14 = 4;
                            }

                            if (!data_19)
                                break;

                            i = *i_20;
                            i_20 = &i_20[1];
                        }

                        i_20 -= 1;
                        break;
                        break;
                    }
                    case 0xb:
                    {
                        if (!param_7)
                        {
                            i_20 -= 1;
                            data_val = 0xa;
                        }
                        else
                        {
                            int32_t i_9 = i;
                            i_14 = &i_20[0xffffffff];
                            param_3 = i_14;

                            if (i_9 == 0x2b)
                            {
                            label_4adec7:
                                data_val = 7;
                                continue;
                            }
                            else
                            {
                                if (i_9 != 0x2d)
                                {
                                    i_20 = i_14;
                                    break;
                                }

                            label_4adebb:
                                item_1c = 0xffffffff;
                                data_val = 7;
                                continue;
                            }
                        }
                        break;
                    }
                }

                if (data_val == 0xa)
                    break;
            }

            *param_2 = i_20;
            int16_t data_25;
            int16_t temp_1;
            int32_t context_1;
            int32_t source_2;

            if (!item_14)
            {
                temp_1 = 0;
                data_25 = 0;
                source_2 = 0;
                context_1 = 0;
                result = 4;
            }
            else
            {
                char* data_22;

                if (item_8 <= 0x18)
                    data_22 = item_10;
                else
                {
                    char item_49;

                    if (item_49 >= 5)
                        char item_49_1 = item_49 + 1;

                    item_8 = 0x18;
                    data_22 = item_10 - 1;
                    item_c += 1;
                }

                if (item_8 <= 0)
                {
                    temp_1 = 0;
                    data_25 = 0;
                    source_2 = 0;
                    context_1 = 0;
                }
                else
                {
                    while (true)
                    {
                        data_22 -= 1;

                        if (*data_22)
                            break;

                        item_8 -= 1;
                        item_c += 1;
                    }

                    int32_t item_44;
                    Camera_ApplyBandFilter_29(&item_60, item_8, &item_44);
                    int32_t data_23 = item_20;

                    if (item_1c < 0)
                        data_23 = -(data_23);

                    int32_t data_24 = data_23 + item_c;

                    if (!item_24)
                        data_24 += param_5;

                    if (!item_28)
                        data_24 -= param_6;

                    if (data_24 <= 0x1450)
                    {
                        if (data_24 < 0xffffebb0)
                        {
                            item_34 = 1;
                            goto label_4adff8;
                        }

                        Camera_UpdateViewCone_29(&item_44, data_24, param_4);
                        temp_1 = item_44;
                        context_1 = *(&item_44 + 2);
                        int32_t item_3e;
                        source_2 = item_3e;
                        int16_t item_3a;
                        data_25 = item_3a;
                    }
                    else
                    {
                        item_30 = 1;
                    label_4adff8:
                        context_1 = param_3;
                        source_2 = param_3;
                        data_25 = param_3;
                        temp_1 = param_3;
                    }
                }

                if (item_30)
                {
                    context_1 = 0;
                    data_25 = 0x7fff;
                    source_2 = 0x80000000;
                    temp_1 = 0;
                    result = 2;
                }
                else if (item_34)
                {
                    temp_1 = 0;
                    data_25 = 0;
                    source_2 = 0;
                    context_1 = 0;
                    result = 1;
                }
            }

            *(context + 6) = source_2;
            *(context + 2) = context_1;
            context[5] = data_25 | item_2c;
            *context = temp_1;
            return result;
        }

        i_20 = &i_20[1];
    }
}
