#include "FadeOutEnd_OnEvent.h"
struct status_msg* FadeOutEnd_OnEvent(void* a1)

{
    int32_t kind;
    kind = g_a5ec70;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    SoundSys_StopSoundSample_13(result);
    return result;
}
