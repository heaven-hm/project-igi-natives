#include "00401BB0-QTask_RemoveEventCallback_2.h"
/* 0x00401bb0 QTask_RemoveEventCallback_2 full linked: callers=1 callees=2 */
void* QTask_RemoveEventCallback_2(int32_t* a1, void* a2)

{
    int32_t ebx = *(a2 + 0x14);
    QTask_AllocateEvent(a1);
    void* result = sub_4af990(a2, a1);
    a1[5] = ebx;
    return result;
}
