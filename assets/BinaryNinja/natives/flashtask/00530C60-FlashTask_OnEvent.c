// Original IGI.EXE function: FlashTask_OnEvent (VA 0x00530C60; static CFG gate PASS, CFG score 1.000).
#include "FlashTask_OnEvent.h"
uint32_t FlashTask_OnEvent()

{
    uint32_t result = QTask_CloseEvent_2(g_54f7a0);
    g_a845ec = 0;
    return result;
}
