// Original IGI.EXE function: Switch_LoadParameters (VA 0x00444F20; static CFG gate PASS, CFG score 0.963).
#include "Switch_LoadParameters.h"
int32_t* Switch_LoadParameters(float a1)

{
    int32_t* srcS = a1;
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    DynObj_QtasklistIsFull(Level_StartMission_3(), srcS);
    DynObj_LookupHashItem_6(g_a44344, srcS, 0);
    long double fpu7 = srcS[0x27];
    long double fpu6 = srcS[0x28];
    fpu6 - fpu7;
    long double x87_r7_1;

    if (!(*(&((fpu6 < fpu7 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu7) ? 1 : 0) << 0xa
            | (fpu6 == fpu7 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_1 = srcS[0x28];
    else
        x87_r7_1 = srcS[0x27];

    long double x87_r6_1 = srcS[0x26];
    x87_r6_1 - x87_r7_1;
    long double x87_r7_3;

    if (*(&((x87_r6_1 < x87_r7_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_1) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_4 = srcS[0x27];
        long double x87_r6_2 = srcS[0x28];
        x87_r6_2 - x87_r7_4;

        if (!(*(&((x87_r6_2 < x87_r7_4 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_2, x87_r7_4) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_4 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_3 = srcS[0x28];
        else
            x87_r7_3 = srcS[0x27];
    }
    else
        x87_r7_3 = srcS[0x26];

    long double x87_r7_6 = Render_ComputeNormals(srcS[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8(g_a44344, srcS, &v_18, x87_r7_6, 1);
    double* valA5 = DynObj_UpdateDynTree_4(srcS);
    Render_ComputeNormals_14(srcS[0x1a], srcS, valA5);
    srcS[0x1c] = 0x3f800000;
    srcS[0x20] = 0x3f800000;
    srcS[0x24] = 0x3f800000;
    srcS[0x42] = 0x3f800000;
    srcS[0x46] = 0x3f800000;
    srcS[0x4a] = 0x3f800000;
    srcS[0x1d] = 0;
    srcS[0x1e] = 0;
    srcS[0x1f] = 0;
    srcS[0x21] = 0;
    srcS[0x22] = 0;
    srcS[0x23] = 0;
    srcS[0x25] = 0;
    srcS[0x43] = 0;
    srcS[0x44] = 0;
    srcS[0x45] = 0;
    srcS[0x47] = 0;
    srcS[0x48] = 0;
    srcS[0x49] = 0;
    srcS[0x4b] = 0;
    char* valA6 = &srcS[0x5c];
    int32_t i_1 = 5;
    int32_t i;

    do
    {
        *valA6 = 0;
        valA6 = &valA6[0x10];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    srcS[0x70] = 1;
    *(srcS + 0x1c2) = 0;
    srcS[0x71] = 0;
    *(srcS + 0x1c1) = 1;
    *(srcS + 0x1c3) = 0;
    *(srcS + 0x1c5) = 0;
    srcS[0x72] = 0;
    srcS[0x73] = 0;
    srcS[0x88] = 1;
    return Script_ExecuteLevelScript_6(&srcS[0x74]);
}
