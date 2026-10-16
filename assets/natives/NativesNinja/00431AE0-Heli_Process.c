#include "00431AE0-Heli_Process.h"
/* 0x00431ae0 Heli_Process full linked: callers=0 callees=13 */
int32_t* Heli_Process(void* a1)

{
    sub_4f4640(a1);
    sub_4c7560(Level_StartMission_4(), a1);
    sub_4c17c0(Level_InitTextures_4(), a1);
    sub_4c1830(*(a1 + 0x748));
    Vehicle_InitPlane_2(a1);
    sub_4f1340(a1 + 0x758);
    sub_4f1340(a1 + 0x7a8);
    sub_4f1340(a1 + 0x7f8);
    sub_4c17c0(Level_InitSprites_4(), a1);
    return sub_489b90(a1 + 0x8c0);
}
