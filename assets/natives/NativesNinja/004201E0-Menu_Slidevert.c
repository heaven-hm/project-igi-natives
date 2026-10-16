#include "004201E0-Menu_Slidevert.h"
/* 0x004201e0 Menu_Slidevert full linked: callers=2 callees=1 */
struct status_msg* Menu_Slidevert(void* a1, int32_t a2)

{
    int32_t kind;
    kind = g_53b6bc;
    struct status_msg* result = QTask_HandleInput(a1, kind, a2);
    result->head[0x15] = g_53b6f0[0];
    result->head[0x16] = g_53b6f0[4][0];
    result->sprite[0] = 0;
    result->head[0x2b] = 0x32;
    result->head[0x17] = g_53b6f0[8][0];
    *(result + 0x248) = 3;
    return result;
}
