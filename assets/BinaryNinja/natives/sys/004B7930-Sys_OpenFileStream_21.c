// Original IGI.EXE function: Sys_OpenFileStream_21 (VA 0x004B7930; static CFG gate PASS, CFG score 1.000).
#include "Sys_OpenFileStream_21.h"
int32_t Sys_OpenFileStream_21(float context, float param_2, float param_3, float param_4, float param_5, float param_6, int32_t param_7, int32_t param_8, int32_t param_9, int32_t param_10)

{
    int32_t* context_val = context;
    int32_t* dest_val = context_val[2];
    int32_t data_val = Sys_CloseFileStream_17(dest_val);
    int32_t data_1 = Sys_ExecuteBytecode_17(dest_val);
    float item_20 = param_3;
    int32_t data_3 = *context_val;
    int32_t source_val = 0;

    if (!data_3)
    {
        int32_t entity_1 = 0;
        int32_t item_18_1 = 0;
        param_3 = 0.0f;

        if (*(context_val + 6) > 0)
        {
            int32_t source_2 = param_9 & 0x80;
            int32_t item_10_1 = source_2;
            int32_t data_15;

            do
            {
                if (source_2)
                {
                    int32_t data_5;
                    int32_t temp_2;
                    temp_2 = HIGHD(*(context_val[3] + (entity_1 << 1)));
                    data_5 = LOWD(*(context_val[3] + (entity_1 << 1)));
                    context = param_2 - ((data_5 - temp_2) >> 1);
                }
                else if (!(param_9 & 0x100))
                    context = param_2;
                else
                    context = param_2 - *(context_val[3] + (entity_1 << 1));

                int32_t item_1c_1 = 0;

                if (context_val[1] > 0)
                {
                    bool flag_6_1;

                    do
                    {
                        char data_8 = *(param_3 + context_val + 0x10);

                        if (data_8)
                        {
                            Sys_AllocateMemory_15(dest_val, context, item_20, param_4, param_5, param_6, param_7, param_8, data_8 - 1,
                                param_9, param_10);
                            entity_1 = item_18_1;
                        }

                        context = data_val + context;
                        param_3 += 1;
                        flag_6_1 = item_1c_1 + 1 < context_val[1];
                        item_1c_1 += 1;
                    } while (flag_6_1);
                    source_2 = item_10_1;
                }

                data_15 = *(context_val + 6);
                entity_1 += 1;
                item_18_1 = entity_1;
                item_20 = data_1 + item_20;
            } while (entity_1 < data_15);

            return data_15;
        }
    }
    else if (data_3 == 1)
    {
        data_3 = Sys_DispatchOpcode_17(dest_val);
        int32_t item_14_1 = data_3;
        int32_t item_18_2 = 0;
        param_3 = 0.0f;

        if (*(context_val + 6) > 0)
        {
            int32_t entity_5 = param_9;
            int32_t flagP3 = entity_5 & 0x80;
            int32_t item_10_2 = flagP3;

            do
            {
                if (flagP3)
                {
                    int32_t data_17;
                    int32_t temp_9;
                    temp_9 = HIGHD(*(context_val[3] + (source_val << 1)));
                    data_17 = LOWD(*(context_val[3] + (source_val << 1)));
                    context = param_2 - ((data_17 - temp_9) >> 1);
                }
                else if (!(*(&entity_5 + 1) & 1))
                    context = param_2;
                else
                    context = param_2 - *(context_val[3] + (source_val << 1));

                float item_1c_2 = 0.0f;

                if (context_val[1] > 0)
                {
                    bool flag_7_1;

                    do
                    {
                        char data_20 = *(param_3 + context_val + 0x10);

                        if (!data_20)
                            context = item_14_1 + context;
                        else
                        {
                            uint32_t source_5 = data_20 - 1;
                            Sys_AllocateMemory_15(dest_val, context, item_20, param_4, param_5, param_6, param_7, param_8, source_5,
                                entity_5, param_10);
                            source_val = item_18_2;
                            entity_5 = param_9;
                            context = *(dest_val[2] + source_5 * 0x24 + 0x10) + context;
                        }

                        param_3 += 1;
                        flag_7_1 = item_1c_2 + 1 < context_val[1];
                        item_1c_2 += 1;
                    } while (flag_7_1);
                    flagP3 = item_10_2;
                }

                data_3 = *(context_val + 6);
                source_val += 1;
                item_18_2 = source_val;
                item_20 = data_1 + item_20;
            } while (source_val < data_3);
        }
    }

    return data_3;
}
