// Original IGI.EXE function: Vehicle_AmbientRain (VA 0x004370A0; static CFG gate PASS, CFG score 1.000).
#include "Vehicle_AmbientRain.h"
int32_t Vehicle_AmbientRain(float context)

{
    long double fp0 = Script_SpawnNewTask_21(g_57bdac + 0x28);
    long double f0 = 0.0f;
    fp0 - f0;
    long double fpu_val_7_1 = *(context + 0x34);

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
            | (fp0 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        *(context + 0x34) = fpu_val_7_1 - 0.0199999996f;
    else
    {
        *(context + 0x34) = fpu_val_7_1 + 0.0199999996f;
        SoundSys_Update3DPosition_11("Ambient rain\n");
    }

    long double fpu_val_7_4 = *(context + 0x34);
    long double f1 = 0.0f;
    fpu_val_7_4 - f1;
    long double fpu_val_7_5;

    if (!(*(&((fpu_val_7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_4, f1) ? 1 : 0) << 0xa
        | (fpu_val_7_4 == f1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double fpu_val_7_6 = *(context + 0x34);
        long double f2_1 = 1.0f;
        fpu_val_7_6 - f2_1;

        if (*(&((fpu_val_7_6 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(fpu_val_7_6, f2_1) ? 1 : 0) << 0xa
                | (fpu_val_7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            fpu_val_7_5 = *(context + 0x34);
        else
            fpu_val_7_5 = 1.0f;
    }
    else
        fpu_val_7_5 = 0.0f;

    void* temp_val = *(context + 0x38);
    *(context + 0x34) = fpu_val_7_5;
    SoundSys_LoadSoundDef_7(temp_val, 0xbf800000, fpu_val_7_5);
    return SoundSys_StopSoundSample_7(*(context + 0x38), g_57bdac + 0x28);
}
