// Original IGI.EXE function: FadeOutEnd_OnEvent (VA 0x004E9430; static CFG gate PASS, CFG score 1.000).
#include "FadeOutEnd_OnEvent.h"
struct status_msg* FadeOutEnd_OnEvent(void* context)

{
    int32_t kind;
    kind = g_a5ec70;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    SoundSys_StopSoundSample_13(result);
    return result;
}
