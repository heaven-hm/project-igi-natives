#include "00408720-HumanPlayer_PlayFootstep.h"
/* 0x00408720 HumanPlayer_PlayFootstep full linked: callers=2 callees=2 */
int32_t HumanPlayer_PlayFootstep(int32_t a1 @ esi, void* a2)

{
    int32_t c;
    sub_4f23d0(a2, &c);
    void* d;

    if (c + d)
        return 1;

    return *(HumanPlayer_LoadParameters_13(a2, a1, c, d) + 0x6dc);
}
