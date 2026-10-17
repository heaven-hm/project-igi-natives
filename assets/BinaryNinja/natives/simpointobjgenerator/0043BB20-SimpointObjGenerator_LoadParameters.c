// Original IGI.EXE function: SimpointObjGenerator_LoadParameters (VA 0x0043BB20; static CFG gate PASS, CFG score 0.905).
#include "SimpointObjGenerator_LoadParameters.h"
int32_t SimpointObjGenerator_LoadParameters(float context)

{
    int32_t* source_val = context;
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    DynObj_LookupHashItem_6(Level_StartMission_4(), source_val, 0);
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

    float item_28_2 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), source_val, &item_18, item_28_2, 2);
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
    source_val[0x3c] = 0;
    source_val[0x3d] = 0;
    source_val[0x41] = 0;
    source_val[0x45] = 0;
    memcpy(&source_val[0x49],
        "\x1e\x00\x00\x00\x0f\x00\x00\x00\x48\xe1\x7a\x3f\x00\x00\x80\x3f\x00\x00\x20\x41", 0x14);
    source_val[0x4e] = 0;
    source_val[0x4f] = 0;
    source_val[0x50] = 0;
    source_val[0x51] = 0x3f800000;
    source_val[0x52] = 0;
    source_val[0x53] = 0;
    source_val[0x54] = 0;
    return 0x3f800000;
}
