// Original IGI.EXE function: Config_NoD3DDriversWithHard (VA 0x00405980; static CFG gate FAIL, CFG score 0.733).
#include "Config_NoD3DDriversWithHard.h"
int32_t Config_NoD3DDriversWithHard()

{
    int32_t result = g_bc2380;
    int32_t* context_val;
    int32_t* item_18 = context_val;
    int32_t result_1 = 0;

    if (result > 0)
    {
        int32_t* temp_1 = &g_bc2394;
        int32_t* item_c_1 = &g_bc2394;

        while (true)
        {
            int32_t flagP1 = g_567c90;

            if (!flagP1)
            {
                Error_Show("No D3D drivers with hardware acceleration found.");

                while (true)
                    /* nop */
            }
            else
            {
                int32_t item_14_1 = 0;
                int32_t entity_10;

                if (flagP1 <= 0)
                {
                label_405a07:
                    int32_t dest_2 = 0x567d18;
                    int32_t i = 0xffffffff;

                    while (i)
                    {
                        bool flag_2_1 = 0 != *dest_2;
                        dest_2 += 1;
                        i -= 1;

                        if (!flag_2_1)
                            break;
                    }

                    int32_t entity_2 = ~i;
                    int32_t source_3;
                    int32_t dest_5;
                    dest_5 = memcpy(temp_1 + 0x113, dest_2 - entity_2, entity_2 & 0xfffffffc);
                    memcpy(dest_5, source_3, entity_2 & 3);
                    void* dest_6 = &g_567c98;
                    int32_t i_1 = 0xffffffff;

                    while (i_1)
                    {
                        bool flag_3_1 = 0 != *dest_6;
                        dest_6 += 1;
                        i_1 -= 1;

                        if (!flag_3_1)
                            break;
                    }

                    int32_t entity_6 = ~i_1;
                    int32_t source_5;
                    int32_t dest_9;
                    dest_9 = memcpy(temp_1 + 0x13, dest_6 - entity_6, entity_6 & 0xfffffffc);
                    memcpy(dest_9, source_5, entity_6 & 3);
                    entity_10 = 0;
                }
                else
                {
                    char* dest_1 = &g_567c98;

                    while (true)
                    {
                        char* source_1 = dest_1;
                        char* data_val = temp_1 + 0x13;
                        int32_t data_2;

                        while (true)
                        {
                            char context_1 = *data_val;
                            char f1_1 = *source_1;
                            bool c_1 = context_1 < f1_1;

                            if (context_1 == f1_1)
                            {
                                if (!context_1)
                                {
                                    data_2 = 0;
                                    break;
                                }

                                context_1 = data_val[1];
                                char f4_1 = source_1[1];
                                c_1 = context_1 < f4_1;

                                if (context_1 == f4_1)
                                {
                                    data_val = &data_val[2];
                                    source_1 = &source_1[2];

                                    if (context_1)
                                        continue;

                                    data_2 = 0;
                                    break;
                                }
                            }

                            data_2 = data_val - data_val + 1;
                            break;
                        }

                        if (!data_2)
                        {
                            entity_10 = item_14_1;
                            break;
                        }

                        dest_1 = &dest_1[0x404];
                        bool flag_5_1 = item_14_1 + 1 < flagP1;
                        item_14_1 += 1;

                        if (!flag_5_1)
                            goto label_405a07;
                    }
                }

                context_val = nullptr;
                int32_t data_12 = entity_10 * 0x404;
                int32_t dest_10 = 0x7fffffff;
                int32_t* source_6 = data_12 + 0x567d98;
                int32_t data_13 = *(data_12 + &g_568098);

                if (data_13 > 0)
                {
                    int32_t item_14_2 = data_13;
                    bool flag_6_1;

                    do
                    {
                        int32_t data_16;
                        int32_t temp_2;
                        temp_2 = HIGHD(source_6[2] - temp_1[2]);
                        data_16 = LOWD(source_6[2] - temp_1[2]);
                        int32_t data_19;
                        int32_t temp_4;
                        temp_4 = HIGHD(source_6[1] - temp_1[1]);
                        data_19 = LOWD(source_6[1] - temp_1[1]);
                        int32_t data_24;
                        int32_t temp_5;
                        temp_5 = HIGHD(*source_6 - *temp_1);
                        data_24 = LOWD(*source_6 - *temp_1);
                        int32_t entity_17 = (((data_16 ^ temp_2) - temp_2) << 0x18) + (data_19 ^ temp_4)
                            - temp_4 + (data_24 ^ temp_5) - temp_5;

                        if (entity_17 < dest_10)
                        {
                            context_val = source_6;
                            dest_10 = entity_17;
                        }

                        source_6 = &source_6[3];
                        flag_6_1 = item_14_2 != 1;
                        item_14_2 -= 1;
                    } while (flag_6_1);
                    temp_1 = item_c_1;
                }

                int32_t data_29 = context_val[1];
                *temp_1 = *context_val;
                int32_t entity_19 = context_val[2];
                temp_1[1] = data_29;
                temp_1[2] = entity_19;
                result = result_1 + 1;
                temp_1 = &temp_1[0x159];
                result_1 = result;
                item_c_1 = temp_1;

                if (result >= g_bc2380)
                    break;
            }
        }
    }

    return result;
}
