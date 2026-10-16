#include "004B7C40-Sys_ExecuteBytecode_21.h"
/* 0x004b7c40 Sys_ExecuteBytecode_21 full linked: callers=2 callees=4 */
int32_t sub_4b7c40(void* a1)

{
    int32_t ecx_1 = *(a1 + 6) << 1;
    __builtin_memset(__builtin_memset(*(a1 + 0xc), 0, ecx_1 & 0xfffffffc), 0, ecx_1 & 3);
    int32_t ecx_6 = *(a1 + 4) * *(a1 + 6);
    __builtin_memset(__builtin_memset(a1 + 0x10, 0, ecx_6 & 0xfffffffc), 0, ecx_6 & 3);
    return 0;
}
