// Original IGI.EXE function: Level_InitSprites_5 (VA 0x00416AD0; static CFG gate FAIL, CFG score 0.833).
#include "Level_InitSprites_5.h"
int32_t Level_InitSprites_5(long double context , long double param_2 , long double param_3 , long double param_4 , void* param_5, int32_t param_6, float param_7)

{
    double* data_val = param_7;
    double item_30 = *data_val - *(param_5 + 8);
    double item_28 = data_val[1] - *(param_5 + 0x10);
    double item_20 = data_val[2] - *(param_5 + 0x18);
    long double fp0 = Sys_OpenFileStream_11(&item_30);
    long double f0 = *(param_5 + 0x78);
    fp0 - f0;
    int16_t result = (fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        double item_18 = *(param_5 + 0x38) * item_20 + *(param_5 + 0x2c) * item_28 + *(param_5 + 0x20) * item_30;
        long double fpu_val_7_14 =
            *(param_5 + 0x3c) * item_20 + *(param_5 + 0x30) * item_28 + *(param_5 + 0x24) * item_30;
        double item_10_1 = fpu_val_7_14;
        double item_8_1 =
            *(param_5 + 0x40) * item_20 + *(param_5 + 0x34) * item_28 + *(param_5 + 0x28) * item_30;
        memcpy(&item_30, &item_18, 0x18);
        long double f1_1 = 0.0;
        fpu_val_7_14 - f1_1;
        result = (fpu_val_7_14 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_14, f1_1) ? 1 : 0) << 0xa
            | (fpu_val_7_14 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            void item_54;
            memcpy(&item_54, &item_18, 0x18);
            WeaponType_InitType();
            long double f2_1 = 0.0f;
            context - f2_1;

            if (!(*(&((context < f2_1 ? 1 : 0) << 8 | (FCMP_UO(context, f2_1) ? 1 : 0) << 0xa
                | (context == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
            {
                memcpy(&item_54, &item_30, 0x18);
                WeaponType_InitType();
            }
            else
            {
                memcpy(&item_54, &item_30, 0x18);
                WeaponType_InitType();
                param_2 = -(param_2);
            }

            param_7 = param_2;
            memcpy(&item_54, &item_30, 0x18);
            WeaponType_GetConfig();
            long double f3_1 = 0.0f;
            param_3 - f3_1;

            if (!(*(&((param_3 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(param_3, f3_1) ? 1 : 0) << 0xa
                | (param_3 == f3_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
            {
                memcpy(&item_54, &item_30, 0x18);
                WeaponType_GetConfig();
            }
            else
            {
                memcpy(&item_54, &item_30, 0x18);
                WeaponType_GetConfig();
                param_4 = -(param_4);
            }

            long double fpu2 = param_7;
            long double f4_1 = *(param_5 + 0x70);
            fpu2 - f4_1;
            result = (fpu2 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu2, f4_1) ? 1 : 0) << 0xa
                | (fpu2 == f4_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double f5_1 = *(param_5 + 0x74);
                param_4 - f5_1;
                result = (param_4 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(param_4, f5_1) ? 1 : 0) << 0xa
                    | (param_4 == f5_1 ? 1 : 0) << 0xe | 0x1800;

                if (*(&result + 1) & 1)
                {
                    *(param_5 + 0x74) = param_4;
                    *(param_5 + 0x70) = param_7;
                    *(param_5 + 0x80) = param_6;
                    result = 1;
                    return result;
                }
            }
        }
    }

    result = 0;
    return result;
}
