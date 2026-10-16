#include "gi_platform.h"
#include "004389E0-PlaceExplosiveTBA_LoadParameters.h"
int32_t PlaceExplosiveTBA_LoadParameters(long double a1 , long double a2 , long double a3 , long double a4 , float a5, void* a6)

{
    float flagP = a5;
    int32_t result;
    result = *(flagP + 0x240);

    if (result)
    {
        int32_t v_5c_1 = 1;
        double* v_60 = flagP;
        double v_30;
        WeaponType_UpdateAnim(&v_30, v_60, v_5c_1);
        double v_48;
        double* v_68_1 = &v_48;
        v_30 = v_30 + *(flagP + 0x20);
        double v_28;
        double v_28_1 = v_28 + *(flagP + 0x28);
        double v_20;
        double v_20_1 = v_20 + *(flagP + 0x30);
        v_48 = v_30 - (*(int32_t*)(uintptr_t)(a6 + 8));
        double v_40_1 = v_28_1 - (*(int32_t*)(uintptr_t)(a6 + 0x10));
        double v_38_1 = v_20_1 - (*(int32_t*)(uintptr_t)(a6 + 0x18));
        long double fp0_1;
        fp0_1 = Sys_OpenFileStream_11(v_68_1);
        long double x87_r6_2 = *(flagP + 0x2a8) * 4096.0f;
        fp0_1 - x87_r6_2;
        result = (fp0_1 < x87_r6_2 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, x87_r6_2) ? 1 : 0) << 0xa
            | (fp0_1 == x87_r6_2 ? 1 : 0) << 0xe;

        if (*(&result + 1) & 1)
        {
            result = (*(int32_t*)(uintptr_t)(a6 + 0x80));

            if (!result)
            {
                double v_18 =
                    (*(int32_t*)(uintptr_t)(a6 + 0x38)) * v_38_1 + (*(int32_t*)(uintptr_t)(a6 + 0x2c)) * v_40_1 + (*(int32_t*)(uintptr_t)(a6 + 0x20)) * v_48;
                long double x87_r7_22 =
                    (*(int32_t*)(uintptr_t)(a6 + 0x3c)) * v_38_1 + (*(int32_t*)(uintptr_t)(a6 + 0x30)) * v_40_1 + (*(int32_t*)(uintptr_t)(a6 + 0x24)) * v_48;
                double v_10_1 = x87_r7_22;
                double v_8_1 =
                    (*(int32_t*)(uintptr_t)(a6 + 0x40)) * v_38_1 + (*(int32_t*)(uintptr_t)(a6 + 0x34)) * v_40_1 + (*(int32_t*)(uintptr_t)(a6 + 0x28)) * v_48;
                memcpy(&v_48, &v_18, 0x18);
                long double f1_1 = 0.0;
                x87_r7_22 - f1_1;
                result = (x87_r7_22 < f1_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_22, f1_1) ? 1 : 0) << 0xa
                    | (x87_r7_22 == f1_1 ? 1 : 0) << 0xe;

                if (!(*(&result + 1) & 0x41))
                {
                    char v_70;
                    memcpy(&v_70, &v_18, 0x18);
                    WeaponType_InitType();
                    long double f2_1 = 0.0f;
                    a1 - f2_1;

                    if (!((*(int32_t*)(uintptr_t)(&((a1 < f2_1 ? 1 : 0) << 8
                        | (FCMP_UO(a1, f2_1) ? 1 : 0) << 0xa
                        | (a1 == f2_1 ? 1 : 0) << 0xe | 0x800) + 1)) & 1))
                    {
                        memcpy(&v_70, &v_48, 0x18);
                        WeaponType_InitType();
                    }
                    else
                    {
                        memcpy(&v_70, &v_48, 0x18);
                        WeaponType_InitType();
                        a2 = -(a2);
                    }

                    a5 = a2;
                    memcpy(&v_70, &v_48, 0x18);
                    WeaponType_GetConfig();
                    long double f3_1 = 0.0f;
                    a3 - f3_1;

                    if (!((*(int32_t*)(uintptr_t)(&((a3 < f3_1 ? 1 : 0) << 8
                        | (FCMP_UO(a3, f3_1) ? 1 : 0) << 0xa
                        | (a3 == f3_1 ? 1 : 0) << 0xe | 0x1800) + 1)) & 1))
                    {
                        memcpy(&v_70, &v_48, 0x18);
                        result = WeaponType_GetConfig();
                    }
                    else
                    {
                        memcpy(&v_70, &v_48, 0x18);
                        result = WeaponType_GetConfig();
                        a4 = -(a4);
                    }

                    long double fpu2 = a5;
                    long double f4_1 = (*(int32_t*)(uintptr_t)(a6 + 0x70));
                    fpu2 - f4_1;
                    result = (fpu2 < f4_1 ? 1 : 0) << 8
                        | (FCMP_UO(fpu2, f4_1) ? 1 : 0) << 0xa
                        | (fpu2 == f4_1 ? 1 : 0) << 0xe | 0x1800;

                    if (*(&result + 1) & 1)
                    {
                        long double f5_1 = (*(int32_t*)(uintptr_t)(a6 + 0x74));
                        a4 - f5_1;
                        result = (a4 < f5_1 ? 1 : 0) << 8
                            | (FCMP_UO(a4, f5_1) ? 1 : 0) << 0xa
                            | (a4 == f5_1 ? 1 : 0) << 0xe | 0x1800;

                        if (*(&result + 1) & 1)
                        {
                            (*(int32_t*)(uintptr_t)(a6 + 0x80)) = flagP;
                            (*(int32_t*)(uintptr_t)(a6 + 0x74)) = a4;
                            (*(int32_t*)(uintptr_t)(a6 + 0x70)) = a5;
                        }
                    }
                }
            }
        }
    }

    return result;
}
