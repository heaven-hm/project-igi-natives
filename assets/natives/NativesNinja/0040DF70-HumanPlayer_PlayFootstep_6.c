#include "0040DF70-HumanPlayer_PlayFootstep_6.h"
/* 0x0040df70 HumanPlayer_PlayFootstep_6 full linked: callers=0 callees=2 */
void* HumanPlayer_PlayFootstep_6(void* a1, void* a2)

{
    if (!*(a2 + 0x33d))
    {
        int32_t eax_1 = sub_489e70(a2, *(a1 + 0x10), 0.200000003f);
        *(a1 + 0x14) = sub_40dfc0;
        return eax_1;
    }

    sub_489e70(a2, 0x13, 0.200000003f);
    *(a1 + 0x14) = sub_40dfc0;
    return a1;
}
