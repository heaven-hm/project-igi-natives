// Original IGI.EXE function: Menu_HandleInput_14 (VA 0x00424B60; static CFG gate PASS, CFG score 1.000).
#include "Menu_HandleInput_14.h"
struct status_msg* Menu_HandleInput_14(void* context, int32_t param_2)

{
    return QTask_HandleInput(context, Menu_PlayMusic_13(), param_2);
}
