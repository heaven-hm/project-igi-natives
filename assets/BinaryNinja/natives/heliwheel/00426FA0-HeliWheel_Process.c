// Original IGI.EXE function: HeliWheel_Process (VA 0x00426FA0; static CFG gate FAIL, CFG score 0.833).
#include "HeliWheel_Process.h"
int32_t HeliWheel_Process(float context, int32_t* param_2)

{
    float* data_val = param_2[1];
    long double fpu7 = data_val[2];
    double item_40;
    memcpy(&item_40, context + 0xf0, 0x18);
    double item_38;
    double item_30;
    double item_28 = fpu7 * item_30 + data_val[1] * item_38 + *data_val * item_40;
    double item_20 = data_val[5] * item_30 + data_val[4] * item_38 + data_val[3] * item_40;
    double* data_1 = *param_2;
    double item_18 = data_val[8] * item_30 + data_val[7] * item_38 + data_val[6] * item_40;
    long double fpu_val_7_12 = item_28;
    memcpy(&item_40, &item_28, 0x18);
    item_40 = fpu_val_7_12 + *data_1;
    double item_38_1 = item_38 + data_1[1];
    double item_30_1 = item_30 + data_1[2];
    long double fpu_val_7_18 = *(context + 0x9c);
    long double fpu_val_6_12 = *(context + 0xa0);
    fpu_val_6_12 - fpu_val_7_18;
    long double fpu_val_7_19;

    if (!(*(&((fpu_val_6_12 < fpu_val_7_18 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_7_18) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == fpu_val_7_18 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_19 = *(context + 0xa0);
    else
        fpu_val_7_19 = *(context + 0x9c);

    long double fpu_val_6_13 = *(context + 0x98);
    fpu_val_6_13 - fpu_val_7_19;
    long double fpu_val_7_21;

    if (*(&((fpu_val_6_13 < fpu_val_7_19 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, fpu_val_7_19) ? 1 : 0) << 0xa
        | (fpu_val_6_13 == fpu_val_7_19 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_22 = *(context + 0x9c);
        long double fpu_val_6_14 = *(context + 0xa0);
        fpu_val_6_14 - fpu_val_7_22;

        if (!(*(&((fpu_val_6_14 < fpu_val_7_22 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_14, fpu_val_7_22) ? 1 : 0) << 0xa
                | (fpu_val_6_14 == fpu_val_7_22 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_21 = *(context + 0xa0);
        else
            fpu_val_7_21 = *(context + 0x9c);
    }
    else
        fpu_val_7_21 = *(context + 0x98);

    float item_54_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_21;
    double* item_58 = &item_40;
    WorldObject_CommitTransform(Level_StartMission_4(), context, item_58, item_54_1);
    float* data_5 = param_2[1];
    item_28 = *(context + 0x114) * data_5[1] + data_5[2] * *(context + 0x120) + *(context + 0x108) * *data_5;
    *(&item_28 + 4) =
        *(context + 0x118) * data_5[1] + data_5[2] * *(context + 0x124) + *(context + 0x10c) * *data_5;
    item_20 = *(context + 0x11c) * data_5[1] + data_5[2] * *(context + 0x128) + *(context + 0x110) * *data_5;
    *(&item_20 + 4) =
        data_5[4] * *(context + 0x114) + *(context + 0x120) * data_5[5] + *(context + 0x108) * data_5[3];
    item_18 = data_5[4] * *(context + 0x118) + *(context + 0x124) * data_5[5] + *(context + 0x10c) * data_5[3];
    *(&item_18 + 4) =
        data_5[4] * *(context + 0x11c) + *(context + 0x128) * data_5[5] + *(context + 0x110) * data_5[3];
    float item_10 =
        data_5[7] * *(context + 0x114) + *(context + 0x120) * data_5[8] + *(context + 0x108) * data_5[6];
    float item_c =
        data_5[7] * *(context + 0x118) + *(context + 0x124) * data_5[8] + *(context + 0x10c) * data_5[6];
    int32_t result = *(context + 0x12c);
    int32_t item_4 = data_5[9] + result + 1;
    float item_8 =
        data_5[7] * *(context + 0x11c) + *(context + 0x128) * data_5[8] + *(context + 0x110) * data_5[6];
    memcpy(context + 0x70, &item_28, 0x28);
    return result;
}
