// Original IGI.EXE function: AI_CheckHearing_27 (VA 0x0046A970; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckHearing_27.h"
double* AI_CheckHearing_27(double* context )

{
    double* result = DefineComputerLimit_OnEvent();

    if (result)
    {
        long double fpu_val_7_3 = result[3] * 0.5f * 4096.0f;
        long double fpu_val_6_2 = *context - *result;
        double item_10_1 = context[1] - result[1];
        double item_20_1 = -(fpu_val_7_3);
        long double f0_1 = item_20_1;
        fpu_val_6_2 - f0_1;
        result = (fpu_val_6_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == f0_1 ? 1 : 0) << 0xe | 0x3000;

        if (1 & *(&result + 1))
        {
            result = 0;
            return result;
        }

        fpu_val_6_2 - fpu_val_7_3;
        result = (fpu_val_6_2 < fpu_val_7_3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_3) ? 1 : 0) << 0xa
            | (fpu_val_6_2 == fpu_val_7_3 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            result = 0;
            return result;
        }

        long double fpu_val_6_3 = item_10_1;
        long double f1_1 = item_20_1;
        fpu_val_6_3 - f1_1;
        result = (fpu_val_6_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_6_3 == f1_1 ? 1 : 0) << 0xe | 0x3800;

        if (1 & *(&result + 1))
        {
            result = 0;
            return result;
        }

        long double fpu_val_6_4 = item_10_1;
        fpu_val_6_4 - fpu_val_7_3;
        result = (fpu_val_6_4 < fpu_val_7_3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, fpu_val_7_3) ? 1 : 0) << 0xa
            | (fpu_val_6_4 == fpu_val_7_3 ? 1 : 0) << 0xe | 0x3800;

        if (!(*(&result + 1) & 0x41))
        {
            result = 0;
            return result;
        }
    }

    result = 1;
    return result;
}
