// Original IGI.EXE function: SoundSys_AttachLipsync_15 (VA 0x004EC160; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_AttachLipsync_15.h"
int32_t SoundSys_AttachLipsync_15()

{
    char result = QTask_UnableToAllocateEvent(0);
    g_a5ef88 = result;
    g_a5ef90 = 0;
    return result;
}
