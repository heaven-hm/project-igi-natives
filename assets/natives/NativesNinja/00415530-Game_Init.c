#include "00415530-Game_Init.h"
/* 0x00415530 Game_Init full linked: callers=1 callees=43 */
int32_t Game_Init()

{
    sub_48f360("Level", sub_415b10);
    int32_t var_4 = 0;
    g_57b1a2 = TaskType_Register("Game", 0x158, QTask_OpenEvent_2(), 0);
    g_539540 = QTask_UnableToAllocateEven(0);
    g_539541 = QTask_UnableToAllocateEven(0);
    g_539542 = QTask_UnableToAllocateEven(0);
    g_539543 = QTask_UnableToAllocateEven(0);
    g_539544 = QTask_UnableToAllocateEven(0);
    g_539545 = QTask_UnableToAllocateEven(0);
    g_539546 = QTask_UnableToAllocateEven(0);
    g_539547 = QTask_UnableToAllocateEven(0);
    g_539548 = QTask_UnableToAllocateEven(0);
    g_539549 = QTask_UnableToAllocateEven(0);
    g_53954a = QTask_UnableToAllocateEven(0);
    g_53954b = QTask_UnableToAllocateEven(0);
    g_53954c = QTask_UnableToAllocateEven(0);
    g_53954d = QTask_UnableToAllocateEven(0);
    g_53954e = QTask_UnableToAllocateEven(0);
    QTask_RemoveEventCallback(g_57b1a2, 0, Level_Start);
    QTask_TriggerEvent(g_57b1a2, 1, Game_Setup);
    QTask_TriggerEvent(g_57b1a2, 2, Game_DeleteHandler);
    g_57ba9c = sub_4c1800(0x200);
    g_57baa0 = sub_4c1800(0x40);
    g_57baa4 = sub_4c1800(0x100);
    g_57baa8 = sub_4c1800(0x100);
    g_57baac = sub_4c1800(0x10);
    g_57bab0 = sub_4c1800(0x80);
    sub_4f4870(g_57baac);
    TaskType_Set("GAME_FREQUENCY", 0x1e);
    sub_4b8870("WORLD_METER", 0x539558);
    sub_4b8870("MATH_PI", 0x539550);
    Game_DefineOptions("Game_SetMission", Game_SetMission, 0, 1);
    Game_DefineOptions("Game_UpdateVolume", Game_UpdateVolume, 0, 0);
    Game_DefineOptions("Game_DisablePlayerInput", Game_DisablePlayerInput, 0, 0);
    Game_DefineOptions("Game_EnablePlayerInput", Game_EnablePlayerInput, 0, 0);
    Game_DefineOptions("Game_SetMusicVolume", Game_SetMusicVolume, 0, 1);
    Game_DefineOptions("Game_SetSFXVolume", Game_SetSFXVolume, 0, 1);
    Game_DefineOptions("Game_EnableMusic", Game_EnableMusic, 0, 0);
    Game_DefineOptions("Game_DisableMusic", Game_DisableMusic, 0, 0);
    Game_DefineOptions("Game_CutsceneDelete", Game_CutsceneDelete, 0, 1);
    sub_4a29e0("LOCAL:computer/font1.fnt", 0x75, 0x14);
    sub_4a29c0("LOCAL:common/sprites/battery.spr", 4, 2);
    return sub_4a28b0("LOCAL:computer/font1.fnt", 0x3f666666, 0x3e4ccccd, 0xc2480000, 0);
}
