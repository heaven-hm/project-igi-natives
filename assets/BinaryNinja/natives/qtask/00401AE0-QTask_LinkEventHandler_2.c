// Original IGI.EXE function: QTask_LinkEventHandler_2 (VA 0x00401AE0; static CFG gate PASS, CFG score 1.000).
#include "QTask_LinkEventHandler_2.h"
int32_t* QTask_LinkEventHandler_2(void* context)

{
    int32_t entity_3 = g_567c40;
    int32_t* result = *(g_567c3c + (entity_3 << 2)) * g_567c48 + g_567c38;
    *(g_567c4c + result) = entity_3;
    g_567c40 += 1;
    *result = context;
    *(context + 0x18) += 1;
    return result;
}
