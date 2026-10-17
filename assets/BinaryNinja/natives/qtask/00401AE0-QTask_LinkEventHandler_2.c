// Original IGI.EXE function: QTask_LinkEventHandler_2 (VA 0x00401AE0; static CFG gate PASS, CFG score 1.000).
#include "QTask_LinkEventHandler_2.h"
int32_t* QTask_LinkEventHandler_2(void* a1)

{
    int32_t objC3 = g_567c40;
    int32_t* result = *(g_567c3c + (objC3 << 2)) * g_567c48 + g_567c38;
    *(g_567c4c + result) = objC3;
    g_567c40 += 1;
    *result = a1;
    *(a1 + 0x18) += 1;
    return result;
}
