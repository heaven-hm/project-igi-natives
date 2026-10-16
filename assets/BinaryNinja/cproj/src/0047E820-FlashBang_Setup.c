#include "gi_platform.h"
#include "0047E820-FlashBang_Setup.h"
int32_t FlashBang_Setup(int32_t* a1)

{
    int32_t* ctxB = a1;
    a1 = 3;
    bool cond_0_1;

    do
    {
        int32_t v_40 = 0;
        char v_34;
        memcpy(&v_34, &ctxB[8], 0x18);
        int32_t v_3c_1 = 0;
        int32_t v_38_1 = 0;
        float v_38_2 =
            (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 1.5 * 4096000.0f * 9.25925906e-06.0f;
        float v_44_1 = (Sys_AllocateMemory_14(Level_SetMission_5()) + 1.0) * 0.25;
        long double x87_r7_10 = Sys_AllocateMemory_14(Level_SetMission_5()) - 0.5.0f;
        Script_SpawnNewTask_31(ctxB[0xe], &v_34, &v_40, v_44_1,
            (x87_r7_10 + x87_r7_10) * 0.0436332338.0f + 0.020362176.0f, 0, 0x3f800000, 0x5a, 0x1e);
        cond_0_1 = a1 != 1;
        a1 -= 1;
    } while (cond_0_1);
    struct status_msg* valA8 = SoundSys_SetMasterVolume_7(Script_FormatString(), "explo_flash");

    if (valA8)
        SoundSys_StopSoundSample_7(valA8, &ctxB[8]);

    int32_t v_1c = 0x13;
    int32_t v_18 = 0xffffffff;
    int32_t v_14 = 3;
    void* v_c = &ctxB[8];
    int32_t v_10 = 0x47200000;
    int32_t v_4 = 0;
    int32_t* v_8 = ctxB;
    AI_EventBroadcast(&v_1c);
    return QTask_FindType(ctxB);
}
