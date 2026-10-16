#include "0040FB30-HumanPlayer_CheckCollision_8.h"
/* 0x0040fb30 HumanPlayer_CheckCollision_8 full linked: callers=0 callees=3 */
int32_t HumanPlayer_CheckCollision_8(void* a1, void* a2)

{
    int32_t result = sub_4d61d0(*(a2 + 0x4ec) + 0x68, 0,
        *(HumanPlayer_LoadParameters_13(Table_GetAt(a2 + 0x4c4, 0)) + 0x684), 0, 0f);
    *(a2 + 0xd6c) = 0;
    *(a1 + 0x14) = sub_40fb90;
    return result;
}
