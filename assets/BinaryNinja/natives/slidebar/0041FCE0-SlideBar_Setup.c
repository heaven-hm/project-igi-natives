// Original IGI.EXE function: SlideBar_Setup (VA 0x0041FCE0; static CFG gate PASS, CFG score 1.000).
#include "SlideBar_Setup.h"
int32_t SlideBar_Setup(int32_t context)

{
    int32_t source_val = context;
    void* context_val = *(source_val + 0x98);
    int32_t item_10 = *(source_val + 0x9c);
    context = *(source_val + 0xb4);
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;
    float item_8_1;

    item_8_1 = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0.0f : fpu_val_7_1;

    int32_t flagP1 = *(source_val + 0x20) + 2;
    int32_t dest_1 = *(source_val + 0x24) + 2;
    *(context_val + 0x20) = flagP1;
    *(context_val + 0x24) = dest_1;
    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);

    if (!context)
    {
        dest_1 = dest_1 + *(context_val + 0x2c) + 1;
        *(item_10 + 0x20) = flagP1;
        *(item_10 + 0x24) = *(source_val + 0xac) + dest_1 + 1;
    }
    else
    {
        flagP1 = *(context_val + 0x28) + flagP1 + 1;
        *(item_10 + 0x20) = *(source_val + 0xac) + flagP1 + 1;
        *(item_10 + 0x24) = dest_1;
    }

    void* context_4 = *(source_val + 0x98);
    int32_t data_15 = StatusScreen_GetEvent();
    int32_t entity_4 = 0;
    entity_4 = *(context_4 + 0x1c);
    (*(((data_15 * 0x180 + entity_4) << 2) + &g_a96ae0))(context_4);
    void* context_5 = *(source_val + 0x9c);
    int32_t data_20 = StatusScreen_GetEvent();
    int32_t data_21 = 0;
    data_21 = *(context_5 + 0x1c);
    (*(((data_20 * 0x180 + data_21) << 2) + &g_a96ae0))(context_5);
    void* data_23 = *(source_val + 0x94);
    float context_6 = item_8_1;

    if (data_23)
    {
        float item_8_2;

        if (!context)
        {
            item_8_2 = 0.0f;
            int32_t data_25 = Sys_ExecuteBytecode_17(data_23);
            item_10 = (*(source_val + 0xac) - data_25) * *(source_val + 0xa0);
            context = item_10;
        }
        else
        {
            int32_t data_24 = Sys_CloseFileStream_17(data_23);
            context = 0;
            item_8_1 = (*(source_val + 0xac) - data_24) * *(source_val + 0xa0);
            item_8_2 = item_8_1;
        }

        int32_t entity_11 = (g_c28b44 >> 1) + flagP1 - 0x140;
        int32_t item_48_1 = entity_11;
        int32_t item_4c_1 = entity_11;
        Sys_AllocateMemory_15(*(source_val + 0x94), item_8_2 + entity_11, context + dest_1 + (g_c28b48 >> 1) - 0xf0, 128.0f,
            128.0f, 128.0f, context_6, 0x3f800000, 0, 0x80000, 0);
    }

    return Menu_DrawWidget_14(source_val, 0.5f, context_6, *(source_val + 0x4d));
}
