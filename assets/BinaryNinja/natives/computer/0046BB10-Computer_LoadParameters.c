// Original IGI.EXE function: Computer_LoadParameters (VA 0x0046BB10; static CFG gate PASS, CFG score 0.991).
#include "Computer_LoadParameters.h"
int32_t Computer_LoadParameters(void* a1)

{
    int32_t v_40;
    __builtin_memset(&v_40, 0, 0x18);
    g_5be2cc = a1;
    void* valA1;

    if (!AI_MoveToNode_29())
        valA1 = nullptr;
    else
        valA1 = DynObj_Missing("mapcomputer");

    DynObj_LookupHashItem_6(Level_StartMission_4(), a1, valA1);
    DynObj_RegisterSymbol_8(Level_StartMission_4(), a1, 1);
    *(a1 + 0x130) = 0;
    Camera_ResetFrameCounters(a1 + 0x138);
    int32_t v_28 = 0x3f800000;
    int32_t v_24 = 0;
    int32_t v_20 = 0;
    int32_t v_1c = 0;
    int32_t v_18 = 0x3f800000;
    int32_t v_14 = 0;
    int32_t v_10 = 0;
    int32_t v_c = 0;
    int32_t v_8 = 0x3f800000;
    int32_t v_4 = 0;
    int32_t objC;
    long double fp0;
    fp0 = FX_TrailUpdate_11();
    int32_t v_50_2 = objC;
    int32_t* valA4 = SoundSys_SetFrequency_9();
    long double fp0_1;
    bool c1;
    bool c2;
    fp0_1 = __fptan(0.78539818525314331);
    int32_t v_5c = 0x43960000;
    int32_t v_64 = objC;
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float v_64_1 = /* float v_64_1 = unimplemented  {fstp dword [esp], fp0} */;
    /* unimplemented  {fstp dword [esp], fp0} */
    Camera_SubmitFrame(a1 + 0x138, &v_40, &v_28, v_64_1, 0x3f800000, valA4, a1, fp0, 0f);
    int32_t v_5c_1 = 0;
    uint32_t valA5 = Level_StartMission_4();
    *(a1 + 0x130) = SoundSys_AttachLipsync_11(*(Level_LoadLevel_6() + 0x44), 0, 0, 0x3f800000, 0x3f800000,
        valA5, a1 + 0x138, 0, 0, 0, 0x3f800000);
    void* valA10 = GameScreen_Process(*(Level_LoadLevel_6() + 0x44));
    QTask_RemoveEventCallback_2(*(a1 + 0x130), valA10);
    uint32_t valA11 = Level_StartMission_4();
    TerraDrawTask_OnEvent(*(a1 + 0x130), valA11);
    SoundSys_SetMasterVolume_12(*(a1 + 0x130), 1, 0);
    SoundSys_StopSoundSample_12(*(a1 + 0x130), 0);
    SoundSys_SetMasterVolume_12(*(a1 + 0x130), 0, 0);
    SoundSys_EvaluateTrigger_12(*(a1 + 0x130), 0);
    g_53fd9c = Display_CreateSurface_17();
    Display_SetGammaRamp_17(0);
    void* valA16 = GameScreen_Process(*(Level_LoadLevel_6() + 0x44));
    SoundSys_StopSoundSample_12(valA16, 0);
    SoundSys_SetMasterVolume_12(valA16, 0xffffffff, 0);
    SoundSys_SetMasterVolume_12(valA16, 0, 0);
    AI_UpdateSensors_27();
    AI_CheckSector_27(*(AI_CombatTarget_29() + 0x14));

    if (!AI_MoveToNode_29())
        return AI_NoNewFunctionForMenu(2);

    return AI_NoNewFunctionForMenu(1);
}
