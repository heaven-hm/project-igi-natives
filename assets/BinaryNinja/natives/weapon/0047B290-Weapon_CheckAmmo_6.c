// Original IGI.EXE function: Weapon_CheckAmmo_6 (VA 0x0047B290; static CFG gate PASS, CFG score 0.889).
#include "Weapon_CheckAmmo_6.h"
int32_t Weapon_CheckAmmo_6(double* context, int32_t param_2, void* param_3, double* param_4)

{
    int32_t result = 0;
    int32_t result_1 = 0;
    int32_t item_80 = 0;

    if (*(param_3 + 0x94) > 0)
    {
        int32_t* source_1 = param_3 + 0xa4;
        int32_t* item_7c_1 = source_1;

        while (result < param_2)
        {
            int32_t* data_val = *source_1;

            if (*data_val)
            {
                long double fpu_val_7_2 = data_val[8] * data_val[0xd];
                long double fpu_val_6_2 = data_val[9] * data_val[0xd];
                float item_54_2 = data_val[0xa] * data_val[0xd];
                double item_50 = fpu_val_7_2;
                double item_48_1 = fpu_val_6_2;
                double item_40_1 = item_54_2;
                long double fpu_val_7_3 = fpu_val_7_2 * 0.5f;
                long double fpu_val_6_5 = fpu_val_6_2 * 0.5f;
                long double fpu_val_5_5 = item_54_2 * 0.5f;
                double item_20 = fpu_val_7_3 + *(data_val + 8);
                double item_18_1 = fpu_val_6_5 + *(data_val + 0x10);
                double item_10_1 = fpu_val_5_5 + *(data_val + 0x18);
                double item_68_1 = fpu_val_5_5;
                double item_70_1 = fpu_val_6_5;
                double item_78_1 = fpu_val_7_3;
                long double fp0_1 = Sys_PushStack_11(param_4, &item_20);
                long double fpu_val_6_9 =
                    item_78_1 * item_78_1 + item_70_1 * item_70_1 + item_68_1 * item_68_1;
                item_78_1 = fpu_val_6_9;
                long double fpu_val_6_10 = fpu_val_6_9 + 268435456.0;
                fpu_val_6_10 - fp0_1;

                if (!(*(&((fpu_val_6_10 < fp0_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_10, fp0_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_10 == fp0_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                {
                    long double fpu_val_7_5 = item_40_1;
                    long double fpu_val_6_11 = param_4[2];
                    double item_38;
                    memcpy(&item_38, *source_1 + 8, 0x18);
                    double item_30;
                    double item_28;
                    long double fpu_val_6_16 = ((fpu_val_6_11 - item_28) * fpu_val_7_5
                        + (param_4[1] - item_30) * item_48_1 + (*param_4 - item_38) * item_50)
                        / (fpu_val_7_5 * fpu_val_7_5 + item_48_1 * item_48_1 + item_50 * item_50);
                    long double f0_1 = 0.0;
                    fpu_val_6_16 - f0_1;
                    long double f2_1;

                    if (*(&((fpu_val_6_16 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_16, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_16 == f0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    {
                        f2_1 = 1.0;
                        fpu_val_6_16 - f2_1;
                    }

                    if (!(*(&((fpu_val_6_16 < f0_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_16, f0_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_16 == f0_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1) || *(&(
                        (fpu_val_6_16 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_6_16, f2_1) ? 1 : 0) << 0xa
                        | (fpu_val_6_16 == f2_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 0x41)
                    {
                        item_50 = fpu_val_6_16 * item_50;
                        double item_48_2 = fpu_val_6_16 * item_48_1;
                        *context = item_38 + item_50;
                        context[1] = item_30 + item_48_2;
                        context[2] = item_28 + fpu_val_7_5 * fpu_val_6_16;
                        long double fp0_2 = Sys_DispatchOpcode_11(context, param_4);
                        long double f1_1 = 16384.0;
                        fp0_2 - f1_1;

                        if (*(&((fp0_2 < f1_1 ? 1 : 0) << 8
                            | (FCMP_UO(fp0_2, f1_1) ? 1 : 0) << 0xa
                            | (fp0_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 1)
                        {
                            context = &context[3];
                            result_1 += 1;
                        }
                    }
                }
            }

            int32_t data_8 = item_80 + 1;
            source_1 = &item_7c_1[1];
            item_80 = data_8;
            result = result_1;
            item_7c_1 = source_1;

            if (data_8 >= *(param_3 + 0x94))
                break;
        }
    }

    return result;
}
