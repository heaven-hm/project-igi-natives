#include "0040E370-HumanPlayer_TakeDamage_6.h"
/* 0x0040e370 HumanPlayer_TakeDamage_6 full linked: callers=0 callees=5 */
struct status_msg* HumanPlayer_TakeDamage_6(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    sub_489e70(a2, *(a1 + 0x10), 0.200000003f);
    HumanPlayer_ApplyRecoil_9(a2, 4);
    sub_464700(*(a2 + 0x4ec));
    sub_4635f0(a2);
    struct status_msg* result = sub_46c020(a2);
    *(a1 + 0x14) = HumanPlayer_UpdateAnimation_6;
    return result;
}
