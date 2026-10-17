// IGI native provenance: ControlsMenu_Setup - 0x004238B0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 004238B0-ControlsMenu_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ControlsMenu_Setup.h"
int32_t ControlsMenu_Setup(int32_t context)

{
    int32_t source_val = context;
    long double fpu_val_7_1 = (Menu_FormatScreen_4(*(source_val + 0x44)) - 8) * 0.125f;
    long double f0 = 0.0f;
    fpu_val_7_1 - f0;

    context = *(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : fpu_val_7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);
    Menu_HandleInput_12(source_val, context);
    return Menu_RequestScreen_13(source_val, context);
}
