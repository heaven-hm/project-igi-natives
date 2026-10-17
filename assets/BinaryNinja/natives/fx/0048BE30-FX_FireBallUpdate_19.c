// IGI native provenance: FX_FireBallUpdate_19 - 0x0048BE30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 0048BE30-FX_FireBallUpdate_19.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "FX_FireBallUpdate_19.h"
int32_t FX_FireBallUpdate_19(void* context, void* param_2)

{
    int32_t entity_val;
    int32_t item_4_1 = entity_val;
    float item_4 = Sys_AllocateMemory_14(Level_SetMission_5());

    if (*(context + 0x3df8) >= 0)
    {
        uint32_t data_2 = Frames_GetUpdateCounter();

        if (*(context + 0x3df8) >= data_2)
            return 0xffffffff;
    }

    *(context + 0x3df8) = Frames_GetUpdateCounter() + 0xa;

    if (!*(context + 0x8cc) && !*(context + 0x8bc) && !*(context + 0x8b8))
        return 0xffffffff;

    if (Physics_InterpolateWaypoint_9(Script_ExecuteLevelScript_23(*(context + 0x3b6c), *(context + 0x3e2c)), Physics_CalculateSplineLength_9()))
        return 0xffffffff;

    long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
    long double f0 = *(context + 0x3d54);
    fp0_1 - f0;

    if (*(&((fp0_1 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f0) ? 1 : 0) << 0xa
        | (fp0_1 == f0 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_2 = *(context + 0x3d58);
        long double f1_1 = 0.0f;
        fpu_val_7_2 - f1_1;

        if (*(&((fpu_val_7_2 < f1_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_2, f1_1) ? 1 : 0) << 0xa
                | (fpu_val_7_2 == f1_1 ? 1 : 0) << 0xe) + 1) & 0x40)
            return 0;

        long double fpu_val_7_3 = *(context + 0x3d58);
        long double f2_1 = item_4;
        fpu_val_7_3 - f2_1;

        if (*(&((fpu_val_7_3 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_3, f2_1) ? 1 : 0) << 0xa
            | (fpu_val_7_3 == f2_1 ? 1 : 0) << 0xe) + 1) & 1)
        {
            long double fpu_val_7_4 = *(param_2 + 8);
            long double f3_1 = *(context + 0x3db8);
            fpu_val_7_4 - f3_1;

            if (!(*(&((fpu_val_7_4 < f3_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_4, f3_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_4 == f3_1 ? 1 : 0) << 0xe) + 1) & 0x41))
                return 0;
        }

        item_4 = Sys_AllocateMemory_14(Level_SetMission_5());
        char data_20 = AI_UpdateSensors_3(context);
        char temp_3;

        if (!(data_20 & 1) || *(context + 0x3df4) == 1)
            temp_3 = 0;
        else
            temp_3 = 1;

        char entity_7;

        if (!(data_20 & 2) || *(context + 0x3df4) == 0xffffffff)
            entity_7 = 0;
        else
            entity_7 = 1;

        if (temp_3)
        {
            long double fpu_val_7_6 = *(context + 0x3d60);
            long double f4_1 = 0.0f;
            fpu_val_7_6 - f4_1;
            long double fpu_val_7_7;
            long double f5_1;

            if (!(*(&((fpu_val_7_6 < f4_1 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_7_6, f4_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40))
            {
                fpu_val_7_7 = *(context + 0x3d60);
                f5_1 = item_4;
                fpu_val_7_7 - f5_1;
            }

            if (*(&((fpu_val_7_6 < f4_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f4_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_6 == f4_1 ? 1 : 0) << 0xe) + 1) & 0x40 || *(&(
                    (fpu_val_7_7 < f5_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_7, f5_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_7 == f5_1 ? 1 : 0) << 0xe) + 1) & 1)
                return 1;
        }

        if (entity_7)
        {
            long double fpu_val_7_8;
            long double f6_1;

            if (*(context + 0x3d60) != 0x3f800000)
            {
                fpu_val_7_8 = *(context + 0x3d60);
                f6_1 = item_4;
                fpu_val_7_8 - f6_1;
            }

            if (*(context + 0x3d60) == 0x3f800000 || !(*(&((fpu_val_7_8 < f6_1 ? 1 : 0) << 8
                    | (FCMP_UO(fpu_val_7_8, f6_1) ? 1 : 0) << 0xa
                    | (fpu_val_7_8 == f6_1 ? 1 : 0) << 0xe) + 1) & 1))
                return 2;
        }
    }

    return 0xffffffff;
}
