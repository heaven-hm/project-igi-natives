// Original IGI.EXE function: PictureBox_Setup (VA 0x0041B5F0; static CFG gate PASS, CFG score 1.000).
#include "PictureBox_Setup.h"
int32_t PictureBox_Setup(int32_t context)

{
    int32_t source_val = context;
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    context = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);
    int32_t flagP = context;

    if (*(source_val + 0x958))
    {
        int32_t* context_1 = *(source_val + *(source_val + 0x954) * 0x48 + 0x98);

        if (context_1)
        {
            int32_t dest_3 = (g_c28b44 >> 1) + *(source_val + 0x20) - 0x13e;
            int32_t data_12 = (g_c28b48 >> 1) + *(source_val + 0x24) - 0xee;
            context = *(source_val + 0x2c) + data_12 - 4;
            float item_c_2 = *(source_val + 0x28) + dest_3 - 4;
            float item_8_2 = dest_3;
            float item_4_2 = data_12;
            Qsprite_Register4Az(context_1, item_8_2, item_4_2, item_c_2, item_4_2, item_8_2, context, item_c_2,
                context, 128.0f, 128.0f, 128.0f, 0x3f800000, flagP, 0, 0x80000, 0);
        }
    }

    return Menu_DrawWidget_14(source_val, 0.5f, flagP, 0);
}
