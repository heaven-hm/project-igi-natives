#include "Sys_InternalError.h"
int32_t Sys_InternalError(int32_t* a1)

{
    char* valA1 = *a1 + a1[5];

    if (*valA1 == 3)
    {
        Sys_PushStack_29(a1, valA1[1]);
        int32_t result = a1[5] + 2;
        a1[5] = result;
        return result;
    }

    Error_Show("Internal error.");

    while (true)
        /* nop */
}
