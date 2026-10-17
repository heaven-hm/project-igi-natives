// Original IGI.EXE function: CameraControlTask_Process (VA 0x004E7D40; static CFG gate PASS, CFG score 1.000).
#include "CameraControlTask_Process.h"
struct status_msg* CameraControlTask_Process(void* context, uint32_t param_2)

{
    int32_t kind;
    kind = g_54d974;
    struct status_msg* result = QTask_HandleInput(context, kind, 0);
    result->head[8] = param_2;
    result->head[9] = 0;
    result->head[0xa] = 0;
    return result;
}
