// Original IGI.EXE function: GunPickup_Setup (VA 0x0046CEA0; static CFG gate PASS, CFG score 1.000).
#include "GunPickup_Setup.h"
int32_t GunPickup_Setup(float a1)

{
    int32_t* srcS = a1;
    long double fpu7 = *(srcS + 0x100);
    long double f0 = *(srcS + 0x118);
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double x87_r7_2 = *(srcS + 0x120) * -0.5;
        int32_t objC1 = srcS[0x47];
        srcS[0x40] = srcS[0x46];
        srcS[0x41] = objC1;
        *(srcS + 0x120) = x87_r7_2;
        long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
        long double f2_1 = 0.5;
        fp0_1 - f2_1;
        char* valA5 = "weapondrop_01";

        if (*(&((fp0_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2_1) ? 1 : 0) << 0xa
                | (fp0_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            valA5 = "weapondrop_02";

        struct status_msg* valA7 = SoundSys_SetMasterVolume_7(Script_FormatString(), valA5);

        if (valA7)
            SoundSys_StopSoundSample_7(valA7, &srcS[0x3c]);
    }

    long double x87_r7_4 = *(srcS + 0x100);
    long double f1 = *(srcS + 0x118);
    x87_r7_4 - f1;
    long double x87_r7_6;
    long double f4_1;

    if (*(&((x87_r7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1) ? 1 : 0) << 0xa
        | (x87_r7_4 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_5 = *(srcS + 0x120);
        long double f3_1 = 0.0;
        x87_r7_5 - f3_1;
        x87_r7_6 = *(srcS + 0x120);

        if (*(&((x87_r7_5 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_5, f3_1) ? 1 : 0) << 0xa
                | (x87_r7_5 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            x87_r7_6 = -(x87_r7_6);

        f4_1 = 409.60000000000002;
        x87_r7_6 - f4_1;
    }

    if (!(*(&((x87_r7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1) ? 1 : 0) << 0xa
        | (x87_r7_4 == f1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&((x87_r7_6 < f4_1 ? 1 : 0) << 8
        | (FCMP_UO(x87_r7_6, f4_1) ? 1 : 0) << 0xa | (x87_r7_6 == f4_1 ? 1 : 0) << 0xe) + 1)
        & 1))
    {
        *(srcS + 0x100) = *(srcS + 0x100) - *(srcS + 0x120);
        *(srcS + 0x120) = *(srcS + 0x120) + 44.600888888888889;
    }
    else
    {
        srcS[0x48] = 0;
        srcS[0x49] = 0;
    }

    long double x87_r7_11 = srcS[0x27];
    long double fpu6 = srcS[0x28];
    fpu6 - x87_r7_11;
    long double x87_r7_12;

    if (!(*(&((fpu6 < x87_r7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu6, x87_r7_11) ? 1 : 0) << 0xa
            | (fpu6 == x87_r7_11 ? 1 : 0) << 0xe) + 1) & 1))
        x87_r7_12 = srcS[0x28];
    else
        x87_r7_12 = srcS[0x27];

    long double x87_r6_1 = srcS[0x26];
    x87_r6_1 - x87_r7_12;
    long double x87_r7_14;

    if (*(&((x87_r6_1 < x87_r7_12 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_1, x87_r7_12) ? 1 : 0) << 0xa
        | (x87_r6_1 == x87_r7_12 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double x87_r7_15 = srcS[0x27];
        long double x87_r6_2 = srcS[0x28];
        x87_r6_2 - x87_r7_15;

        if (!(*(&((x87_r6_2 < x87_r7_15 ? 1 : 0) << 8
                | (FCMP_UO(x87_r6_2, x87_r7_15) ? 1 : 0) << 0xa
                | (x87_r6_2 == x87_r7_15 ? 1 : 0) << 0xe) + 1) & 1))
            x87_r7_14 = srcS[0x28];
        else
            x87_r7_14 = srcS[0x27];
    }
    else
        x87_r7_14 = srcS[0x26];

    float v_8_5 = Render_ComputeNormals(srcS[0x1b]) * x87_r7_14;
    WorldObject_CommitTransform(Level_StartMission_4(), srcS, &srcS[0x3c], v_8_5);
    char result = *(srcS + 0x129);

    if (!result)
        return result;

    return QTask_FindType(srcS);
}
