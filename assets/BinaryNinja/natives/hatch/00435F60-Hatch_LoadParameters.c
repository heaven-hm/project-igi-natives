// IGI native provenance: Hatch_LoadParameters - 0x00435F60 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00435F60-Hatch_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Hatch_LoadParameters.h"
int32_t Hatch_LoadParameters(void* context, float param_2)

{
    int32_t* dest_val = param_2;
    float* data_val = dest_val[1];
    long double fpu_val_6_7 =
        data_val[5] * *(context + 0x100) + data_val[4] * *(context + 0xf8) + data_val[3] * *(context + 0xf0);
    double* data_1 = *dest_val;
    long double fpu_val_6_11 =
        data_val[8] * *(context + 0x100) + data_val[7] * *(context + 0xf8) + data_val[6] * *(context + 0xf0);
    double item_18 =
        data_val[2] * *(context + 0x100) + data_val[1] * *(context + 0xf8) + *data_val * *(context + 0xf0) + *data_1;
    double item_10 = fpu_val_6_7 + data_1[1];
    double item_8 = fpu_val_6_11 + data_1[2];
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

    float item_3c_1 = Render_ComputeNormals(*(context + 0x6c)) * fpu_val_7_12;
    WorldObject_CommitTransform(Level_StartMission_4(), context, &item_18, item_3c_1);
    return Vehicle_UpdateCockpit_4(context, dest_val[1]);
}
