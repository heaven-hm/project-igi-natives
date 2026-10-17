// Original IGI.EXE function: TerraDrawTask_Update (VA 0x004E8350; static CFG gate PASS, CFG score 1.000).
#include "TerraDrawTask_Update.h"
uint32_t TerraDrawTask_Update()

{
    uint32_t result = QTask_CloseEvent_2(g_54d9a0);
    g_54d9a0 = 0x181;
    return result;
}
