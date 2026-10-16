#include "004E6530-SoundSys_InitSoundSys_5.h"
/* 0x004e6530 SoundSys_InitSoundSys_5 full linked: callers=1 callees=1 */
struct status_msg* sub_4e6530(void* a1)

{
    int32_t kind;
    kind = g_548808;
    return QTask_HandleInput(a1, kind, 0);
}
