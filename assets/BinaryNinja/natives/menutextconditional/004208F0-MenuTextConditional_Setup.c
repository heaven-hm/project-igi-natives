// Original IGI.EXE function: MenuTextConditional_Setup (VA 0x004208F0; static CFG gate PASS, CFG score 1.000).
#include "MenuTextConditional_Setup.h"
int32_t MenuTextConditional_Setup(int32_t context)

{
    int32_t source_val = context;
    void* dest_val = *(source_val + 0x114);
    int32_t data_1 = Menu_FormatScreen_4(*(source_val + 0x44));
    long double fpu_val_7_1 = (data_1 - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    context = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    int32_t result = *(source_val + 0x214);

    if (result)
    {
        result = (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);

        if (dest_val)
        {
            int32_t result_1;

            if (data_1 == 0x10)
                result_1 = 1;

            if (data_1 != 0x10 || !*(source_val + 0x4d))
                result_1 = 0;

            int32_t data_9 = (*(source_val + 0x118) & 0xf) * 3;
            float* item_c_1;
            float* context_1;
            float* flagP4;
            long double fpu_val_7_11;

            if (!result_1)
            {
                int32_t data_12 = data_9 << 2;
                context_1 = data_12 + 0x53b708;
                flagP4 = data_12 + 0x53b70c;
                *(dest_val + 0x14) = *(data_12 + 0x53b708);
                *(dest_val + 0x18) = *flagP4;
                fpu_val_7_11 = *(data_12 + 0x53b710);
                item_c_1 = data_12 + 0x53b710;
            }
            else
            {
                int32_t data_10 = data_9 << 2;
                context_1 = data_10 + 0x53b708;
                flagP4 = data_10 + 0x53b70c;
                item_c_1 = data_10 + 0x53b710;
                *(dest_val + 0x14) = *(data_10 + 0x53b708) * 0.5f + 64.0f;
                *(dest_val + 0x18) = *flagP4 * 0.5f + 64.0f;
                fpu_val_7_11 = *(data_10 + 0x53b710) * 0.5f + 64.0f;
            }

            *(dest_val + 0x1c) = fpu_val_7_11;
            int32_t data_14 = 0;
            long double fpu_val_7_14 = context;
            data_14 = !*(source_val + 0x210);

            if (data_14 | (*(source_val + 0x118) & 0x10))
                fpu_val_7_14 = fpu_val_7_14 * 0.5f;

            int32_t entity_5 = *(dest_val + 0x24);
            *(dest_val + 0x10) = fpu_val_7_14;
            *(dest_val + 0x24) = entity_5 | 0x80000;
            *(*(source_val + 0x114) + 4) = (g_c28b44 >> 1) + *(source_val + 0x20) - 320.0f;
            *(*(source_val + 0x114) + 8) = (g_c28b48 >> 1) + *(source_val + 0x24) - 240.0f;
            Sys_CloseFileStream_18(*(source_val + 0x114));
            result = result_1;

            if (result)
            {
                float item_10_1 =
                    (g_c28b44 >> 1) + *(source_val + 0x20) - 0x140 - *(source_val + 0x28) * 0.400000006f;
                context = *(source_val + 0x2c);
                float* item_30_1 = item_c_1;
                float item_8_2 = (g_c28b48 >> 1) + *(source_val + 0x24) - 0xf0 - context * 0.200000003f;
                float item_4_1 = *(source_val + 0x28) * 1.79999995f + item_10_1;
                context = context * 1.39999998f + item_8_2;
                float* item_34_1 = item_c_1;
                float* item_38_1 = item_c_1;
                return Sys_FreeMemory_15(*(source_val + 0x20c), item_10_1, item_8_2, item_4_1, item_8_2, item_10_1,
                    context, item_4_1, context, *context_1 * 0.200000003f, *flagP4 * 0.200000003f,
                    *item_c_1 * 0.200000003f, 0, 8, 0);
            }
        }
    }

    return result;
}
