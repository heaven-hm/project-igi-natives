#include "004ED5C0-InputPort_Process.h"
/* 0x004ed5c0 InputPort_Process full linked: callers=1 callees=1 */
struct status_msg* sub_4ed5c0(void* a1)

{
    int32_t kind;
    kind = g_a5efa0;
    return QTask_HandleInput(a1, kind, 0);
}
