// Original IGI.EXE function: CockpitShield_LoadParameters (VA 0x00435300; static CFG gate PASS, CFG score 0.933).
#include "CockpitShield_LoadParameters.h"
int32_t CockpitShield_LoadParameters(void* context, float param_2)

{
    int32_t* flagP = param_2;
    float* data_val = flagP[1];
    double item_18 = data_val[2] * *(context + 0x100) + data_val[1] * *(context + 0xf8) + *data_val * *(context + 0xf0);
    double item_10 = data_val[5] * *(context + 0x100) + data_val[4] * *(context + 0xf8) + data_val[3] * *(context + 0xf0);
    double* data_1 = *flagP;
    double item_8 = data_val[8] * *(context + 0x100) + data_val[7] * *(context + 0xf8) + data_val[6] * *(context + 0xf0);
    long double fpu_val_7_12 = item_18;
    double item_30;
    memcpy(&item_30, &item_18, 0x18);
    item_30 = fpu_val_7_12 + *data_1;
    double item_28;
    double item_28_1 = item_28 + data_1[1];
    double item_20;
    double item_20_1 = item_20 + data_1[2];
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

    float item_44_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_21;
    double* item_48 = &item_30;
    WorldObject_CommitTransform(Level_StartMission_4(), context, item_48, item_44_1);
    return Vehicle_UpdateCockpit_4(context, flagP[1]);
}
