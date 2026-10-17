// Original IGI.EXE function: Menu_HandleInput_17 (VA 0x00426D80; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_17.h"
int32_t Menu_HandleInput_17(void* context, char param_2)

{
    *(context + 0x140) = param_2;
    return param_2;
}
