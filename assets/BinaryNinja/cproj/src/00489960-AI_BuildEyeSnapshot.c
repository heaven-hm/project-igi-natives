#include "gi_platform.h"
#include "00489960-AI_BuildEyeSnapshot.h"
int32_t AI_BuildEyeSnapshot(long double a1 , long double a2 , long double a3 , double* a4, double* a5)

{
    long double x87_r7_1 = *a5 - *a4;
    double v_38 = x87_r7_1;
    long double x87_r6_1 = a5[1] - a4[1];
    double v_30 = x87_r6_1;
    long double x87_r5_1 = a5[2] - a4[2];
    double* v_54 = &v_38;
    double v_28 = x87_r5_1;
    double v_20 = a4[6] * x87_r5_1 + (*(int32_t*)(uintptr_t)(a4 + 0x24)) * x87_r6_1 + a4[3] * x87_r7_1;
    double v_18 = (*(int32_t*)(uintptr_t)(a4 + 0x34)) * x87_r5_1 + a4[5] * x87_r6_1 + (*(int32_t*)(uintptr_t)(a4 + 0x1c)) * x87_r7_1;
    long double x87_r3_11 = a4[4] * x87_r7_1;
    double v_10 = a4[7] * x87_r5_1 + (*(int32_t*)(uintptr_t)(a4 + 0x2c)) * x87_r6_1 + x87_r3_11;
    memcpy(&v_38, &v_20, 0x18);
    double v_40 = Sys_OpenFileStream_11(v_54);
    char v_68;
    memcpy(&v_68, &v_38, 0x18);
    WeaponType_InitType();
    long double f0 = 0.0f;
    a1 - f0;

    if (!((*(int32_t*)(uintptr_t)(&((a1 < f0 ? 1 : 0) << 8 | (FCMP_UO(a1, f0) ? 1 : 0) << 0xa
        | (a1 == f0 ? 1 : 0) << 0xe | 0x800) + 1)) & 1))
    {
        memcpy(&v_68, &v_38, 0x18);
        WeaponType_InitType();
    }
    else
    {
        memcpy(&v_68, &v_38, 0x18);
        WeaponType_InitType();
        a2 = -(a2);
    }

    float v_44 = a2;
    memcpy(&v_68, &v_38, 0x18);
    WeaponType_GetConfig();
    long double f1 = 0.0f;
    a3 - f1;

    if (!((*(int32_t*)(uintptr_t)(&((a3 < f1 ? 1 : 0) << 8 | (FCMP_UO(a3, f1) ? 1 : 0) << 0xa
        | (a3 == f1 ? 1 : 0) << 0xe | 0x1800) + 1)) & 1))
    {
        memcpy(&v_68, &v_38, 0x18);
        WeaponType_GetConfig();
    }
    else
    {
        memcpy(&v_68, &v_38, 0x18);
        WeaponType_GetConfig();
        x87_r3_11 = -(x87_r3_11);
    }

    long double fpu2 = v_40;
    long double f2 = a4[0xa];
    fpu2 - f2;
    int16_t result = (fpu2 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu2, f2) ? 1 : 0) << 0xa
        | (fpu2 == f2 ? 1 : 0) << 0xe | 0x1800;

    if (*(&result + 1) & 0x41)
    {
        long double x87_r2_1 = v_44;
        long double f3_1 = a4[8];
        x87_r2_1 - f3_1;
        result = (x87_r2_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_1, f3_1) ? 1 : 0) << 0xa
            | (x87_r2_1 == f3_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 1)
        {
            long double f5_1 = a4[9];
            x87_r3_11 - f5_1;
            result = (x87_r3_11 < f5_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r3_11, f5_1) ? 1 : 0) << 0xa
                | (x87_r3_11 == f5_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                result = 1;
                return result;
            }
        }
    }

    result = a4[0xe];

    if (result)
    {
        long double x87_r2_2 = v_40;
        long double f4_1 = a4[0xd];
        x87_r2_2 - f4_1;
        result = (x87_r2_2 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_2, f4_1) ? 1 : 0) << 0xa
            | (x87_r2_2 == f4_1 ? 1 : 0) << 0xe | 0x1800;

        if (*(&result + 1) & 0x41)
        {
            long double x87_r2_3 = v_44;
            long double f6_1 = a4[0xb];
            x87_r2_3 - f6_1;
            result = (x87_r2_3 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r2_3, f6_1) ? 1 : 0) << 0xa
                | (x87_r2_3 == f6_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double f7_1 = a4[0xc];
                x87_r3_11 - f7_1;
                result = (x87_r3_11 < f7_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r3_11, f7_1) ? 1 : 0) << 0xa
                    | (x87_r3_11 == f7_1 ? 1 : 0) << 0xe | 0x2000;

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
