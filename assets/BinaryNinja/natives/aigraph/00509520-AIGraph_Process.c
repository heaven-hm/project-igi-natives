// Original IGI.EXE function: AIGraph_Process (VA 0x00509520; static CFG gate PASS, CFG score 1.000).
#include "AIGraph_Process.h"
int32_t AIGraph_Process(void* context, int32_t* param_2)

{
    if (!*(context + 0xb8))
        Physics_SolveConstraints_7(context);

    int32_t data_1 = *(context + 0x58);
    return Script_CallNativeHandler_24(*param_2, "RouteTable", 0xa, *(context + 0xb8), (data_1 * data_1) << 3);
}
