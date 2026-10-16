#include "004BE9A0-Sys_CloseFileStream_30.h"
/* 0x004be9a0 Sys_CloseFileStream_30 full linked: callers=0 callees=1 */
int32_t sub_4be9a0(int32_t* a1)

{
    sub_4bda30(a1, *(*a1 + a1[5] + 1));
    int32_t result = a1[5] + 5;
    a1[5] = result;
    return result;
}
