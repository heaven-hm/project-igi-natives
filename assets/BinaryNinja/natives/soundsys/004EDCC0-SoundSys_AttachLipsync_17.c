// Original IGI.EXE function: SoundSys_AttachLipsync_17 (VA 0x004EDCC0; static CFG gate PASS, CFG score 1.000).
#include "SoundSys_AttachLipsync_17.h"
int32_t SoundSys_AttachLipsync_17()

{
    int32_t result = g_a5efd4;

    if (!result)
        return result;

    int32_t valA = Script_ParseEnumReal32_8();
    return QTask_ProcessQueue_2(g_a5efd4, valA, 0);
}
