#include "SoundSys_InitSoundSys_5.h"
struct status_msg* SoundSys_InitSoundSys_5(void* a1)

{
    int32_t kind;
    kind = g_548808;
    return QTask_HandleInput(a1, kind, 0);
}
