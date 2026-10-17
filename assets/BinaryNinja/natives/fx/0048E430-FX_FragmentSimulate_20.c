// Original IGI.EXE function: FX_FragmentSimulate_20 (VA 0x0048E430; static CFG gate PASS, CFG score 1.000).
#include "FX_FragmentSimulate_20.h"
int32_t FX_FragmentSimulate_20(void* context, int32_t* param_2, double* param_3)

{
    double item_18[0x3];
    Script_CallNativeHandler_23(&item_18, param_2);
    long double fp0 = Sys_DispatchOpcode_11(param_3, &item_18);
    long double fpu_val_6_1 = param_3[3] * 4096.0;
    fpu_val_6_1 - fp0;
    int16_t data_val = (fpu_val_6_1 < fp0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fp0) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fp0 ? 1 : 0) << 0xe;

    if (*(&data_val + 1) & 1)
    {
        data_val = FX_SmokeEmit_18(context, param_2, 0, 0);

        if (data_val)
        {
            int32_t data_1 = *param_2;
            param_3[4] = data_1;
            data_1 = 1;
            return data_1;
        }
    }

    data_val = 0;
    return data_val;
}
