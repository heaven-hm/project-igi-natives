#include "004E9500-GlowTask_OnEvent.h"
/* 0x004e9500 GlowTask_OnEvent full linked: callers=1 callees=1 */
struct status_msg* sub_4e9500(void* a1)

{
    int32_t kind;
    kind = g_54da50;
    return QTask_HandleInput(a1, kind, 0);
}
