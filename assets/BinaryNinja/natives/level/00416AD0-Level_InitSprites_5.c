// Original IGI.EXE function: Level_InitSprites_5 (VA 0x00416AD0; static CFG gate FAIL, CFG score 0.833).
#include "Level_InitSprites_5.h"
int32_t Level_InitSprites_5(long double a1 @ fp0, long double a2 @ fp1, long double a3 @ fp2, long double a4 @ fp3, void* a5, int32_t a6, float a7)

{
    double* valA = a7;
    double v_30 = *valA - *(a5 + 8);
    double v_28 = valA[1] - *(a5 + 0x10);
    double v_20 = valA[2] - *(a5 + 0x18);
    long double fp0 = Sys_OpenFileStream_11(&v_30);
    long double f0 = *(a5 + 0x78);
    fp0 - f0;
    int16_t result = (fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
        | (fp0 == f0 ? 1 : 0) << 0xe;

    if (*(&result + 1) & 1)
    {
        double v_18 = *(a5 + 0x38) * v_20 + *(a5 + 0x2c) * v_28 + *(a5 + 0x20) * v_30;
        long double x87_r7_14 =
            *(a5 + 0x3c) * v_20 + *(a5 + 0x30) * v_28 + *(a5 + 0x24) * v_30;
        double v_10_1 = x87_r7_14;
        double v_8_1 =
            *(a5 + 0x40) * v_20 + *(a5 + 0x34) * v_28 + *(a5 + 0x28) * v_30;
        memcpy(&v_30, &v_18, 0x18);
        long double f1_1 = 0.0;
        x87_r7_14 - f1_1;
        result = (x87_r7_14 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_14, f1_1) ? 1 : 0) << 0xa
            | (x87_r7_14 == f1_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            void v_54;
            memcpy(&v_54, &v_18, 0x18);
            WeaponType_InitType();
            long double f2_1 = 0f;
            a1 - f2_1;

            if (!(*(&((a1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(a1, f2_1) ? 1 : 0) << 0xa
                | (a1 == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1))
            {
                memcpy(&v_54, &v_30, 0x18);
                WeaponType_InitType();
            }
            else
            {
                memcpy(&v_54, &v_30, 0x18);
                WeaponType_InitType();
                a2 = -(a2);
            }

            a7 = a2;
            memcpy(&v_54, &v_30, 0x18);
            WeaponType_GetConfig();
            long double f3_1 = 0f;
            a3 - f3_1;

            if (!(*(&((a3 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(a3, f3_1) ? 1 : 0) << 0xa
                | (a3 == f3_1 ? 1 : 0) << 0xe | 0x1800) + 1) & 1))
            {
                memcpy(&v_54, &v_30, 0x18);
                WeaponType_GetConfig();
            }
            else
            {
                memcpy(&v_54, &v_30, 0x18);
                WeaponType_GetConfig();
                a4 = -(a4);
            }

            long double fpu2 = a7;
            long double f4_1 = *(a5 + 0x70);
            fpu2 - f4_1;
            result = (fpu2 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu2, f4_1) ? 1 : 0) << 0xa
                | (fpu2 == f4_1 ? 1 : 0) << 0xe | 0x1800;

            if (*(&result + 1) & 1)
            {
                long double f5_1 = *(a5 + 0x74);
                a4 - f5_1;
                result = (a4 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(a4, f5_1) ? 1 : 0) << 0xa
                    | (a4 == f5_1 ? 1 : 0) << 0xe | 0x1800;

                if (*(&result + 1) & 1)
                {
                    *(a5 + 0x74) = a4;
                    *(a5 + 0x70) = a7;
                    *(a5 + 0x80) = a6;
                    result = 1;
                    return result;
                }
            }
        }
    }

    result = 0;
    return result;
}
