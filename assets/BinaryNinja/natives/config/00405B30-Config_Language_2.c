// IGI native provenance: Config_Language_2 - 0x00405B30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00405B30-Config_Language_2.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "Config_Language_2.h"
int32_t Config_Language_2()

{
    if (g_537b90)
        Sys_OpenFileStream_4("LANGUAGE:");

    void* item_104 = &"ENGLISH"[(&g_bc238c)[g_bc2384 * 0x159] * 2];
    void item_100;
    Game_DataSymbolLoad(&item_100, "LOCAL:language/%s/");
    Script_RegisterNamespace("LANGUAGE:", &item_100);
    g_537b90 = 1;
    float item_104_1 = Config_SaveGameOptions_2();
    int32_t entity_4;
    long double fp0_1;
    fp0_1 = Config_SaveGameOptions_2();
    int32_t item_108 = entity_4;
    Music_SetVolume(fp0_1, item_104_1);
    return Music_SetSfxVolume(Config_RegisterOptions_2());
}
