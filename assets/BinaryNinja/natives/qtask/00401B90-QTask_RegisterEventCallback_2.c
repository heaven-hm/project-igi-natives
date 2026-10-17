// Original IGI.EXE function: QTask_RegisterEventCallback_2 (VA 0x00401B90; static CFG gate PASS, CFG score 1.000).
#include "QTask_RegisterEventCallback_2.h"
int32_t QTask_RegisterEventCallback_2(int16_t context)

{
    return *(context * 0x30 + &g_af5ee0);
}
