#include "gi_platform.h"
#include "004647A0-AI_UpdateSensors_22.h"
void* AI_UpdateSensors_22(void* a1, float a2, int32_t a3)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x1d0)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x1dc)) = a3;
    (*(int32_t*)(uintptr_t)(a1 + 0x1cc)) = a2;
    (*(int32_t*)(uintptr_t)(a1 + 0x1d8)) = a3;
    return a1;
}
