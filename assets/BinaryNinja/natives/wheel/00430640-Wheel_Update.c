// IGI native provenance: Wheel_Update - 0x00430640 - CFG score 87.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 00430640-Wheel_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Wheel_Update.h"
int32_t Wheel_Update(void* context, int32_t* param_2)

{
    double item_30;
    memcpy(&item_30, context + 0xf0, 0x18);
    void* source_1 = *(context + 0x130);
    int16_t data_val = Menu_LeaveMenus_23();
    long double fpu_val_7_2;
    double item_20;

    if (*(source_1 + 0x1c) != data_val)
        fpu_val_7_2 = item_20;
    else
    {
        void* entity_1 = *(*(source_1 + 0x1b4) + 0x2d4);
        int32_t data_4 = *(entity_1 + *(context + 0x148) * 0x14 + 0x124);

        if (data_4 < 0)
            data_4 = 0xfffffff6 - data_4;

        fpu_val_7_2 = *(param_2[2] + data_4 * 0x38 + 0x1f0) + item_20 - *(entity_1 + 0x25c);
    }
    float* data_5 = param_2[1];
    double item_28;
    double item_58 = data_5[1] * item_28 + data_5[2] * fpu_val_7_2 + *data_5 * item_30;
    double item_50 = data_5[4] * item_28 + data_5[3] * item_30 + data_5[5] * fpu_val_7_2;
    double* data_6 = *param_2;
    double item_48 = data_5[7] * item_28 + data_5[6] * item_30 + data_5[8] * fpu_val_7_2;
    double item_18;
    memcpy(&item_18, &item_58, 0x18);
    item_18 = item_58 + *data_6;
    double item_10;
    double item_10_1 = item_10 + data_6[1];
    double item_8;
    double item_8_1 = item_8 + data_6[2];
    long double fpu_val_7_10 = *(context + 0x9c);
    long double fpu_val_6_12 = *(context + 0xa0);
    fpu_val_6_12 - fpu_val_7_10;
    long double fpu_val_7_11;

    if (!(*(&((fpu_val_6_12 < fpu_val_7_10 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_7_10) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == fpu_val_7_10 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_11 = *(context + 0xa0);
    else
        fpu_val_7_11 = *(context + 0x9c);

    long double fpu_val_6_13 = *(context + 0x98);
    fpu_val_6_13 - fpu_val_7_11;
    long double fpu_val_7_13;

    if (*(&((fpu_val_6_13 < fpu_val_7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, fpu_val_7_11) ? 1 : 0) << 0xa
        | (fpu_val_6_13 == fpu_val_7_11 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_14 = *(context + 0x9c);
        long double fpu_val_6_14 = *(context + 0xa0);
        fpu_val_6_14 - fpu_val_7_14;

        if (!(*(&((fpu_val_6_14 < fpu_val_7_14 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_14, fpu_val_7_14) ? 1 : 0) << 0xa
                | (fpu_val_6_14 == fpu_val_7_14 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_13 = *(context + 0xa0);
        else
            fpu_val_7_13 = *(context + 0x9c);
    }
    else
        fpu_val_7_13 = *(context + 0x98);

    float item_98_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_13;
    WorldObject_CommitTransform(Level_StartMission_4(), context, &item_18, item_98_1);
    float item_80;
    Sys_CheckHeap_11(&item_80, context + 0x108, *(context + 0x140), 0.0f, *(context + 0x144));
    float* data_10 = param_2[1];
    float item_74;
    float item_68;
    item_58 = item_74 * data_10[1] + item_68 * data_10[2] + item_80 * *data_10;
    float item_7c;
    float item_70;
    float item_64;
    *(&item_58 + 4) = item_70 * data_10[1] + item_64 * data_10[2] + item_7c * *data_10;
    float item_78;
    float item_6c;
    float item_60;
    item_50 = item_6c * data_10[1] + item_60 * data_10[2] + item_78 * *data_10;
    *(&item_50 + 4) = item_80 * data_10[3] + item_68 * data_10[5] + item_74 * data_10[4];
    item_48 = item_7c * data_10[3] + item_64 * data_10[5] + item_70 * data_10[4];
    int32_t entity_4 = data_10[9];
    *(&item_48 + 4) = item_78 * data_10[3] + item_60 * data_10[5] + item_6c * data_10[4];
    float item_40 = item_80 * data_10[6] + item_68 * data_10[8] + item_74 * data_10[7];
    float item_3c = item_7c * data_10[6] + item_64 * data_10[8] + item_70 * data_10[7];
    int32_t item_5c;
    int32_t item_34 = entity_4 + item_5c + 1;
    float item_38 = item_78 * data_10[6] + item_60 * data_10[8] + item_6c * data_10[7];
    memcpy(context + 0x70, &item_58, 0x28);
    return entity_4 + item_5c + 1;
}
