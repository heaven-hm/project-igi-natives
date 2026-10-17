// Original IGI.EXE function: InputPort_Process (VA 0x004ED5C0; static CFG gate PASS, CFG score 1.000).
#include "InputPort_Process.h"
struct status_msg* InputPort_Process(void* context)

{
    int32_t kind;
    kind = g_a5efa0;
    return QTask_HandleInput(context, kind, 0);
}
