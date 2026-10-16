#include "0045BA50-AI_UpdateOrders_14.h"
/* 0x0045ba50 AI_UpdateOrders_14 full linked: callers=0 callees=1 */
int32_t sub_45ba50(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45ba80;
    return result;
}
