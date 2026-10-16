#include "004A2910-Camera_ApplyWideScreen_2.h"
/* 0x004a2910 Camera_ApplyWideScreen_2 full linked: callers=1 callees=7 */
struct status_msg* sub_4a2910(void* a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)

{
    int32_t kind = QHash_ValueGet();
    char ebx = kind;

    if (!ebx)
        QHash_ValueSet();

    kind = g_543d58;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    result->head[9] = a3;
    result->head[0xa] = a4;
    result->head[0xb] = a5;
    result->head[0x13] = 0;
    result->head[0x14] = Timer_Now();
    result->head[0xc] = 0;
    result->head[0xc] = sub_4b7000(g_936024);
    sub_4b6720(&result->head[0xd], g_936020);

    if (!ebx)
        sub_4b0d50();

    return result;
}
