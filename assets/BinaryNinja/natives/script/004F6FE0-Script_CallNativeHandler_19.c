// Original IGI.EXE function: Script_CallNativeHandler_19 (VA 0x004F6FE0; static CFG gate PASS, CFG score 1.000).
#include "Script_CallNativeHandler_19.h"
int32_t Script_CallNativeHandler_19(void* context)

{
    long double fpu7 = *(context + 0x2c38);
    long double f0 = 0.0;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        return 0;

    long double fpu_val_7_3 = *(context + 0x2c18) + *(context + 0x2c08) + *(context + 0x2c10);
    long double f1 = 0.0;
    fpu_val_7_3 - f1;

    if (!(*(&((fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        double item_8_1 = *(context + 0x2c38) * 2048.0;
        long double fpu_val_7_7 = *(context + 0x2c20) - item_8_1;
        long double f2_1 = *(context + 0x2c08);
        fpu_val_7_7 - f2_1;

        if (*(&((fpu_val_7_7 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_7 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            long double fpu_val_7_9 = *(context + 0x2c40) * 2048.0;
            long double fpu_val_6_2 = *(context + 0x2c28) - fpu_val_7_9;
            long double f3_1 = *(context + 0x2c10);
            fpu_val_6_2 - f3_1;

            if (*(&((fpu_val_6_2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_6_4 = item_8_1 + *(context + 0x2c20);
                long double f4_1 = *(context + 0x2c08);
                fpu_val_6_4 - f4_1;

                if (!(*(&((fpu_val_6_4 < f4_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_4, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_4 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
                {
                    long double fpu_val_7_10 = fpu_val_7_9 + *(context + 0x2c28);
                    long double f5_1 = *(context + 0x2c10);
                    fpu_val_7_10 - f5_1;

                    if (!(*(&((fpu_val_7_10 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(fpu_val_7_10, f5_1) ? 1 : 0) << 0xa
                            | (fpu_val_7_10 == f5_1 ? 1 : 0) << 0xe) + 1) & 1))
                        return 0;
                }
            }
        }
    }

    return 1;
}
