#include "00433790-Plane_Process.h"
/* 0x00433790 Plane_Process full linked: callers=0 callees=6 */
int32_t* Plane_Process(void* a1)

{
    sub_4f4640(a1);
    sub_4c7560(Level_StartMission_4(), a1);
    sub_4c1830(*(a1 + 0x828));
    sub_4f1340(a1 + 0x838);
    return Vehicle_UpdateCockpit_3(a1);
}
