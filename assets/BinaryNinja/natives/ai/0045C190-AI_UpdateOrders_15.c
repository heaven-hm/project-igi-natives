#include "AI_UpdateOrders_15.h"
int32_t AI_UpdateOrders_15(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = Human_StateAnimation(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = AI_UpdateSensors_11;
    return result;
}
