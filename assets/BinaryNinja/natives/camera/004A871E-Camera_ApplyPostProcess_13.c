// Original IGI.EXE function: Camera_ApplyPostProcess_13 (VA 0x004A871E; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyPostProcess_13.h"
long double Camera_ApplyPostProcess_13(double context, int32_t* param_2)

{
    int32_t entity_val;
    int32_t item_8 = entity_val;
    int32_t item_c = entity_val;
    long double fpu7 = context;
    long double f0 = 0.0;
    fpu7 - f0;
    int32_t source_val;

    if (TEST_BITB(
        *(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
            | (fpu7 == f0 ? 1 : 0) << 0xe) + 1),
        6))
    {
        source_val = 0;
        item_c = 0;
    }
    else if (*(&context + 6) & 0x7ff0 || (!(*(&context + 4) & 0xfffff) && !context))
    {
        int32_t item_1c_2 = 0;
        item_1c_2 = context;
        item_c = Camera_ApplyHandiCam_13(item_1c_2, 0, 0);
        source_val = (*(&context + 6) >> 4 & 0x7ff) - 0x3fe;
    }
    else
    {
        long double fpu_val_7_2 = context;
        long double f1_1 = 0.0;
        fpu_val_7_2 - f1_1;
        source_val = 0xfffffc03;
        int32_t data_1;

        data_1 = !TEST_BITB(
            *(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1),
            0) ? 0 : 1;

        while (!(*(&context + 6) & 0x10))
        {
            *(&context + 4) <<= 1;

            if (*(&context + 3) & 0x80)
                *(&context + 4) |= 1;

            context <<= 1;
            source_val -= 1;
        }

        *(&context + 6) &= 0xffef;

        if (data_1)
            *(&context + 7) |= 0x80;

        int32_t item_1c_1 = 0;
        item_1c_1 = context;
        item_c = Camera_ApplyHandiCam_13(item_1c_1, 0, 0);
    }

    *param_2 = source_val;
    return item_c;
}
