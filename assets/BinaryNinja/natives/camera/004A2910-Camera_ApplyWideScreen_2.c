#include "Camera_ApplyWideScreen_2.h"
struct status_msg* Camera_ApplyWideScreen_2(void* a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5)

{
    int32_t kind = QHash_ValueGet();
    char ctxB = kind;

    if (!ctxB)
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
    result->head[0xc] = Sys_DispatchOpcode_18(g_936024);
    Sys_IlfFileCorruptS(&result->head[0xd], g_936020);

    if (!ctxB)
        Sys_DispatchOpcode_2();

    return result;
}
