// Original IGI.EXE function: Level_LoadObjects (VA 0x004F0E10; static CFG gate PASS, CFG score 1.000).
#include "Level_LoadObjects.h"
int32_t Level_LoadObjects(int32_t context, int32_t param_2)

// Sig: void Level_LoadObjects(int level_path,int level_len)
// Note: Loads all OBJECTS for the level: reads the level object set and
// instantiates each object entity in the world. Takes the level/path argument
// from the calling load script. Use during level-load flow before Level_Start.
// [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]
{
    int32_t item_104 = context;
    void item_100;
    return Task_New_2(&item_100, param_2, Game_DataSymbolLoad(&item_100, "%s/objects.qsc"), &item_100,
        param_2);
}
