#include "SoundSys_Update3DPosition_5.h"
struct status_msg* SoundSys_Update3DPosition_5(void* a1, int32_t a2)

{
    int32_t kind;
    kind = g_54880c;
    return QTask_HandleInput(a1, kind, a2);
}
