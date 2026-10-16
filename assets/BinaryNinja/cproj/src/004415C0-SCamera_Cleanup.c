#include "gi_platform.h"
#include "004415C0-SCamera_Cleanup.h"
char* SCamera_Cleanup(float a1)

{
    int32_t* srcS = a1;
    int32_t v_18;
    __builtin_memset(&v_18, 0, 0x18);
    DynObj_QtasklistIsFull(Level_InitTextures_4(), srcS);
    DynObj_QtasklistIsFull(g_57c18c, srcS);
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

    float v_2c_3 = Render_ComputeNormals(srcS[0x1b]) * x87_r7_3;
    DynObj_LinkDynamicCube_8(Level_StartMission_4(), srcS, &v_18, v_2c_3, 1);
    double* valA6 = DynObj_UpdateDynTree_4(srcS);
    Render_ComputeNormals_14(srcS[0x1a], srcS, valA6);
    srcS[0x974] = srcS[5];
    __builtin_memset(&srcS[0x3c], 0, 0x14);
    char* result = FX_DebrisSpawn_13(&srcS[0x62], 1, 6, AI_CombatTarget_22() | Env_InitLadder_3(), 4, 8);
    __builtin_memset(&srcS[0x96e], 0, 0x15);
    srcS[0x41] = 0;
    srcS[0x42] = 0x3f000000;
    srcS[0x975] = 0;
    srcS[0x976] = 0;
    srcS[0x977] = 0;
    srcS[0x978] = 0;
    return result;
}
