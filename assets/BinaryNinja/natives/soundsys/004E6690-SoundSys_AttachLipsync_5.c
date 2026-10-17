// Original IGI.EXE function: SoundSys_AttachLipsync_5 (VA 0x004E6690; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_AttachLipsync_5.h"
int32_t SoundSys_AttachLipsync_5()

{
    char result = g_548817;

    if (result == 0xff)
    {
        result = QTask_UnableToAllocateEvent(0);
        g_548817 = result;
    }

    return result;
}
