// IGI native provenance: Menu_HandleInput_19 - 0x00428AD0 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 00428AD0-Menu_HandleInput_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Menu_HandleInput_19.h"
int32_t Menu_HandleInput_19(void* context, double* param_2)

{
    double item_18;
    double* item_28 = &item_18;
    int32_t item_8 = 0;
    int32_t item_4 = 0;
    item_18 = *param_2 - *(context + 0x20);
    double item_10 = param_2[1] - *(context + 0x28);
    long double fp0 = Sys_OpenFileStream_11(item_28);
    long double f0 = 122880.0;
    fp0 - f0;
    memcpy(&item_18, param_2, 0x18);

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
            | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
        return Menu_DrawWidget_19(context, &item_18);

    item_8 = item_8 + 102400.0;
    long double fpu0;
    long double fpu1;
    return Menu_RequestScreen_20(fpu0, fpu1, context, &item_18);
}
