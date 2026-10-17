// Original IGI.EXE function: Menu_RequestScreen_13 (VA 0x00423AC0; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_13.h"
int32_t Menu_RequestScreen_13(int32_t context, float param_2)

{
    int32_t dest_val = *(context + 0x354);
    int32_t result = dest_val + 0xa;
    int32_t item_1c = (g_c28b48 >> 1) + *(context + 0x24) - 0xf0;
    int32_t result_1 = result;

    if (dest_val < result)
    {
        int32_t* entity_2 = context + (dest_val << 2) + 0x154;
        int32_t* item_18_1 = entity_2;
        float item_10_1 = param_2 * 0.5f;
        long double fpu_val_7_3 = (g_c28b44 >> 1) + *(context + 0x20) - 0x140;
        context = fpu_val_7_3;

        while (true)
        {
            int32_t* data_4 = entity_2[-0x40];
            int32_t* source_1 = *entity_2;

            if (data_4 && source_1)
            {
                int32_t temp_2 = data_4[9];
                data_4[5] = 0;
                data_4[7] = 0;
                data_4[1] = context + 4.0f;
                data_4[6] = 0x43000000;
                data_4[9] = temp_2 | 0x80000;
                data_4[4] = param_2;
                long double fpu_val_7_8 = item_1c + 5.0f;
                data_4[2] = fpu_val_7_8;
                Sys_CloseFileStream_18(data_4);
                source_1[9] |= 0x80000;
                source_1[5] = 0x43000000;
                source_1[6] = 0x42aa0000;
                source_1[1] = context + 214.0f;
                source_1[7] = 0;
                source_1[4] = param_2;
                source_1[2] = fpu_val_7_8;
                Sys_CloseFileStream_18(source_1);
            }

            float item_14_1 = 16.0f;
            int32_t context_2 = dest_val & 1;

            if (!context_2)
                item_14_1 = 32.0f;

            float item_c_2 = item_1c;
            Sys_ExecuteBytecode_14(context, item_c_2, 210.0f, 20.0f, 0.0f, item_14_1, 0.0f, item_10_1, 0x80000, 0);
            float item_10_2 = 32.0f;

            if (!context_2)
                item_10_2 = 48.0f;

            Sys_ExecuteBytecode_14(fpu_val_7_3 + 210.0f, item_c_2, 150.0f, 20.0f, 0.0f, item_10_2, 0.0f, item_10_1, 0x80000, 0);
            result = result_1;
            dest_val += 1;
            item_1c += 0x14;
            item_18_1 = &item_18_1[1];

            if (dest_val >= result)
                break;

            entity_2 = item_18_1;
        }
    }

    return result;
}
