// IGI native provenance: PlaceExplosiveTBA_LoadParameters - 0x004389E0 - CFG score 84.4% (FAIL; structural only); runtime behavior not verified.
// Evidence: 004389E0-PlaceExplosiveTBA_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "PlaceExplosiveTBA_LoadParameters.h"
int32_t PlaceExplosiveTBA_LoadParameters(long double context , long double param_2 , long double param_3 , long double param_4 , float param_5, void* param_6)

{
    float flagP = param_5;
    int32_t result;
    result = *(flagP + 0x240);

    if (result)
    {
        int32_t item_5c_1 = 1;
        double* item_60 = flagP;
        double item_30;
        WeaponType_UpdateAnim(&item_30, item_60, item_5c_1);
        double item_48;
        double* item_68_1 = &item_48;
        item_30 = item_30 + *(flagP + 0x20);
        double item_28;
        double item_28_1 = item_28 + *(flagP + 0x28);
        double item_20;
        double item_20_1 = item_20 + *(flagP + 0x30);
        item_48 = item_30 - *(param_6 + 8);
        double item_40_1 = item_28_1 - *(param_6 + 0x10);
        double item_38_1 = item_20_1 - *(param_6 + 0x18);
        long double fp0_1;
        fp0_1 = Sys_OpenFileStream_11(item_68_1);
        long double fpu_val_6_2 = *(flagP + 0x2a8) * 4096.0f;
        fp0_1 - fpu_val_6_2;
        result = (fp0_1 < fpu_val_6_2 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, fpu_val_6_2) ? 1 : 0) << 0xa
            | (fp0_1 == fpu_val_6_2 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            result = *(param_6 + 0x80);

            if (!result)
            {
                double item_18 =
                    *(param_6 + 0x38) * item_38_1 + *(param_6 + 0x2c) * item_40_1 + *(param_6 + 0x20) * item_48;
                long double fpu_val_7_22 =
                    *(param_6 + 0x3c) * item_38_1 + *(param_6 + 0x30) * item_40_1 + *(param_6 + 0x24) * item_48;
                double item_10_1 = fpu_val_7_22;
                double item_8_1 =
                    *(param_6 + 0x40) * item_38_1 + *(param_6 + 0x34) * item_40_1 + *(param_6 + 0x28) * item_48;
                memcpy(&item_48, &item_18, 0x18);
                long double f1_1 = 0.0;
                fpu_val_7_22 - f1_1;
                result = (fpu_val_7_22 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_22, f1_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_22 == f1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    void item_70;
                    memcpy(&item_70, &item_18, 0x18);
                    WeaponType_InitType();
                    long double f2_1 = 0.0f;
                    context - f2_1;

                    if (!(*(&((context < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(context, f2_1) ? 1 : 0) << 0xa
                        | (context == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
                    {
                        memcpy(&item_70, &item_48, 0x18);
                        WeaponType_InitType();
                    }
                    else
                    {
                        memcpy(&item_70, &item_48, 0x18);
                        WeaponType_InitType();
                        param_2 = -(param_2);
                    }

                    param_5 = param_2;
                    memcpy(&item_70, &item_48, 0x18);
                    WeaponType_GetConfig();
                    long double f3_1 = 0.0f;
                    param_3 - f3_1;

                    if (!(*(&((param_3 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(param_3, f3_1) ? 1 : 0) << 0xa
                        | (param_3 == f3_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
                    {
                        memcpy(&item_70, &item_48, 0x18);
                        result = WeaponType_GetConfig();
                    }
                    else
                    {
                        memcpy(&item_70, &item_48, 0x18);
                        result = WeaponType_GetConfig();
                        param_4 = -(param_4);
                    }

                    long double fpu2 = param_5;
                    long double f4_1 = *(param_6 + 0x70);
                    fpu2 - f4_1;
                    result = (fpu2 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu2, f4_1) ? 1 : 0) << 0xa
                        | (fpu2 == f4_1 ? 1 : 0) << 0xe | 0x1800;

                    if (*(&result + 1) & 1)
                    {
                        long double f5_1 = *(param_6 + 0x74);
                        param_4 - f5_1;
                        result = (param_4 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(param_4, f5_1) ? 1 : 0) << 0xa
                            | (param_4 == f5_1 ? 1 : 0) << 0xe | 0x1800;

                        if (*(&result + 1) & 1)
                        {
                            *(param_6 + 0x80) = flagP;
                            *(param_6 + 0x74) = param_4;
                            *(param_6 + 0x70) = param_5;
                        }
                    }
                }
            }
        }
    }

    return result;
}
