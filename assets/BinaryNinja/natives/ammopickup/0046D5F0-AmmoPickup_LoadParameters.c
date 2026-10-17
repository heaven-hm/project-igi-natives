// IGI native provenance: AmmoPickup_LoadParameters - 0x0046D5F0 - CFG score 93.9% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046D5F0-AmmoPickup_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "AmmoPickup_LoadParameters.h"
int32_t AmmoPickup_LoadParameters(int32_t* context)

{
    int32_t item_20;
    memset(&item_20, 0, 0x18);
    DynObj_QtasklistIsFull(Level_LoadObjects_5(), context);
    DynObj_LookupHashItem_6(Level_StartMission_4(), context, 0);
    long double fpu7 = context[0x27];
    long double fpu6 = context[0x28];
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = context[0x28];
    else
        fpu_val_7_1 = context[0x27];

    long double fpu_val_6_1 = context[0x26];
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = context[0x27];
        long double fpu_val_6_2 = context[0x28];
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = context[0x28];
        else
            fpu_val_7_3 = context[0x27];
    }
    else
        fpu_val_7_3 = context[0x26];

    float item_38_3 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), context, &item_20, item_38_3, 1);
    double* data_6 = DynObj_UpdateDynTree_4(context);
    int32_t result = Render_ComputeNormals_14(context[0x1a], context, data_6);
    memset(&context[0x3c], 0, 0x1a);
    context[0x43] = 0;
    context[0x44] = 0;
    context[0x4c] = 0;
    return result;
}
