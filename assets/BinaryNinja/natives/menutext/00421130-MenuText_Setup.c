// Original IGI.EXE function: MenuText_Setup (VA 0x00421130; static CFG gate PASS, CFG score 1.000).
#include "MenuText_Setup.h"
int32_t MenuText_Setup(int32_t context)

{
    int32_t source_val = context;
    void* dest_val = *(source_val + 0x114);
    int32_t data_1 = Menu_FormatScreen_4(*(source_val + 0x44));
    long double fpu_val_7_1 = (data_1 - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    context = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    int32_t result = (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);

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
        float* flagP3;
        long double fpu_val_7_11;

        if (!result_1)
        {
            int32_t data_12 = data_9 << 2;
            context_1 = data_12 + 0x53b778;
            flagP3 = data_12 + 0x53b77c;
            *(dest_val + 0x14) = *(data_12 + 0x53b778);
            *(dest_val + 0x18) = *flagP3;
            fpu_val_7_11 = *(data_12 + 0x53b780);
            item_c_1 = data_12 + 0x53b780;
        }
        else
        {
            int32_t data_10 = data_9 << 2;
            context_1 = data_10 + 0x53b778;
            flagP3 = data_10 + 0x53b77c;
            item_c_1 = data_10 + 0x53b780;
            *(dest_val + 0x14) = *(data_10 + 0x53b778) * 0.5f + 64.0f;
            *(dest_val + 0x18) = *flagP3 * 0.5f + 64.0f;
            fpu_val_7_11 = *(data_10 + 0x53b780) * 0.5f + 64.0f;
        }

        *(dest_val + 0x1c) = fpu_val_7_11;
        long double fpu_val_7_14 = context;

        if (*(source_val + 0x118) & 0x10)
            fpu_val_7_14 = fpu_val_7_14 * 0.5f;

        int32_t temp_2 = *(dest_val + 0x24);
        *(dest_val + 0x10) = fpu_val_7_14;
        *(dest_val + 0x24) = temp_2 | 0x80000;
        *(*(source_val + 0x114) + 4) = (g_c28b44 >> 1) + *(source_val + 0x20) - 320.0f;
        *(*(source_val + 0x114) + 8) = (g_c28b48 >> 1) + *(source_val + 0x24) - 240.0f;
        Sys_CloseFileStream_18(*(source_val + 0x114));
        result = result_1;

        if (result)
        {
            float item_10_1 =
                (g_c28b44 >> 1) + *(source_val + 0x20) - 0x140 - *(source_val + 0x28) * 0.400000006f;
            context = *(source_val + 0x2c);
            int32_t entity_5 = (g_c28b48 >> 1) + *(source_val + 0x24) - 0xf0;
            int32_t item_30_1 = entity_5;
            float item_8_2 = entity_5 - context * 0.200000003f;
            float item_4_1 = *(source_val + 0x28) * 1.79999995f + item_10_1;
            context = context * 1.39999998f + item_8_2;
            int32_t item_34_1 = entity_5;
            int32_t item_38_1 = entity_5;
            return Sys_FreeMemory_15(*(source_val + 0x16c), item_10_1, item_8_2, item_4_1, item_8_2, item_10_1, context,
                item_4_1, context, *context_1 * 0.200000003f, *flagP3 * 0.200000003f,
                *item_c_1 * 0.200000003f, 0, 8, 0);
        }
    }

    return result;
}
