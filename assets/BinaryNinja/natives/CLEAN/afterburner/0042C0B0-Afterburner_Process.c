// IGI native provenance: Afterburner_Process - 0x0042C0B0 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 0042C0B0-Afterburner_Process.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Afterburner_Process.h"
int32_t Afterburner_Process(void* context, int32_t* param_2)

{
    float* data_val = param_2[1];
    double item_8c = data_val[5] * *(context + 0x100) + data_val[4] * *(context + 0xf8) + data_val[3] * *(context + 0xf0);
    double* data_1 = *param_2;
    double item_84 = data_val[8] * *(context + 0x100) + data_val[7] * *(context + 0xf8) + data_val[6] * *(context + 0xf0);
    double item_18 =
        data_val[2] * *(context + 0x100) + data_val[1] * *(context + 0xf8) + *data_val * *(context + 0xf0) + *data_1;
    double item_10 = item_8c + data_1[1];
    double item_8 = item_84 + data_1[2];
    long double fpu_val_7_9 = *(context + 0x9c);
    long double fpu_val_6_12 = *(context + 0xa0);
    fpu_val_6_12 - fpu_val_7_9;
    long double fpu_val_7_10;

    if (!(*(&((fpu_val_6_12 < fpu_val_7_9 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_7_9) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == fpu_val_7_9 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_10 = *(context + 0xa0);
    else
        fpu_val_7_10 = *(context + 0x9c);

    long double fpu_val_6_13 = *(context + 0x98);
    fpu_val_6_13 - fpu_val_7_10;
    long double fpu_val_7_12;

    if (*(&((fpu_val_6_13 < fpu_val_7_10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, fpu_val_7_10) ? 1 : 0) << 0xa
        | (fpu_val_6_13 == fpu_val_7_10 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_13 = *(context + 0x9c);
        long double fpu_val_6_14 = *(context + 0xa0);
        fpu_val_6_14 - fpu_val_7_13;

        if (!(*(&((fpu_val_6_14 < fpu_val_7_13 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_14, fpu_val_7_13) ? 1 : 0) << 0xa
                | (fpu_val_6_14 == fpu_val_7_13 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_12 = *(context + 0xa0);
        else
            fpu_val_7_12 = *(context + 0x9c);
    }
    else
        fpu_val_7_12 = *(context + 0x98);

    float item_a8_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_12;
    WorldObject_CommitTransform(Level_StartMission_4(), context, &item_18, item_a8_1);
    float item_68;
    Sys_ExecuteBytecode_12(&item_68, Sys_AllocateMemory_14(&g_57bd00));
    float item_5c;
    float item_50;
    float item_94 = item_50 * *(context + 0x110) + item_68 * *(context + 0x108) + item_5c * *(context + 0x10c);
    float item_64;
    float item_58;
    float item_4c;
    float item_90 = item_4c * *(context + 0x110) + item_64 * *(context + 0x108) + item_58 * *(context + 0x10c);
    float item_60;
    float item_54;
    float item_48;
    item_8c = item_48 * *(context + 0x110) + item_60 * *(context + 0x108) + item_54 * *(context + 0x10c);
    *(&item_8c + 4) = item_50 * *(context + 0x11c) + item_68 * *(context + 0x114) + item_5c * *(context + 0x118);
    item_84 = item_4c * *(context + 0x11c) + item_64 * *(context + 0x114) + item_58 * *(context + 0x118);
    *(&item_84 + 4) = item_48 * *(context + 0x11c) + item_60 * *(context + 0x114) + item_54 * *(context + 0x118);
    int32_t item_44;
    int32_t temp_val = *(context + 0x12c) + item_44 + 1;
    float* data_6 = param_2[1];
    int32_t item_70 = temp_val;
    float item_7c = item_50 * *(context + 0x128) + item_68 * *(context + 0x120) + item_5c * *(context + 0x124);
    float item_78 = item_4c * *(context + 0x128) + item_64 * *(context + 0x120) + item_58 * *(context + 0x124);
    float item_74 = item_48 * *(context + 0x128) + item_60 * *(context + 0x120) + item_54 * *(context + 0x124);
    memcpy(&item_68, &item_94, 0x28);
    float item_40 = item_7c * data_6[2] + *(&item_8c + 4) * data_6[1] + item_94 * *data_6;
    float item_3c = item_78 * data_6[2] + item_84 * data_6[1] + item_90 * *data_6;
    float item_38 = item_74 * data_6[2] + *(&item_84 + 4) * data_6[1] + item_8c * *data_6;
    float item_34 = item_7c * data_6[5] + item_94 * data_6[3] + *(&item_8c + 4) * data_6[4];
    float item_30 = item_78 * data_6[5] + item_90 * data_6[3] + item_84 * data_6[4];
    float item_2c = item_74 * data_6[5] + item_8c * data_6[3] + *(&item_84 + 4) * data_6[4];
    float item_28 = item_7c * data_6[8] + item_94 * data_6[6] + *(&item_8c + 4) * data_6[7];
    float item_24 = item_78 * data_6[8] + item_90 * data_6[6] + item_84 * data_6[7];
    int32_t result = data_6[9];
    int32_t item_1c = result + temp_val + 1;
    float item_20 = item_74 * data_6[8] + item_8c * data_6[6] + *(&item_84 + 4) * data_6[7];
    memcpy(context + 0x70, &item_40, 0x28);
    return result;
}
