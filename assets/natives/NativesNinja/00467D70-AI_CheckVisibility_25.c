#include "00467D70-AI_CheckVisibility_25.h"
/* 0x00467d70 AI_CheckVisibility_25 full linked: callers=1 callees=1 */
struct status_msg* sub_467d70(void* a1)

{
    int32_t kind;
    kind = g_53f580;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = 0;
    return result;
}
