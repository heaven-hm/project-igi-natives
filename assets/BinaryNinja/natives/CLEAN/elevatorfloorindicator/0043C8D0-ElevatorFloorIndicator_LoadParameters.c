// IGI native provenance: ElevatorFloorIndicator_LoadParameters - 0x0043C8D0 - CFG score 94.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043C8D0-ElevatorFloorIndicator_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "ElevatorFloorIndicator_LoadParameters.h"
int32_t* ElevatorFloorIndicator_LoadParameters(float context)

{
    int32_t data_val = g_a44344;
    int32_t* source_val = context;
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    DynObj_LookupHashItem_6(data_val, source_val, 0);
    long double fpu7 = source_val[0x27];
    long double fpu6 = source_val[0x28];
    fpu6 - fpu7;
    long double fpu_val_7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_1 = source_val[0x28];
    else
        fpu_val_7_1 = source_val[0x27];

    long double fpu_val_6_1 = source_val[0x26];
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_3;

    if (*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_4 = source_val[0x27];
        long double fpu_val_6_2 = source_val[0x28];
        fpu_val_6_2 - fpu_val_7_4;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_4 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_4) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_4 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_3 = source_val[0x28];
        else
            fpu_val_7_3 = source_val[0x27];
    }
    else
        fpu_val_7_3 = source_val[0x26];

    long double fpu_val_7_6 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(g_a44344, source_val, &item_18, fpu_val_7_6, 1);
    source_val[0x1c] = 0x3f800000;
    source_val[0x1d] = 0;
    source_val[0x1e] = 0;
    source_val[0x1f] = 0;
    source_val[0x20] = 0x3f800000;
    source_val[0x21] = 0;
    source_val[0x22] = 0;
    source_val[0x23] = 0;
    source_val[0x24] = 0x3f800000;
    source_val[0x25] = 0;
    source_val[0x5c] = 0;
    source_val[0x60] = 0;
    source_val[0x64] = 0;
    source_val[0x68] = 0;
    Script_ExecuteLevelScript_6(&source_val[0x69]);
    return Script_ExecuteLevelScript_6(&source_val[0x7d]);
}
