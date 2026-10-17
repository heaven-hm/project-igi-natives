// IGI native provenance: EditRigidObj_LoadParameters - 0x004F2930 - CFG score 90.5% (PASS; structural only); runtime behavior not verified.
// Evidence: 004F2930-EditRigidObj_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "EditRigidObj_LoadParameters.h"
int32_t EditRigidObj_LoadParameters(int32_t* context)

{
    int32_t data_val = g_a44344;
    int32_t item_20;
    memset(&item_20, 0, 0x18);
    DynObj_LookupHashItem_6(data_val, context, 0);
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
    DynObj_LinkDynamicCube_8(g_a44344, context, &item_20, fpu_val_7_6, 2);
    double* data_4 = DynObj_UpdateDynTree_4(context);
    Render_ComputeNormals_14(g_a44344, context, data_4);
    memset(&context[0x3c], 0, 0x18);
    context[0x42] = 0x3f800000;
    context[0x43] = 0;
    context[0x44] = 0;
    context[0x45] = 0;
    context[0x46] = 0x3f800000;
    context[0x47] = 0;
    context[0x48] = 0;
    context[0x49] = 0;
    context[0x4a] = 0x3f800000;
    context[0x4b] = 0;
    context[0x4c] = 0;
    context[0x50] = 0x3f800000;
    context[0x51] = 0x3f800000;
    context[0x52] = 0x3f800000;
    context[0x53] = 0;
    context[0x54] = 0;
    context[0x55] = 0;
    context[0x66] = 1;
    return 0x3f800000;
}
