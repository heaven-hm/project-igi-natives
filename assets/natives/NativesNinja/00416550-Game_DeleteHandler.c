#include "00416550-Game_DeleteHandler.h"
/* 0x00416550 Game_DeleteHandler full linked: callers=0 callees=23 */
int32_t Game_DeleteHandler()

// Sig: void Game_DeleteHandler(void)
// Note: The game's DELETE handler - runs when a level/game session is torn down
// (quit path), releasing entities and session state. Takes no args.
// Engine-internal teardown; do not call to 'quit' - it is the cleanup callback.
// [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]
{
    if (!QHash_ValueGet())
        QHash_ValueSet();

    sub_4e7130();
    Qtask_Update();
    Qtask_UpdateList(*(g_57babc + 0x54));
    int32_t* eax_1 = *(g_57babc + 0x48);

    if (eax_1)
        QTask_FindType(eax_1);

    QTask_FindType(*(g_57babc + 0x44));
    Level_SetMission();
    Resource_Flush(*(g_57babc + 0xe8));
    Level_CheckQTaskID();
    Resource_Flush(*(g_57babc + 0xec));
    sub_46b310();
    sub_4868c0();

    if (*((sub_4cea70() << 2) + &g_a94e84))
        (*((sub_4cea70() << 2) + &g_a94e84))(0);

    sub_4f0cd0();
    sub_4e69c0("MISSION:sounds");
    sub_4e69c0("LOCAL:common/sounds");
    sub_4d65d0();
    sub_4cf9d0(*(g_57babc + 0x24));
    sub_4c5ce0(*(g_57babc + 0x20));
    int32_t var_14 = 0;
    int32_t result = sub_4b13a0("MISSION:");
    g_57babc = 0;
    return result;
}
