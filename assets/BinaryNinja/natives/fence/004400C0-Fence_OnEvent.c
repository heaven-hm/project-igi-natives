// Original IGI.EXE function: Fence_OnEvent (VA 0x004400C0; static CFG gate PASS, CFG score 1.000).
#include "Fence_OnEvent.h"
int32_t Fence_OnEvent(void* context, void* param_2)

{
    int16_t result;
    result = *(context + 0x11c);

    if (!result)
    {
        long double fpu_val_7_2 = *(param_2 + 8) - *(context + 0x20);
        long double fpu_val_6_2 = *(param_2 + 0x10) - *(context + 0x28);
        long double fpu_val_5_2 = *(param_2 + 0x18) - *(context + 0x30);
        double item_18_1 =
            *(context + 0x88) * fpu_val_5_2 + *(context + 0x7c) * fpu_val_6_2 + *(context + 0x70) * fpu_val_7_2;
        double item_10_1 =
            *(context + 0x80) * fpu_val_6_2 + *(context + 0x8c) * fpu_val_5_2 + *(context + 0x74) * fpu_val_7_2;
        float item_30;
        WeaponType_RegisterType_2(&item_30, context, 0);
        float item_24;
        WeaponType_RegisterType_2(&item_24, context, 1);
        long double fpu_val_7_4 = item_10_1;
        long double f0_1 = 0.0;
        fpu_val_7_4 - f0_1;
        long double fpu_val_7_5 = item_10_1;

        if (*(&((fpu_val_7_4 < f0_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f0_1) ? 1 : 0) << 0xa
                | (fpu_val_7_4 == f0_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            fpu_val_7_5 = -(fpu_val_7_5);

        long double f1_1 = *(param_2 + 0x78);
        fpu_val_7_5 - f1_1;
        result = (fpu_val_7_5 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_5 == f1_1 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            long double fpu_val_7_6 = item_30;
            long double f2_1 = item_18_1;
            fpu_val_7_6 - f2_1;
            result = (fpu_val_7_6 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f2_1 ? 1 : 0) << 0xe;

            if (*(&result + 1) & 1)
            {
                long double fpu_val_7_7 = item_24;
                long double f3_1 = item_18_1;
                fpu_val_7_7 - f3_1;
                result = (fpu_val_7_7 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_7, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f3_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    long double fpu_val_7_8 = item_10_1;
                    long double f4_1 = 0.0;
                    fpu_val_7_8 - f4_1;
                    int32_t entity_1 = *(param_2 + 0x3c);
                    int32_t item_38_1 = *(param_2 + 0x30);
                    float data_1 = *(context + 0x80);
                    int32_t item_3c = *(param_2 + 0x24);
                    int32_t item_34_1 = entity_1;
                    float entity_2 = *(context + 0x8c);
                    float item_48 = *(context + 0x74);

                    if (!(*(&((fpu_val_7_8 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu_val_7_8, f4_1) ? 1 : 0) << 0xa
                        | (fpu_val_7_8 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                    {
                        item_48 = -(item_48);
                        float item_44_2 = -(data_1);
                        float item_40_2 = -(entity_2);
                    }

                    long double fp0_1 = Sys_PushStack_10(&item_3c, &item_48);
                    long double f5_1 = 1.04719758f;
                    fp0_1 - f5_1;
                    result = (fp0_1 < f5_1 ? 1 : 0) << 8
                        | (FCMP_UO(fp0_1, f5_1) ? 1 : 0) << 0xa
                        | (fp0_1 == f5_1 ? 1 : 0) << 0xe;

                    if (*(&result + 1) & 1)
                    {
                        *(param_2 + 0x70) = 0;
                        *(param_2 + 0x74) = 0;
                        *(param_2 + 0x80) = context;
                    }
                }
            }
        }
    }

    return result;
}
