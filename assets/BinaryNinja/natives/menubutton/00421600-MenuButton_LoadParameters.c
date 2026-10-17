// Original IGI.EXE function: MenuButton_LoadParameters (VA 0x00421600; static CFG gate PASS, CFG score 1.000).
#include "MenuButton_LoadParameters.h"
int32_t MenuButton_LoadParameters(int32_t context)

{
    int32_t source_val = context;
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    context = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);
    int32_t result = *(source_val + 0x94);

    if (!result)
        return result;

    int32_t entity_3 = (g_c28b48 >> 1) + *(source_val + 0x24) - 0xf0;
    int32_t item_30_1 = entity_3;
    int32_t item_34_1 = entity_3;
    return Sys_AllocateMemory_15(*(source_val + 0x94), (g_c28b44 >> 1) + *(source_val + 0x20) - 0x140, entity_3, 128.0f, 128.0f,
        128.0f, context, 0x3f800000, 0, 0x80000, 0);
}
