#include "0040AB20-HumanPlayer_TakeDamage_3.h"
/* 0x0040ab20 HumanPlayer_TakeDamage_3 full linked: callers=0 callees=2 */
int32_t HumanPlayer_TakeDamage_3(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    sub_489e70(a2, *(a1 + 0x10), 0.200000003f);
    int32_t result = HumanPlayer_ApplyRecoil_9(a2, 4);
    *(a1 + 0x14) = sub_40ab60;
    return result;
}
