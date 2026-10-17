// Original IGI.EXE function: Light_CalculateAttenuation_4 (VA 0x005251D0; static CFG gate PASS, CFG score 1.000).
#include "Light_CalculateAttenuation_4.h"
float* Light_CalculateAttenuation_4(float* context, float param_2, float* param_3, float param_4, float param_5)

{
    float* entity_4 = param_2;
    float* source_val = param_4;
    long double fpu7 = *entity_4;
    long double f0 = *source_val;
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_1 = entity_4[1];
        long double f2_1 = source_val[1];
        fpu_val_7_1 - f2_1;

        if (*(&((fpu_val_7_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *context = *entity_4;
            context[1] = entity_4[1];
            return context;
        }
    }

    long double fpu_val_7_2 = *entity_4;
    long double f1 = *param_5;
    fpu_val_7_2 - f1;

    if (*(&((fpu_val_7_2 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f1 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_3 = entity_4[1];
        long double f4_1 = *(param_5 + 4);
        fpu_val_7_3 - f4_1;

        if (*(&((fpu_val_7_3 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *context = *entity_4;
            context[1] = entity_4[1];
            return context;
        }
    }

    long double fpu_val_7_4 = *param_3;
    long double f3 = *source_val;
    fpu_val_7_4 - f3;

    if (*(&((fpu_val_7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f3 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_5 = param_3[1];
        long double f6_1 = source_val[1];
        fpu_val_7_5 - f6_1;

        if (*(&((fpu_val_7_5 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f6_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f6_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *context = *param_3;
            context[1] = param_3[1];
            return context;
        }
    }

    long double fpu_val_7_6 = *param_3;
    long double f5 = *param_5;
    fpu_val_7_6 - f5;

    if (*(&((fpu_val_7_6 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f5 ? 1 : 0) << 0xe) + 1) & 0x40)
    {
        long double fpu_val_7_7 = param_3[1];
        long double f7_1 = *(param_5 + 4);
        fpu_val_7_7 - f7_1;

        if (*(&((fpu_val_7_7 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f7_1) ? 1 : 0) << 0xa
            | (fpu_val_7_7 == f7_1 ? 1 : 0) << 0xe) + 1) & 0x40)
        {
            *context = *param_3;
            context[1] = param_3[1];
            return context;
        }
    }

    long double fpu_val_7_10 = -((param_3[1] - entity_4[1]));
    long double fpu_val_6_1 = *param_3 - *entity_4;
    param_2 = -((*(param_5 + 4) - source_val[1]));
    long double fpu_val_5_4 = *param_5 - *source_val;
    param_5 = -((fpu_val_7_10 * *entity_4)) - fpu_val_6_1 * entity_4[1];
    param_4 = -((param_2 * *source_val)) - fpu_val_5_4 * source_val[1];
    param_3 = fpu_val_5_4 * fpu_val_7_10 - param_2 * fpu_val_6_1;
    *context = -(((param_5 * fpu_val_5_4 - param_4 * fpu_val_6_1) / param_3));
    context[1] = -(((param_4 * fpu_val_7_10 - param_5 * param_2) / param_3));
    return context;
}
