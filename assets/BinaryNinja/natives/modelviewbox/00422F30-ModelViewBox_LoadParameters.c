// Original IGI.EXE function: ModelViewBox_LoadParameters (VA 0x00422F30; static CFG gate PASS, CFG score 1.000).
#include "ModelViewBox_LoadParameters.h"
int32_t ModelViewBox_LoadParameters(int32_t context)

{
    int32_t source_val = context;
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    context = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    Menu_DrawWidget_14(source_val, 0.0f, context, 0);
    return (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);
}
