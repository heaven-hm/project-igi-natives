// IGI native provenance: Computer_LoadParameters - 0x0046BB10 - CFG score 99.1% (PASS; structural only); runtime behavior not verified.
// Evidence: 0046BB10-Computer_LoadParameters.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Computer_LoadParameters.h"
int32_t Computer_LoadParameters(void* context)

{
    int32_t item_40;
    memset(&item_40, 0, 0x18);
    g_5be2cc = context;
    void* data_1;

    if (!AI_MoveToNode_29())
        data_1 = nullptr;
    else
        data_1 = DynObj_Missing("mapcomputer");

    DynObj_LookupHashItem_6(Level_StartMission_4(), context, data_1);
    DynObj_RegisterSymbol_8(Level_StartMission_4(), context, 1);
    *(context + 0x130) = 0;
    Camera_ResetFrameCounters(context + 0x138);
    int32_t item_28 = 0x3f800000;
    int32_t item_24 = 0;
    int32_t item_20 = 0;
    int32_t item_1c = 0;
    int32_t item_18 = 0x3f800000;
    int32_t item_14 = 0;
    int32_t item_10 = 0;
    int32_t item_c = 0;
    int32_t item_8 = 0x3f800000;
    int32_t item_4 = 0;
    int32_t entity_val;
    long double fp0;
    fp0 = FX_TrailUpdate_11();
    int32_t item_50_2 = entity_val;
    int32_t* data_4 = SoundSys_SetFrequency_9();
    long double fp0_1;
    bool c1;
    bool c2;
    fp0_1 = __fptan(0.78539818525314331);
    int32_t item_5c = 0x43960000;
    int32_t item_64 = entity_val;
🚫🚫🚫    /* unimplemented  {fstp fp0, fp0} */
    /* unimplemented  {fstp fp0, fp0} */
🚫🚫🚫    float item_64_1 = /* float item_64_1 = unimplemented  {fstp dword [stack_ptr], fp0} */;
    /* unimplemented  {fstp dword [stack_ptr], fp0} */
    Camera_SubmitFrame(context + 0x138, &item_40, &item_28, item_64_1, 0x3f800000, data_4, context, fp0, 0.0f);
    int32_t item_5c_1 = 0;
    uint32_t data_5 = Level_StartMission_4();
    *(context + 0x130) = SoundSys_AttachLipsync_11(*(Level_LoadLevel_6() + 0x44), 0, 0, 0x3f800000, 0x3f800000,
        data_5, context + 0x138, 0, 0, 0, 0x3f800000);
    void* data_10 = GameScreen_Process(*(Level_LoadLevel_6() + 0x44));
    QTask_RemoveEventCallback_2(*(context + 0x130), data_10);
    uint32_t data_11 = Level_StartMission_4();
    TerraDrawTask_OnEvent(*(context + 0x130), data_11);
    SoundSys_SetMasterVolume_12(*(context + 0x130), 1, 0);
    SoundSys_StopSoundSample_12(*(context + 0x130), 0);
    SoundSys_SetMasterVolume_12(*(context + 0x130), 0, 0);
    SoundSys_EvaluateTrigger_12(*(context + 0x130), 0);
    g_53fd9c = Display_CreateSurface_17();
    Display_SetGammaRamp_17(0);
    void* data_16 = GameScreen_Process(*(Level_LoadLevel_6() + 0x44));
    SoundSys_StopSoundSample_12(data_16, 0);
    SoundSys_SetMasterVolume_12(data_16, 0xffffffff, 0);
    SoundSys_SetMasterVolume_12(data_16, 0, 0);
    AI_UpdateSensors_27();
    AI_CheckSector_27(*(AI_CombatTarget_29() + 0x14));

    if (!AI_MoveToNode_29())
        return AI_NoNewFunctionForMenu(2);

    return AI_NoNewFunctionForMenu(1);
}
