#include "gi_platform.h"
#include "004E9460-FadeOutEnd_Process.h"
struct status_msg* FadeOutEnd_Process(void* a1)

{
    int32_t kind;
    kind = g_a5ec78;
    return QTask_HandleInput(a1, kind, 0);
}
