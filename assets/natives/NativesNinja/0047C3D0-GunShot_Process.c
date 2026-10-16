#include "0047C3D0-GunShot_Process.h"
/* 0x0047c3d0 GunShot_Process full linked: callers=0 callees=4 */
void* sub_47c3d0(void* a1)

{
    int32_t* eax = *(a1 + 0x6c);

    if (eax)
    {
        Qtask_UpdateList(eax);
        *(a1 + 0x6c) = 0;
    }

    int32_t* eax_1 = *(a1 + 0x70);

    if (eax_1)
    {
        Qtask_UpdateList(eax_1);
        *(a1 + 0x70) = 0;
    }

    return sub_4c6840(Level_StartMission_4(), a1, 0);
}
