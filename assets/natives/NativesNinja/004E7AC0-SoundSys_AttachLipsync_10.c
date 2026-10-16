#include "004E7AC0-SoundSys_AttachLipsync_10.h"
/* 0x004e7ac0 SoundSys_AttachLipsync_10 full linked: callers=1 callees=4 */
int32_t sub_4e7ac0(void* a1, char a2)

{
    int32_t kind;
    kind = g_a5ea76;
    g_a5ea70 = QTask_HandleInput(a1, kind, 0);
    g_a5ea75 = sub_48f1f0();
    g_5488d8 = a2;

    if (a2)
    {
        int32_t var_18 = 0;
        int32_t var_14_1 = 0;
        int32_t var_10_1 = 0;
        int32_t var_c_1 = 0;
        sub_497570(0xa5eb80, 1);
        sub_497680(0xa5eb80, &var_18);
    }

    return g_a5ea70;
}
