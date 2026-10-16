#include "004B8AD0-Sys_CheckHeap_23.h"
/* 0x004b8ad0 Sys_CheckHeap_23 full linked: callers=1 callees=1 */
int32_t sub_4b8ad0(void* a1, int32_t a2)

{
    if (!*(a1 + 4))
        return *(*(*(a1 + 8) + (a2 << 2)) + 0x24);

    int32_t var_4 = a2;
    void* var_8 = a1;
    return 0;
}
