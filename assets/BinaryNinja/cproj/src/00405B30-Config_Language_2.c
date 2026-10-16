#include "gi_platform.h"
#include "00405B30-Config_Language_2.h"
int32_t Config_Language_2()

{
    if (g_537b90)
        Sys_OpenFileStream_4("LANGUAGE:");

    void* v_104 = &"ENGLISH"[(&g_bc238c)[g_bc2384 * 0x159] * 2];
    char v_100;
    Game_DataSymbolLoad(&v_100, "LOCAL:language/%s/");
    Script_RegisterNamespace("LANGUAGE:", &v_100);
    g_537b90 = 1;
    float v_104_1 = Config_SaveGameOptions_2();
    int32_t objC4;
    long double fp0_1;
    fp0_1 = Config_SaveGameOptions_2();
    int32_t v_108 = objC4;
    Music_SetVolume(fp0_1, v_104_1);
    return Music_SetSfxVolume(Config_RegisterOptions_2());
}
