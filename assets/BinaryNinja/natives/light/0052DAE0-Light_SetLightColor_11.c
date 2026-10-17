// Original IGI.EXE function: Light_SetLightColor_11 (VA 0x0052DAE0; static CFG gate PASS, CFG score 1.000).
#include "Light_SetLightColor_11.h"
int32_t Light_SetLightColor_11(float context, void* param_2, double* param_3)

{
    float entity_val = context;
    int32_t data_5 = fabsl(*param_3) / *(entity_val + 0x4a88) % 5 * 5 + fabsl(param_3[1]) / *(entity_val + 0x4a88) % 5;
    int32_t data_7 = *param_3;
    long double fpu_val_7_9 = (param_3[1] + *(((data_5 + 0x48c) << 4) + entity_val)) * *(entity_val + 0x48b0)
        + (*param_3 + *((data_5 << 4) + entity_val + 0x48b8)) * *(entity_val + 0x48a8);
    long double fpu_val_7_12 = (fpu_val_7_9 - *(entity_val + 0x4a8c)) / *(entity_val + 0x4a84) * 6.28318548f;
    long double fp0;
    bool c1;
    bool c2;
    fp0 = __fsin(fpu_val_7_12);
    long double fpu_val_5_3 = (fp0 + 1.0f) * *(entity_val + 0x4a80) + *(entity_val + 0x4a94);
    *(param_2 + 8) = data_7;
    *(param_2 + 0xc) = *(param_3 + 4);
    *(param_2 + 0x10) = param_3[1];
    int32_t data_10 = *(param_3 + 0xc);
    *(param_2 + 0x18) = fpu_val_5_3;
    *(param_2 + 0x14) = data_10;
    *(param_2 + 0x60) = param_3[2] - fpu_val_5_3;
    context = fabsl(fp0);
    long double fp0_1;
    bool c1_1;
    bool c2_1;
    fp0_1 = __fcos(fpu_val_7_12);
    long double f2 = 0.0f;
    fp0_1 - f2;
    long double fpu_val_7_15 = 1.0f - context;
    bool c1_2 = /* bool c1_2 = unknown  {fsub fp0, dword [stack_ptr+0xc]} */;
    long double fpu_val_6_8 = *(entity_val + 0x4888) * fpu_val_7_15 * *(entity_val + 0x4a98);
    long double fpu_val_6_13;

    if (*(&((fp0_1 < f2 ? 1 : 0) << 8 | (c1_2 ? 1 : 0) << 9
        | (FCMP_UO(fp0_1, f2) ? 1 : 0) << 0xa | (fp0_1 == f2 ? 1 : 0) << 0xe | 0x3000) + 1)
        & 0x41)
    {
        *(param_2 + 0x38) = fpu_val_6_8;
        fpu_val_6_13 = *(entity_val + 0x4890) * fpu_val_7_15 * *(entity_val + 0x4a98);
    }
    else
    {
        *(param_2 + 0x38) = -(fpu_val_6_8);
        fpu_val_6_13 = -((*(entity_val + 0x4890) * fpu_val_7_15 * *(entity_val + 0x4a98)));
    }

    *(param_2 + 0x3c) = fpu_val_6_13;
    long double fpu_val_7_19 = (context + 1.0f) * 0.5f;
    *(param_2 + 0x40) = fpu_val_7_19;
    long double fpu_val_6_16 = *(param_2 + 0x38);
    long double f5 = 0.0f;
    fpu_val_6_16 - f5;

    if (!(*(&((fpu_val_6_16 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_16, f5) ? 1 : 0) << 0xa
        | (fpu_val_6_16 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
    {
    label_52dc40:
        long double fpu_val_5_5 = *(param_2 + 0x3c);
        long double fpu_val_4_1 = *(param_2 + 0x38);
        long double fpu_val_6_24 =
            1.0 / sqrtl(fpu_val_7_19 * fpu_val_7_19 + fpu_val_4_1 * fpu_val_4_1 + fpu_val_5_5 * fpu_val_5_5);
        *(param_2 + 0x38) = *(param_2 + 0x38) * fpu_val_6_24;
        *(param_2 + 0x3c) = *(param_2 + 0x3c) * fpu_val_6_24;
        *(param_2 + 0x40) = fpu_val_7_19 * fpu_val_6_24;
    }
    else
    {
        long double fpu_val_6_17 = *(param_2 + 0x3c);
        long double f6_1 = 0.0f;
        fpu_val_6_17 - f6_1;

        if (!(*(&((fpu_val_6_17 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_17, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_6_17 == f6_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_52dc40;

        long double f7_1 = 0.0f;
        fpu_val_7_19 - f7_1;

        if (!(*(&((fpu_val_7_19 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_19, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_7_19 == f7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40))
            goto label_52dc40;
    }

    *(param_2 + 0x4c) = *(g_a44344 + 0xd64);
    int32_t result = *(g_a44344 + 0xd3c);
    *(param_2 + 0x58) = 1;
    *(param_2 + 0x50) = result;
    return result;
}
