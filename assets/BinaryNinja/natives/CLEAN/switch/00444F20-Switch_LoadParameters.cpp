// IGI native provenance: Switch_LoadParameters - 0x00444F20 - CFG score 96.3% (PASS; structural only); runtime behavior not verified.
// Evidence: 00444F20-Switch_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Switch_LoadParameters.h"
int32_t* Switch_LoadParameters(float context)

{
    int32_t* source_val = context;
    int32_t item_18;
    memset(&item_18, 0, 0x18);
    DynObj_QtasklistIsFull(Level_StartMission_3(), source_val);
    DynObj_LookupHashItem_6(g_a44344, source_val, 0);
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
    double* data_5 = DynObj_UpdateDynTree_4(source_val);
    Render_ComputeNormals_14(source_val[0x1a], source_val, data_5);
    source_val[0x1c] = 0x3f800000;
    source_val[0x20] = 0x3f800000;
    source_val[0x24] = 0x3f800000;
    source_val[0x42] = 0x3f800000;
    source_val[0x46] = 0x3f800000;
    source_val[0x4a] = 0x3f800000;
    source_val[0x1d] = 0;
    source_val[0x1e] = 0;
    source_val[0x1f] = 0;
    source_val[0x21] = 0;
    source_val[0x22] = 0;
    source_val[0x23] = 0;
    source_val[0x25] = 0;
    source_val[0x43] = 0;
    source_val[0x44] = 0;
    source_val[0x45] = 0;
    source_val[0x47] = 0;
    source_val[0x48] = 0;
    source_val[0x49] = 0;
    source_val[0x4b] = 0;
    char* data_6 = &source_val[0x5c];
    int32_t i_1 = 5;
    int32_t i;

    do
    {
        *data_6 = 0;
        data_6 = &data_6[0x10];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    source_val[0x70] = 1;
    *(source_val + 0x1c2) = 0;
    source_val[0x71] = 0;
    *(source_val + 0x1c1) = 1;
    *(source_val + 0x1c3) = 0;
    *(source_val + 0x1c5) = 0;
    source_val[0x72] = 0;
    source_val[0x73] = 0;
    source_val[0x88] = 1;
    return Script_ExecuteLevelScript_6(&source_val[0x74]);
}
