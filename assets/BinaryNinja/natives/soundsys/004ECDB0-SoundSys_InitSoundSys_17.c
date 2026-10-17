// Original IGI.EXE function: SoundSys_InitSoundSys_17 (VA 0x004ECDB0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_InitSoundSys_17.h"
float SoundSys_InitSoundSys_17(void* context) {
    float item_c = *(context + 0x18);
    float result = *(context + 0x1c);
    float item_4 = *(context + 0x20);
    long double fp0 = Sys_DispatchOpcode_10(&item_c);
    *(context + 8) = fp0;
    long double f0 = 0.0f;
    fp0 - f0;

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        item_c = 0.0f;
        result = 0.0f;
        item_4 = 0.0f;
    }
    else
    {
        long double fpu_val_7_1 = item_c;
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;

        if (!(*(&((fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40))
        {
        label_4ece20:
            long double fpu_val_7_4 = item_4;
            long double fpu_val_6_1 = result;
            long double fpu_val_5_1 = item_c;
            long double fpu_val_7_6 =
                1.0 / sqrtl(fpu_val_5_1 * fpu_val_5_1 + fpu_val_6_1 * fpu_val_6_1 + fpu_val_7_4 * fpu_val_7_4);
            item_c = item_c * fpu_val_7_6;
            result = result * fpu_val_7_6;
            item_4 = item_4 * fpu_val_7_6;
        }
        else
        {
            long double fpu_val_7_2 = result;
            long double f2_1 = 0.0f;
            fpu_val_7_2 - f2_1;

            if (!(*(&((fpu_val_7_2 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_2, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_2 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4ece20;

            long double fpu_val_7_3 = item_4;
            long double f3_1 = 0.0f;
            fpu_val_7_3 - f3_1;

            if (!(*(&((fpu_val_7_3 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_3, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_3 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x40))
                goto label_4ece20;
        }
    }

    *(context + 0x24) = item_c;
    *(context + 0x28) = result;
    *(context + 0x2c) = item_4;
    return result;
}
