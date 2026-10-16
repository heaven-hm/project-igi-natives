#include "004F0E10-Level_LoadObjects.h"
/* 0x004f0e10 Level_LoadObjects full linked: callers=2 callees=2 */
int32_t Level_LoadObjects(int32_t a1, int32_t a2)

// Sig: void Level_LoadObjects(int level_path,int level_len)
// Note: Loads all OBJECTS for the level: reads the level object set and
// instantiates each object entity in the world. Takes the level/path argument
// from the calling load script. Use during level-load flow before Level_Start.
// [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]
{
    int32_t var_104 = a1;
    void var_100;
    return sub_4f0d40(&var_100, a2, Game_DataSymbolLoad(&var_100, "%s/objects.qsc"), &var_100,
        a2);
}
