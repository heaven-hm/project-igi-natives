#include "0040DBA0-HumanPlayer_WireSlide1.h"
/* 0x0040dba0 HumanPlayer_WireSlide1 full linked: callers=0 callees=4 */
struct status_msg* HumanPlayer_WireSlide1(void* a1, struct human_player* a2)

{
    a2->pad0[0x33d] = 0;
    sub_489e70(a2, *(a1 + 0x10), 0f);
    HumanPlayer_CheckCollision_9(a2, 0f);
    sub_463580(a2);
    struct status_msg* result = sub_4e6b00(a2, "wire_slide_1");
    *(a2 + 0xdb4) = result;
    *(a1 + 0x14) = HumanPlayer_CheckGround_6;
    return result;
}
