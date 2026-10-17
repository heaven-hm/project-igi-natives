// Original IGI.EXE function: Door_Update (VA 0x00446B50; static CFG gate PASS, CFG score 1.000).
#include "Door_Update.h"
int32_t Door_Update(double* context, void* param_2)

{
    int16_t result;

    if (!Env_InitLadder_9(context))
    {
    label_446b90:
        double item_48;
        WeaponType_UpdateAnim(&item_48, context, 0);
        long double fpu_val_7_2 = item_48 + context[4];
        item_48 = fpu_val_7_2;
        double item_40;
        double item_40_1 = item_40 + context[5];
        double item_38;
        double item_38_1 = item_38 + context[6];
        long double fpu_val_7_3 = *(param_2 + 8) - fpu_val_7_2;
        long double fpu_val_6_6 = *(param_2 + 0x10) - item_40_1;
        long double fpu_val_5_2 = *(param_2 + 0x18) - item_38_1;
        double item_30_1 = *(context + 0x7c) * fpu_val_6_6 + context[0x11] * fpu_val_5_2 + context[0xe] * fpu_val_7_3;
        long double fpu_val_3_8 = context[0xf] * fpu_val_7_3;
        long double fpu_val_4_8 = *(context + 0x84) * fpu_val_6_6 + context[0x12] * fpu_val_5_2 + fpu_val_3_8;
        double item_20_1 = fpu_val_4_8;
        long double fpu_val_7_5 = item_30_1;
        long double f0_1 = -4096.0;
        fpu_val_7_5 - f0_1;
        result = (fpu_val_7_5 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f0_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            long double fpu_val_7_6 = item_30_1;
            long double f1_1 = 1843.2;
            fpu_val_7_6 - f1_1;
            result = (fpu_val_7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f1_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double fpu_val_7_7 = item_20_1;
                long double f2_1 = -4096.0;
                fpu_val_7_7 - f2_1;
                result = (fpu_val_7_7 < f2_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f2_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f2_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double fpu_val_7_8 = item_20_1;
                    long double f3_1 = 4096.0;
                    fpu_val_7_8 - f3_1;
                    result = (fpu_val_7_8 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_8, f3_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_8 == f3_1 ? 1 : 0) << 0xe;

                    if (*(&result + 1) & 1)
                    {
                        long double fpu0;
                        long double fpu1;
                        long double fpu2;
                        Level_InitSprites_5(fpu0, fpu1, fpu2, fpu_val_3_8, param_2, context, &item_48);
                        double item_10_1 = *(context + 0x84) * item_20_1 + *(context + 0x7c) * item_30_1;
                        double item_8_1 = context[0x12] * item_20_1 + context[0x11] * item_30_1;
                        item_48 = context[0xf] * item_20_1 + context[0xe] * item_30_1 + item_48;
                        double item_40_2 = item_10_1 + item_40_1;
                        double item_38_2 = item_8_1 + item_38_1;
                        return Level_InitSprites_5(fpu_val_4_8, fpu_val_5_2, fpu_val_6_6, fpu_val_7_8, param_2,
                            context, &item_48);
                    }
                }
            }
        }
    }
    else
    {
        result = Env_InitLadder_9(context);

        if (result)
        {
            result = Env_TriggerAlarm_9(context);

            if (result)
                goto label_446b90;
        }
    }

    return result;
}
