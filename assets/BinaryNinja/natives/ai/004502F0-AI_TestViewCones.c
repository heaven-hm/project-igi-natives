// Original IGI.EXE function: AI_TestViewCones (VA 0x004502F0; static CFG gate FAIL, CFG score 0.833).
#include "AI_TestViewCones.h"
double* AI_TestViewCones(long double context , long double param_2 , long double param_3 , void* param_4, double* param_5, char param_6)

{
    double* result = param_5;
    long double fpu_val_7_1 = *result - *(param_4 + 0x18);
    double item_38 = fpu_val_7_1;
    long double fpu_val_6_1 = result[1] - *(param_4 + 0x20);
    double item_30 = fpu_val_6_1;
    long double fpu_val_5_1 = result[2] - *(param_4 + 0x28);
    double item_28 = fpu_val_5_1;
    double item_20 =
        *(param_4 + 0x70) * fpu_val_5_1 + *(param_4 + 0x64) * fpu_val_6_1 + *(param_4 + 0x58) * fpu_val_7_1;
    double item_18 =
        *(param_4 + 0x74) * fpu_val_5_1 + *(param_4 + 0x68) * fpu_val_6_1 + *(param_4 + 0x5c) * fpu_val_7_1;
    long double fpu_val_3_11 = *(param_4 + 0x60) * fpu_val_7_1;
    double item_10 = *(param_4 + 0x78) * fpu_val_5_1 + *(param_4 + 0x6c) * fpu_val_6_1 + fpu_val_3_11;
    memcpy(&item_38, &item_20, 0x18);
    long double fpu_val_7_3 = item_18;
    long double f0 = 0.0;
    fpu_val_7_3 - f0;
    result = (fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe;

    if (!(*(&result + 1) & 1))
    {
        double item_40_1 = Sys_OpenFileStream_11(&item_38);
        int32_t item_48_1;

        if (!param_6)
        {
            item_48_1 = *(param_4 + 0x90);
            int32_t item_44_2 = *(param_4 + 0x94);
        }
        else
        {
            item_48_1 = *(param_4 + 0x98);
            int32_t item_44_1 = *(param_4 + 0x9c);
        }

        void item_70;
        memcpy(&item_70, &item_38, 0x18);
        WeaponType_InitType();
        long double f1_1 = 0.0f;
        context - f1_1;

        if (!(*(&((context < f1_1 ? 1 : 0) << 8 | (FCMP_UO(context, f1_1) ? 1 : 0) << 0xa
            | (context == f1_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
        {
            memcpy(&item_70, &item_38, 0x18);
            WeaponType_InitType();
        }
        else
        {
            memcpy(&item_70, &item_38, 0x18);
            WeaponType_InitType();
            param_2 = -(param_2);
        }

        float item_4c_1 = param_2;
        memcpy(&item_70, &item_38, 0x18);
        WeaponType_GetConfig();
        long double f2_1 = 0.0f;
        param_3 - f2_1;

        if (!(*(&((param_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(param_3, f2_1) ? 1 : 0) << 0xa
            | (param_3 == f2_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
        {
            memcpy(&item_70, &item_38, 0x18);
            result = WeaponType_GetConfig();
        }
        else
        {
            memcpy(&item_70, &item_38, 0x18);
            result = WeaponType_GetConfig();
            fpu_val_3_11 = -(fpu_val_3_11);
        }

        long double fpu2 = item_40_1;
        long double f3_1 = item_48_1;
        fpu2 - f3_1;
        result = (fpu2 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu2, f3_1) ? 1 : 0) << 0xa
            | (fpu2 == f3_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 0x41)
        {
            long double fpu_val_2_1 = item_4c_1;
            long double f4_1 = *(param_4 + 0x80);
            fpu_val_2_1 - f4_1;
            result = (fpu_val_2_1 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_2_1, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_2_1 == f4_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double f5_1 = *(param_4 + 0x88);
                fpu_val_3_11 - f5_1;
                result = (fpu_val_3_11 < f5_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_3_11, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_3_11 == f5_1 ? 1 : 0) << 0xe | 0x1800;

                if (*(&result + 1) & 1)
                {
                    result = 1;
                    return result;
                }
            }
        }

        result = param_6;
        long double fpu_val_2_2;

        if (!result)
            fpu_val_2_2 = *(param_4 + 0xb0);
        else
            fpu_val_2_2 = *(param_4 + 0xb8);

        long double fpu1 = item_40_1;
        fpu1 - fpu_val_2_2;
        result = (fpu1 < fpu_val_2_2 ? 1 : 0) << 8 | (FCMP_UO(fpu1, fpu_val_2_2) ? 1 : 0) << 0xa
            | (fpu1 == fpu_val_2_2 ? 1 : 0) << 0xe | 0x1000;

        if (*(&result + 1) & 0x41)
        {
            long double fpu_val_2_4 = item_4c_1;
            long double f6_1 = *(param_4 + 0xa0);
            fpu_val_2_4 - f6_1;
            result = (fpu_val_2_4 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_2_4, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_2_4 == f6_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double f7_1 = *(param_4 + 0xa8);
                fpu_val_3_11 - f7_1;
                result = (fpu_val_3_11 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_3_11, f7_1) ? 1 : 0) << 0xa
                    | (fpu_val_3_11 == f7_1 ? 1 : 0) << 0xe | 0x2000;

                if (*(&result + 1) & 1)
                {
                    result = 1;
                    return result;
                }
            }
        }
    }

    result = 0;
    return result;
}
