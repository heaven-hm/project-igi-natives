// Original IGI.EXE function: Camera_ApplyHandiCam_17 (VA 0x004A9B8E; static CFG gate FAIL, CFG score 0.625).
#include "Camera_ApplyHandiCam_17.h"
void __fastcall Camera_ApplyHandiCam_17(int16_t context, void* param_2 , long double param_3 )

{
    long double fpu7 = fabsl(param_3);
    long double fpu6 = g_54455e;
    fpu6 - fpu7;
    *(param_2 - 0xa0) = (fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
        | (fpu6 == fpu7 ? 1 : 0) << 0xe;

    if (*(param_2 - 0x9f) & 0x41)
    {
        long double f1 = 0;
        param_3 - f1;
        *(param_2 - 0xa0) = (param_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(param_3, f1) ? 1 : 0) << 0xa
            | (param_3 == f1 ? 1 : 0) << 0xe;

        if (*(param_2 - 0x9f) & 1)
        {
            *(param_2 - 0x90) = 4;
            /* tailcall */
            return sub_4a8bd6();
        }

        g_544540;
        *(&context + 1) = *(&context + 1);
        return;
    }

    long double fpu_val_7_2 = roundl(param_3);
    long double f2 = 0;
    fpu_val_7_2 - f2;
    *(param_2 - 0xa0) = (fpu_val_7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f2 ? 1 : 0) << 0xe | 0x3800;
    int32_t temp_val;
    temp_val = *(param_2 - 0x9f);
    long double fpu_val_7_4 = param_3 - fpu_val_7_2;
    long double f3 = 0;
    fpu_val_7_4 - f3;
    *(param_2 - 0xa0) = (fpu_val_7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f3 ? 1 : 0) << 0xe | 0x3800;
    long double fp0;
    bool c1;
    fp0 = __f2xm1(fabsl(fpu_val_7_4));
}
