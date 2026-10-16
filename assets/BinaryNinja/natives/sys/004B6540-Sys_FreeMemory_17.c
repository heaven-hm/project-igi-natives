#include "Sys_FreeMemory_17.h"
int32_t Sys_FreeMemory_17(void* a1, int32_t a2, int32_t a3, int16_t a4, int16_t a5, int16_t a6, int16_t a7, int16_t a8, int32_t a9, float a10, float a11, float a12, float a13)

{
    int32_t result = a2 * 0x24;
    *(*(a1 + 8) + result + 8) = a6;
    *(*(a1 + 8) + result + 0xa) = a7;
    *(*(a1 + 8) + result + 0xc) = a4;
    *(*(a1 + 8) + result + 0xe) = a5;
    *(*(a1 + 8) + result + 0x10) = a8;
    *(*(a1 + 8) + result + 4) = a9;
    (*(a1 + 8))[a2 * 9] = *(a1 + 4) + a3 * 0x24;
    *(*(a1 + 8) + result + 0x14) = a10;
    *(*(a1 + 8) + result + 0x18) = a11;
    *(*(a1 + 8) + result + 0x1c) = a12;
    *(*(a1 + 8) + result + 0x20) = a13;
    return result;
}
