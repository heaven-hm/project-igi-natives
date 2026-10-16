#include "gi_platform.h"
#include "00401D30-QTask_CleanupTypes_2.h"
int32_t QTask_CleanupTypes_2(char a1, int32_t a2)

{
    (*(int32_t*)(uintptr_t)(a2 + &g_54ff24)) = a1;
    (*(int32_t*)(uintptr_t)(a1 + 0xa969e0)) = a2;
    /* tailcall */
    return QTask_DeleteTask();
}
