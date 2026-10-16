#include "SoundSys_SetMasterVolume_9.h"
struct status_msg* SoundSys_SetMasterVolume_9(void* a1)

{
    int32_t kind;
    kind = g_a5e618;
    return QTask_HandleInput(a1, kind, 0);
}
