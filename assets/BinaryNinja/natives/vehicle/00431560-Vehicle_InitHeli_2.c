#include "Vehicle_InitHeli_2.h"
int32_t* Vehicle_InitHeli_2(float a1)

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
    srcS[0x1d2] = SoundSys_Update3DPosition_7(2);
    srcS[0x1d3] = 0;
    srcS[0x55] = 0;
    Script_FormatString_16(srcS);
    srcS[0x1d0] = 0x3f800000;
    srcS[0x1d4] = 0;
    srcS[0x1d5] = 0xffffffff;
    Script_ExecuteLevelScript_6(&srcS[0x1d6]);
    Script_ExecuteLevelScript_6(&srcS[0x1ea]);
    Script_ExecuteLevelScript_6(&srcS[0x1fe]);
    *(srcS + 0x751) = 0;
    int32_t* result = DynObj_QtasklistIsFull(Level_InitSprites_4(), srcS);
    srcS[0xb3c] = 0x43340000;
    srcS[0xb3d] = 0x43b40000;
    srcS[0xb3e] = 0x42700000;
    return result;
}
