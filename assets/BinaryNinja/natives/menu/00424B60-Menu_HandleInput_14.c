// Original IGI.EXE function: Menu_HandleInput_14 (VA 0x00424B60; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_14.h"
struct status_msg* Menu_HandleInput_14(void* a1, int32_t a2)

{
    return QTask_HandleInput(a1, Menu_PlayMusic_13(), a2);
}
