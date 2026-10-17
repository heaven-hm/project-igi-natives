// Original IGI.EXE function: Camera_ApplyWideScreen (VA 0x004A23E0; static CFG gate PASS, CFG score 1.000).
#include "Camera_ApplyWideScreen.h"
struct status_msg* Camera_ApplyWideScreen(void* context, uint32_t param_2, uint32_t param_3, uint32_t param_4, uint32_t param_5, uint32_t param_6)

{
    int32_t kind;
    kind = g_543d4c;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[8] = param_2;
    result->head[9] = param_3;
    result->head[0xa] = param_4;
    result->head[0xb] = param_5;
    result->head[0xc] = 0;
    result->head[0xd] = param_6;
    return result;
}
