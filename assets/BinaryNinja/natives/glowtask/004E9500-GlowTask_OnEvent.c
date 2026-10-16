#include "GlowTask_OnEvent.h"
struct status_msg* GlowTask_OnEvent(void* a1)

{
    int32_t kind;
    kind = g_54da50;
    return QTask_HandleInput(a1, kind, 0);
}
