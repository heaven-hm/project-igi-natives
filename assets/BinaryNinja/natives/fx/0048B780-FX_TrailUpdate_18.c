// Original IGI.EXE function: FX_TrailUpdate_18 (VA 0x0048B780; static CFG gate PASS, CFG score 0.933).
#include "FX_TrailUpdate_18.h"
int32_t* FX_TrailUpdate_18(void* context, void* param_2, int32_t* param_3, int32_t param_4, int32_t param_5)

{
    int32_t data_val = param_4 * 5;

    if (*(param_2 + ((param_5 + (data_val << 2)) << 2) + 0x20) >= 0x19)
    {
        data_val = 0;
        return data_val;
    }

    int32_t data_2;
    int32_t temp_1;
    temp_1 = HIGHD(*(param_2 + 0x14));
    data_2 = LOWD(*(param_2 + 0x14));
    int32_t data_6;
    int32_t temp_2;
    temp_2 = HIGHD(*(param_2 + 0x18));
    data_6 = LOWD(*(param_2 + 0x18));
    int32_t item_68 = param_5 - ((data_6 - temp_2) >> 1);
    float item_30;
    Script_EvaluateCondition_23(&item_30, param_3, 1);
    double item_48;
    Script_CallNativeHandler_23(&item_48, param_3);
    *(context + 0x3ec0) = 0;
    *(context + 0x3ec4) = 0;
    long double fpu_val_7_1 = (param_4 - ((data_2 - temp_1) >> 1)) * 8192.0f;
    *(context + 0x3eb0) = fpu_val_7_1;
    long double fpu_val_6_1 = item_68 * 8192.0f;
    item_68 = fpu_val_6_1;
    *(context + 0x3eb8) = fpu_val_6_1;
    long double fpu_val_6_3 = param_3[9] * -4096.0f;
    fpu_val_7_1 - fpu_val_6_3;

    if (!(*(&((fpu_val_7_1 < fpu_val_6_3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, fpu_val_6_3) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == fpu_val_6_3 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
    {
        long double fpu_val_6_5 = param_3[9] * 4096.0f;
        fpu_val_7_1 - fpu_val_6_5;

        if (!(*(&((fpu_val_7_1 < fpu_val_6_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, fpu_val_6_5) ? 1 : 0) << 0xa
                | (fpu_val_7_1 == fpu_val_6_5 ? 1 : 0) << 0xe) + 1) & 0x41))
            *(context + 0x3eb0) = fpu_val_6_5;
    }
    else
        *(context + 0x3eb0) = fpu_val_6_3;

    long double fpu_val_7_6 = param_3[9] * -4096.0f;
    long double f1 = item_68;
    fpu_val_7_6 - f1;

    if (*(&((fpu_val_7_6 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_9 = param_3[9] * 4096.0f;
        long double f2_1 = item_68;
        fpu_val_7_9 - f2_1;

        if (*(&((fpu_val_7_9 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_9, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_9 == f2_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            *(context + 0x3eb8) = fpu_val_7_9;
    }
    else
        *(context + 0x3eb8) = fpu_val_7_6;

    int32_t* data_11 = *(context + 0x3ea0);
    float item_2c;
    double item_60 = item_2c * *(context + 0x3eb8) + item_30 * *(context + 0x3eb0);
    float item_24;
    float item_20;
    double item_58 = item_20 * *(context + 0x3eb8) + item_24 * *(context + 0x3eb0);
    float item_18;
    float item_14;
    double item_50 = item_14 * *(context + 0x3eb8) + item_18 * *(context + 0x3eb0);
    long double fpu_val_7_20 = item_48;
    memcpy(context + 0x3eb0, &item_60, 0x18);
    *(context + 0x3eb0) = fpu_val_7_20 + *(context + 0x3eb0);
    double item_40;
    *(context + 0x3eb8) = item_40 + *(context + 0x3eb8);
    double item_38;
    *(context + 0x3ec0) = item_38 + *(context + 0x3ec0);

    if (data_11)
    {
        AI_MoveToNode_4(data_11, *(context + 0x3ea4), *(context + 0x3ea8));
        *(context + 0x3ea0) = 0;
    }

    int32_t* data_13 = AI_TakeCover_4(*(context + 0x3b6c), *param_3, param_4, param_5);
    *(context + 0x3ea0) = data_13;
    *(context + 0x3ea4) = param_4;
    *(context + 0x3ea8) = param_5;
    data_13 = 1;
    return data_13;
}
