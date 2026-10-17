// Original IGI.EXE function: QTask_CleanupTypes_2 (VA 0x00401D30; static CFG gate FAIL, CFG score 0.722).
#include "QTask_CleanupTypes_2.h"
int32_t QTask_CleanupTypes_2(char context, int32_t param_2)

{
    *(param_2 + &g_54ff24) = context;
    *(context + 0xa969e0) = param_2;
    /* tailcall */
    return QTask_DeleteTask();
}
