#include "gi_platform.h"
#include "004B73F0-Sys_ExecuteBytecode_19.h"
int32_t* Sys_ExecuteBytecode_19(int32_t a1)

{
    int32_t* result = Mem_Alloc((a1 << 2) + 0x14, 4);
    result[3] = a1;
    result[1] = 0xffffffff;
    result[2] = 0;
    *result = 0xabcdabcd;
    result[4] = 0xdcbadcba;
    return result;
}
