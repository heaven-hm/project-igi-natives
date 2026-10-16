#include "00405B30-Config_Language_2.h"
/* 0x00405b30 Config_Language_2 full linked: callers=3 callees=8 */
int32_t Config_Language_2()

{
    if (g_537b90)
        sub_4b13a0("LANGUAGE:");

    void* var_104 = &"ENGLISH"[(&g_bc238c)[g_bc2384 * 0x159] * 2];
    void var_100;
    Game_DataSymbolLoad(&var_100, "LOCAL:language/%s/");
    sub_4b12f0("LANGUAGE:", &var_100);
    g_537b90 = 1;
    float var_104_1 = Config_SaveGameOptions_2();
    int32_t ecx_4;
    long double st0_1;
    st0_1 = Config_SaveGameOptions_2();
    int32_t var_108 = ecx_4;
    Music_SetVolume(st0_1, var_104_1);
    return Music_SetSfxVolume(Config_RegisterOptions_2());
}
