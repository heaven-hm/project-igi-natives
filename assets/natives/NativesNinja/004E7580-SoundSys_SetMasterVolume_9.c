#include "004E7580-SoundSys_SetMasterVolume_9.h"
/* 0x004e7580 SoundSys_SetMasterVolume_9 full linked: callers=1 callees=1 */
struct status_msg* sub_4e7580(void* a1)

{
    int32_t kind;
    kind = g_a5e618;
    return QTask_HandleInput(a1, kind, 0);
}
