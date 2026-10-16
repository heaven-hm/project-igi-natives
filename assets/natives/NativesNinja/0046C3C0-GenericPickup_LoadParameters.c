#include "0046C3C0-GenericPickup_LoadParameters.h"
/* 0x0046c3c0 GenericPickup_LoadParameters full linked: callers=0 callees=4 */
int32_t sub_46c3c0(void* a1)

{
    char result = *(a1 + 0x119);

    if (result)
    {
        result = *(a1 + 0x11a);

        if (result)
        {
            Sound_EventTrigger("pickup", nullptr, 0);
            sub_4dcdd0(a1);
            result = sub_4c7560(Level_StartMission_4(), a1);
            *(a1 + 0x11a) = 0;
        }
    }

    return result;
}
