#include "gi_platform.h"
#include "00495A90-Display_SetDisplayMode_9.h"
int32_t Display_SetDisplayMode_9()

{
    Display_RestoreDevice_9();
    Display_SyncVSync_9();
    int32_t objC = Display_SwapBuffers_9();
    char result = g_6840e8;

    if (!result)
        return result;

    Display_SetDisplayMode_10(objC);
    return mciSendCommandA(g_5ca130, 0x804, 0, 0);
}
