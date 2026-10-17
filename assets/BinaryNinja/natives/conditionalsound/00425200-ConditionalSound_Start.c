// Original IGI.EXE function: ConditionalSound_Start (VA 0x00425200; static CFG gate PASS, CFG score 1.000).
#include "ConditionalSound_Start.h"
struct status_msg* ConditionalSound_Start(void* context)

{
    ConditionalSound_Stop(context);

    if (*(context + 0xa8))
    {
        *(context + 0xb8) = Display_CheckCapabilities_12(context + 0x70);
        *(context + 0xbc) = Display_RestoreDevice_12(context + 0x70);
        *(context + 0xc0) = 0;
        *(context + 0xc4) = 0;
        Display_SetGammaRamp_12(context + 0xc8);
        int32_t data_5 = SoundSys_Update3DPosition_8(context + 0xb8);
        *(context + 0x124) = 1;
        *(context + 0xb2) = 1;
        return data_5;
    }

    struct status_msg* data_6 = SoundSys_SetMasterVolume_7(context, context + 0x70);

    if (data_6)
    {
        *(context + 0x120) = QTask_LinkEventHandler_2(data_6);

        if (*(context + 0xb3))
        {
            int32_t data_9 = SoundSys_AttachLipsync_7(data_6, 1);
            *(context + 0x124) = 1;
            *(context + 0xb2) = 1;
            return data_9;
        }

        data_6 = SoundSys_StopSoundSample_7(data_6, context + 0x90);
        *(context + 0x124) = 1;
        *(context + 0xb2) = 1;
    }

    return data_6;
}
