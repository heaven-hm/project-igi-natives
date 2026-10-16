#include "0045C190-AI_UpdateOrders_15.h"
/* 0x0045c190 AI_UpdateOrders_15 full linked: callers=0 callees=1 */
int32_t sub_45c190(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_459180;
    return result;
}
