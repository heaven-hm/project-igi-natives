// Original IGI.EXE function: SCamera_LoadParameters (VA 0x004423F0; static CFG gate PASS, CFG score 0.933).
#include "SCamera_LoadParameters.h"
int32_t* SCamera_LoadParameters(int32_t* context)

{
    int32_t item_20;
    memset(&item_20, 0, 0x18);
    FX_FragmentSimulate_13(context);
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
    double* data_4 = DynObj_UpdateDynTree_4(context);
    Render_ComputeNormals_14(context[0x1a], context, data_4);
    memset(&context[0x3c], 0, 0x1c);
    context[0x43] = g_53c64c[0];
    context[0x44] = g_53c64c[4][0];
    context[0x45] = g_53c64c[8][0];
    context[0x48] = 0;
    context[0x49] = 0;
    context[0x4a] = g_53c640[0];
    context[0x4b] = g_53c640[4][0];
    context[0x4c] = g_53c640[8][0];
    context[0x4e] = g_53c634[0];
    int32_t kind = g_53c634[4][0];
    context[0x4f] = kind;
    context[0x54] = 0x3f800000;
    context[0x56] = 0x41200000;
    context[0x50] = g_53c634[8][0];
    context[0x52] = 0x2d;
    *(context + 0x14a) = 0x2d;
    context[0x53] = 0x2d;
    context[0x55] = 0x5a;
    *(context + 0x156) = 0x5a;
    kind = g_57c190;
    context[0x57] = QTask_HandleInput(context, kind, 0);
    context[0x59] = 0;
    context[0x5a] = 0;
    *(context + 0x169) = 0;
    *(context + 0x16a) = 0;
    context[0x5b] = 0;
    context[0x5c] = 0;
    *(context + 0x171) = 0;
    return Script_ExecuteLevelScript_6(&context[0x5d]);
}
