#include "0040F4A0-HumanPlayer_UpdateMotion_8.h"
/* 0x0040f4a0 HumanPlayer_UpdateMotion_8 full linked: callers=0 callees=3 */
int32_t HumanPlayer_UpdateMotion_8(void* a1, void* a2)

{
    int32_t edi = *(a2 + 0x4ec);
    struct collision_set* eax_2 = HumanPlayer_LoadParameters_13(Table_GetAt(a2 + 0x4c4, 0));
    *(a2 + 0x4d2) = 1;
    int32_t result = sub_4d61d0(edi + 0x68, 0, *(eax_2 + 0x688), 0, 0f);
    *(a1 + 0x14) = sub_40fd70;
    return result;
}
