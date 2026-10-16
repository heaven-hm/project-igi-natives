#include "ConditionalSound_Start.h"
struct status_msg* ConditionalSound_Start(void* a1)

{
    ConditionalSound_Stop(a1);

    if (*(a1 + 0xa8))
    {
        *(a1 + 0xb8) = Display_CheckCapabilities_12(a1 + 0x70);
        *(a1 + 0xbc) = Display_RestoreDevice_12(a1 + 0x70);
        *(a1 + 0xc0) = 0;
        *(a1 + 0xc4) = 0;
        Display_SetGammaRamp_12(a1 + 0xc8);
        int32_t valA5 = SoundSys_Update3DPosition_8(a1 + 0xb8);
        *(a1 + 0x124) = 1;
        *(a1 + 0xb2) = 1;
        return valA5;
    }

    struct status_msg* valA6 = SoundSys_SetMasterVolume_7(a1, a1 + 0x70);

    if (valA6)
    {
        *(a1 + 0x120) = QTask_LinkEventHandler_2(valA6);

        if (*(a1 + 0xb3))
        {
            int32_t valA9 = SoundSys_AttachLipsync_7(valA6, 1);
            *(a1 + 0x124) = 1;
            *(a1 + 0xb2) = 1;
            return valA9;
        }

        valA6 = SoundSys_StopSoundSample_7(valA6, a1 + 0x90);
        *(a1 + 0x124) = 1;
        *(a1 + 0xb2) = 1;
    }

    return valA6;
}
