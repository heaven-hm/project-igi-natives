#include "00476E50-Grenade_Process.h"
/* 0x00476e50 Grenade_Process full linked: callers=0 callees=6 */
int32_t sub_476e50(void* a1)

{
    int32_t* eax = *(a1 + 0x72c);

    if (eax)
    {
        Qtask_UpdateList(eax);
        *(a1 + 0x72c) = 0;
    }

    sub_4fb980(a1);
    sub_4c7560(Level_StartMission_4(), a1);
    return sub_4c17c0(Level_CheckQTaskID_4(), a1);
}
