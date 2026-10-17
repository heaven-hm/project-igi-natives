// IGI native provenance: RigidDynCubeObj_Action - 0x004C3010 - CFG score 91.7% (PASS; structural only); runtime behavior not verified.
// Evidence: 004C3010-RigidDynCubeObj_Action.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "RigidDynCubeObj_Action.h"
void RigidDynCubeObj_Action(int32_t* context, float param_2)

{
    int32_t* source_val = param_2;

    if (!source_val)
        return;

    void* data_2 = DynObj_Missing(*source_val);

    if (!data_2)
    {
        int32_t saved_ebx_2 = *source_val;
        Error_Show("VirModel "%s" not available");

        while (true)
            /* nop */

        return;
    }

    DynObj_LookupHashItem_6(source_val[1], context, data_2);
    long double fpu_val_7_1 = context[0x27];
    long double fpu_val_6_1 = context[0x28];
    fpu_val_6_1 - fpu_val_7_1;
    long double fpu_val_7_2;

    if (!(*(&((fpu_val_6_1 < fpu_val_7_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_1) ? 1 : 0) << 0xa
            | (fpu_val_6_1 == fpu_val_7_1 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_2 = context[0x28];
    else
        fpu_val_7_2 = context[0x27];

    long double fpu_val_6_2 = context[0x26];
    fpu_val_6_2 - fpu_val_7_2;
    long double fpu_val_7_4;

    if (*(&((fpu_val_6_2 < fpu_val_7_2 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_2, fpu_val_7_2) ? 1 : 0) << 0xa
        | (fpu_val_6_2 == fpu_val_7_2 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_5 = context[0x27];
        long double fpu_val_6_3 = context[0x28];
        fpu_val_6_3 - fpu_val_7_5;

        if (!(*(&((fpu_val_6_3 < fpu_val_7_5 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_3, fpu_val_7_5) ? 1 : 0) << 0xa
                | (fpu_val_6_3 == fpu_val_7_5 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_4 = context[0x28];
        else
            fpu_val_7_4 = context[0x27];
    }
    else
        fpu_val_7_4 = context[0x26];

    int32_t data_5 = context[0x35];
    long double fpu_val_7_7 = Render_ComputeNormals(context[0x1b]) * fpu_val_7_4;
    DynObj_LinkDynamicCube_8(source_val[1], context, &source_val[2], fpu_val_7_7, data_5);
    memcpy(&context[0x1c], &source_val[0xe], 0x28);
    Car_GunCreate(context, context, context);
    memset(&context[0x30], 0, 0x14);
}
