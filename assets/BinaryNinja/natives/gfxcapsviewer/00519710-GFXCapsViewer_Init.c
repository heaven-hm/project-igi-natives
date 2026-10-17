// Original IGI.EXE function: GFXCapsViewer_Init (VA 0x00519710; static CFG gate PASS, CFG score 1.000).
#include "GFXCapsViewer_Init.h"
int32_t GFXCapsViewer_Init()

{
    int32_t v_4 = 0;
    g_ba2028 = TaskType_Register("GFXCapsViewer", 0x20, 0x181, 0);
    int32_t valA1 = Script_CallNativeHandler_5();
    int32_t v_8 = valA1;
    valA1 = g_ba2028;
    return QTask_RemoveEventCallback(valA1, v_8, sub_5196f0);
}
