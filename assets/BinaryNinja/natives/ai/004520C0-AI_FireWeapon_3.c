// Original IGI.EXE function: AI_FireWeapon_3 (VA 0x004520C0; static CFG gate FAIL, CFG score 0.833).
#include "AI_FireWeapon_3.h"
int32_t AI_FireWeapon_3(double* context, void* param_2, double* param_3, double* param_4, char param_5)

{
    double item_10 = *(param_2 + 0x24) * 4096.0f;
    int16_t data_1 = Sys_PopStack_11(param_4);

    if (!data_1)
    {
        long double fpu_val_7_2 = *param_4;
        long double f0_1 = item_10;
        fpu_val_7_2 - f0_1;
        long double fpu_val_7_4;
        long double f2_1;

        if (*(&((fpu_val_7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41)
        {
            fpu_val_7_4 = -(item_10);
            f2_1 = *param_4;
            fpu_val_7_4 - f2_1;
        }

        if (!(*(&((fpu_val_7_2 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f0_1) ? 1 : 0) << 0xa
            | (fpu_val_7_2 == f0_1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&(
            (fpu_val_7_4 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_4 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41))
        {
            long double fpu_val_7_6 = item_10 / *param_4;
            long double f1_1 = 0.0;
            fpu_val_7_6 - f1_1;

            if (*(&((fpu_val_7_6 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f1_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
                fpu_val_7_6 = -(fpu_val_7_6);

            long double fpu_val_7_7 = fpu_val_7_6 * param_4[1];
            long double f3_1 = 0.0;
            fpu_val_7_7 - f3_1;
            long double fpu_val_6_1 = fpu_val_7_7;

            if (*(&((fpu_val_7_7 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                fpu_val_6_1 = -(fpu_val_6_1);

            long double f5_1 = item_10;
            fpu_val_6_1 - f5_1;

            if (*(&((fpu_val_6_1 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_6_1 == f5_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
            {
                long double fpu_val_6_2 = *param_4;
                long double f8 = 0.0;
                fpu_val_6_2 - f8;
                long double fpu_val_6_3 = item_10;

                if (*(&((fpu_val_6_2 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f8) ? 1 : 0) << 0xa
                        | (fpu_val_6_2 == f8 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                    fpu_val_6_3 = -(fpu_val_6_3);

                *context = fpu_val_6_3;
                context[2] = 0;
                context[1] = fpu_val_7_7;
                *(context + 0x14) = 0;

                if (!param_5)
                {
                    *context = *param_3 - fpu_val_6_3;
                    context[1] = param_3[1] - fpu_val_7_7;
                    context[2] = param_3[2];
                    *(context + 0x14) = *(param_3 + 0x14);
                    return context;
                }

                *context = fpu_val_6_3 + *param_3;
                context[1] = fpu_val_7_7 + param_3[1];
                context[2] = param_3[2];
                *(context + 0x14) = *(param_3 + 0x14);
                return context;
            }
        }

        long double fpu_val_7_11 = item_10;
        long double f4_1 = param_4[1];
        fpu_val_7_11 - f4_1;

        if (!(*(&((fpu_val_7_11 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1))
        {
            long double fpu_val_6_9 = -(fpu_val_7_11);
            long double f7_1 = param_4[1];
            fpu_val_6_9 - f7_1;
            data_1 = (fpu_val_6_9 < f7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_9, f7_1) ? 1 : 0) << 0xa
                | (fpu_val_6_9 == f7_1 ? 1 : 0) << 0xe | 0x3800;
        }

        if (*(&((fpu_val_7_11 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_11, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_7_11 == f4_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1 || !(*(&data_1 + 1) & 0x41))
        {
            long double fpu_val_6_11 = fpu_val_7_11 / param_4[1];
            long double f6_1 = 0.0;
            fpu_val_6_11 - f6_1;

            if (*(&((fpu_val_6_11 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_11, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_11 == f6_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                fpu_val_6_11 = -(fpu_val_6_11);

            long double fpu_val_6_12 = fpu_val_6_11 * *param_4;
            long double f9_1 = 0.0;
            fpu_val_6_12 - f9_1;
            double item_10_1 = fpu_val_6_12;
            bool c1_1 = /* bool c1_1 = unknown  {fst qword [stack_ptr+0x8], fp0} */;
            long double fpu_val_5_5 = fpu_val_6_12;

            if (*(&((fpu_val_6_12 < f9_1 ? 1 : 0) << 8 | (c1_1 ? 1 : 0) << 9
                    | (FCMP_UO(fpu_val_6_12, f9_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_12 == f9_1 ? 1 : 0) << 0xe | 0x2800) + 1) & 1)
                fpu_val_5_5 = -(fpu_val_5_5);

            fpu_val_5_5 - fpu_val_7_11;
            data_1 = (fpu_val_5_5 < fpu_val_7_11 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_5_5, fpu_val_7_11) ? 1 : 0) << 0xa
                | (fpu_val_5_5 == fpu_val_7_11 ? 1 : 0) << 0xe | 0x3000;

            if (*(&data_1 + 1) & 0x41)
            {
                *context = fpu_val_6_12;
                long double fpu_val_6_13 = param_4[1];
                long double f10 = 0.0;
                fpu_val_6_13 - f10;
                int16_t data_4 = (fpu_val_6_13 < f10 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_6_13, f10) ? 1 : 0) << 0xa
                    | (fpu_val_6_13 == f10 ? 1 : 0) << 0xe | 0x3800;

                if (*(&data_4 + 1) & 1)
                    fpu_val_7_11 = -(fpu_val_7_11);

                data_4 = param_5;
                context[1] = fpu_val_7_11;
                context[2] = 0;
                *(context + 0x14) = 0;

                if (!data_4)
                {
                    *context = *param_3 - item_10_1;
                    context[1] = param_3[1] - fpu_val_7_11;
                    context[2] = param_3[2];
                    int32_t data_8 = *(param_3 + 0x14);
                    *(context + 0x14) = data_8;
                    return data_8;
                }

                *context = item_10_1 + *param_3;
                context[1] = fpu_val_7_11 + param_3[1];
                context[2] = param_3[2];
                int32_t data_6 = *(param_3 + 0x14);
                *(context + 0x14) = data_6;
                return data_6;
            }
        }
    }

    memcpy(context, param_3, 0x18);
    return data_1;
}
