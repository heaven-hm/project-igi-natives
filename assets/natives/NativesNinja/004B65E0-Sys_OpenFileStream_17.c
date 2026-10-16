#include "004B65E0-Sys_OpenFileStream_17.h"
/* 0x004b65e0 Sys_OpenFileStream_17 full linked: callers=4 callees=3 */
int32_t sub_4b65e0(int32_t* a1, char a2, int16_t a3, int16_t a4, int16_t a5, int16_t a6, int16_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11)

{
    int32_t ebx_1 = (a10 * 9 + 9) << 2;
    *a1 = a9;
    a1[5] = a10;
    a1[3] = 0;
    *(a1 + 0x16) = a2;
    void* eax_1 = Mem_Alloc(ebx_1 + a11 * 0x24, 4);
    a1[4] = a11;
    a1[2] = eax_1;
    a1[1] = eax_1 + ebx_1;
    __builtin_memset(__builtin_memset(eax_1, 0, ebx_1 & 0xfffffffc), 0, ebx_1 & 3);
    int32_t result = a10 * 0x24;
    *(a1[2] + result + 4) = a8;
    *(a1[2] + result + 8) = a3;
    *(a1[2] + result + 0xa) = a4;
    *(a1[2] + result + 0xc) = a5;
    *(a1[2] + result + 0xe) = a6;
    *(a1[2] + result + 0x10) = a7;
    return result;
}
