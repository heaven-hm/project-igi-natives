#include "0046BF80-Computer_Process.h"
/* 0x0046bf80 Computer_Process full linked: callers=0 callees=11 */
int32_t sub_46bf80(void* a1)

{
    int32_t* eax = sub_46b030();
    sub_4c6840(Level_StartMission_4(), a1, 1);
    g_5be2cc = 0;

    if (eax)
        QTask_FindType(eax);

    int32_t* eax_2 = *(a1 + 0x130);

    if (eax_2)
        QTask_FindType(eax_2);

    void* eax_5 = sub_485320(*(Level_LoadLevel_6() + 0x44));
    sub_4e8250(eax_5, 1);
    sub_4e8220(eax_5, 0xffffffff, 1);
    sub_4e8220(eax_5, 0, 1);
    return sub_499fd0(g_53fd9c);
}
