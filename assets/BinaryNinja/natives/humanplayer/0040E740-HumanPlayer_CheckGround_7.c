// Original IGI.EXE function: HumanPlayer_CheckGround_7 (VA 0x0040E740; static CFG gate PASS, CFG score 0.917).
#include "HumanPlayer_CheckGround_7.h"
int16_t HumanPlayer_CheckGround_7(void* context, float param_2)

{
    float context_val = param_2;
    float item_28;
    AI_TakeCover_23(&item_28, *(context_val + 0x4ec));
    long double fpu7 = 0.0f;
    int16_t data_1 = *(context + 8);
    float item_48 = 0.0f;
    float item_44 = 0.0f;
    float item_24;
    float item_18;
    float item_c;

    if (data_1 & 0x80)
    {
        fpu7 = item_24;
        item_48 = item_18;
        item_44 = item_c;
    }

    float item_38;

    if (*(&data_1 + 1) & 1)
    {
        item_38 = -(item_c);
        fpu7 = fpu7 + -(item_24);
        item_48 = -(item_18) + item_48;
        item_44 = item_38 + item_44;
    }

    float item_1c;
    float item_10;

    if (data_1 & 0x40)
    {
        fpu7 = fpu7 + item_28;
        item_48 = item_1c + item_48;
        item_44 = item_10 + item_44;
    }

    if (data_1 & 0x20)
    {
        item_38 = -(item_10);
        fpu7 = fpu7 + -(item_28);
        item_48 = -(item_1c) + item_48;
        item_44 = item_38 + item_44;
    }

    long double fpu_val_6_17;

    fpu_val_6_17 = !(*(&data_1 + 1) & 0x70) ? 1.0f : 10.0f;

    long double f1 = 0.0f;
    fpu7 - f1;

    if (*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
    {
        long double fpu_val_5_10 = item_48;
        long double f3_1 = 0.0f;
        fpu_val_5_10 - f3_1;

        if (*(&((fpu_val_5_10 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_10, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_5_10 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40)
        {
            long double fpu_val_5_11 = item_44;
            long double f4_1 = 0.0f;
            fpu_val_5_11 - f4_1;
            int16_t result = (fpu_val_5_11 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_11, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_5_11 == f4_1 ? 1 : 0) << 0xe | 0x3000;

            if (*(&result + 1) & 0x40)
                return result;
        }
    }

    long double f2 = 0.0f;
    fpu7 - f2;
    double item_40;
    memcpy(&item_40, context_val + 0x20, 0x18);

    if (!(*(&((fpu7 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f2) ? 1 : 0) << 0xa
        | (fpu7 == f2 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
    {
    label_40e8af:
        long double fpu_val_5_15 = item_44;
        long double fpu_val_4_1 = item_48;
        long double fpu_val_5_17 =
            1.0 / sqrtl(fpu7 * fpu7 + fpu_val_4_1 * fpu_val_4_1 + fpu_val_5_15 * fpu_val_5_15);
        fpu7 = fpu7 * fpu_val_5_17;
        item_48 = item_48 * fpu_val_5_17;
        item_44 = item_44 * fpu_val_5_17;
    }
    else
    {
        long double fpu_val_5_13 = item_48;
        long double f5_1 = 0.0f;
        fpu_val_5_13 - f5_1;

        if (!(*(&((fpu_val_5_13 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_13, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_5_13 == f5_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_40e8af;

        long double fpu_val_5_14 = item_44;
        long double f6_1 = 0.0f;
        fpu_val_5_14 - f6_1;

        if (!(*(&((fpu_val_5_14 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_5_14, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_5_14 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x40))
            goto label_40e8af;
    }

    long double fpu_val_6_18 = fpu_val_6_17 * 1638.4000000000001;
    float data_2 = *(context_val + 0xa0);
    param_2 = fpu_val_6_18;
    item_40 = fpu7 * fpu_val_6_18 + item_40;
    item_38 = param_2 * item_48 + item_38;
    double item_30;
    double item_30_1 = param_2 * item_44 + item_30;
    return WorldObject_CommitTransform(Level_StartMission_4(), context_val, &item_40, data_2);
}
