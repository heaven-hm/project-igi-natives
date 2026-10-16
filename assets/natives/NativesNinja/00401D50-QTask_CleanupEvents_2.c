#include "00401D50-QTask_CleanupEvents_2.h"
/* 0x00401d50 QTask_CleanupEvents_2 full linked: callers=9 callees=1 */
int32_t QTask_CleanupEvents_2(char a1)

{
    uint32_t eax = a1;
    *(*(eax + 0xa969e0) + &g_54ff24) = 0xff;
    *(eax + 0xa969e0) = 0xff;
    /* tailcall */
    return QTask_DeleteTask();
}
