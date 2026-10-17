// Original IGI.EXE function: Flow_CreateHandler (VA 0x00402800; static CFG gate PASS, CFG score 1.000).
#include "Flow_CreateHandler.h"
struct status_msg* Flow_CreateHandler(void* a1)

{
    int32_t kind;
    kind = g_567c7c;
    return QTask_HandleInput(a1, kind, 0);
}
