#include "0040E6E0-HumanPlayer_UpdateMotion_7.h"
/* 0x0040e6e0 HumanPlayer_UpdateMotion_7 full linked: callers=0 callees=3 */
int32_t* HumanPlayer_UpdateMotion_7(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    sub_489e70(a2, *(a1 + 0x10), 0.200000003f);
    __builtin_memset(a2 + 0x664, 0, 0x18);
    int32_t* result = sub_4632d0(a2);
    *(a1 + 0x14) = HumanPlayer_CheckGround_7;
    return result;
}
