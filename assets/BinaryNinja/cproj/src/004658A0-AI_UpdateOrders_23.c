#include "gi_platform.h"
#include "004658A0-AI_UpdateOrders_23.h"
int32_t AI_UpdateOrders_23(int32_t* a1, void* a2)

{
    *a1 = (*(int32_t*)(uintptr_t)(a2 + 0xfc));
    a1[1] = (*(int32_t*)(uintptr_t)(a2 + 0x108));
    int32_t result = (*(int32_t*)(uintptr_t)(a2 + 0x114));
    a1[2] = result;
    return result;
}
