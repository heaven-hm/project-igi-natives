#include "QTask_CleanupTypes_2.h"
int32_t QTask_CleanupTypes_2(char a1, int32_t a2)

{
    *(a2 + &g_54ff24) = a1;
    *(a1 + 0xa969e0) = a2;
    /* tailcall */
    return QTask_DeleteTask();
}
