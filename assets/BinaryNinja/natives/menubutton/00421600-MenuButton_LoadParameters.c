// Original IGI.EXE function: MenuButton_LoadParameters (VA 0x00421600; static CFG gate PASS, CFG score 1.000).
#include "MenuButton_LoadParameters.h"
int32_t MenuButton_LoadParameters(int32_t a1)

{
    int32_t srcS = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(srcS + 0x44)) - 8) * 0.125f;
    long double f0 = 0f;
    x87_r7_1 - f0;

    a1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(srcS);
    int32_t result = *(srcS + 0x94);

    if (!result)
        return result;

    int32_t objC3 = (g_c28b48 >> 1) + *(srcS + 0x24) - 0xf0;
    int32_t v_30_1 = objC3;
    int32_t v_34_1 = objC3;
    return Sys_AllocateMemory_15(*(srcS + 0x94), (g_c28b44 >> 1) + *(srcS + 0x20) - 0x140, objC3, 128f, 128f,
        128f, a1, 0x3f800000, 0, 0x80000, 0);
}
