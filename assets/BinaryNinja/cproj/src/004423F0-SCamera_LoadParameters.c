#include "gi_platform.h"
#include "004423F0-SCamera_LoadParameters.h"
int32_t* SCamera_LoadParameters(int32_t* a1)

{
    int32_t v_20;
    __builtin_memset(&v_20, 0, 0x18);
    FX_FragmentSimulate_13(a1);
    DynObj_LookupHashItem_6(g_a44344, a1, 0);
    long double fpu7 = a1[0x27];
    long double fpu6 = a1[0x28];
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = a1[0x28];
    else
        x87_r7_1 = a1[0x27];

    long double x87_r6_1 = a1[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = a1[0x27];
        long double x87_r6_2 = a1[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = a1[0x28];
        else
            x87_r7_3 = a1[0x27];
    }
    else
        x87_r7_3 = a1[0x26];

    long double x87_r7_6 = Render_ComputeNormals(a1[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8(g_a44344, a1, &v_20, x87_r7_6, 1);
    double* valA4 = DynObj_UpdateDynTree_4(a1);
    Render_ComputeNormals_14(a1[0x1a], a1, valA4);
    __builtin_memset(&a1[0x3c], 0, 0x1c);
    a1[0x43] = g_53c64c[0];
    a1[0x44] = g_53c64c[4][0];
    a1[0x45] = g_53c64c[8][0];
    a1[0x48] = 0;
    a1[0x49] = 0;
    a1[0x4a] = g_53c640[0];
    a1[0x4b] = g_53c640[4][0];
    a1[0x4c] = g_53c640[8][0];
    a1[0x4e] = g_53c634[0];
    int32_t kind = g_53c634[4][0];
    a1[0x4f] = kind;
    a1[0x54] = 0x3f800000;
    a1[0x56] = 0x41200000;
    a1[0x50] = g_53c634[8][0];
    a1[0x52] = 0x2d;
    (*(int32_t*)(uintptr_t)(a1 + 0x14a)) = 0x2d;
    a1[0x53] = 0x2d;
    a1[0x55] = 0x5a;
    (*(int32_t*)(uintptr_t)(a1 + 0x156)) = 0x5a;
    kind = g_57c190;
    a1[0x57] = QTask_HandleInput(a1, kind, 0);
    a1[0x59] = 0;
    a1[0x5a] = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x169)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x16a)) = 0;
    a1[0x5b] = 0;
    a1[0x5c] = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x171)) = 0;
    return Script_ExecuteLevelScript_6(&a1[0x5d]);
}
