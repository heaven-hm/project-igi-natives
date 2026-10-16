#include "gi_platform.h"
#include "004B65E0-Sys_OpenFileStream_17.h"
int32_t Sys_OpenFileStream_17(int32_t* a1, char a2, int16_t a3, int16_t a4, int16_t a5, int16_t a6, int16_t a7, int32_t a8, int32_t a9, int32_t a10, int32_t a11)

{
    int32_t ctxB1 = (a10 * 9 + 9) << 2;
    *a1 = a9;
    a1[5] = a10;
    a1[3] = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x16)) = a2;
    void* valA1 = Mem_Alloc(ctxB1 + a11 * 0x24, 4);
    a1[4] = a11;
    a1[2] = valA1;
    a1[1] = valA1 + ctxB1;
    __builtin_memset(__builtin_memset(valA1, 0, ctxB1 & 0xfffffffc), 0, ctxB1 & 3);
    int32_t result = a10 * 0x24;
    (*(int32_t*)(uintptr_t)(a1[2] + result + 4)) = a8;
    (*(int32_t*)(uintptr_t)(a1[2] + result + 8)) = a3;
    (*(int32_t*)(uintptr_t)(a1[2] + result + 0xa)) = a4;
    (*(int32_t*)(uintptr_t)(a1[2] + result + 0xc)) = a5;
    (*(int32_t*)(uintptr_t)(a1[2] + result + 0xe)) = a6;
    (*(int32_t*)(uintptr_t)(a1[2] + result + 0x10)) = a7;
    return result;
}
