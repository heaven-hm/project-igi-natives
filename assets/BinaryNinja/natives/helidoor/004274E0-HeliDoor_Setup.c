// Original IGI.EXE function: HeliDoor_Setup (VA 0x004274E0; static CFG gate FAIL, CFG score 0.833).
#include "HeliDoor_Setup.h"
int32_t HeliDoor_Setup(float context, int32_t* param_2)

{
    int32_t data_1 = **(context + 0x138);
    double item_40;
    memcpy(&item_40, context + 0xf0, 0x18);
    double item_38;
    double item_30;

    if (!data_1)
        item_40 = *(context + 0x13c) + item_40;
    else if (data_1 == 1)
        item_38 = *(context + 0x13c) + item_38;
    else if (data_1 == 2)
        item_30 = *(context + 0x13c) + item_30;

    float* data_2 = param_2[1];
    double item_28 = data_2[2] * item_30 + data_2[1] * item_38 + *data_2 * item_40;
    double item_20 = data_2[5] * item_30 + data_2[4] * item_38 + data_2[3] * item_40;
    double* data_3 = *param_2;
    double item_18 = data_2[8] * item_30 + data_2[7] * item_38 + data_2[6] * item_40;
    long double fpu_val_7_19 = item_28;
    memcpy(&item_40, &item_28, 0x18);
    item_40 = fpu_val_7_19 + *data_3;
    double item_38_1 = item_38 + data_3[1];
    double item_30_1 = item_30 + data_3[2];
    long double fpu_val_7_25 = *(context + 0x9c);
    long double fpu_val_6_12 = *(context + 0xa0);
    fpu_val_6_12 - fpu_val_7_25;
    long double fpu_val_7_26;

    if (!(*(&((fpu_val_6_12 < fpu_val_7_25 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_12, fpu_val_7_25) ? 1 : 0) << 0xa
            | (fpu_val_6_12 == fpu_val_7_25 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_26 = *(context + 0xa0);
    else
        fpu_val_7_26 = *(context + 0x9c);

    long double fpu_val_6_13 = *(context + 0x98);
    fpu_val_6_13 - fpu_val_7_26;
    long double fpu_val_7_28;

    if (*(&((fpu_val_6_13 < fpu_val_7_26 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_13, fpu_val_7_26) ? 1 : 0) << 0xa
        | (fpu_val_6_13 == fpu_val_7_26 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_29 = *(context + 0x9c);
        long double fpu_val_6_14 = *(context + 0xa0);
        fpu_val_6_14 - fpu_val_7_29;

        if (!(*(&((fpu_val_6_14 < fpu_val_7_29 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_14, fpu_val_7_29) ? 1 : 0) << 0xa
                | (fpu_val_6_14 == fpu_val_7_29 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_28 = *(context + 0xa0);
        else
            fpu_val_7_28 = *(context + 0x9c);
    }
    else
        fpu_val_7_28 = *(context + 0x98);

    float item_54_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_28;
    double* item_58 = &item_40;
    WorldObject_CommitTransform(Level_StartMission_4(), context, item_58, item_54_1);
    float* data_6 = param_2[1];
    item_28 = *(context + 0x114) * data_6[1] + data_6[2] * *(context + 0x120) + *(context + 0x108) * *data_6;
    *(&item_28 + 4) =
        *(context + 0x118) * data_6[1] + data_6[2] * *(context + 0x124) + *(context + 0x10c) * *data_6;
    item_20 = *(context + 0x11c) * data_6[1] + data_6[2] * *(context + 0x128) + *(context + 0x110) * *data_6;
    *(&item_20 + 4) =
        data_6[4] * *(context + 0x114) + *(context + 0x120) * data_6[5] + *(context + 0x108) * data_6[3];
    item_18 = data_6[4] * *(context + 0x118) + *(context + 0x124) * data_6[5] + *(context + 0x10c) * data_6[3];
    *(&item_18 + 4) =
        data_6[4] * *(context + 0x11c) + *(context + 0x128) * data_6[5] + *(context + 0x110) * data_6[3];
    float item_10 =
        data_6[7] * *(context + 0x114) + *(context + 0x120) * data_6[8] + *(context + 0x108) * data_6[6];
    float item_c =
        data_6[7] * *(context + 0x118) + *(context + 0x124) * data_6[8] + *(context + 0x10c) * data_6[6];
    int32_t result = data_6[9];
    int32_t item_4 = result + *(context + 0x12c) + 1;
    float item_8 =
        data_6[7] * *(context + 0x11c) + *(context + 0x128) * data_6[8] + *(context + 0x110) * data_6[6];
    memcpy(context + 0x70, &item_28, 0x28);
    return result;
}
