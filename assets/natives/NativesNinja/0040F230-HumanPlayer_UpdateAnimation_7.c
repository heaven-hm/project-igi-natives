#include "0040F230-HumanPlayer_UpdateAnimation_7.h"
/* 0x0040f230 HumanPlayer_UpdateAnimation_7 full linked: callers=0 callees=2 */
void* HumanPlayer_UpdateAnimation_7(void* a1, struct human_player* a2)

{
    HumanPlayer_CheckCollision_9(a2, 1.26116862e-44f);
    void* result = sub_464770(a2->pad4ec, -0.610865235f, 0xbeb2b8c3, 0x3d6e4bae, 0x3d082b3f);
    a2->stance_data[0xc] = 0;
    *(a1 + 0x14) = HumanPlayer_CheckCollision_7;
    return result;
}
