#include "004F90B0-Graph_LoadParameters.h"
/* 0x004f90b0 Graph_LoadParameters full linked: callers=1 callees=7 */
int32_t* sub_4f90b0(void* a1)

{
    __builtin_memset(a1 + 0x20, 0, 0x18);
    *(a1 + 0x50) = 0xffffffff;
    *(a1 + 0x54) = 0;
    *(a1 + 0x58) = 0;
    *(a1 + 0x5c) = 0;
    *(a1 + 0x60) = 0;
    *(a1 + 0x65) = 0;
    *(a1 + 0x68) = 0;
    *(a1 + 0x69) = 0;
    *(a1 + 0x66) = 0;
    *(a1 + 0x67) = 0;
    *(a1 + 0x6c) = 0;
    int32_t* edi = Mem_Alloc(0xc, 4);
    edi[2] = QTask_LinkEventHandler_2(a1);
    edi[1] = 0;
    *edi = 0;
    sub_4af8f0(&g_a77248, edi);
    edi = *(*(a1 + 0x14) + 0x1c);
    __builtin_memset(a1 + 0x20, 0, 0x18);
    *(a1 + 0x64) = 0;

    if (TaskType_IsDerivedFrom(edi, sub_4c48c0()))
        *(a1 + 0x64) = 1;

    *(a1 + 0x78) = a1 + 0x70;
    *(a1 + 0x74) = 0;
    *(a1 + 0x70) = a1 + 0x74;
    return a1 + 0x74;
}
