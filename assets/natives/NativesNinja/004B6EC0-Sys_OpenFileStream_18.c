#include "004B6EC0-Sys_OpenFileStream_18.h"
/* 0x004b6ec0 Sys_OpenFileStream_18 full linked: callers=29 callees=4 */
int32_t** sub_4b6ec0(void* a1, int32_t a2, int32_t a3, char* a4)

{
    int32_t** result = Mem_Alloc(0x28, 4);
    __builtin_memset(result, 0, 0x28);
    *result = sub_4b7630(0x100, 1, a1);
    result[5] = 0x43000000;
    result[6] = 0x43000000;
    result[7] = 0x43000000;
    result[8] = 0;
    result[9] = 0;
    result[4] = 0x3f800000;
    result[1] = a2;
    result[2] = a3;
    sub_4b6e90(result, a4);
    return result;
}
