// Original IGI.EXE function: DebugText_Update (VA 0x004E79A0; static CFG gate PASS, CFG score 1.000).
#include "DebugText_Update.h"
int32_t* DebugText_Update()

{
    if (g_a5ea74)
    {
        int32_t source_1 = QHash_ValueGet();

        if (!source_1)
            QHash_ValueSet();

        if (g_5488d8)
        {
            int32_t item_18 = 0;
            int32_t item_14_1 = 0;
            float item_10_1 = g_c28b44;
            float item_c_1 = g_c28b48;
            Display_CheckCapabilities_13(0xa5eb80, &item_18);
        }

        int32_t* data_2 = Sys_DispatchOpcode_18("LOCAL:debug.fnt");
        g_a5ebd4 = data_2;
        void* data_3 = g_a5ebd0;
        **&g_a5ebd0 = Sys_DispatchOpcode_20(*(data_3 + 0x10), *(data_3 + 0x14), data_2);
        g_a5ea74 = 0;

        if (!source_1)
            Sys_DispatchOpcode_2();
    }

    return SoundSys_PlaySoundSample_10(g_a5ebd0);
}
