// IGI native provenance: GenericPhysicsObj_Update - 0x0043EAB0 - CFG score 95.2% (PASS; structural only); runtime behavior not verified.
// Evidence: 0043EAB0-GenericPhysicsObj_Update.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "GenericPhysicsObj_Update.h"
void* GenericPhysicsObj_Update(float context)

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

    float item_24_2 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), source_val, &item_18, item_24_2, 2);
    source_val[0x55] = 0;
    return Script_ParseEnumInt32_28(source_val);
}
