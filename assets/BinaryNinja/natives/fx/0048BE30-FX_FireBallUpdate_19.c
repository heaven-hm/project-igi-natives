#include "FX_FireBallUpdate_19.h"
int32_t FX_FireBallUpdate_19(void* a1, void* a2)

{
    int32_t objC;
    int32_t v_4_1 = objC;
    float v_4 = Sys_AllocateMemory_14(Level_SetMission_5());

    if (*(a1 + 0x3df8) >= 0)
    {
        uint32_t valA2 = Frames_GetUpdateCounter();

        if (*(a1 + 0x3df8) >= valA2)
            return 0xffffffff;
    }

    *(a1 + 0x3df8) = Frames_GetUpdateCounter() + 0xa;

    if (!*(a1 + 0x8cc) && !*(a1 + 0x8bc) && !*(a1 + 0x8b8))
        return 0xffffffff;

    if (Physics_InterpolateWaypoint_9(Script_ExecuteLevelScript_23(*(a1 + 0x3b6c), *(a1 + 0x3e2c)), Physics_CalculateSplineLength_9()))
        return 0xffffffff;

    long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
    long double f0 = *(a1 + 0x3d54);
    fp0_1 - f0;

    if (*(&((fp0_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0) ? 1 : 0) << 0xa
        | (fp0_1 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double x87_r7_2 = *(a1 + 0x3d58);
        long double f1_1 = 0f;
        x87_r7_2 - f1_1;

        if (*(&((x87_r7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_2, f1_1) ? 1 : 0) << 0xa
                | (x87_r7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            return 0;

        long double x87_r7_3 = *(a1 + 0x3d58);
        long double f2_1 = v_4;
        x87_r7_3 - f2_1;

        if (*(&((x87_r7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_3, f2_1) ? 1 : 0) << 0xa
            | (x87_r7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double x87_r7_4 = *(a2 + 8);
            long double f3_1 = *(a1 + 0x3db8);
            x87_r7_4 - f3_1;

            if (!(*(&((x87_r7_4 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_4, f3_1) ? 1 : 0) << 0xa
                    | (x87_r7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                return 0;
        }

        v_4 = Sys_AllocateMemory_14(Level_SetMission_5());
        char valA20 = AI_UpdateSensors_3(a1);
        char tmpD3;

        if (!(valA20 & 1) || *(a1 + 0x3df4) == 1)
            tmpD3 = 0;
        else
            tmpD3 = 1;

        char objC7;

        if (!(valA20 & 2) || *(a1 + 0x3df4) == 0xffffffff)
            objC7 = 0;
        else
            objC7 = 1;

        if (tmpD3)
        {
            long double x87_r7_6 = *(a1 + 0x3d60);
            long double f4_1 = 0f;
            x87_r7_6 - f4_1;
            long double x87_r7_7;
            long double f5_1;

            if (!(*(&((x87_r7_6 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(x87_r7_6, f4_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                x87_r7_7 = *(a1 + 0x3d60);
                f5_1 = v_4;
                x87_r7_7 - f5_1;
            }

            if (*(&((x87_r7_6 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f4_1) ? 1 : 0) << 0xa
                    | (x87_r7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40 || *(&(
                    (x87_r7_7 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_7, f5_1) ? 1 : 0) << 0xa
                    | (x87_r7_7 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                return 1;
        }

        if (objC7)
        {
            long double x87_r7_8;
            long double f6_1;

            if (*(a1 + 0x3d60) != 0x3f800000)
            {
                x87_r7_8 = *(a1 + 0x3d60);
                f6_1 = v_4;
                x87_r7_8 - f6_1;
            }

            if (*(a1 + 0x3d60) == 0x3f800000 || !(*(&((x87_r7_8 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(x87_r7_8, f6_1) ? 1 : 0) << 0xa
                    | (x87_r7_8 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
                return 2;
        }
    }

    return 0xffffffff;
}
