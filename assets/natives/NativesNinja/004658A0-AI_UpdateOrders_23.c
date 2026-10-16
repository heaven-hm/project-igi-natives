#include "004658A0-AI_UpdateOrders_23.h"
/* 0x004658a0 AI_UpdateOrders_23 full linked: callers=1 callees=0 */
int32_t sub_4658a0(int32_t* a1, void* a2)

{
    *a1 = *(a2 + 0xfc);
    a1[1] = *(a2 + 0x108);
    int32_t result = *(a2 + 0x114);
    a1[2] = result;
    return result;
}
