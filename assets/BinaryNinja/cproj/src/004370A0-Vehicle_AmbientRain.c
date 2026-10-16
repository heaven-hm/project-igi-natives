#include "gi_platform.h"
#include "004370A0-Vehicle_AmbientRain.h"
int32_t Vehicle_AmbientRain(float a1)

{
    long double fp0 = Script_SpawnNewTask_21(g_57bdac + 0x28);
    long double f0 = 0.0f;
    fp0 - f0;
    long double x87_r7_1 = (*(int32_t*)(uintptr_t)(a1 + 0x34));

    if (*(&((fp0 < f0 ? 1 : 0) << 8 | (FCMP_UO(fp0, f0) ? 1 : 0) << 0xa
            | (fp0 == f0 ? 1 : 0) << 0xe | 0x3800) + 1) & 0x40)
        (*(int32_t*)(uintptr_t)(a1 + 0x34)) = x87_r7_1 - 0.0199999996.0f;
    else
    {
        (*(int32_t*)(uintptr_t)(a1 + 0x34)) = x87_r7_1 + 0.0199999996.0f;
        SoundSys_Update3DPosition_11("Ambient rain\n");
    }

    long double x87_r7_4 = (*(int32_t*)(uintptr_t)(a1 + 0x34));
    long double f1 = 0.0f;
    x87_r7_4 - f1;
    long double x87_r7_5;

    if (!(*(&((x87_r7_4 < f1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_4, f1) ? 1 : 0) << 0xa
        | (x87_r7_4 == f1 ? 1 : 0) << 0xe) + 1) & 1))
    {
        long double x87_r7_6 = (*(int32_t*)(uintptr_t)(a1 + 0x34));
        long double f2_1 = 1.0f;
        x87_r7_6 - f2_1;

        if (*(&((x87_r7_6 < f2_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_6, f2_1) ? 1 : 0) << 0xa
                | (x87_r7_6 == f2_1 ? 1 : 0) << 0xe) + 1) & 0x41)
            x87_r7_5 = (*(int32_t*)(uintptr_t)(a1 + 0x34));
        else
            x87_r7_5 = 1.0f;
    }
    else
        x87_r7_5 = 0.0f;

    void* tmpD = (*(int32_t*)(uintptr_t)(a1 + 0x38));
    (*(int32_t*)(uintptr_t)(a1 + 0x34)) = x87_r7_5;
    SoundSys_LoadSoundDef_7(tmpD, 0xbf800000, x87_r7_5);
    return SoundSys_StopSoundSample_7((*(int32_t*)(uintptr_t)(a1 + 0x38)), g_57bdac + 0x28);
}
