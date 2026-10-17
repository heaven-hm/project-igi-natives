// Original IGI.EXE function: TextBox_Setup (VA 0x0041AEA0; static CFG gate PASS, CFG score 1.000).
#include "TextBox_Setup.h"
int32_t TextBox_Setup(int32_t context)

{
    int32_t source_val = context;
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    context = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    if (*(source_val + 0x21a0))
    {
        void* temp_1 = *(source_val + 0x98);

        if (temp_1)
        {
            int32_t* entity_3 = *(source_val + 0x94);

            if (entity_3)
            {
                char* data_8 = *(source_val + *(source_val + 0x219c) * 0x108 + 0x1a0);

                if (data_8)
                {
                    int32_t item_24_1 = *(source_val + 0x2c) - 8;
                    int32_t item_2c_1 = 0x3f800000;
                    Menu_LeaveMenus_7((g_c28b44 >> 1) + *(source_val + 0x20) - 0x13c,
                        (g_c28b48 >> 1) + *(source_val + 0x24) - 0xec, *(source_val + 0x28) - 8, data_8, temp_1,
                        entity_3, context);
                }
            }
        }
    }

    Menu_DrawWidget_14(source_val, 0.5f, context, 0);
    return (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);
}
