// IGI native provenance: ScrollListBox_Setup - 0x0041C080 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0041C080-ScrollListBox_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ScrollListBox_Setup.h"
int32_t ScrollListBox_Setup(int32_t context)

{
    int32_t source_val = context;
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f2 = 0.0f;
    fpu_val_7_1 - f2;

    context = *(&((fpu_val_7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    int32_t f0 = (*(source_val + 0x2c) - 4) / *(source_val + 0x13f0);
    *(source_val + 0x13f0);
    int32_t data_8 = *(source_val + 0x1254);
    int32_t item_10 = data_8;

    if (data_8 >= f0)
        item_10 = f0;

    int32_t flagP = (g_c28b44 >> 1) + *(source_val + 0x20) - 0x140;
    int32_t item_14 = (g_c28b48 >> 1) + *(source_val + 0x24) - 0xee;
    int32_t data_13;

    if (f0 >= *(source_val + 0x1254))
        data_13 = 0;
    else
        data_13 = Menu_FormatScreen_10(*(source_val + 0x13f4));

    int32_t context_val = *(source_val + 0x129c);
    int32_t dest_1 = 0;
    *(*(source_val + 0x13f8) + 0x20) = *(source_val + 0x20);
    int32_t context_1 = context_val - data_13;
    *(*(source_val + 0x13f8) + 0x24) = *(source_val + 0x24);

    if (item_10 > 0)
    {
        int32_t* flagP2 = source_val + data_13 * 0x48 + 0x98;

        do
        {
            Sys_FreeMemory_18(*(source_val + 0x12ac), *flagP2);
            long double fpu_val_7_4 = item_14;
            *(*(source_val + 0x12ac) + 4) = flagP + 4;
            *(*(source_val + 0x12ac) + 8) = fpu_val_7_4;
            void* data_16 = *(source_val + 0x12ac);
            void* entity_9;
            int32_t temp_9;

            if (dest_1 != context_1)
            {
                *(data_16 + 0x14) = g_53b790;
                *(*(source_val + 0x12ac) + 0x18) = g_53b794;
                entity_9 = *(source_val + 0x12ac);
                temp_9 = g_53b798;
            }
            else
            {
                *(data_16 + 0x14) = g_53b7a8;
                *(*(source_val + 0x12ac) + 0x18) = g_53b7ac;
                entity_9 = *(source_val + 0x12ac);
                temp_9 = g_53b7b0;
            }

            *(entity_9 + 0x1c) = temp_9;
            void* data_19 = *(source_val + 0x12ac);
            *(data_19 + 0x24) |= 0x80000;
            *(*(source_val + 0x12ac) + 0x10) = context;
            int32_t entity_14 = Sys_CloseFileStream_18(*(source_val + 0x12ac));

            if (dest_1 == context_1)
            {
                int32_t item_40_1 = entity_14;
                void* entity_15 = *(source_val + 0x13f8);
                void* item_44_1 = entity_15;
                void* item_4c_1 = entity_15;
                Sys_ExecuteBytecode_14(flagP + 2.0f, fpu_val_7_4, *(entity_15 + 0x28) - 4.0f, *(source_val + 0x13f0), 0.0f, 80.0f, 0.0f,
                    context, 0x80000, 0);
            }

            dest_1 += 1;
            flagP2 = &flagP2[0x12];
            item_14 += *(source_val + 0x13f0);
        } while (dest_1 < item_10);
    }

    if (*(source_val + 0x12a9))
    {
        void* dest_2 = *(source_val + 0x13f4);
        int32_t data_24 = StatusScreen_GetEvent();
        int32_t temp_13 = 0;
        temp_13 = *(dest_2 + 0x1c);
        (*(((data_24 * 0x180 + temp_13) << 2) + &g_a96ae0))(dest_2);
    }

    return Menu_DrawWidget_14(*(source_val + 0x13f8), 0.5f, context, *(source_val + 0x12aa));
}
