#include "0050A670-Physics_SimulateRigidBody_11.h"
/* 0x0050a670 Physics_SimulateRigidBody_11 full linked: callers=0 callees=2 */
void* sub_50a670(int32_t* a1)

{
    void* edi = *a1;
    void* result = Mem_Alloc(0x400, 4);
    *(edi + 8) = result;
    int32_t esi_1 = a1[2];

    if (esi_1)
        memcpy(result, esi_1, 0x400);

    return result;
}
