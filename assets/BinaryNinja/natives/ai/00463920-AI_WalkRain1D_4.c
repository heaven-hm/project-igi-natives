#include "AI_WalkRain1D_4.h"
void AI_WalkRain1D_4(void* a1)

{
    if (*(a1 + 0x538) != 0x3f2)
        return;

    uint32_t valA = Render_DrawSplineMesh_10(a1 + 0x68, 0);

    if (*(a1 + 0x53c) != valA || !*(a1 + 0x6f8))
        return;

    void* ctxB1 = *(a1 + 0x6ec);
    int32_t flagP1 = *((*(a1 + 0x84c) << 2) + &g_53f318);
    int32_t valA2;
    *(a1 + 0x84c) = COMBINE(0, valA2 + 1) % 0xc;

    if (!ctxB1)
        return;

    float v_a0_1 = Sys_AllocateMemory_14(Level_SetMission_5()) * 0.5f + 1f - 0.200000003f;
    struct status_msg* valA7 = SoundSys_SetMasterVolume_7(Script_FormatString(), (flagP1 << 5) + ctxB1 + 0x54);

    if (valA7)
    {
        if (AI_MoveToNode_19(a1))
            SoundSys_LoadSoundDef_7(valA7, 0xbf800000, 0x3f28f5c3);

        SoundSys_StopSoundSample_7(valA7, a1 + 0x6a8);
        SoundSys_EvaluateTrigger_7(valA7, v_a0_1);
    }

    if (Level_LoadLevel_7())
    {
        int32_t v_b4_6 = flagP1 + 1;
        char v_80[0x80];
        Game_DataSymbolLoad(&v_80, "walk_rain_%1d");
        struct status_msg* valA11 = SoundSys_SetMasterVolume_7(Script_FormatString(), &v_80);

        if (valA11)
        {
            SoundSys_StopSoundSample_7(valA11, a1 + 0x6a8);
            SoundSys_EvaluateTrigger_7(valA11, v_a0_1);
        }
    }

    if (AI_MoveToNode_19(a1))
        return;

    long double x87_r7_6 = *(ctxB1 + 0x50) * 4096f;
    int32_t objC3 = *(a1 + 0xfc);
    int32_t v_9c = 0xa;
    int32_t v_98_1 = objC3;
    float v_90_1 = x87_r7_6;
    int32_t v_94_1 = 0x46;
    void* v_8c_1 = a1 + 0x6a8;
    void* v_88_1 = a1;
    void* v_84_1 = a1;
    AI_EventBroadcast(&v_9c);
}
