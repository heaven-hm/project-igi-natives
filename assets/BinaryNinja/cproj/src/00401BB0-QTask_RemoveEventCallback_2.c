#include "gi_platform.h"
#include "00401BB0-QTask_RemoveEventCallback_2.h"
void* QTask_RemoveEventCallback_2(int32_t* a1, void* a2)

{
    int32_t ctxB = (*(int32_t*)(uintptr_t)(a2 + 0x14));
    QTask_AllocateEvent(a1);
    void* result = Camera_ApplyWideScreen_33(a2, a1);
    a1[5] = ctxB;
    return result;
}
