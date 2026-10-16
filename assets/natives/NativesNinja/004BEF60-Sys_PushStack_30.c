#include "004BEF60-Sys_PushStack_30.h"
/* 0x004bef60 Sys_PushStack_30 full linked: callers=1 callees=3 */
int32_t* sub_4bef60(int32_t* a1, int32_t a2, int32_t a3, int32_t a4)

{
    void* eax = Mem_Alloc(g_a969c4, 4);
    a1[1] = eax;
    int32_t ecx = g_a969c4;
    __builtin_memset(__builtin_memset(eax, 0, ecx & 0xfffffffc), 0, ecx & 3);
    int32_t ecx_4 = a1[1];
    a1[7] = a2;
    a1[4] = a3;
    *a1 = ecx_4;
    a1[2] = 0;
    a1[3] = 0;
    a1[5] = 0;
    a1[6] = a4;
    return a1;
}
