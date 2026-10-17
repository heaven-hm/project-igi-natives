// Original IGI.EXE function: Menu_Slidevert (VA 0x004201E0; static CFG gate PASS, CFG score 1.000).
#include "Menu_Slidevert.h"
struct status_msg* Menu_Slidevert(void* context, int32_t param_2)

{
    int32_t kind;
    kind = g_53b6bc;
    struct status_msg* result = QTask_HandleInput(context, kind, param_2);
    result->head[0x15] = g_53b6f0[0];
    result->head[0x16] = g_53b6f0[4][0];
    result->sprite[0] = 0;
    result->head[0x2b] = 0x32;
    result->head[0x17] = g_53b6f0[8][0];
    *(result + 0x248) = 3;
    return result;
}
