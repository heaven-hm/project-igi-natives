// IGI native provenance: Vehicle_InitHeli_2 - 0x00431560 - CFG score 97.4% (PASS; structural only); runtime behavior not verified.
// Evidence: 00431560-Vehicle_InitHeli_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Vehicle_InitHeli_2.h"
int32_t* Vehicle_InitHeli_2(float context)

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
    source_val[0x1d2] = SoundSys_Update3DPosition_7(2);
    source_val[0x1d3] = 0;
    source_val[0x55] = 0;
    Script_FormatString_16(source_val);
    source_val[0x1d0] = 0x3f800000;
    source_val[0x1d4] = 0;
    source_val[0x1d5] = 0xffffffff;
    Script_ExecuteLevelScript_6(&source_val[0x1d6]);
    Script_ExecuteLevelScript_6(&source_val[0x1ea]);
    Script_ExecuteLevelScript_6(&source_val[0x1fe]);
    *(source_val + 0x751) = 0;
    int32_t* result = DynObj_QtasklistIsFull(Level_InitSprites_4(), source_val);
    source_val[0xb3c] = 0x43340000;
    source_val[0xb3d] = 0x43b40000;
    source_val[0xb3e] = 0x42700000;
    return result;
}
