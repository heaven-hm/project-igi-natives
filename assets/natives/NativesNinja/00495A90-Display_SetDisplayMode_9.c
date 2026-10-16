#include "00495A90-Display_SetDisplayMode_9.h"
/* 0x00495a90 Display_SetDisplayMode_9 full linked: callers=1 callees=5 */
int32_t sub_495a90()

{
    sub_495c80();
    sub_495ae0();
    int32_t ecx = sub_495b50();
    char result = g_6840e8;

    if (!result)
        return result;

    sub_495f40(ecx);
    return mciSendCommandA(g_5ca130, 0x804, 0, 0);
}
