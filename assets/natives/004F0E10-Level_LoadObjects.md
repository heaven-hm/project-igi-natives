# Level_LoadObjects

Address: 0x004F0E10
Signature: void Level_LoadObjects(int level_path,int level_len)
Data types: scalar/opaque ABI only

## Recovered behavior

Loads all OBJECTS for the level: reads the level object set and instantiates each object entity in the world. Takes the level/path argument from the calling load script. Use during level-load flow before Level_Start. [Name corrected per retail analysis: was LevelLoad/LevelQuit/LevelRestart.]

## Evidence classification

syntax-fallback

Use only the typed fields and prototypes proven in assets/IGINatives.json. Unknown regions remain opaque.
