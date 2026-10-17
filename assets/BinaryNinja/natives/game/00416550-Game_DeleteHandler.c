// IGI native provenance: Game_DeleteHandler - 0x00416550 - CFG score 98.6% (PASS; structural only); runtime behavior not verified.
// Evidence: 00416550-Game_DeleteHandler.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Game_DeleteHandler.h"
int32_t Game_DeleteHandler()

// Sig: void Game_DeleteHandler(void)
// Note: The game's DELETE handler - runs when a level/game session is torn down
// (quit path), releasing entities and session state. Takes no args.
// Engine-internal teardown; do not call to 'quit' - it is the cleanup callback.
// [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]
{
    if (!QHash_ValueGet())
        QHash_ValueSet();

    SoundSys_EvaluateTrigger_8();
    Qtask_Update();
    Qtask_UpdateList(*(g_57babc + 0x54));
    int32_t* data_1 = *(g_57babc + 0x48);

    if (data_1)
        QTask_FindType(data_1);

    QTask_FindType(*(g_57babc + 0x44));
    Level_SetMission();
    Resource_Flush(*(g_57babc + 0xe8));
    Level_CheckQTaskID();
    Resource_Flush(*(g_57babc + 0xec));
    AI_FireWeapon_28();
    FX_DebrisSpawn_7();

    if (*((DynObj_FindSymbol_13() << 2) + &g_a94e84))
        (*((DynObj_FindSymbol_13() << 2) + &g_a94e84))(0);

    Script_ExecuteLevelScript();
    SoundSys_InitSoundSys_7("MISSION:sounds");
    SoundSys_InitSoundSys_7("LOCAL:common/sounds");
    Render_ClipMesh_10();
    DynObj_RegisterSymbol_15(*(g_57babc + 0x24));
    DynObj_CreateMagicObject_7(*(g_57babc + 0x20));
    int32_t item_14 = 0;
    int32_t result = Sys_OpenFileStream_4("MISSION:");
    g_57babc = 0;
    return result;
}
