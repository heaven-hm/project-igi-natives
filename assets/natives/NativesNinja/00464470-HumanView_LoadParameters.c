#include "00464470-HumanView_LoadParameters.h"
/* 0x00464470 HumanView_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_464470(void* a1)

{
    char result = *(a1 + 0xd9);

    if (!result)
        return result;

    *(a1 + 0xd9) = 0;
    sub_4d96f0(a1);
    return sub_4c7560(Level_StartMission_4(), a1);
}
