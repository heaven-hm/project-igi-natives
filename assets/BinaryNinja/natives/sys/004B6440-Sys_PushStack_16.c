#include "Sys_PushStack_16.h"
int32_t Sys_PushStack_16(int32_t* a1, void* a2)

{
    void* srcS = a2;

    if (!Is_ResourceLoaded(srcS, &a2))
        return Sys_AllocateMemory_5(a1, srcS);

    void* valA1 = a2;
    *a1 = *(valA1 + 0x23c);
    a1[1] = *(valA1 + 0x240);
    return 0;
}
