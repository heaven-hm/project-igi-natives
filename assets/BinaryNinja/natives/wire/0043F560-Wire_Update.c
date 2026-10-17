// IGI native provenance: Wire_Update - 0x0043F560 - CFG score 88.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F560-Wire_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Wire_Update.h"
int32_t Wire_Update(double* context, void* param_2)

{
    float item_70;
    int32_t* item_a0 = &item_70;
    Vehicle_DeployGear_10(item_a0, context);
    long double fpu_val_7_1 = *(param_2 + 8) - context[4];
    long double fpu_val_6_1 = *(param_2 + 0x10) - context[5];
    double item_10 = fpu_val_6_1;
    long double fpu_val_5_1 = *(param_2 + 0x18) - context[6];
    float item_64;
    float item_58;
    double item_88 = item_58 * fpu_val_5_1 + item_64 * fpu_val_6_1 + item_70 * fpu_val_7_1;
    float item_6c;
    float item_60;
    float item_54;
    double item_80 = item_54 * fpu_val_5_1 + item_60 * fpu_val_6_1 + item_6c * fpu_val_7_1;
    float item_68;
    long double fpu_val_3_11 = item_68 * fpu_val_7_1;
    float item_5c;
    float item_50;
    double item_78 = item_50 * fpu_val_5_1 + item_5c * fpu_val_6_1 + fpu_val_3_11;
    void item_18;
    memcpy(&item_18, &item_88, 0x18);
    void* item_30;
    WeaponType_RegisterType_2(&item_30, context, 0);
    void* item_24;
    WeaponType_RegisterType_2(&item_24, context, 1);
    float item_2c;
    long double fpu_val_7_3 = item_2c;
    long double f0 = item_80;
    fpu_val_7_3 - f0;
    long double fpu_val_7_4;

    if (*(&((fpu_val_7_3 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f0) ? 1 : 0) << 0xa
        | (fpu_val_7_3 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        float item_20;
        long double fpu_val_7_5 = item_20;
        long double f1_1 = item_80;
        fpu_val_7_5 - f1_1;

        fpu_val_7_4 = !(*(&((fpu_val_7_5 < f1_1 ? 1 : 0) << 8
            | (FCMP_UO(fpu_val_7_5, f1_1) ? 1 : 0) << 0xa | (fpu_val_7_5 == f1_1 ? 1 : 0) << 0xe) + 1)
            & 1) ? item_10 : item_20;
    }
    else
        fpu_val_7_4 = item_2c;

    double item_48;
    float item_9c_1 = &item_48;
    item_a0 = context;
    item_88 = item_6c * fpu_val_7_4;
    double item_80_1 = item_60 * fpu_val_7_4;
    double item_78_1 = item_54 * fpu_val_7_4;
    memcpy(&item_48, &item_88, 0x18);
    item_48 = item_88 + context[4];
    double item_40;
    double item_40_1 = item_40 + context[5];
    double item_38;
    double item_38_1 = item_38 + context[6];
    long double fpu0;
    long double fpu1;
    long double fpu2;
    return Level_InitSprites_5(fpu0, fpu1, fpu2, fpu_val_3_11, param_2, item_a0, item_9c_1);
}
