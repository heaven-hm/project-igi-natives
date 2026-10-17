// Original IGI.EXE function: AI_CheckVisibility_25 (VA 0x00467D70; static CFG gate PASS, CFG score 1.000).
#include "AI_CheckVisibility_25.h"
struct status_msg* AI_CheckVisibility_25(void* a1)

{
    int32_t kind;
    kind = g_53f580;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = 0;
    return result;
}
