// Original IGI.EXE function: Script_ParseEnumReal32_30 (VA 0x004FDC20; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32_30.h"
long double Script_ParseEnumReal32_30(void* a1)

{
    double v_18 = *(a1 + 0xa0) - *(a1 + 0x88);
    long double x87_r7_3 = *(a1 + 0xa8) - *(a1 + 0x90);
    double v_10 = x87_r7_3;
    long double x87_r6_2 = v_18;
    long double f0 = 0.0;
    x87_r6_2 - f0;

    if (*(&((x87_r6_2 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, f0) ? 1 : 0) << 0xa
        | (x87_r6_2 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
    {
        long double f1_1 = 0.0;
        x87_r7_3 - f1_1;

        if (*(&((x87_r7_3 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            long double x87_r7_4 = *(a1 + 0xb0) - *(a1 + 0x98);
            long double f3_1 = 0.0;
            x87_r7_4 - f3_1;

            if (*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40)
                return 1f;
        }
    }

    long double result = Sys_OpenFileStream_11(&v_18) * 0.5 + 8192f;
    long double f2 = 1f;
    result - f2;

    if (!(*(&((result < f2 ? 1 : 0) << 8 | (FCMP_UO(result, f2) ? 1 : 0) << 0xa
            | (result == f2 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        return result;

    return 1f;
}
