#include "0040F4F0-HumanPlayer_CheckGround_8.h"
/* 0x0040f4f0 HumanPlayer_CheckGround_8 full linked: callers=0 callees=4 */
int32_t HumanPlayer_CheckGround_8(void* a1, void* a2)

{
    int32_t ebp = *(a2 + 0x4ec);
    struct collision_set* eax_2 = HumanPlayer_LoadParameters_13(Table_GetAt(a2 + 0x4c4, 0));
    sub_4d61d0(ebp + 0x68, 0, *(eax_2 + 0x684), 0, 0f);
    long double x87_r7_1 = **(sub_4ee140(eax_2 + 0x61c) + 0x2d4) * 30f;
    *(a2 + 0x4d8) = 0;
    *(a2 + 0x4e0) = 0;
    *(a2 + 0x4e4) = 0;
    int32_t result = x87_r7_1;
    *(a2 + 0x4dc) = result;
    *(a1 + 0x14) = HumanPlayer_GrenadeTick1;
    return result;
}
