#include "Sys_DispatchOpcode_4.h"
int32_t Sys_DispatchOpcode_4(int32_t* a1)

{
    int32_t objC = *a1;
    return (*(objC * 0x8c + &g_9436d4))(objC, a1);
}
