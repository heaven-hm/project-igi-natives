#include "gi_platform.h"
#include "00509610-AIGraph_Setup.h"
int32_t AIGraph_Setup(void* a1)

{
    void* valA = (*(int32_t*)(uintptr_t)(a1 + 0xb8));

    if (valA)
    {
        Sys_ExecuteBytecode_2(valA);
        (*(int32_t*)(uintptr_t)(a1 + 0xb8)) = 0;
    }

    return ((int(*)())(uintptr_t)(*((Script_FormatString_21() << 2) + &g_a976e0)))(a1);
}
