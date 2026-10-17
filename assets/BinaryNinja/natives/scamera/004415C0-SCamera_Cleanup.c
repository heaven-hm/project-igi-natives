// IGI native provenance: SCamera_Cleanup - 0x004415C0 - CFG score 93.8% (PASS; structural only); runtime behavior not verified.
// Evidence: 004415C0-SCamera_Cleanup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "SCamera_Cleanup.h"
char* SCamera_Cleanup(float context)

{
    int32_t* source_val = context;
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    DynObj_QtasklistIsFull(Level_InitTextures_4(), source_val);
    DynObj_QtasklistIsFull(g_57c18c, source_val);
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

    float item_2c_3 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), source_val, &item_18, item_2c_3, 1);
    double* data_6 = DynObj_UpdateDynTree_4(source_val);
    Render_ComputeNormals_14(source_val[0x1a], source_val, data_6);
    source_val[0x974] = source_val[5];
    memset(&source_val[0x3c], 0, 0x14);
    char* result = FX_DebrisSpawn_13(&source_val[0x62], 1, 6, AI_CombatTarget_22() | Env_InitLadder_3(), 4, 8);
    memset(&source_val[0x96e], 0, 0x15);
    source_val[0x41] = 0;
    source_val[0x42] = 0x3f000000;
    source_val[0x975] = 0;
    source_val[0x976] = 0;
    source_val[0x977] = 0;
    source_val[0x978] = 0;
    return result;
}
