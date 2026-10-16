#include "004E65D0-SoundSys_Update3DPosition_5.h"
/* 0x004e65d0 SoundSys_Update3DPosition_5 full linked: callers=1 callees=1 */
struct status_msg* sub_4e65d0(void* a1, int32_t a2)

{
    int32_t kind;
    kind = g_54880c;
    return QTask_HandleInput(a1, kind, a2);
}
