#include "Sys_PushStack_3.h"
int32_t Sys_PushStack_3()

{
    int32_t result = g_94396c;
    *(result * 0x8c + &g_943704) = result;
    g_94396c = result + 1;
    return result;
}
