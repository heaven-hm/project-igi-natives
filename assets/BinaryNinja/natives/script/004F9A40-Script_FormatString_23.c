// Original IGI.EXE function: Script_FormatString_23 (VA 0x004F9A40; static CFG gate PASS, CFG score 1.000).
#include "Script_FormatString_23.h"
int32_t Script_FormatString_23(double* a1, void* a2, double a3, char a4)

{
    double v_40;
    Script_CallNativeHandler_23(&v_40, a2);
    double* valA = a1;
    double v_58 = *valA - v_40;
    double v_38;
    double v_50 = valA[1] - v_38;
    long double x87_r7_4 = valA[2];
    valA = a4;
    double v_30;
    long double x87_r7_5 = x87_r7_4 - v_30;

    if (valA)
    {
        long double f0_1 = 0.0;
        x87_r7_5 - f0_1;
        valA = (x87_r7_5 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f0_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f0_1 ? 1 : 0) << 0xe | 0x3800;

        if (*(&valA + 1) & 1)
            x87_r7_5 = -(x87_r7_5);

        long double f1_1 = 4096.0;
        x87_r7_5 - f1_1;
        valA = (x87_r7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_5 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&valA + 1) & 0x41))
        {
            valA = 0;
            return valA;
        }
    }

    int32_t v_48 = 0;
    int32_t v_44 = 0;
    int16_t valA1 = Sys_PopStack_11(&v_58);

    if (!valA1)
    {
        float v_28;
        Script_EvaluateCondition_23(&v_28, a2, 1);
        float v_1c;
        float v_10;
        long double x87_r7_10 = v_10 * v_48 + v_1c * v_50 + v_28 * v_58;
        float v_24;
        float v_18;
        float v_c;
        double v_38_1 = v_c * v_48 + v_18 * v_50 + v_24 * v_58;
        long double x87_r6_10 = *(a2 + 0x24) + a3;
        a3 = x87_r6_10 * -4096.0;
        long double f2_1 = a3;
        x87_r7_10 - f2_1;
        valA1 = (x87_r7_10 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_10, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_10 == f2_1 ? 1 : 0) << 0xe | 0x3000;

        if (!(*(&valA1 + 1) & 1))
        {
            double v_60_1 = x87_r6_10 * 4096.0;
            long double f3_1 = v_60_1;
            x87_r7_10 - f3_1;
            valA1 = (x87_r7_10 < f3_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_10, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_10 == f3_1 ? 1 : 0) << 0xe;

            if (*(&valA1 + 1) & 0x41)
            {
                long double x87_r7_11 = v_38_1;
                long double f4_1 = a3;
                x87_r7_11 - f4_1;
                valA1 = (x87_r7_11 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_11, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_11 == f4_1 ? 1 : 0) << 0xe;

                if (!(*(&valA1 + 1) & 1))
                {
                    long double x87_r7_12 = v_38_1;
                    long double f5_1 = v_60_1;
                    x87_r7_12 - f5_1;
                    valA1 = (x87_r7_12 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(x87_r7_12, f5_1) ? 1 : 0) << 0xa
                        | (x87_r7_12 == f5_1 ? 1 : 0) << 0xe;

                    if (*(&valA1 + 1) & 0x41)
                    {
                        valA1 = 1;
                        return valA1;
                    }
                }
            }
        }
    }

    valA1 = 0;
    return valA1;
}
