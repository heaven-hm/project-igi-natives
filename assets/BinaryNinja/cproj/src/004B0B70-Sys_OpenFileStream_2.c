#include "gi_platform.h"
#include "004B0B70-Sys_OpenFileStream_2.h"
int32_t Sys_OpenFileStream_2(int32_t* a1)

{
    int32_t result = Sys_ExecuteBytecode_2(*a1);
    *a1 = 0;
    return result;
}
