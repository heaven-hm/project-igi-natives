// Original IGI.EXE function: AI_CheckSector_6 (VA 0x00454BA0; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckSector_6.h"
int32_t* AI_CheckSector_6(void* context, int32_t* param_2)

{
    int32_t dest_1 = *(context + 8) & 0xffc3e01c;
    int32_t* data_1 = *(param_2[0x1c] + 4);

    if (*(&data_1 + 1) & 1)
        dest_1 |= 1;

    if (data_1 & 0x10000)
        dest_1 |= 2;

    data_1 = param_2[0x340];
    int32_t dest_2;

    dest_2 = !data_1 ? dest_1 & 0xfffbffff : dest_1 | 0x40000;

    long double fpu7 = param_2[0x6e];
    long double f0 = 0.0f;
    fpu7 - f0;
    data_1 = (fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x20;

    long double fpu_val_7_1 = param_2[0x6f];
    long double f1 = 0.0f;
    fpu_val_7_1 - f1;
    data_1 = (fpu_val_7_1 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f1 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x40;

    long double fpu_val_7_2 = param_2[0x70];
    long double f2 = 0.0f;
    fpu_val_7_2 - f2;
    data_1 = (fpu_val_7_2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_2 == f2 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x80;

    long double fpu_val_7_3 = param_2[0x71];
    long double f3 = 0.0f;
    fpu_val_7_3 - f3;
    data_1 = (fpu_val_7_3 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f3 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x100;

    long double fpu_val_7_4 = param_2[0x72];
    long double f4 = 0.0f;
    fpu_val_7_4 - f4;
    data_1 = (fpu_val_7_4 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f4 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x200;

    long double fpu_val_7_5 = param_2[0x73];
    long double f5 = 0.0f;
    fpu_val_7_5 - f5;
    data_1 = (fpu_val_7_5 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f5) ? 1 : 0) << 0xa
        | (fpu_val_7_5 == f5 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x400;

    long double fpu_val_7_6 = param_2[0x74];
    long double f6 = 0.0f;
    fpu_val_7_6 - f6;
    data_1 = (fpu_val_7_6 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f6) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f6 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x800;

    long double fpu_val_7_7 = param_2[0x75];
    long double f7 = 0.0f;
    fpu_val_7_7 - f7;
    data_1 = (fpu_val_7_7 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f7) ? 1 : 0) << 0xa
        | (fpu_val_7_7 == f7 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x1000;

    long double fpu_val_7_8 = param_2[0x81];
    long double f8 = 0.0f;
    fpu_val_7_8 - f8;
    data_1 = (fpu_val_7_8 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f8) ? 1 : 0) << 0xa
        | (fpu_val_7_8 == f8 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
    {
        dest_2 |= 0x80000;
        param_2[0x343] = param_2[0x81];
    }

    long double fpu_val_7_10 = param_2[0x82];
    long double f9 = 0.0f;
    fpu_val_7_10 - f9;
    data_1 = (fpu_val_7_10 < f9 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_10, f9) ? 1 : 0) << 0xa
        | (fpu_val_7_10 == f9 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
    {
        dest_2 |= 0x100000;
        param_2[0x344] = param_2[0x82];
        data_1 = AI_CheckVisibility_7(param_2);
        param_2[0x82] = 0;
    }

    long double fpu_val_7_12 = param_2[0x83];
    long double f10 = 0.0f;
    fpu_val_7_12 - f10;
    data_1 = (fpu_val_7_12 < f10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_12, f10) ? 1 : 0) << 0xa
        | (fpu_val_7_12 == f10 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
        dest_2 |= 0x200000;

    long double fpu_val_7_13 = param_2[0x84];
    long double f11 = 0.0f;
    fpu_val_7_13 - f11;
    data_1 = (fpu_val_7_13 < f11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_13, f11) ? 1 : 0) << 0xa
        | (fpu_val_7_13 == f11 ? 1 : 0) << 0xe;

    if (!(*(&data_1 + 1) & 0x40))
    {
        int32_t item_8_3 = param_2[0x84];
        int32_t* data_2 = HumanPlayer_UpdateMotion_11(param_2, item_8_3);

        if (data_2)
        {
            void* data_3 = Script_ExecuteLevelScript_12(&param_2[0x131], nullptr, data_2);
            *(context + 8) = dest_2;
            return data_3;
        }

        int32_t item_1c_4 = item_8_3;
        int32_t item_20_3 = Script_EvaluateCondition_4(param_2);
        data_1 = Warning_Show("#%d is trying to change to invalid weapon #%d");
    }

    *(context + 8) = dest_2;
    return data_1;
}
