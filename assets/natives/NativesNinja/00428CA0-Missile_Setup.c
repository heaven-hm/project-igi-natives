#include "00428CA0-Missile_Setup.h"
/* 0x00428ca0 Missile_Setup full linked: callers=0 callees=6 */
void* Missile_Setup(void* a1)

{
    sub_4f4640(a1);
    int32_t* eax = *(a1 + 0x858);

    if (eax)
        Qtask_UpdateList(eax);

    int32_t* eax_1 = *(a1 + 0x85c);

    if (eax_1)
        Qtask_UpdateList(eax_1);

    int32_t* eax_2 = *(a1 + 0x860);

    if (eax_2)
        Qtask_UpdateList(eax_2);

    return sub_4c7560(Level_StartMission_4(), a1);
}
