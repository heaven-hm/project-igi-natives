#include "gi_platform.h"
#include "004B8AD0-Sys_CheckHeap_23.h"
int32_t Sys_CheckHeap_23(void* a1, int32_t a2)

{
    if (!(*(int32_t*)(uintptr_t)(a1 + 4)))
        return (*(int32_t*)(uintptr_t)(*(*(a1 + 8) + (a2 << 2)) + 0x24));

    int32_t v_4 = a2;
    void* v_8 = a1;
    return 0;
}
