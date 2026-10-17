// Original IGI.EXE function: CarDoor_Setup (VA 0x00426880; static CFG gate PASS, CFG score 0.867).
#include "CarDoor_Setup.h"
int32_t CarDoor_Setup(void* context, int32_t* param_2)

{
    float* data_val = param_2[1];
    long double fpu7 = data_val[2];
    double item_40;
    memcpy(&item_40, context + 0xf0, 0x18);
    double item_38;
    double item_30;
    double item_94 = fpu7 * item_30 + data_val[1] * item_38 + *data_val * item_40;
    double item_8c = data_val[5] * item_30 + data_val[4] * item_38 + data_val[3] * item_40;
    double* data_1 = *param_2;
    double item_84 = data_val[8] * item_30 + data_val[7] * item_38 + data_val[6] * item_40;
    long double fpu_val_7_12 = item_94;
    memcpy(&item_40, &item_94, 0x18);
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

    float item_a8_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_21;
    double* item_ac = &item_40;
    WorldObject_CommitTransform(Level_StartMission_4(), context, item_ac, item_a8_1);
    int32_t data_5 = **(context + 0x138);
    float item_68;

    if (!data_5)
    {
        float data_6 = *(context + 0x13c);
        item_ac = &item_68;
        Sys_CloseFileStream_12(item_ac, data_6);
    }
    else if (data_5 == 1)
    {
        float temp_1 = *(context + 0x13c);
        item_ac = &item_68;
        Sys_ExecuteBytecode_12(item_ac, temp_1);
    }
    else if (data_5 == 2)
    {
        float entity_1 = *(context + 0x13c);
        item_ac = &item_68;
        Sys_DispatchOpcode_12(item_ac, entity_1);
    }

    float item_5c;
    float item_50;
    item_94 = item_50 * *(context + 0x110) + item_68 * *(context + 0x108) + item_5c * *(context + 0x10c);
    float item_64;
    float item_58;
    float item_4c;
    *(&item_94 + 4) = item_4c * *(context + 0x110) + item_64 * *(context + 0x108) + item_58 * *(context + 0x10c);
    float item_60;
    float item_54;
    float item_48;
    item_8c = item_48 * *(context + 0x110) + item_60 * *(context + 0x108) + item_54 * *(context + 0x10c);
    *(&item_8c + 4) = item_50 * *(context + 0x11c) + item_68 * *(context + 0x114) + item_5c * *(context + 0x118);
    item_84 = item_4c * *(context + 0x11c) + item_64 * *(context + 0x114) + item_58 * *(context + 0x118);
    *(&item_84 + 4) = item_48 * *(context + 0x11c) + item_60 * *(context + 0x114) + item_54 * *(context + 0x118);
    float item_7c = item_50 * *(context + 0x128) + item_68 * *(context + 0x120) + item_5c * *(context + 0x124);
    float item_78 = item_4c * *(context + 0x128) + item_64 * *(context + 0x120) + item_58 * *(context + 0x124);
    int32_t item_44;
    int32_t temp_2 = *(context + 0x12c) + item_44 + 1;
    float* data_8 = param_2[1];
    int32_t item_70 = temp_2;
    float item_74 = item_48 * *(context + 0x128) + item_60 * *(context + 0x120) + item_54 * *(context + 0x124);
    long double fpu_val_7_61 = item_94;
    memcpy(&item_68, &item_94, 0x28);
    float item_28 = fpu_val_7_61 * *data_8 + *(&item_8c + 4) * data_8[1] + item_7c * data_8[2];
    float item_24 = *(&item_94 + 4) * *data_8 + item_84 * data_8[1] + item_78 * data_8[2];
    float item_20 = item_8c * *data_8 + *(&item_84 + 4) * data_8[1] + item_74 * data_8[2];
    float item_1c = item_7c * data_8[5] + item_94 * data_8[3] + *(&item_8c + 4) * data_8[4];
    float item_18 = item_78 * data_8[5] + *(&item_94 + 4) * data_8[3] + item_84 * data_8[4];
    float item_14 = item_74 * data_8[5] + item_8c * data_8[3] + *(&item_84 + 4) * data_8[4];
    float item_10 = item_7c * data_8[8] + item_94 * data_8[6] + *(&item_8c + 4) * data_8[7];
    float item_c = item_78 * data_8[8] + *(&item_94 + 4) * data_8[6] + item_84 * data_8[7];
    int32_t result = data_8[9];
    int32_t item_4 = result + temp_2 + 1;
    float item_8 = item_74 * data_8[8] + item_8c * data_8[6] + *(&item_84 + 4) * data_8[7];
    memcpy(context + 0x70, &item_28, 0x28);
    return result;
}
