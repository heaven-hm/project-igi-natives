#include "Sys_PushStack_20.h"
int32_t Sys_PushStack_20(void* a1)

{
    Sys_ExecuteBytecode_2(*(a1 + 0xc));
    *(a1 + 0xc) = 0;
    return Sys_ExecuteBytecode_2(a1);
}
