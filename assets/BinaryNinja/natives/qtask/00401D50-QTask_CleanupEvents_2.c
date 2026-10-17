// Original IGI.EXE function: QTask_CleanupEvents_2 (VA 0x00401D50; static CFG gate FAIL, CFG score 0.722).
#include "QTask_CleanupEvents_2.h"
int32_t QTask_CleanupEvents_2(char a1)

{
    uint32_t valA = a1;
    *(*(valA + 0xa969e0) + &g_54ff24) = 0xff;
    *(valA + 0xa969e0) = 0xff;
    /* tailcall */
    return QTask_DeleteTask();
}
