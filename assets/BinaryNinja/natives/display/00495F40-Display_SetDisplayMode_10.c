#include "Display_SetDisplayMode_10.h"
uint32_t __fastcall Display_SetDisplayMode_10(int32_t a1)

{
    int32_t dwParam2 = a1;
    uint32_t mciId = g_5ca130;
    dwParam2 = 0;
    uint32_t result = mciSendCommandA(mciId, 0x808, 0, &dwParam2);
    g_543918 = 0xffffffff;
    return result;
}
