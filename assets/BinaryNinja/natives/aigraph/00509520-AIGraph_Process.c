// Original IGI.EXE function: AIGraph_Process (VA 0x00509520; static CFG gate PASS, CFG score 1.000).
#include "AIGraph_Process.h"
int32_t AIGraph_Process(void* a1, int32_t* a2)

{
    if (!*(a1 + 0xb8))
        Physics_SolveConstraints_7(a1);

    int32_t valA1 = *(a1 + 0x58);
    return Script_CallNativeHandler_24(*a2, "RouteTable", 0xa, *(a1 + 0xb8), (valA1 * valA1) << 3);
}
