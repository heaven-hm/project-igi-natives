// Original IGI.EXE function: Script_ParseEnumReal32_29 (VA 0x004FC7B0; static CFG gate PASS, CFG score 1.000).
#include "Script_ParseEnumReal32_29.h"
int32_t Script_ParseEnumReal32_29(void* context)

{
    int32_t data_val = *(context + 0x690);
    bool flag_0 = *(context + 0x1b8) <= 0;
    *(context + 0x690) = 0;

    if (!flag_0 && !data_val && !*(context + 0x14c))
    {
        void* temp_1 = *(context + 0x1b4);
        long double fpu_val_7_1 = *(context + 0xf8);
        long double f0_1 = *(temp_1 + 0x2cc);
        fpu_val_7_1 - f0_1;

        if (*(&((fpu_val_7_1 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f0_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double fpu_val_7_2 = *(context + 0x140);
            long double fpu_val_6_1 = *(context + 0x13c);
            long double fpu_val_5_1 = *(context + 0x138);
            long double fpu_val_4_4 = fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_2 * fpu_val_7_2;
            long double f1_1 = *(temp_1 + 0x2d0);
            fpu_val_4_4 - f1_1;

            if (*(&((fpu_val_4_4 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_4_4, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_4_4 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
                return 1;
        }
    }

    return 0;
}
