// Original IGI.EXE function: ModelViewBox_LoadParameters (VA 0x00422F30; static CFG gate PASS, CFG score 1.000).
#include "ModelViewBox_LoadParameters.h"
int32_t ModelViewBox_LoadParameters(int32_t a1)

{
    int32_t srcS = a1;
    long double x87_r7_1 = (Menu_FormatScreen_4(*(srcS + 0x44)) - 8) * 0.125f;
    long double f0 = 0f;
    x87_r7_1 - f0;

    a1 = *(&((x87_r7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_1, f0) ? 1 : 0) << 0xa
        | (x87_r7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : x87_r7_1;

    Menu_DrawWidget_14(srcS, 0f, a1, 0);
    return (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(srcS);
}
