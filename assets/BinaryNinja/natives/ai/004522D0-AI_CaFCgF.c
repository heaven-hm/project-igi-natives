// Original IGI.EXE function: AI_CaFCgF (VA 0x004522D0; static CFG gate PASS, CFG score 0.852).
#include "AI_CaFCgF.h"
int32_t AI_CaFCgF(long double context , long double param_2 , void* param_3, int32_t param_4, float param_5, char param_6)

{
    double item_20;
    memcpy(&item_20, param_4, 0x18);
    double item_10;

    if (param_6)
    {
        item_10 = *(param_3 + 0x48);
        *(&item_10 + 4) = *(param_3 + 0x4c);
    }

    long double fpu_val_7_1 = item_20 - *(param_3 + 0x38);
    double item_18;
    long double fpu_val_6_1 = item_18 - *(param_3 + 0x40);
    long double fpu_val_5_1 = item_10 - *(param_3 + 0x48);
    item_20 = *(param_3 + 0x90) * fpu_val_5_1 + *(param_3 + 0x78) * fpu_val_7_1 + *(param_3 + 0x84) * fpu_val_6_1;
    double item_18_1 =
        *(param_3 + 0x7c) * fpu_val_7_1 + *(param_3 + 0x88) * fpu_val_6_1 + *(param_3 + 0x94) * fpu_val_5_1;
    double item_10_1 =
        *(param_3 + 0x8c) * fpu_val_6_1 + *(param_3 + 0x98) * fpu_val_5_1 + *(param_3 + 0x80) * fpu_val_7_1;
    int32_t item_58;
    memcpy(&item_58, &item_20, 0x18);
    WeaponType_GetConfig();
    long double fpu0 = -(context);
    long double f0 = 0.0f;
    fpu0 - f0;
    float item_2c = fpu0;
    float item_24 = fpu0;
    bool c1 = /* bool c1 = unknown  {fst dword [stack_ptr+0x34], fp0} */;

    if (*(&((fpu0 < f0 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
            | (FCMP_UO(fpu0, f0) ? 1 : 0) << 0xa | (fpu0 == f0 ? 1 : 0) << 0xe) + 1) & 1)
        fpu0 = -(fpu0);

    long double f1 = 1.57079637f;
    fpu0 - f1;
    float item_30_1;

    if (*(&((fpu0 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu0, f1) ? 1 : 0) << 0xa
        | (fpu0 == f1 ? 1 : 0) << 0xe | 0x800) + 1) & 0x41)
    {
        memcpy(&item_58, &item_20, 0x18);
        WeaponType_InitType();
        item_30_1 = param_2;
    }
    else
    {
        item_20 = *(param_3 + 0x7c);
        double item_18_2 = *(param_3 + 0x88);
        double item_10_2 = *(param_3 + 0x94);
        memcpy(&item_58, &item_20, 0x18);
        WeaponType_InitType();
        long double fpu1 = -(param_2);
        item_30_1 = fpu1;
        long double f2_1 = 0.0f;
        fpu1 - f2_1;
        long double fpu_val_1_1 = item_30_1;

        if (*(&((fpu1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu1, f2_1) ? 1 : 0) << 0xa
                | (fpu1 == f2_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            fpu_val_1_1 = -(fpu_val_1_1);

        long double f3_1 = 1.57079637f;
        fpu_val_1_1 - f3_1;

        if (!(*(&((fpu_val_1_1 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_1, f3_1) ? 1 : 0) << 0xa
            | (fpu_val_1_1 == f3_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 0x41))
        {
            long double fpu_val_1_2 = item_30_1;
            long double f4_1 = 0.0f;
            fpu_val_1_2 - f4_1;

            param_2 = !(*(&((fpu_val_1_2 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_1_2, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_1_2 == f4_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1) ? 3.14159274f - item_30_1
                : -3.14159274f - item_30_1;

            item_30_1 = param_2;
        }
    }

    long double fpu_val_1_6 = -(*(param_3 + 0x3ec8));
    long double fpu_val_0_4 = item_30_1;
    fpu_val_0_4 - fpu_val_1_6;
    float item_28 = item_30_1;

    if (*(&((fpu_val_0_4 < fpu_val_1_6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_4, fpu_val_1_6) ? 1 : 0) << 0xa
            | (fpu_val_0_4 == fpu_val_1_6 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        item_30_1 = fpu_val_1_6;
    else
    {
        long double fpu_val_1_8 = *(param_3 + 0x3ec8);
        long double f5_1 = item_30_1;
        fpu_val_1_8 - f5_1;

        if (*(&((fpu_val_1_8 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_8, f5_1) ? 1 : 0) << 0xa
                | (fpu_val_1_8 == f5_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            item_30_1 = *(param_3 + 0x3ec8);
    }

    long double fpu_val_1_10 = -(*(param_3 + 0x3ecc));
    long double fpu_val_0_5 = item_2c;
    fpu_val_0_5 - fpu_val_1_10;

    if (*(&((fpu_val_0_5 < fpu_val_1_10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_0_5, fpu_val_1_10) ? 1 : 0) << 0xa
            | (fpu_val_0_5 == fpu_val_1_10 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        item_2c = fpu_val_1_10;
    else
    {
        long double fpu_val_1_12 = *(param_3 + 0x3ecc);
        long double f6_1 = item_2c;
        fpu_val_1_12 - f6_1;

        if (*(&((fpu_val_1_12 < f6_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_12, f6_1) ? 1 : 0) << 0xa
                | (fpu_val_1_12 == f6_1 ? 1 : 0) << 0xe | 0x1000) + 1) & 1)
            item_2c = *(param_3 + 0x3ecc);
    }

    double item_48 = item_2c;
    double item_50 = item_30_1;
    char* item_54 = "CA: %f, CG: %f";
    item_58 = 0xffffffff;
    void* item_5c = param_3;
    double item_48_1 = item_24;
    double item_50_1 = item_28;
    char* item_54_1 = "A:  %f,  G: %f";
    item_58 = 0xffffffff;
    void* item_5c_1 = param_3;
    *(param_3 + 0x3c74) = item_2c * 0.318309873f;
    *(param_3 + 0x3c78) = item_30_1 * 0.318309873f;
    long double fpu_val_1_21 = item_28;
    long double f7 = 0.0f;
    fpu_val_1_21 - f7;
    long double fpu_val_1_22 = item_28;

    if (*(&((fpu_val_1_21 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_21, f7) ? 1 : 0) << 0xa
            | (fpu_val_1_21 == f7 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
        fpu_val_1_22 = -(fpu_val_1_22);

    long double f8 = param_5;
    fpu_val_1_22 - f8;
    int16_t result = (fpu_val_1_22 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_22, f8) ? 1 : 0) << 0xa
        | (fpu_val_1_22 == f8 ? 1 : 0) << 0xe | 0x1000;

    if (*(&result + 1) & 0x41)
    {
        long double fpu_val_1_23 = item_24;
        long double f9_1 = 0.0f;
        fpu_val_1_23 - f9_1;
        long double fpu_val_1_24 = item_24;

        if (*(&((fpu_val_1_23 < f9_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_23, f9_1) ? 1 : 0) << 0xa
                | (fpu_val_1_23 == f9_1 ? 1 : 0) << 0xe | 0x800) + 1) & 1)
            fpu_val_1_24 = -(fpu_val_1_24);

        long double f10_1 = param_5;
        fpu_val_1_24 - f10_1;
        result = (fpu_val_1_24 < f10_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_1_24, f10_1) ? 1 : 0) << 0xa
            | (fpu_val_1_24 == f10_1 ? 1 : 0) << 0xe | 0x1000;

        if (*(&result + 1) & 0x41)
        {
            result = 1;
            return result;
        }
    }

    result = 0;
    return result;
}
