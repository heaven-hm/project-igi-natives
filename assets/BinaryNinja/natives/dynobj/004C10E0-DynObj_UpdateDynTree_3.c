// Original IGI.EXE function: DynObj_UpdateDynTree_3 (VA 0x004C10E0; static CFG gate PASS, CFG score 1.000).
#include "DynObj_UpdateDynTree_3.h"
int32_t DynObj_UpdateDynTree_3()

{
    for (int32_t i = 0; i < 0x31; i += 1)
        Sys_AllocateMemory_29(i, 3, DynObj_LinkDynamicCube_3);

    Sys_AllocateMemory_29(2, 3, sub_4c1210);
    Sys_AllocateMemory_29(3, 3, sub_4c1340);
    Sys_AllocateMemory_29(4, 3, sub_4c13a0);
    Sys_AllocateMemory_29(5, 3, DynObj_RemoveSymbol_3);
    Sys_AllocateMemory_29(8, 3, sub_4c1400);
    Sys_AllocateMemory_29(9, 3, sub_4c1400);
    Sys_AllocateMemory_29(0xa, 3, sub_4c1400);
    Sys_AllocateMemory_29(0xb, 3, sub_4c1400);
    Sys_AllocateMemory_29(0xc, 3, sub_4c1400);
    Sys_AllocateMemory_29(0xd, 3, sub_4c1400);
    Sys_AllocateMemory_29(0xe, 3, sub_4c1400);
    Sys_AllocateMemory_29(0x14, 3, sub_4c12e0);
    Sys_AllocateMemory_29(0x15, 3, sub_4c12e0);
    Sys_AllocateMemory_29(0x16, 3, sub_4c12e0);
    Sys_AllocateMemory_29(0x18, 3, DynObj_InsertHashItem_4);
    return Sys_AllocateMemory_29(7, 3, sub_4bc950);
}
