#include "gi_platform.h"
#include "004E7AC0-SoundSys_AttachLipsync_10.h"
int32_t SoundSys_AttachLipsync_10(void* a1, char a2)

{
    int32_t kind;
    kind = g_a5ea76;
    g_a5ea70 = QTask_HandleInput(a1, kind, 0);
    g_a5ea75 = FX_SmokeEmit_24();
    g_5488d8 = a2;

    if (a2)
    {
        int32_t v_18 = 0;
        int32_t v_14_1 = 0;
        int32_t v_10_1 = 0;
        int32_t v_c_1 = 0;
        Display_SyncVSync_13(0xa5eb80, 1);
        Display_CheckCapabilities_13(0xa5eb80, &v_18);
    }

    return g_a5ea70;
}
