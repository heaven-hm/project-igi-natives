#include "Sys_PushStack_4.h"
int32_t Sys_PushStack_4(int32_t* a1)

{
    int32_t objC = *a1;
    return (*(objC * 0x8c + &g_9436d0))(objC, a1);
}
