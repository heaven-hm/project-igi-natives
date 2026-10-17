// IGI native provenance: Wire_LoadParameters - 0x0043F1F0 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043F1F0-Wire_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Wire_LoadParameters.h"
int32_t Wire_LoadParameters(int32_t* context)

{
    int32_t item_20;
    memset(&item_20, 0, 0x18);
    DynObj_QtasklistIsFull(Level_StartMission_3(), context);
    DynObj_LookupHashItem_6(g_a44344, context, 0);
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

    long double fpu_val_7_6 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_3;
    int32_t result = DynObj_LinkDynamicCube_8(g_a44344, context, &item_20, fpu_val_7_6, 1);
    memset(&context[0x3c], 0, 0x31);
    context[0x4c] = 0;
    *(context + 0x131) = 0;
    *(context + 0x132) = 0;
    return result;
}
