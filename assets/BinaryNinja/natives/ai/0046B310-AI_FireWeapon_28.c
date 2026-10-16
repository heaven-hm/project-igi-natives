#include "AI_FireWeapon_28.h"
int32_t AI_FireWeapon_28()

{
    int32_t i_1 = 0x13;
    int32_t* dstD = &g_5be098;
    int32_t i;

    do
    {
        Sys_ReadFileBlock_17(dstD);
        dstD = &dstD[6];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    Sys_ReadFileBlock_17(0x5bddc8);
    Sys_ReadFileBlock_17(0x5bdde0);
    Sys_ReadFileBlock_17(&g_5bddf8);
    Sys_ReadFileBlock_17(0x5bde10);
    Sys_ReadFileBlock_17(0x5bde28);
    Sys_ReadFileBlock_17(&g_5bde40);
    Sys_ReadFileBlock_17(0x5bde58);
    Sys_ReadFileBlock_17(0x5bde70);
    Sys_ReadFileBlock_17(0x5bde88);
    Sys_ReadFileBlock_17(&g_5bdea0);
    Sys_ReadFileBlock_17(&g_5bdeb8);
    Sys_ReadFileBlock_17(0x5bded0);
    Sys_ReadFileBlock_17(0x5bdee8);
    Sys_ReadFileBlock_17(0x5bdf00);
    Sys_ReadFileBlock_17(&g_5bdf18);
    Sys_ReadFileBlock_17(0x5bdf30);
    Sys_ReadFileBlock_17(0x5bdf48);
    Sys_ReadFileBlock_17(&g_5bdf60);
    Sys_ReadFileBlock_17(0x5bdf78);
    Sys_ReadFileBlock_17(0x5bdf90);
    Sys_ReadFileBlock_17(0x5bdfa8);
    Sys_ReadFileBlock_17(0x5bdfc0);
    Sys_ReadFileBlock_17(&g_5bdfd8);
    Sys_ReadFileBlock_17(0x5bdff0);
    Sys_ReadFileBlock_17(0x5be008);
    Sys_ReadFileBlock_17(0x5be020);
    Sys_ReadFileBlock_17(&g_5be038);
    Sys_ReadFileBlock_17(0x5be050);
    Sys_ReadFileBlock_17(0x5be068);
    Sys_ReadFileBlock_17(0x5be080);
    Heap_FreeEntry(g_5bddbc);
    Heap_FreeEntry(g_5bddc0);
    Heap_FreeEntry(g_5bddc4);
    Resource_Flush(g_5bddb4);
    Resource_Flush(g_5bddb8);
    return Resource_Flush(g_5bddb0);
}
