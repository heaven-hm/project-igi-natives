#include "Level_LoadObjects.h"
int32_t Level_LoadObjects(int32_t a1, int32_t a2)

// Sig: void Level_LoadObjects(int level_path,int level_len)
// Note: Loads all OBJECTS for the level: reads the level object set and
// instantiates each object entity in the world. Takes the level/path argument
// from the calling load script. Use during level-load flow before Level_Start.
// [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]
{
    int32_t v_104 = a1;
    void v_100;
    return Task_New_2(&v_100, a2, Game_DataSymbolLoad(&v_100, "%s/objects.qsc"), &v_100,
        a2);
}
