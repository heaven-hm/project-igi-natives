// Original IGI.EXE function: GunPickup_Setup (VA 0x0046CEA0; static CFG gate PASS, CFG score 1.000).
#include "GunPickup_Setup.h"
int32_t GunPickup_Setup(float context)

{
    int32_t* source_val = context;
    long double fpu7 = *(source_val + 0x100);
    long double f0 = *(source_val + 0x118);
    fpu7 - f0;

    if (*(&((fpu7 < f0 ? 1 : 0) << 8 | (FCMP_UO(fpu7, f0) ? 1 : 0) << 0xa
        | (fpu7 == f0 ? 1 : 0) << 0xe) + 1) & 1)
    {
        long double fpu_val_7_2 = *(source_val + 0x120) * -0.5;
        int32_t entity_1 = source_val[0x47];
        source_val[0x40] = source_val[0x46];
        source_val[0x41] = entity_1;
        *(source_val + 0x120) = fpu_val_7_2;
        long double fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
        long double f2_1 = 0.5;
        fp0_1 - f2_1;
        char* data_5 = "weapondrop_01";

        if (*(&((fp0_1 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fp0_1, f2_1) ? 1 : 0) << 0xa
                | (fp0_1 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            data_5 = "weapondrop_02";

        struct status_msg* data_7 = SoundSys_SetMasterVolume_7(Script_FormatString(), data_5);

        if (data_7)
            SoundSys_StopSoundSample_7(data_7, &source_val[0x3c]);
    }

    long double fpu_val_7_4 = *(source_val + 0x100);
    long double f1 = *(source_val + 0x118);
    fpu_val_7_4 - f1;
    long double fpu_val_7_6;
    long double f4_1;

    if (*(&((fpu_val_7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f1 ? 1 : 0) << 0xe) + 1) & 0x41)
    {
        long double fpu_val_7_5 = *(source_val + 0x120);
        long double f3_1 = 0.0;
        fpu_val_7_5 - f3_1;
        fpu_val_7_6 = *(source_val + 0x120);

        if (*(&((fpu_val_7_5 < f3_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_5, f3_1) ? 1 : 0) << 0xa
                | (fpu_val_7_5 == f3_1 ? 1 : 0) << 0xe | 0x3800) + 1) & 1)
            fpu_val_7_6 = -(fpu_val_7_6);

        f4_1 = 409.60000000000002;
        fpu_val_7_6 - f4_1;
    }

    if (!(*(&((fpu_val_7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f1 ? 1 : 0) << 0xe) + 1) & 0x41) || !(*(&((fpu_val_7_6 < f4_1 ? 1 : 0) << 8
        | (FCMP_UO(fpu_val_7_6, f4_1) ? 1 : 0) << 0xa | (fpu_val_7_6 == f4_1 ? 1 : 0) << 0xe) + 1)
        & 1))
    {
        *(source_val + 0x100) = *(source_val + 0x100) - *(source_val + 0x120);
        *(source_val + 0x120) = *(source_val + 0x120) + 44.600888888888889;
    }
    else
    {
        source_val[0x48] = 0;
        source_val[0x49] = 0;
    }

    long double fpu_val_7_11 = source_val[0x27];
    long double fpu6 = source_val[0x28];
    fpu6 - fpu_val_7_11;
    long double fpu_val_7_12;

    if (!(*(&((fpu6 < fpu_val_7_11 ? 1 : 0) << 8 | (FCMP_UO(fpu6, fpu_val_7_11) ? 1 : 0) << 0xa
            | (fpu6 == fpu_val_7_11 ? 1 : 0) << 0xe) + 1) & 1))
        fpu_val_7_12 = source_val[0x28];
    else
        fpu_val_7_12 = source_val[0x27];

    long double fpu_val_6_1 = source_val[0x26];
    fpu_val_6_1 - fpu_val_7_12;
    long double fpu_val_7_14;

    if (*(&((fpu_val_6_1 < fpu_val_7_12 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_6_1, fpu_val_7_12) ? 1 : 0) << 0xa
        | (fpu_val_6_1 == fpu_val_7_12 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x41)
    {
        long double fpu_val_7_15 = source_val[0x27];
        long double fpu_val_6_2 = source_val[0x28];
        fpu_val_6_2 - fpu_val_7_15;

        if (!(*(&((fpu_val_6_2 < fpu_val_7_15 ? 1 : 0) << 8
                | (FCMP_UO(fpu_val_6_2, fpu_val_7_15) ? 1 : 0) << 0xa
                | (fpu_val_6_2 == fpu_val_7_15 ? 1 : 0) << 0xe) + 1) & 1))
            fpu_val_7_14 = source_val[0x28];
        else
            fpu_val_7_14 = source_val[0x27];
    }
    else
        fpu_val_7_14 = source_val[0x26];

    float item_8_5 = Render_ComputeNormals(source_val[0x1b]) * fpu_val_7_14;
    WorldObject_CommitTransform(Level_StartMission_4(), source_val, &source_val[0x3c], item_8_5);
    char result = *(source_val + 0x129);

    if (!result)
        return result;

    return QTask_FindType(source_val);
}
