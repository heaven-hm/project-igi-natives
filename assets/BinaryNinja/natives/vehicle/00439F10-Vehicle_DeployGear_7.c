// IGI native provenance: Vehicle_DeployGear_7 - 0x00439F10 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00439F10-Vehicle_DeployGear_7.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_DeployGear_7.h"
float Vehicle_DeployGear_7(float context, float param_2) {
    float dest_val = context;
    void* source_val = *(dest_val + 0x130);
    double item_18;
    WeaponType_UpdateAnim(&item_18, dest_val, param_2);
    item_18 = item_18 + *(dest_val + 0x20);
    double item_10;
    double item_10_1 = item_10 + *(dest_val + 0x28);
    double item_8;
    double item_8_1 = item_8 + *(dest_val + 0x30);
    float result = *(source_val + 0x124);
    long double fpu_val_4_3 = (g_bcab18 - *(source_val + 0x30)) * result
        + (g_bcab10 - *(source_val + 0x28)) * *(source_val + 0x118)
        + (g_bcab08 - *(source_val + 0x20)) * *(source_val + 0x10c);
    long double f1 = 0.0;
    fpu_val_4_3 - f1;
    bool c1;
    result = (fpu_val_4_3 < f1 ? 1 : 0) << 8 | (c1 ? 1 : 0) << 9
        | (FCMP_UO(fpu_val_4_3, f1) ? 1 : 0) << 0xa | (fpu_val_4_3 == f1 ? 1 : 0) << 0xe | 0x3000;

    if (!(*(&result + 1) & 0x41))
    {
        float item_44;
        result = Display_RestoreDevice_15(&item_44, &context, &item_18);
        long double fpu_val_7_8 = context;
        long double f2_1 = 0.0f;
        fpu_val_7_8 - f2_1;
        result = (fpu_val_7_8 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_8, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_8 == f2_1 ? 1 : 0) << 0xe;

        if (!(*(&result + 1) & 0x41))
        {
            float entity_1 = context;
            float item_4c = 6144.0f;
            float item_48_1 = 6144.0f;
            Display_SetGammaRamp_15(&item_4c, &item_4c, entity_1);
            *(dest_val + 0x138);
            Camera_ApplyHandiCam_5();
            long double fpu_val_6_4 = 3.1415926535897944 * 0.318309873f - 0.5f;
            long double f3_1 = 0.0f;
            fpu_val_6_4 - f3_1;

            if (*(&((fpu_val_6_4 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_6_4 == f3_1 ? 1 : 0) << 0xe | 0x3000) + 1) & 1)
                fpu_val_6_4 = -(fpu_val_6_4);

            long double fpu_val_5_3 = item_44 - item_4c;
            float item_40;
            long double fpu_val_4_5 = item_40 - item_48_1;
            long double fpu_val_3_7 = item_44 + item_4c;
            param_2 = fpu_val_3_7;
            float item_74_1 = param_2;
            float item_3c_1 = param_2;
            long double fpu_val_5_5 = item_40 + item_48_1;
            return Qsprite_Register4Az(g_57bea4 + 0x18, fpu_val_5_3, fpu_val_4_5, fpu_val_3_7, fpu_val_4_5,
                fpu_val_5_3, fpu_val_5_5, param_2, fpu_val_5_5, (fpu_val_6_4 + fpu_val_6_4) * 128.0f, 0.0f, 0.0f, context,
                0x3f000000, 0, 0x1040008, 0);
        }
    }

    return result;
}
