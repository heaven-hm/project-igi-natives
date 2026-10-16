#include "00401AE0-QTask_LinkEventHandler_2.h"
/* 0x00401ae0 QTask_LinkEventHandler_2 full linked: callers=47 callees=0 */
int32_t* QTask_LinkEventHandler_2(void* a1)

{
    int32_t ecx_3 = g_567c40;
    int32_t* result = *(g_567c3c + (ecx_3 << 2)) * g_567c48 + g_567c38;
    *(g_567c4c + result) = ecx_3;
    g_567c40 += 1;
    *result = a1;
    *(a1 + 0x18) += 1;
    return result;
}
