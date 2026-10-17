// Original IGI.EXE function: Screen_Update (VA 0x004E7500; static CFG gate PASS, CFG score 1.000).
#include "Screen_Update.h"
uint32_t Screen_Update()

{
    QTask_CreateTask_2(g_5488c8);
    int16_t entity_val = g_a5e618;
    g_5488c8 = 0xff;
    uint32_t result = QTask_CloseEvent_2(entity_val);
    g_a5ea66 = 0;
    return result;
}
