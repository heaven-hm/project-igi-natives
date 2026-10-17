// Original IGI.EXE function: Display_CreateSurface_18 (VA 0x0049B2D0; static CFG gate PASS, CFG score 1.000).
#include "Display_CreateSurface_18.h"
int32_t Display_CreateSurface_18(float context, float param_2)

{
    double* data_val = context;
    long double fpu7 = g_b46d04;
    long double fpu_val_3_3 = g_bcab00 * (data_val[2] - g_bcab18)
        + g_bcaafc * (data_val[1] - g_bcab10) + g_bcaaf8 * (*data_val - g_bcab08);
    context = fpu_val_3_3 - param_2;
    float item_14 = fpu_val_3_3 + param_2;
    long double fpu_val_6_7 =
        g_bcabec * context * fpu7 * (1.4426950407214463 + 1.675171316223821e-10);
    long double fpu_val_5_9 = roundl(fpu_val_6_7);
    long double fp0;
    bool c1;
    fp0 = __f2xm1(fpu_val_6_7 - fpu_val_5_9);
    long double fp0_1;
    bool c1_1;
    fp0_1 = __fscale(fp0 + 1, fpu_val_5_9);
    param_2 = 1.0f / fp0_1;
    long double fpu_val_6_14 =
        g_bcabec * item_14 * fpu7 * (1.4426950407214463 + 1.675171316223821e-10);
    long double fpu_val_5_17 = roundl(fpu_val_6_14);
    long double fp0_2;
    bool c1_2;
    fp0_2 = __f2xm1(fpu_val_6_14 - fpu_val_5_17);
    long double fp0_3;
    bool c1_3;
    fp0_3 = __fscale(fp0_2 + 1, fpu_val_5_17);
    long double fpu_val_7_2 = 1.0f / fp0_3;
    long double fpu_val_7_3 = fpu_val_7_2 - param_2;
    long double f1 = 0.0f;
    fpu_val_7_3 - f1;
    long double fpu_val_7_4;
    long double f2_1;

    if (!(*(&((fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        fpu_val_7_4 = param_2;
        f2_1 = 0.0f;
        fpu_val_7_4 - f2_1;
    }

    if (*(&((fpu_val_7_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f1 ? 1 : 0) << 0xe) + 1) & 0x40 || *(&((fpu_val_7_4 < f2_1 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1)
        & 0x40)
    {
        param_2 = 0.0f;
        context = 0.0f;
    }
    else
    {
        long double fpu_val_7_8 = (fpu_val_7_2 * context - param_2 * item_14) / fpu_val_7_3;
        param_2 = (fpu_val_7_8 - (fpu_val_7_8 - context) / param_2) * g_bcabec;
        context = g_bcabec * fpu_val_7_8;
    }

    int32_t* data_2 = g_5ca114;
    (*(*data_2 + 0x50))(data_2, 0x24, param_2);
    int32_t* data_3 = g_5ca114;
    return (*(*data_3 + 0x50))(data_3, 0x25, context);
}
