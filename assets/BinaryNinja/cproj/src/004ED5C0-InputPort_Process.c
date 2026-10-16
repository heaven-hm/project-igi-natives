#include "gi_platform.h"
#include "004ED5C0-InputPort_Process.h"
struct status_msg* InputPort_Process(void* a1)

{
    int32_t kind;
    kind = g_a5efa0;
    return QTask_HandleInput(a1, kind, 0);
}
