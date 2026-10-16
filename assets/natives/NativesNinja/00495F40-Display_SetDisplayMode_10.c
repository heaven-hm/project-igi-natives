#include "00495F40-Display_SetDisplayMode_10.h"
/* 0x00495f40 Display_SetDisplayMode_10 full linked: callers=1 callees=1 */
uint32_t __fastcall sub_495f40(int32_t a1)

{
    int32_t dwParam2 = a1;
    uint32_t mciId = g_5ca130;
    dwParam2 = 0;
    uint32_t result = mciSendCommandA(mciId, 0x808, 0, &dwParam2);
    g_543918 = 0xffffffff;
    return result;
}
