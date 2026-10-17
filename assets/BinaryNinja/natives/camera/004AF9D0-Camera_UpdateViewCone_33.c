// Original IGI.EXE function: Camera_UpdateViewCone_33 (VA 0x004AF9D0; static CFG gate FAIL, CFG score 0.778).
#include "Camera_UpdateViewCone_33.h"
int32_t Camera_UpdateViewCone_33(int32_t* context, int32_t* param_2, char* param_3)

{
    void item_a00;

    if (Camera_UpdateTransform_34(&item_a00, param_3))
    {
        int32_t source_1 = 0;
        int32_t item_b28;
        int32_t* item_b44_1 = &item_b28;
        item_b28 = 0;
        int32_t item_b30_1 = 0;
        int32_t item_b20_1 = 0;
        int32_t item_b04_1 = 0;
        int32_t item_b14_1 = 0xffffffff;
        Camera_ResetMatrix_33(param_2, item_b44_1);
        void* dest_1 = &item_a00;
        int32_t i = 0xffffffff;

        while (i)
        {
            bool flag_0_1 = 0 != *dest_1;
            dest_1 += 1;
            i -= 1;

            if (!flag_0_1)
                break;
        }

        int32_t context_1 = 0;
        int32_t item_b1c_1 = 0;

        if (~i - 1 <= 0)
        {
        label_4afe4a:
            void* data_38 = &context[source_1 * 5];
            *(data_38 + 8) = 0x100;
            *(data_38 + 0x10) = source_1;
            *(data_38 + 0xc) = source_1;
            return 1;
        }

        int32_t* entity_3 = context;
        void item_800;
        int32_t* item_b24_1 = &item_800;
        int32_t flagP1 = 1;
        int32_t* temp_1 = entity_3;
        void item_400;
        int32_t* item_b10_1 = &item_400;

        while (true)
        {
            int32_t dest_2 = *(&item_a00 + context_1) - 0x24;

            if (dest_2 > 0x59)
                goto label_4afe04;

            int32_t data_3 = 0;
            data_3 = lookup_table_4afea8[dest_2];
            int32_t item_b08;
            int32_t data_31;

            switch (data_3)
            {
                case 0:
                {
                    temp_1[2] = 0x4000;
                    temp_1[4] = 0xffffffff;
                    temp_1[3] = flagP1;
                    break;
                }
                case 1:
                {
                    int32_t entity_4 = item_b14_1;
                    temp_1[2] = 0x8000;
                    *item_b24_1 = entity_4;
                    temp_1[4] = 0xffffffff;
                    temp_1[3] = flagP1;
                    temp_1[1] = item_b04_1;
                    item_b14_1 = item_b04_1;
                    *item_b10_1 = source_1;
                    item_b04_1 += 1;
                    item_b30_1 += 1;
                    *temp_1 = entity_4;
                    item_b10_1 = &item_b10_1[1];
                    item_b24_1 = &item_b24_1[1];
                    break;
                }
                case 2:
                {
                    if (!item_b30_1)
                        return 0;

                    int32_t* data_13 = item_b10_1 - 4;
                    int32_t* entity_6 = item_b24_1 - 4;
                    item_b10_1 = data_13;
                    int32_t data_14 = *data_13;
                    item_b24_1 = entity_6;
                    int32_t entity_7 = *entity_6;
                    temp_1[1] = item_b14_1;
                    item_b14_1 = entity_7;
                    *temp_1 = entity_7;
                    item_b08 = data_14;
                    temp_1[2] = 0x10000;
                    temp_1[4] = 0xffffffff;
                    temp_1[3] = flagP1;
                    context[data_14 * 5 + 4] = flagP1;
                    item_b30_1 -= 1;
                    break;
                }
                case 3:
                {
                    if (flagP1 == 1)
                        return 0;

                    int32_t data_22 = temp_1[-3];
                    temp_1 -= 0x14;
                    source_1 -= 1;
                    flagP1 -= 1;

                    if (data_22 >= 0x100 && !(data_22 & 0x11000))
                        return 0;

                    if (!(data_22 & 0x10000))
                    {
                        temp_1[3] = source_1;
                        int32_t data_27 = temp_1[2];
                        *(&data_27 + 1) |= 2;
                        temp_1[2] = data_27;
                        temp_1[4] = flagP1;
                    }
                    else
                    {
                        temp_1[3] = item_b08;
                        entity_3[item_b08 * 5 + 2] |= 0x20000;
                        int32_t data_26 = temp_1[2];
                        *(&data_26 + 1) |= 2;
                        temp_1[2] = data_26;
                        temp_1[4] = flagP1;
                    }
                    break;
                }
                case 4:
                {
                    temp_1[2] = 0x1000;
                    temp_1[4] = 0xffffffff;
                    temp_1[3] = flagP1;
                    break;
                }
                case 5:
                {
                    context_1 += 1;
                label_4afe04:
                    data_31 = *(&item_a00 + context_1);
                label_4afe0c:
                    temp_1[2] = data_31;
                    temp_1[4] = 0xffffffff;
                    temp_1[3] = flagP1;
                    break;
                }
                case 6:
                {
                    if (flagP1 == 1)
                        return 0;

                    int32_t data_18 = temp_1[-3];
                    temp_1 -= 0x14;
                    source_1 -= 1;
                    flagP1 -= 1;

                    if (data_18 & 0x10000)
                        entity_3[item_b08 * 5 + 2] |= 0x20000;

                    temp_1[3] = flagP1;
                    temp_1[4] = flagP1;
                    temp_1[2] |= 0x40000;
                    break;
                }
                case 7:
                {
                    context_1 += 1;
                    char item_b00[0x9];
                    memset(&item_b00, 0, 0x100);
                    int32_t item_b18_1 = 0;
                    int32_t item_b2c_1 = context_1;

                    if (*(&item_a00 + context_1) == 0x7e)
                    {
                        context_1 += 1;
                        item_b18_1 = 1;
                        item_b2c_1 = context_1;
                    }

                    char i_1 = *(&item_a00 + context_1);

                    while (i_1 != 0x5d)
                    {
                        if (context_1 >= ~i - 1)
                            return 0;

                        void item_9ff;

                        if (i_1 == 0x5c)
                        {
                            int32_t dest_6 = *(&item_9ff + context_1);
                            context_1 += 1;

                            if (dest_6 > 0x74)
                                item_b00[dest_6] = 1;
                            else
                            {
                                int32_t entity_11 = 0;
                                entity_11 = lookup_table_4aff18[dest_6];

                                switch (entity_11)
                                {
                                    case 0:
                                    {
                                        return 0;
                                        break;
                                    }
                                    case 1:
                                    {
                                        char item_af6_1 = 1;
                                        break;
                                    }
                                    case 2:
                                    {
                                        char item_af3_1 = 1;
                                        break;
                                    }
                                    case 3:
                                    {
                                        char item_af7_1 = 1;
                                        break;
                                    }
                                    case 4:
                                    {
                                        item_b00[dest_6] = 1;
                                        break;
                                    }
                                }
                            }
                        }
                        else if (i_1 == 0x2f)
                        {
                            int32_t data_29 = *(&item_9ff + context_1);
                            context_1 += 1;
                            item_b00[data_29] = 1;
                        }
                        else if (*(&item_9ff + context_1) != 0x2d)
                            item_b00[i_1] = 1;
                        else
                        {
                            char item_9fe[0x1fe];
                            int32_t entity_12 = item_9fe[context_1];
                            context_1 += 2;
                            int32_t i_4 = i_1;

                            if (i_4 >= entity_12)
                                return 0;

                            source_1 = item_b1c_1;
                            int32_t saved_target;
                            memset(
                                memset(&saved_target + i_4 + 0x40, 0x1010101,
                                    (entity_12 - i_4 + 1) & 0xfffffffc),
                                1, (entity_12 - i_4 + 1) & 3);
                        }

                        i_1 = *(&item_9ff + context_1);
                        context_1 += 1;
                        item_b2c_1 = context_1;
                    }

                    if (item_b18_1)
                    {
                        for (int32_t i_2 = 0; i_2 < 0x100; i_2 += 1)
                            item_b00[i_2] = !item_b00[i_2];

                        source_1 = item_b1c_1;
                    }

                    int32_t dest_9 = item_b28;
                    data_31 = 0;

                    if (dest_9 > 0)
                    {
                        int32_t* dest_10 = param_2;
                        int32_t* item_b18_2 = dest_10;

                        do
                        {
                            int32_t i_3 = 0x40;
                            char (* source_3)[0x9] = &item_b00;
                            bool flag_6_1 = true;

                            while (i_3)
                            {
                                int32_t f0_1 = *source_3;
                                int32_t f1_1 = *dest_10;
                                flag_6_1 = f0_1 == f1_1;
                                source_3 = &(*source_3)[4];
                                dest_10 = &dest_10[1];
                                i_3 -= 1;

                                if (f0_1 != f1_1)
                                    break;
                            }

                            if (flag_6_1)
                                break;

                            data_31 += 1;
                            dest_10 = &item_b18_2[0x40];
                            item_b18_2 = dest_10;
                        } while (data_31 < item_b28);

                        if (data_31 >= 0x20)
                            return 0;

                        context_1 = item_b2c_1;
                        source_1 = item_b1c_1;
                        dest_9 = item_b28;
                    }

                    if (data_31 == dest_9)
                    {
                        memcpy(&param_2[dest_9 * 0x40], &item_b00, 0x100);
                        source_1 = item_b1c_1;
                        item_b28 += 1;
                    }

                    *(&data_31 + 1) |= 0x10;
                    goto label_4afe0c;
                }
                case 8:
                {
                    temp_1[2] = 0x2000;
                    temp_1[4] = 0xffffffff;
                    temp_1[3] = flagP1;
                    break;
                }
                case 9:
                {
                    if (item_b20_1)
                        return 0;

                    if (item_b30_1)
                        return 0;

                    temp_1[2] = 0x400;
                    temp_1[4] = flagP1;
                    temp_1[3] = flagP1;
                    item_b20_1 = 1;
                    break;
                }
                case 0xa:
                {
                    if (item_b20_1 != 1)
                        return 0;

                    if (item_b30_1)
                        return 0;

                    temp_1[2] = 0x800;
                    temp_1[4] = flagP1;
                    temp_1[3] = flagP1;
                    item_b20_1 = 0;
                    break;
                }
                case 0xb:
                {
                    goto label_4afe04;
                }
            }

            context_1 += 1;
            source_1 += 1;
            flagP1 += 1;
            temp_1 = &temp_1[5];
            item_b1c_1 = source_1;

            if (context_1 >= ~i - 1)
                break;

            entity_3 = context;
        }

        if (!item_b20_1 && !item_b30_1)
            goto label_4afe4a;
    }

    return 0;
}
