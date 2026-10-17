// Original IGI.EXE function: Rudder_Setup (VA 0x004362C0; static CFG gate PASS, CFG score 0.889).
#include "Rudder_Setup.h"
float* Rudder_Setup(void* context, int32_t* param_2)

{
    void* source_val = param_2[2];
    void* dest_val = *(*(source_val + 0x1b4) + 0x2d4);
    float* data_1 = param_2[1];
    double item_88 =
        data_1[5] * *(context + 0x100) + data_1[4] * *(context + 0xf8) + data_1[3] * *(context + 0xf0);
    double* data_2 = *param_2;
    double item_80 =
        data_1[8] * *(context + 0x100) + data_1[7] * *(context + 0xf8) + data_1[6] * *(context + 0xf0);
    double item_18 =
        data_1[2] * *(context + 0x100) + data_1[1] * *(context + 0xf8) + *data_1 * *(context + 0xf0) + *data_2;
    double item_10 = item_88 + data_2[1];
    double item_8 = item_80 + data_2[2];
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

    float item_94 = fpu_val_7_12;
    float item_a8_1 = Render_ComputeNormals(*(context + 0x6c)) * item_94;
    WorldObject_CommitTransform(Level_StartMission_4(), context, &item_18, item_a8_1);
    int32_t* data_5 = *(context + 0x138);
    int32_t data_6 = *data_5;
    long double fpu_val_7_17 = data_5[1] * 0.0174532924f;
    long double fpu_val_7_19;

    if (data_6 != 1)
    {
        if (data_6 == 2)
        {
            fpu_val_7_19 = fpu_val_7_17 * *(source_val + 0x728) + fpu_val_7_17 * *(source_val + 0x724);
            goto label_436428;
        }

        if (!data_6)
            item_94 = -((fpu_val_7_17 * *(source_val + 0x724)));
        else if (data_6 == 3)
            item_94 = -((fpu_val_7_17 * *(source_val + 0x72c)));
    }
    else
    {
        fpu_val_7_19 = fpu_val_7_17 * *(source_val + 0x728) - fpu_val_7_17 * *(source_val + 0x724);
    label_436428:
        item_94 = fpu_val_7_19;
        long double fpu_val_6_19 = *(dest_val + 4);
        fpu_val_7_19 - fpu_val_6_19;

        if (!(*(&((fpu_val_7_19 < fpu_val_6_19 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_19, fpu_val_6_19) ? 1 : 0) << 0xa
                | (fpu_val_7_19 == fpu_val_6_19 ? 1 : 0) << 0xe) + 1) & 1))
            item_94 = *(dest_val + 4);
    }
    float item_68;
    Sys_CloseFileStream_12(&item_68, item_94);
    float item_5c;
    float item_50;
    float item_90 = item_50 * *(context + 0x110) + item_68 * *(context + 0x108) + item_5c * *(context + 0x10c);
    float item_64;
    float item_58;
    float item_4c;
    float item_8c = item_4c * *(context + 0x110) + item_64 * *(context + 0x108) + item_58 * *(context + 0x10c);
    float item_60;
    float item_54;
    float item_48;
    item_88 = item_48 * *(context + 0x110) + item_60 * *(context + 0x108) + item_54 * *(context + 0x10c);
    *(&item_88 + 4) = item_50 * *(context + 0x11c) + item_68 * *(context + 0x114) + item_5c * *(context + 0x118);
    item_80 = item_4c * *(context + 0x11c) + item_64 * *(context + 0x114) + item_58 * *(context + 0x118);
    *(&item_80 + 4) = item_48 * *(context + 0x11c) + item_60 * *(context + 0x114) + item_54 * *(context + 0x118);
    float item_78 = item_50 * *(context + 0x128) + item_68 * *(context + 0x120) + item_5c * *(context + 0x124);
    int32_t item_44;
    int32_t temp_1 = *(context + 0x12c) + item_44 + 1;
    float* result = param_2[1];
    int32_t item_6c = temp_1;
    float item_74 = item_4c * *(context + 0x128) + item_64 * *(context + 0x120) + item_58 * *(context + 0x124);
    float item_70 = item_48 * *(context + 0x128) + item_60 * *(context + 0x120) + item_54 * *(context + 0x124);
    memcpy(&item_68, &item_90, 0x28);
    float item_40 = item_78 * result[2] + *(&item_88 + 4) * result[1] + item_90 * *result;
    float item_3c = item_74 * result[2] + item_80 * result[1] + item_8c * *result;
    float item_38 = item_70 * result[2] + *(&item_80 + 4) * result[1] + item_88 * *result;
    float item_34 = item_78 * result[5] + item_90 * result[3] + *(&item_88 + 4) * result[4];
    float item_30 = item_74 * result[5] + item_8c * result[3] + item_80 * result[4];
    float item_2c = item_70 * result[5] + item_88 * result[3] + *(&item_80 + 4) * result[4];
    int32_t item_1c = result[9] + temp_1 + 1;
    float item_28 = item_78 * result[8] + item_90 * result[6] + *(&item_88 + 4) * result[7];
    float item_24 = item_74 * result[8] + item_8c * result[6] + item_80 * result[7];
    float item_20 = item_70 * result[8] + item_88 * result[6] + *(&item_80 + 4) * result[7];
    memcpy(context + 0x70, &item_40, 0x28);
    return result;
}
