// Original IGI.EXE function: HumanPlayer_UpdateAnimation_6 (VA 0x0040E3C0; static CFG gate PASS, CFG score 1.000).
#include "HumanPlayer_UpdateAnimation_6.h"
int32_t HumanPlayer_UpdateAnimation_6(void* context, void* param_2)

{
    long double fpu7 = *(param_2 + 0x230);
    long double f0 = 0.0f;
    fpu7 - f0;
    int32_t context_val = *(context + 8);
    int16_t result = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 0x40)
    {
    label_40e3f4:

        if (!(context_val & 0x20000))
            return result;
    }
    else
    {
        long double fpu_val_7_1 = *(param_2 + 0x190);
        long double f1_1 = 0.0f;
        fpu_val_7_1 - f1_1;
        result = (fpu_val_7_1 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_1 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x40))
            goto label_40e3f4;
    }

    AI_UpdatePatrol_29();
    AI_TakeCover_22(*(param_2 + 0x4ec));
    AI_UpdateOrders_20(param_2);
    *(param_2 + 0x670) = 0;
    *(param_2 + 0x674) = 0;
    *(param_2 + 0x678) = 0;
    *(context + 0xc) = *(context + 0x10);

    if (!(context_val & 0x20000))
    {
        int32_t* temp_2 = *(context + 4);
        *(context + 0x10) = 0;
        int32_t data_3 = *temp_2;
        *(context + 0x14) = data_3;
        return data_3(context, param_2);
    }

    void* temp_1 = *(context + 4);
    *(context + 0x10) = 0x2f;
    int32_t data_1 = *(temp_1 + 0xbc);
    *(context + 0x14) = data_1;
    return data_1(context, param_2);
}
