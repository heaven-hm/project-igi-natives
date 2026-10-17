// Original IGI.EXE function: Camera_UpdateTransform_34 (VA 0x004AFFB0; static CFG gate PASS, CFG score 1.000).
#include "Camera_UpdateTransform_34.h"
int32_t Camera_UpdateTransform_34(int32_t context, char* param_2)

{
    char* data_val = nullptr;
    char* entity_val = nullptr;
    int32_t item_410 = 0;
    int32_t dest_val = 1;
    int32_t item_40c = 0;

    if (!*param_2)
    {
        *context = 0;
        return 1;
    }

    do
    {
        char i_1 = *(entity_val + param_2);

        if (i_1 - 0x28 > 0x55)
            goto label_4b0083;

        int32_t context_2 = 0;
        context_2 = *(i_1 + &jump_table_4b01f0);
        int32_t item_414;
        char* item_404;
        int32_t item_400[0x100];

        switch (context_2)
        {
            case 0:
            {
                item_400[item_410] = data_val;
                item_410 += 1;
            label_4b0083:
                dest_val = 0;
                item_414 = 0;
            label_4b0089:
                data_val[context] = i_1;
                data_val = &data_val[1];
                entity_val = &entity_val[1];
                break;
            }
            case 1:
            {
                dest_val = 0;
                item_414 = 0;

                if (!item_410)
                    return 0;

                item_410 -= 1;
                goto label_4b0089;
            }
            case 2:
            {
                if (dest_val)
                    return 0;

            label_4b0180:
                dest_val = 1;
            label_4b0185:
                data_val[context] = i_1;
                data_val = &data_val[1];
                entity_val = &entity_val[1];
                item_414 = 0;
                break;
            }
            case 3:
            {
                if (dest_val)
                    return 0;

                if (!item_414)
                {
                    dest_val = 1;

                    if (*(entity_val + param_2 - 1) != 0x29)
                        goto label_4b0185;

                    void* temp_7 = item_400[item_410];
                    void* flagP7 = data_val - temp_7;

                    if (flagP7 > 0)
                    {
                        char* context_6 = &data_val[context];
                        char* item_414_1 = temp_7 + context;
                        void* item_408_1 = flagP7;
                        bool flag_3_1;

                        do
                        {
                            *context_6 = *item_414_1;
                            context_6 = &context_6[1];
                            item_414_1 = &item_414_1[1];
                            flag_3_1 = item_408_1 != 1;
                            item_408_1 -= 1;
                        } while (flag_3_1);
                    }

                    char* data_3 = data_val + flagP7;
                    item_414 = 0;
                    data_3[context] = 0x2a;
                    data_val = &data_3[1];
                    entity_val = &entity_val[1];
                }
                else
                {
                    char* i_3 = data_val - item_404;

                    if (i_3 > 0)
                    {
                        char* flagP5 = &item_404[context];
                        char* i_2 = i_3;
                        char* i;

                        do
                        {
                            *(i_3 + flagP5) = *flagP5;
                            flagP5 = &flagP5[1];
                            i = i_2;
                            i_2 -= 1;
                        } while (i != 1);
                    }

                    char* data_2 = data_val + i_3;
                    dest_val = 1;
                    item_414 = 0;
                    data_2[context] = 0x2a;
                    data_val = &data_2[1];
                    entity_val = &entity_val[1];
                }
                break;
            }
            case 4:
            {
                dest_val = 0;
                data_val[context] = i_1;
                data_val = &data_val[1];
                entity_val = &entity_val[1];
                item_414 = 0;
                i_1 = *(entity_val + param_2);
                goto label_4b0089;
            }
            case 5:
            {
                if (dest_val)
                    return 0;

                goto label_4b0180;
            }
            case 6:
            {
                item_404 = data_val;

                for (; i_1 != 0x5d; i_1 = *(entity_val + param_2))
                {
                    if (!i_1)
                        return 0;

                    if (i_1 == 0x2f || i_1 == 0x5c)
                    {
                        data_val[context] = i_1;
                        data_val = &data_val[1];
                        entity_val = &entity_val[1];
                    }

                    data_val = &data_val[1];
                    i_1 = *(entity_val + param_2);
                    entity_val = &entity_val[1];
                    data_val[context - 1] = i_1;
                }

                data_val = &data_val[1];
                item_414 = 1;
                char temp_4 = *(entity_val + param_2);
                entity_val = &entity_val[1];
                data_val[context - 1] = temp_4;
                dest_val = 0;
                break;
            }
            case 7:
            {
                dest_val = 0;

                if (item_410 || item_40c)
                    return 0;

                item_414 = 0;
                item_40c = 1;
                goto label_4b0089;
            }
            case 8:
            {
                dest_val = 0;

                if (!item_40c)
                    return 0;

                item_414 = 0;
                item_40c = 0;
                goto label_4b0089;
            }
            case 9:
            {
                goto label_4b0083;
            }
        }
    } while (*(entity_val + param_2));

    data_val[context] = 0;
    return 1;
}
