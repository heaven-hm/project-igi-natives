#include "00459EC0-HumanSoldier_Setup.h"
/* 0x00459ec0 HumanSoldier_Setup full linked: callers=0 callees=4 */
int32_t sub_459ec0(void* a1)

{
    if (*(a1 + 0xd01))
    {
        sub_4d96f0(a1);
        sub_4c7560(Level_StartMission_4(), a1);
    }

    return (*((sub_460be0() << 2) + &g_a976e0))(a1);
}
