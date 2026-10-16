#include "004788D0-Weapon_CycleFireMode_5.h"
/* 0x004788d0 Weapon_CycleFireMode_5 full linked: callers=2 callees=2 */
int32_t sub_4788d0(void* a1)

{
    char result = *(a1 + 0xf0);

    if (result)
    {
        result = sub_4c7560(Level_StartMission_4(), a1);
        *(a1 + 0xf0) = 0;
    }

    return result;
}
