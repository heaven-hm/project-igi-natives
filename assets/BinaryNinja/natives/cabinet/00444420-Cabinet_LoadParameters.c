// Original IGI.EXE function: Cabinet_LoadParameters (VA 0x00444420; static CFG gate PASS, CFG score 0.926).
#include "Cabinet_LoadParameters.h"
int32_t Cabinet_LoadParameters(int32_t* context)

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
    DynObj_LinkDynamicCube_8(g_a44344, context, &item_20, fpu_val_7_6, 1);
    double* data_5 = DynObj_UpdateDynTree_4(context);
    int32_t result = Render_ComputeNormals_14(context[0x1a], context, data_5);
    memset(&context[0x3c], 0, 0x1d);
    context[0x47] = 0;
    *(context + 0x11d) = 0;
    *(context + 0x11f) = 0;
    context[0x48] = 0;
    context[0x49] = 0;
    context[0x4a] = 0;
    *(context + 0x129) = 0;
    context[0x4b] = 0x40800000;
    context[0x4c] = 0;
    return result;
}
