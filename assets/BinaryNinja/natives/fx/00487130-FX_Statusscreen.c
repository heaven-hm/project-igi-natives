#include "FX_Statusscreen.h"
int32_t FX_Statusscreen()

{
    QTask_InitContext(g_540b5c);
    int16_t objC = g_5c8a74;
    g_540b5c = 0xff;
    QTask_CloseEvent_2(objC);
    return Sys_OpenFileStream_4("STATUSSCREEN:");
}
