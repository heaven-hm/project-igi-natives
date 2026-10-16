#include "004B6440-Sys_PushStack_16.h"
/* 0x004b6440 Sys_PushStack_16 full linked: callers=2 callees=2 */
int32_t sub_4b6440(int32_t* a1, void* a2)

{
    void* esi = a2;

    if (!Is_ResourceLoaded(esi, &a2))
        return sub_4b1820(a1, esi);

    void* eax_1 = a2;
    *a1 = *(eax_1 + 0x23c);
    a1[1] = *(eax_1 + 0x240);
    return 0;
}
