#include "SimpointObjGenerator_LoadParameters.h"
int32_t SimpointObjGenerator_LoadParameters(float a1)

{
    int32_t* srcS = a1;
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    DynObj_LookupHashItem_6(Level_StartMission_4(), srcS, 0);
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

    float v_28_2 = Render_ComputeNormals(srcS[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), srcS, &v_18, v_28_2, 2);
    srcS[0x1c] = 0x3f800000;
    srcS[0x1d] = 0;
    srcS[0x1e] = 0;
    srcS[0x1f] = 0;
    srcS[0x20] = 0x3f800000;
    srcS[0x21] = 0;
    srcS[0x22] = 0;
    srcS[0x23] = 0;
    srcS[0x24] = 0x3f800000;
    srcS[0x25] = 0;
    srcS[0x3c] = 0;
    srcS[0x3d] = 0;
    srcS[0x41] = 0;
    srcS[0x45] = 0;
    memcpy(&srcS[0x49],
        "\x1e\x00\x00\x00\x0f\x00\x00\x00\x48\xe1\x7a\x3f\x00\x00\x80\x3f\x00\x00\x20\x41", 0x14);
    srcS[0x4e] = 0;
    srcS[0x4f] = 0;
    srcS[0x50] = 0;
    srcS[0x51] = 0x3f800000;
    srcS[0x52] = 0;
    srcS[0x53] = 0;
    srcS[0x54] = 0;
    return 0x3f800000;
}
