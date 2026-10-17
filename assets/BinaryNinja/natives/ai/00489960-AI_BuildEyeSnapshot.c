// Original IGI.EXE function: AI_BuildEyeSnapshot (VA 0x00489960; static CFG gate FAIL, CFG score 0.833).
#include "AI_BuildEyeSnapshot.h"
int32_t AI_BuildEyeSnapshot(long double context , long double param_2 , long double param_3 , double* param_4, double* param_5)

{
    long double fpu_val_7_1 = *param_5 - *param_4;
    double item_38 = fpu_val_7_1;
    long double fpu_val_6_1 = param_5[1] - param_4[1];
    double item_30 = fpu_val_6_1;
    long double fpu_val_5_1 = param_5[2] - param_4[2];
    double* item_54 = &item_38;
    double item_28 = fpu_val_5_1;
    double item_20 = param_4[6] * fpu_val_5_1 + *(param_4 + 0x24) * fpu_val_6_1 + param_4[3] * fpu_val_7_1;
    double item_18 = *(param_4 + 0x34) * fpu_val_5_1 + param_4[5] * fpu_val_6_1 + *(param_4 + 0x1c) * fpu_val_7_1;
    long double fpu_val_3_11 = param_4[4] * fpu_val_7_1;
    double item_10 = param_4[7] * fpu_val_5_1 + *(param_4 + 0x2c) * fpu_val_6_1 + fpu_val_3_11;
    memcpy(&item_38, &item_20, 0x18);
    double item_40 = Sys_OpenFileStream_11(item_54);
    void item_68;
    memcpy(&item_68, &item_38, 0x18);
    WeaponType_InitType();
    long double f0 = 0.0f;
    context - f0;

    if (!(*(&((context < f0 ? 1 : 0) << 8 | (FCMP_UO(context, f0) ? 1 : 0) << 0xa
        | (context == f0 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
    {
        memcpy(&item_68, &item_38, 0x18);
        WeaponType_InitType();
    }
    else
    {
        memcpy(&item_68, &item_38, 0x18);
        WeaponType_InitType();
        param_2 = -(param_2);
    }

    float item_44 = param_2;
    memcpy(&item_68, &item_38, 0x18);
    WeaponType_GetConfig();
    long double f1 = 0.0f;
    param_3 - f1;

    if (!(*(&((param_3 < f1 ? 1 : 0) << 8 | (FCMP_UO(param_3, f1) ? 1 : 0) << 0xa
        | (param_3 == f1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
    {
        memcpy(&item_68, &item_38, 0x18);
        WeaponType_GetConfig();
    }
    else
    {
        memcpy(&item_68, &item_38, 0x18);
        WeaponType_GetConfig();
        fpu_val_3_11 = -(fpu_val_3_11);
    }

    long double fpu2 = item_40;
    long double f2 = param_4[0xa];
    fpu2 - f2;
    int16_t result = (fpu2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu2, f2) ? 1 : 0) << 0xa
        | (fpu2 == f2 ? 1 : 0) << 0xe | 0x1800;

    if (*(&result + 1) & 0x41)
    {
        long double fpu_val_2_1 = item_44;
        long double f3_1 = param_4[8];
        fpu_val_2_1 - f3_1;
        result = (fpu_val_2_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_2_1, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_2_1 == f3_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 1)
        {
            long double f5_1 = param_4[9];
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

    result = param_4[0xe];

    if (result)
    {
        long double fpu_val_2_2 = item_40;
        long double f4_1 = param_4[0xd];
        fpu_val_2_2 - f4_1;
        result = (fpu_val_2_2 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_2_2, f4_1) ? 1 : 0) << 0xa
            | (fpu_val_2_2 == f4_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 0x41)
        {
            long double fpu_val_2_3 = item_44;
            long double f6_1 = param_4[0xb];
            fpu_val_2_3 - f6_1;
            result = (fpu_val_2_3 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_2_3, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_2_3 == f6_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double f7_1 = param_4[0xc];
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
