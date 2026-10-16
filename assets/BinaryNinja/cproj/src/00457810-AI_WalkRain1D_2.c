#include "gi_platform.h"
#include "00457810-AI_WalkRain1D_2.h"
void AI_WalkRain1D_2(void* a1)

{
    if ((*(int32_t*)(uintptr_t)(a1 + 0x538)) != 0x3f2)
        return;

    uint32_t valA = Render_DrawSplineMesh_10(a1 + 0x68, 0);

    if ((*(int32_t*)(uintptr_t)(a1 + 0x53c)) != valA)
        return;

    int32_t dstD1 = (*(int32_t*)(uintptr_t)(a1 + 0x6ec));
    int32_t ctxB1 = (*(int32_t*)(uintptr_t)((*(a1 + 0x84c) << 2) + &g_53e988));
    int32_t valA2;
    (*(int32_t*)(uintptr_t)(a1 + 0x84c)) = COMBINE(0, valA2 + 1) % 0xc;

    if (!dstD1)
        return;

    float v_84_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.5.0f + 1.0f - 0.200000003.0f;
    struct status_msg* valA7 = SoundSys_SetMasterVolume_7(Script_FormatString(), (ctxB1 << 5) + dstD1 + 0x54);

    if (valA7)
    {
        if (AI_MoveToNode_19(a1))
            SoundSys_LoadSoundDef_7(valA7, 0xbf800000, 0x3f28f5c3);

        SoundSys_StopSoundSample_7(valA7, a1 + 0x6a8);
        SoundSys_EvaluateTrigger_7(valA7, v_84_1);
    }

    if (!Level_LoadLevel_7())
        return;

    int32_t v_98_5 = ctxB1 + 1;
    char v_80[0x80];
    Game_DataSymbolLoad(&v_80, "walk_rain_%1d");
    valA = SoundSys_SetMasterVolume_7(Script_FormatString(), &v_80);

    if (valA)
    {
        SoundSys_StopSoundSample_7(valA, a1 + 0x6a8);
        SoundSys_EvaluateTrigger_7(valA, v_84_1);
    }
}
