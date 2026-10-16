#include "Light_CalculateAttenuation_9.h"
int32_t Light_CalculateAttenuation_9(void* a1)

{
    g_a84568 = 0;
    int32_t* valA = *(a1 + 0x50);
    (*(*valA + 8))(valA);
    return Sys_ExecuteBytecode_2(a1);
}
