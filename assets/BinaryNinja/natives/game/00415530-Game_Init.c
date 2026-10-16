#include "Game_Init.h"
int32_t Game_Init()

{
    FX_FragmentSimulate_27("Level", sub_415b10);
    int32_t v_4 = 0;
    g_57b1a2 = TaskType_Register("Game", 0x158, QTask_OpenEvent_2(), 0);
    g_539540 = QTask_UnableToAllocateEvent(0);
    g_539541 = QTask_UnableToAllocateEvent(0);
    g_539542 = QTask_UnableToAllocateEvent(0);
    g_539543 = QTask_UnableToAllocateEvent(0);
    g_539544 = QTask_UnableToAllocateEvent(0);
    g_539545 = QTask_UnableToAllocateEvent(0);
    g_539546 = QTask_UnableToAllocateEvent(0);
    g_539547 = QTask_UnableToAllocateEvent(0);
    g_539548 = QTask_UnableToAllocateEvent(0);
    g_539549 = QTask_UnableToAllocateEvent(0);
    g_53954a = QTask_UnableToAllocateEvent(0);
    g_53954b = QTask_UnableToAllocateEvent(0);
    g_53954c = QTask_UnableToAllocateEvent(0);
    g_53954d = QTask_UnableToAllocateEvent(0);
    g_53954e = QTask_UnableToAllocateEvent(0);
    QTask_RemoveEventCallback(g_57b1a2, 0, Level_Start);
    QTask_TriggerEvent(g_57b1a2, 1, Game_Setup);
    QTask_TriggerEvent(g_57b1a2, 2, Game_DeleteHandler);
    g_57ba9c = Mem_Alloc8(0x200);
    g_57baa0 = Mem_Alloc8(0x40);
    g_57baa4 = Mem_Alloc8(0x100);
    g_57baa8 = Mem_Alloc8(0x100);
    g_57baac = Mem_Alloc8(0x10);
    g_57bab0 = Mem_Alloc8(0x80);
    Script_CallNativeHandler_17(g_57baac);
    TaskType_Set("GAME_FREQUENCY", 0x1e);
    Sys_FreeMemory_23("WORLD_METER", 0x539558);
    Sys_FreeMemory_23("MATH_PI", 0x539550);
    Game_DefineOptions("Game_SetMission", Game_SetMission, 0, 1);
    Game_DefineOptions("Game_UpdateVolume", Game_UpdateVolume, 0, 0);
    Game_DefineOptions("Game_DisablePlayerInput", Game_DisablePlayerInput, 0, 0);
    Game_DefineOptions("Game_EnablePlayerInput", Game_EnablePlayerInput, 0, 0);
    Game_DefineOptions("Game_SetMusicVolume", Game_SetMusicVolume, 0, 1);
    Game_DefineOptions("Game_SetSFXVolume", Game_SetSFXVolume, 0, 1);
    Game_DefineOptions("Game_EnableMusic", Game_EnableMusic, 0, 0);
    Game_DefineOptions("Game_DisableMusic", Game_DisableMusic, 0, 0);
    Game_DefineOptions("Game_CutsceneDelete", Game_CutsceneDelete, 0, 1);
    Camera_UpdateViewCone_2("LOCAL:computer/font1.fnt", 0x75, 0x14);
    Camera_ApplyPostProcess_2("LOCAL:common/sprites/battery.spr", 4, 2);
    return Camera_ApplyBandFilter_2("LOCAL:computer/font1.fnt", 0x3f666666, 0x3e4ccccd, 0xc2480000, 0);
}
