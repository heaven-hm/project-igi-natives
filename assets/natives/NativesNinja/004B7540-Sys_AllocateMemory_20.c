#include "004B7540-Sys_AllocateMemory_20.h"
/* 0x004b7540 Sys_AllocateMemory_20 full linked: callers=6 callees=0 */
void sub_4b7540(int32_t* a1, int32_t* a2, void* a3)

{
    if (!a3)
        return;

    if (a1)
        *a1 = *(a3 + 4);

    if (a2)
        *a2 = *(a3 + 8);
}
