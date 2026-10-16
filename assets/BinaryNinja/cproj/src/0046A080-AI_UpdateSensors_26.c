#include "gi_platform.h"
#include "0046A080-AI_UpdateSensors_26.h"
void* AI_UpdateSensors_26(void* a1, int32_t a2, int32_t a3)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x7c)) = a3;
    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = a2;
    return a1;
}
