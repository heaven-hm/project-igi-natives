#include "0046B310-AI_FireWeapon_28.h"
/* 0x0046b310 AI_FireWeapon_28 full linked: callers=1 callees=38 */
int32_t sub_46b310()

{
    int32_t i_1 = 0x13;
    int32_t* edi = &g_5be098;
    int32_t i;

    do
    {
        sub_4b66a0(edi);
        edi = &edi[6];
        i = i_1;
        i_1 -= 1;
    } while (i != 1);
    sub_4b66a0(0x5bddc8);
    sub_4b66a0(0x5bdde0);
    sub_4b66a0(&g_5bddf8);
    sub_4b66a0(0x5bde10);
    sub_4b66a0(0x5bde28);
    sub_4b66a0(&g_5bde40);
    sub_4b66a0(0x5bde58);
    sub_4b66a0(0x5bde70);
    sub_4b66a0(0x5bde88);
    sub_4b66a0(&g_5bdea0);
    sub_4b66a0(&g_5bdeb8);
    sub_4b66a0(0x5bded0);
    sub_4b66a0(0x5bdee8);
    sub_4b66a0(0x5bdf00);
    sub_4b66a0(&g_5bdf18);
    sub_4b66a0(0x5bdf30);
    sub_4b66a0(0x5bdf48);
    sub_4b66a0(&g_5bdf60);
    sub_4b66a0(0x5bdf78);
    sub_4b66a0(0x5bdf90);
    sub_4b66a0(0x5bdfa8);
    sub_4b66a0(0x5bdfc0);
    sub_4b66a0(&g_5bdfd8);
    sub_4b66a0(0x5bdff0);
    sub_4b66a0(0x5be008);
    sub_4b66a0(0x5be020);
    sub_4b66a0(&g_5be038);
    sub_4b66a0(0x5be050);
    sub_4b66a0(0x5be068);
    sub_4b66a0(0x5be080);
    Heap_FreeEntry(g_5bddbc);
    Heap_FreeEntry(g_5bddc0);
    Heap_FreeEntry(g_5bddc4);
    Resource_Flush(g_5bddb4);
    Resource_Flush(g_5bddb8);
    return Resource_Flush(g_5bddb0);
}
