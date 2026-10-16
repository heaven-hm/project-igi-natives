#include "00410840-HumanPlayer_Setup.h"
/* 0x00410840 HumanPlayer_Setup full linked: callers=0 callees=7 */
int32_t HumanPlayer_Setup(void* a1)

{
    int32_t* eax = *(a1 + 0xde8);

    if (eax)
    {
        Qtask_UpdateList(eax);
        *(a1 + 0xde8) = 0;
    }

    sub_4c17c0(g_HumanPlayerCtx, a1);
    sub_4d96f0(a1);
    sub_4c7560(Level_StartMission_4(), a1);
    int32_t result = (*((sub_460be0() << 2) + &g_a976e0))(a1);
    int32_t* esi_1 = *(a1 + 0xdbc);

    if (!esi_1)
        return result;

    return Qtask_UpdateList(esi_1);
}
