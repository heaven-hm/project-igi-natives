#include "004E9460-FadeOutEnd_Process.h"
/* 0x004e9460 FadeOutEnd_Process full linked: callers=1 callees=1 */
struct status_msg* sub_4e9460(void* a1)

{
    int32_t kind;
    kind = g_a5ec78;
    return QTask_HandleInput(a1, kind, 0);
}
