// Original IGI.EXE function: Display_SetDisplayMode_9 (VA 0x00495A90; static CFG gate PASS, CFG score 1.000).
#include "Display_SetDisplayMode_9.h"
int32_t Display_SetDisplayMode_9()

{
    Display_RestoreDevice_9();
    Display_SyncVSync_9();
    int32_t entity_val = Display_SwapBuffers_9();
    char result = g_6840e8;

    if (!result)
        return result;

    Display_SetDisplayMode_10(entity_val);
    return mciSendCommandA(g_5ca130, 0x804, 0, 0);
}
