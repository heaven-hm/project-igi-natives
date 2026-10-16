#include "DebugText_Update.h"
int32_t* DebugText_Update()

{
    if (g_a5ea74)
    {
        int32_t srcS1 = QHash_ValueGet();

        if (!srcS1)
            QHash_ValueSet();

        if (g_5488d8)
        {
            int32_t v_18 = 0;
            int32_t v_14_1 = 0;
            float v_10_1 = g_c28b44;
            float v_c_1 = g_c28b48;
            Display_CheckCapabilities_13(0xa5eb80, &v_18);
        }

        int32_t* valA2 = Sys_DispatchOpcode_18("LOCAL:debug.fnt");
        g_a5ebd4 = valA2;
        void* valA3 = g_a5ebd0;
        **&g_a5ebd0 = Sys_DispatchOpcode_20(*(valA3 + 0x10), *(valA3 + 0x14), valA2);
        g_a5ea74 = 0;

        if (!srcS1)
            Sys_DispatchOpcode_2();
    }

    return SoundSys_PlaySoundSample_10(g_a5ebd0);
}
