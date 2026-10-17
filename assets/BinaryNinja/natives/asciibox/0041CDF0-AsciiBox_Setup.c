// Original IGI.EXE function: AsciiBox_Setup (VA 0x0041CDF0; static CFG gate PASS, CFG score 1.000).
#include "AsciiBox_Setup.h"
int32_t AsciiBox_Setup(int32_t context)

{
    int32_t source_val = context;
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f2 = 0.0f;
    fpu_val_7_1 - f2;

    context = *(&((fpu_val_7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    int32_t item_20 = 0;
    Menu_UpdateLanguage_10(*(source_val + 0xf4), *(source_val + 0x28) + *(source_val + 0x20) - 0x13, *(source_val + 0x24),
        *(source_val + 0x2c), *(source_val + 0xe4));
    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);
    void* dest_3 = *(source_val + 0xf4);
    int32_t data_9 = StatusScreen_GetEvent();
    int32_t entity_3 = 0;
    entity_3 = *(dest_3 + 0x1c);
    (*(((data_9 * 0x180 + entity_3) << 2) + &g_a96ae0))(dest_3);

    if (*(source_val + 0xd4) && *(source_val + 0xdc))
    {
        char* dest_4 = *(source_val + 0xe0);
        int32_t f0_1 = (*(source_val + 0x2c) - 4) / *(source_val + 0xec);
        *(source_val + 0xec);
        int32_t entity_5 = *(source_val + 0xe4) - *(source_val + 0xe8);
        int32_t context_2 = f0_1;

        if (f0_1 >= entity_5)
            context_2 = entity_5;

        int32_t entity_6 = (g_c28b44 >> 1) + *(source_val + 0x20) - 0x13c;
        int32_t flagP1 = (g_c28b48 >> 1) + *(source_val + 0x24) - 0xec;
        int32_t item_c_1 = flagP1;

        if (context_2 > 0)
        {
            int32_t item_8_2 = context_2;
            bool flag_2_1;

            do
            {
                Sys_FreeMemory_18(*(source_val + 0xd8), dest_4);
                *(*(source_val + 0xd8) + 4) = entity_6;
                *(*(source_val + 0xd8) + 8) = item_c_1;
                *(*(source_val + 0xd8) + 0x14) = 0x43000000;
                *(*(source_val + 0xd8) + 0x18) = 0x43000000;
                *(*(source_val + 0xd8) + 0x1c) = 0x43000000;
                void* data_24 = *(source_val + 0xd8);
                *(data_24 + 0x24) |= 0x80000;
                *(*(source_val + 0xd8) + 0x10) = context;
                Sys_CloseFileStream_18(*(source_val + 0xd8));

                if (*dest_4)
                {
                    char i;

                    do
                    {
                        i = dest_4[1];
                        dest_4 = &dest_4[1];
                    } while (i);
                }

                dest_4 = &dest_4[1];
                flagP1 += *(source_val + 0xec);
                flag_2_1 = item_8_2 != 1;
                item_c_1 = flagP1;
                item_8_2 -= 1;
            } while (flag_2_1);
        }
    }

    *(source_val + 0x28) -= 0x14;
    Menu_DrawWidget_14(source_val, 0.5f, context, 0);
    int32_t result = *(source_val + 0x28) + 0x14;
    *(source_val + 0x28) = result;
    return result;
}
