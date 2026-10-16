#include "Sys_ExecuteBytecode_30.h"
int32_t Sys_ExecuteBytecode_30(void* a1, int32_t a2)

{
    int32_t objC1 = *(a1 + 0x1c) - 1;
    *(a1 + 0x18) -= 1;
    int32_t tmpD2 = *(a1 + 0x28);
    *(a1 + 0x1c) = objC1;
    *(tmpD2 + (objC1 << 2)) = 6;
    *(*(a1 + 0x24) + (*(a1 + 0x18) << 2)) = a2;
    return a2;
}
