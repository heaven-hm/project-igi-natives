#include "0040CCC0-HumanPlayer_PlayFootstep_5.h"
/* 0x0040ccc0 HumanPlayer_PlayFootstep_5 full linked: callers=0 callees=12 */
int32_t* HumanPlayer_PlayFootstep_5(int32_t* a1, void* a2)

{
    void* eax = sub_4636e0(a2);

    if (!(a1[2] & 1))
        return a1;

    sub_463580(a2);
    sub_4635a0(a2);
    sub_464710(*(a2 + 0x4ec));
    sub_463600(a2);
    sub_463620(a2);
    sub_4636a0(a2, nullptr);
    Human_ViewCam(a2, 1);
    sub_463260(a2);
    sub_463700(a2, Menu_UpdateLanguage_23(eax));
    return HumanPlayer_PlaySound_5(a2, 6);
}
