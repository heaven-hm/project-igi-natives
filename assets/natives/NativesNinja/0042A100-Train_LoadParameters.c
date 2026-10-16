#include "0042A100-Train_LoadParameters.h"
/* 0x0042a100 Train_LoadParameters full linked: callers=0 callees=5 */
int32_t Train_LoadParameters(void* a1)

{
    sub_4f4640(a1);
    void* eax = *(a1 + 0x14);

    if (*(eax + 0x1c) == g_57bcb8)
        *(eax + 0x778) -= 1;

    sub_4f1340(a1 + 0x890);
    sub_4c7560(Level_StartMission_4(), a1);
    return sub_4c1830(*(a1 + 0x884));
}
