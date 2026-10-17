// Original IGI.EXE function: HumanPlayer_Cleanup (VA 0x00413090; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_Cleanup.h"
int32_t HumanPlayer_Cleanup(void* context, int32_t* param_2)

{
    double item_30;
    AI_FireWeapon_23(&item_30, *(context + 0x4ec));
    double* data_1 = *param_2;
    double item_18 = *data_1 - item_30;
    double item_28;
    double item_10 = data_1[1] - item_28;
    double item_20;
    double item_8 = data_1[2] - item_20;
    long double fp0 = Sys_OpenFileStream_11(&item_18);
    long double f0 = 102400.0;
    fp0 - f0;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
            | (fp0 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
        *(context + 0xdc8) = 0x3f800000;

    long double fpu_val_6_1 = fp0 - param_2[1];
    long double f1 = 0.0;
    fpu_val_6_1 - f1;
    int16_t result = (fpu_val_6_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == f1 ? 1 : 0) << 0xe | 0x3800;

    if (*(&result + 1) & 1)
        *(context + 0xddc) = 0x40000000;

    return result;
}
