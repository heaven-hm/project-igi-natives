// Original IGI.EXE function: AI_UpdatePatrol_27 (VA 0x0046A200; static CFG gate PASS, CFG score 1.000).
#include "AI_UpdatePatrol_27.h"
double* AI_UpdatePatrol_27()

{
    double* result = DefineComputerLimit_OnEvent();
    double* result_1 = result;

    if (result_1)
    {
        double item_28_1 = result_1[3] * 0.5f * 4096.0f;
        double item_18_1 = g_5bdd78 - *result_1;
        long double fpu_val_7_7 = g_5bdd80 - result_1[1];
        double item_8_1 = g_5bdd88 - result_1[2];
        long double fpu_val_6_4 = -(item_28_1);
        long double fpu_val_5_1 = item_18_1;
        fpu_val_5_1 - fpu_val_6_4;
        result = (fpu_val_5_1 < fpu_val_6_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_1, fpu_val_6_4) ? 1 : 0) << 0xa
            | (fpu_val_5_1 == fpu_val_6_4 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 1)
            item_18_1 = fpu_val_6_4;

        long double fpu_val_5_2 = item_18_1;
        long double f0_1 = item_28_1;
        fpu_val_5_2 - f0_1;
        result = (fpu_val_5_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_2, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_5_2 == f0_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&result + 1) & 0x41))
        {
            result = item_28_1;
            item_18_1 = result;
            *(&item_18_1 + 4) = *(&item_28_1 + 4);
        }

        fpu_val_7_7 - fpu_val_6_4;
        result = (fpu_val_7_7 < fpu_val_6_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, fpu_val_6_4) ? 1 : 0) << 0xa
            | (fpu_val_7_7 == fpu_val_6_4 ? 1 : 0) << 0xe | 0x3000;

        if (*(&result + 1) & 1)
            fpu_val_7_7 = fpu_val_6_4;

        long double f1_1 = item_28_1;
        fpu_val_7_7 - f1_1;
        result = (fpu_val_7_7 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_7 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
            fpu_val_7_7 = item_28_1;

        g_5bdd78 = item_18_1 + *result_1;
        g_5bdd80 = fpu_val_7_7 + result_1[1];
        g_5bdd88 = item_8_1 + result_1[2];
    }

    return result;
}
