// IGI native provenance: Physics_SolveConstraints_13 - 0x0050E7F0 - CFG score 74.1% (FAIL; structural only); runtime behavior not verified.
// Evidence: 0050E7F0-Physics_SolveConstraints_13.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Physics_SolveConstraints_13.h"
int32_t Physics_SolveConstraints_13(void* context)

{
    void item_80;
    memcpy(&item_80, context, 0x14);
    int32_t item_74 = 3;
    void item_6c;
    void* item_70 = &item_6c;
    float* entity_val = *(context + 0x10);
    long double fpu7 = *entity_val;
    long double f1 = g_bcabd0;
    fpu7 - f1;
    int32_t dest_val;

    dest_val = !(*(&((fpu7 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f1) ? 1 : 0) << 0xa
        | (fpu7 == f1 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    long double fpu_val_7_1 = entity_val[1];
    long double f2 = g_bcabd4;
    fpu_val_7_1 - f2;
    int32_t source_1;

    source_1 = !(*(&((fpu_val_7_1 < f2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_1, f2) ? 1 : 0) << 0xa
        | (fpu_val_7_1 == f2 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    float item_134 = g_bcabd8 + 1.0f;
    long double fpu_val_7_4 = *entity_val;
    long double f3 = item_134;
    fpu_val_7_4 - f3;
    int32_t temp_val;

    temp_val = *(&((fpu_val_7_4 < f3 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f3) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f3 ? 1 : 0) << 0xe) + 1) & 0x41 ? 0 : 1;

    long double fpu_val_7_6 = g_bcabdc + 1.0f;
    long double f4 = entity_val[1];
    fpu_val_7_6 - f4;
    int32_t data_2;

    data_2 = !(*(&((fpu_val_7_6 < f4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f4) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f4 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu6 = entity_val[9];
    long double f5 = g_bcabd0;
    fpu6 - f5;
    int32_t item_fc = (((data_2 * 2) | temp_val) << 1 | source_1) << 1 | dest_val;
    int32_t dest_1;

    dest_1 = !(*(&((fpu6 < f5 ? 1 : 0) << 8 | (FCMP_UO(fpu6, f5) ? 1 : 0) << 0xa
        | (fpu6 == f5 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu_val_6_1 = entity_val[1];
    long double f6 = g_bcabd4;
    fpu_val_6_1 - f6;
    int32_t source_2;

    source_2 = !(*(&((fpu_val_6_1 < f6 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, f6) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == f6 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu_val_6_2 = entity_val[9];
    long double f7 = item_134;
    fpu_val_6_2 - f7;
    int32_t temp_1;

    temp_1 = *(&((fpu_val_6_2 < f7 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, f7) ? 1 : 0) << 0xa
        | (fpu_val_6_2 == f7 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double f8 = entity_val[1];
    fpu_val_7_6 - f8;
    int32_t data_10;

    data_10 = !(*(&((fpu_val_7_6 < f8 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f8) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f8 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu_val_6_3 = *entity_val;
    long double f9 = g_bcabd0;
    fpu_val_6_3 - f9;
    int32_t item_d4 = (((data_10 * 2) | temp_1) << 1 | source_2) << 1 | dest_1;
    int32_t dest_2;

    dest_2 = !(*(&((fpu_val_6_3 < f9 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, f9) ? 1 : 0) << 0xa
        | (fpu_val_6_3 == f9 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu_val_6_4 = entity_val[0xa];
    long double f10 = g_bcabd4;
    fpu_val_6_4 - f10;
    int32_t source_3;

    source_3 = !(*(&((fpu_val_6_4 < f10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_4, f10) ? 1 : 0) << 0xa
        | (fpu_val_6_4 == f10 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu_val_6_5 = *entity_val;
    long double f11 = item_134;
    fpu_val_6_5 - f11;
    int32_t temp_2;

    temp_2 = *(&((fpu_val_6_5 < f11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_5, f11) ? 1 : 0) << 0xa
        | (fpu_val_6_5 == f11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double f12 = entity_val[0xa];
    fpu_val_7_6 - f12;
    int32_t data_18;

    data_18 = !(*(&((fpu_val_7_6 < f12 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f12) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f12 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu_val_6_6 = entity_val[9];
    long double f13 = g_bcabd0;
    fpu_val_6_6 - f13;
    int32_t item_ac = (((data_18 * 2) | temp_2) << 1 | source_3) << 1 | dest_2;
    int32_t dest_3;

    dest_3 = !(*(&((fpu_val_6_6 < f13 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_6, f13) ? 1 : 0) << 0xa
        | (fpu_val_6_6 == f13 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu_val_6_7 = entity_val[0xa];
    long double f14 = g_bcabd4;
    fpu_val_6_7 - f14;
    int32_t source_4;

    source_4 = !(*(&((fpu_val_6_7 < f14 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_7, f14) ? 1 : 0) << 0xa
        | (fpu_val_6_7 == f14 ? 1 : 0) << 0xe | 0x3800) + 1) & 1) ? 0 : 1;

    long double fpu_val_6_8 = entity_val[9];
    long double f15 = item_134;
    fpu_val_6_8 - f15;
    int32_t temp_3;

    temp_3 = *(&((fpu_val_6_8 < f15 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_8, f15) ? 1 : 0) << 0xa
        | (fpu_val_6_8 == f15 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41 ? 0 : 1;

    long double f16 = entity_val[0xa];
    fpu_val_7_6 - f16;
    int32_t data_26;

    data_26 = !(*(&((fpu_val_7_6 < f16 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f16) ? 1 : 0) << 0xa
        | (fpu_val_7_6 == f16 ? 1 : 0) << 0xe) + 1) & 1) ? 0 : 1;

    long double fpu_val_7_8 = 1.0f / entity_val[2];
    float item_120 = *entity_val;
    int32_t item_f8 = entity_val[9];
    int32_t item_84 = (((data_26 * 2) | temp_3) << 1 | source_4) << 1 | dest_3;
    int32_t data_33 = entity_val[1];
    int32_t item_11c = data_33;
    int32_t item_f4 = data_33;
    float item_118 = fpu_val_7_8;
    long double fpu_val_6_10 = fpu_val_7_8 * entity_val[3];
    float item_114 = fpu_val_6_10;
    long double fpu_val_5_1 = fpu_val_7_8 * entity_val[4];
    float item_110 = fpu_val_5_1;
    long double fpu_val_4_1 = fpu_val_7_8 * entity_val[5];
    float item_134_1 = fpu_val_4_1;
    float item_10c = fpu_val_4_1;
    long double fpu_val_4_3 = fpu_val_7_8 * entity_val[6];
    float item_e4 = item_134_1;
    float item_128 = fpu_val_4_3;
    float item_108 = fpu_val_4_3;
    long double fpu_val_4_5 = fpu_val_7_8 * entity_val[7];
    float item_e0 = item_128;
    float item_12c = fpu_val_4_5;
    float item_104 = fpu_val_4_5;
    long double fpu_val_4_7 = fpu_val_7_8 * entity_val[8];
    float item_dc = item_12c;
    float item_d0 = *entity_val;
    float item_130 = fpu_val_4_7;
    float item_100 = fpu_val_4_7;
    float item_bc = item_134_1;
    float item_f0 = fpu_val_7_8;
    long double fpu_val_4_10 = fpu_val_7_8 * entity_val[0xc];
    float item_d8 = item_130;
    float item_b4 = item_12c;
    int32_t item_cc = entity_val[0xa];
    float item_124 = fpu_val_4_10;
    float item_ec = fpu_val_4_10;
    int32_t item_a8 = entity_val[9];
    float item_e8 = fpu_val_5_1;
    float item_b8 = item_128;
    float item_c8 = fpu_val_7_8;
    float item_b0 = item_130;
    float item_c4 = fpu_val_6_10;
    int32_t item_a4 = entity_val[0xa];
    long double fpu_val_6_12 = fpu_val_7_8 * entity_val[0xd];
    float item_9c = item_124;
    float item_c0 = fpu_val_6_12;
    float item_a0 = fpu_val_7_8;
    float item_98 = fpu_val_6_12;
    float item_90 = item_128;
    float item_8c = item_12c;
    void* item_140 = &item_80;
    int32_t** (* item_144)(int32_t* context, int32_t* param_2) = sub_50e730;
    int32_t item_148 = g_bcadc0;
    float item_94 = item_134_1;
    float item_88 = item_130;
    void item_170;
    memcpy(&item_170, &item_d0, 0x28);
    void item_198;
    memcpy(&item_198, &item_f8, 0x28);
    void item_1c0;
    memcpy(&item_1c0, &item_120, 0x28);
    Physics_CalculateSplineLength_13();
    void* item_140_1 = &item_80;
    int32_t** (* item_144_1)(int32_t* context, int32_t* param_2) = sub_50e730;
    item_148 = g_bcadc0;
    memcpy(&item_170, &item_a8, 0x28);
    memcpy(&item_198, &item_d0, 0x28);
    memcpy(&item_1c0, &item_f8, 0x28);
    return Physics_CalculateSplineLength_13();
}
