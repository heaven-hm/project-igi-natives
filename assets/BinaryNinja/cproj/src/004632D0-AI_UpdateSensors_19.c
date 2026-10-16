#include "gi_platform.h"
#include "004632D0-AI_UpdateSensors_19.h"
int32_t* AI_UpdateSensors_19(void* a1)

{
    (*(int32_t*)(uintptr_t)(a1 + 0x2f4)) &= 0xfffffffb;
    int32_t* result = AI_UpdateSensors_20(a1, nullptr);
    (*(int32_t*)(uintptr_t)(a1 + 0x6f8)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x728)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x72c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x730)) = 0;
    return result;
}
