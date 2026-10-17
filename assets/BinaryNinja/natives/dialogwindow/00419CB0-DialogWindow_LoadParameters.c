// IGI native provenance: DialogWindow_LoadParameters - 0x00419CB0 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00419CB0-DialogWindow_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "DialogWindow_LoadParameters.h"
int32_t DialogWindow_LoadParameters(int32_t context)

{
    int32_t source_val = context;
    long double fpu_val_7_1 = Menu_FormatScreen_4(*(source_val + 0x44)) * 0.125f;
    long double f0 = 1.0f;
    fpu_val_7_1 - f0;

    context = !(*(&((fpu_val_7_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0x3f800000 : fpu_val_7_1;

    (*(((Menu_PlayMusic_13() + StatusScreen_GetEvent() * 0x180) << 2) + &g_a96ae0))(source_val);
    return Menu_FormatScreen_6(source_val, context);
}
