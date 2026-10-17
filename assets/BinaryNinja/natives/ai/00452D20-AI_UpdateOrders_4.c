// Original IGI.EXE function: AI_UpdateOrders_4 (VA 0x00452D20; static CFG gate PASS, CFG score 0.958).
#include "AI_UpdateOrders_4.h"
int32_t* AI_UpdateOrders_4(int32_t* context, int32_t* param_2, double* param_3, void* param_4, int32_t param_5, double* param_6)

{
    void* data_val = Script_ExecuteLevelScript_23(param_4, param_5);
    int32_t* result = AI_FireWeapon_4(*(param_4 + 0x50), param_5);

    if (!result)
    {
        result = g_58a9e8;

        if (*result)
        {
            Camera_ApplyHandiCam_33(result);
            result[1] = 0;
            *result = 0;
            Camera_SetFieldOfView_33(&g_57d768, result);
            int32_t entity_1 = *(param_4 + 0x50);
            result[3] = param_5;
            result[2] = entity_1;
            result[4] = 0;
            result[5] = *(data_val + 0x28) * 0.5f;
            result[6] = *(data_val + 0x28) * 0.5f;
        }

        if (!*result || !result)
            return 0;
    }

    result[4] += 1;
    double item_58;
    Script_CallNativeHandler_23(&item_58, data_val);
    double item_70 = *param_6 - item_58;
    double item_50;
    double item_68 = param_6[1] - item_50;
    double item_48;
    double item_60 = param_6[2] - item_48;
    float item_28;
    Script_EvaluateCondition_23(&item_28, data_val, 1);
    float item_1c;
    float item_10;
    double item_40 = item_10 * item_60 + item_1c * item_68 + item_28 * item_70;
    float item_24;
    float item_18;
    float item_c;
    double item_38 = item_c * item_60 + item_18 * item_68 + item_24 * item_70;
    float item_20;
    float item_14;
    float item_8;
    double item_30 = item_8 * item_60 + item_14 * item_68 + item_20 * item_70;
    long double fpu_val_7_24 = item_40 * 0.0001220703125;
    memcpy(&item_70, &item_40, 0x18);
    double item_68_1 = item_68 * 0.0001220703125;
    double item_60_1 = item_60 * 0.0001220703125;
    item_70 = result[5] * 0.5 + fpu_val_7_24;
    double item_68_2 = result[6] * 0.5 + item_68_1;
    long double fpu_val_7_29 = item_70;
    long double f0 = 0.0;
    fpu_val_7_29 - f0;

    if (!(*(&((fpu_val_7_29 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_29, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_29 == f0 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_30 = result[5];
        long double fpu_val_6_19 = item_70;
        fpu_val_6_19 - fpu_val_7_30;

        if (!(*(&((fpu_val_6_19 < fpu_val_7_30 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_19, fpu_val_7_30) ? 1 : 0) << 0xa
                | (fpu_val_6_19 == fpu_val_7_30 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            item_70 = fpu_val_7_30;
    }
    else
    {
        item_70 = 0;
        *(&item_70 + 4) = 0;
    }

    long double fpu_val_7_32 = item_68_2;
    long double f1 = 0.0;
    fpu_val_7_32 - f1;

    if (!(*(&((fpu_val_7_32 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_32, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_32 == f1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_33 = result[6];
        long double fpu_val_6_20 = item_68_2;
        fpu_val_6_20 - fpu_val_7_33;

        if (!(*(&((fpu_val_6_20 < fpu_val_7_33 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_20, fpu_val_7_33) ? 1 : 0) << 0xa
                | (fpu_val_6_20 == fpu_val_7_33 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41))
            item_68_2 = fpu_val_7_33;
    }
    else
    {
        item_68_2 = 0;
        *(&item_68_2 + 4) = 0;
    }

    int32_t item_78_3 = item_68_2;
    int32_t item_78_4 = item_70;
    AI_CheckHearing_4(result, item_78_4, item_78_3, 1);

    if (context)
        *context = item_78_4;

    if (param_2)
        *param_2 = item_78_3;

    if (param_3)
    {
        long double fpu_val_7_40 = (item_70 - result[5] * 0.5) * 8192.0;
        long double fpu_val_6_25 = (item_68_2 - result[6] * 0.5) * 8192.0;
        item_40 = item_20 * item_60_1 + item_24 * fpu_val_6_25 + item_28 * fpu_val_7_40;
        double item_38_1 = item_14 * item_60_1 + item_18 * fpu_val_6_25 + item_1c * fpu_val_7_40;
        *param_3 = item_40 + item_58;
        param_3[1] = item_38_1 + item_50;
        param_3[2] = item_8 * item_60_1 + item_c * fpu_val_6_25 + item_10 * fpu_val_7_40 + item_48;
    }

    return result;
}
