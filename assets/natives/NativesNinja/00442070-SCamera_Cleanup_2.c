#include "00442070-SCamera_Cleanup_2.h"
/* 0x00442070 SCamera_Cleanup_2 full linked: callers=0 callees=7 */
int32_t* sub_442070(void* a1)

{
    int32_t* eax = *(a1 + 0x25c4);

    if (eax)
    {
        Qtask_UpdateList(eax);
        *(a1 + 0x25c4) = 0;
    }

    sub_4c17c0(Level_InitTextures_4(), a1);
    sub_4c17c0(g_57c18c, a1);
    sub_4dcdd0(a1);
    sub_4c7560(*(a1 + 0x68), a1);
    return sub_489b90(a1 + 0x188);
}
