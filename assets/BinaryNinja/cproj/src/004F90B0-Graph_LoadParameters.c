#include "gi_platform.h"
#include "004F90B0-Graph_LoadParameters.h"
int32_t* Graph_LoadParameters(void* a1)

{
    __builtin_memset(a1 + 0x20, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x50)) = 0xffffffff;
    (*(int32_t*)(uintptr_t)(a1 + 0x54)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x58)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x5c)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x60)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x65)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x68)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x69)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x66)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x67)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x6c)) = 0;
    int32_t* dstD = Mem_Alloc(0xc, 4);
    dstD[2] = QTask_LinkEventHandler_2(a1);
    dstD[1] = 0;
    *dstD = 0;
    Camera_SetFieldOfView_33(&g_a77248, dstD);
    dstD = (*(int32_t*)(uintptr_t)(*(a1 + 0x14) + 0x1c));
    __builtin_memset(a1 + 0x20, 0, 0x18);
    (*(int32_t*)(uintptr_t)(a1 + 0x64)) = 0;

    if (TaskType_IsDerivedFrom(dstD, DynObj_LookupHashItem_5()))
        (*(int32_t*)(uintptr_t)(a1 + 0x64)) = 1;

    (*(int32_t*)(uintptr_t)(a1 + 0x78)) = a1 + 0x70;
    (*(int32_t*)(uintptr_t)(a1 + 0x74)) = 0;
    (*(int32_t*)(uintptr_t)(a1 + 0x70)) = a1 + 0x74;
    return a1 + 0x74;
}
