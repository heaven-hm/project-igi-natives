#include "gi_platform.h"
#include "0052D030-Light_CalculateAttenuation_9.h"
int32_t Light_CalculateAttenuation_9(void* a1)

{
    g_a84568 = 0;
    int32_t* valA = (*(int32_t*)(uintptr_t)(a1 + 0x50));
    ((int(*)())(uintptr_t)((*(int32_t*)(uintptr_t)(*valA + 8))))(valA);
    return Sys_ExecuteBytecode_2(a1);
}
