#include "004581B0-AI_UpdateOrders_9.h"
/* 0x004581b0 AI_UpdateOrders_9 full linked: callers=0 callees=1 */
int32_t sub_4581b0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45ab00;
    return result;
}
