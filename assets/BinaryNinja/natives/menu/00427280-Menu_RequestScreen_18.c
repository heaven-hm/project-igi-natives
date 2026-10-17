// Original IGI.EXE function: Menu_RequestScreen_18 (VA 0x00427280; static CFG gate PASS, CFG score 1.000).
#include "Menu_RequestScreen_18.h"
uint32_t Menu_RequestScreen_18()

{
    int32_t data_val;
    data_val = g_57bc7c;
    return QTask_CloseEvent_2(data_val);
}
