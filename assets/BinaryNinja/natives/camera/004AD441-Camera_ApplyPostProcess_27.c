// Original IGI.EXE function: Camera_ApplyPostProcess_27 (VA 0x004AD441; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_27.h"
int32_t Camera_ApplyPostProcess_27(double context, int32_t param_2 )

{
    int16_t temp_1 = param_2 & 0x7ff0;

    if (temp_1 == 0x7ff0)
    {
        int32_t item_c = 0x7ff0;
        item_c = context;
        int32_t data_1 = Camera_ApplyWideScreen_13(item_c, 0x7ff0);

        if (data_1 == 1)
            return 0x200;

        if (data_1 == 2)
            return 4;

        if (data_1 == 3)
            return 2;

        return 1;
    }

    int32_t data_7 = param_2 & 0x8000;

    if (!temp_1 && (*(&context + 4) & 0xfffff || context))
    {
        int32_t data_9 = -(data_7);
        int32_t data_10 = data_9 - data_9;
        data_10 &= 0x90;
        return data_10 + 0x80;
    }

    long double fpu_val_7_1 = context;
    long double f1 = 0.0;
    fpu_val_7_1 - f1;

    if (!TEST_BITB(
        *(&((fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe) + 1),
        6))
    {
        int32_t data_17 = -(data_7);
        int32_t data_18 = data_17 - data_17;
        data_18 &= 8;
        return data_18 + 0x100;
    }

    int32_t data_14 = -(data_7);
    int32_t data_15 = data_14 - data_14;
    data_15 &= 0xe0;
    return data_15 + 0x40;
}
