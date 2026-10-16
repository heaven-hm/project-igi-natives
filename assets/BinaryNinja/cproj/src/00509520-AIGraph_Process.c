#include "gi_platform.h"
#include "00509520-AIGraph_Process.h"
int32_t AIGraph_Process(void* a1, int32_t* a2)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 0xb8)))
        Physics_SolveConstraints_7(a1);

    int32_t valA1 = (*(int32_t*)(uintptr_t)(a1 + 0x58));
    return Script_CallNativeHandler_24(*a2, "RouteTable", 0xa, (*(int32_t*)(uintptr_t)(a1 + 0xb8)), (valA1 * valA1) << 3);
}
