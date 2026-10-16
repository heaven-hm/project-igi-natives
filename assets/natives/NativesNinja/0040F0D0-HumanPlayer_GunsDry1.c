#include "0040F0D0-HumanPlayer_GunsDry1.h"
/* 0x0040f0d0 HumanPlayer_GunsDry1 full linked: callers=0 callees=2 */
struct status_msg* HumanPlayer_GunsDry1(void* a1, struct human_player* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.40129846e-45f);
    void* eax;
    eax = a2->pad4ec[0];
    *(&eax + 1) = a2->pad4ec[1];
    *(&eax + 2) = a2->pad4ec[2];
    *(&eax + 3) = a2->pad4ec[3];
    struct status_msg* result = sub_4e6b00(eax, "guns_dry_1");
    *(a1 + 0x14) = sub_40f100;
    return result;
}
