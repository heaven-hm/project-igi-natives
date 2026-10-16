#include "gi_platform.h"
#include "004A2430-Camera_ApplyPostProcess.h"
struct status_msg* Camera_ApplyPostProcess(void* a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6, uint32_t a7, uint32_t a8, uint32_t a9, uint32_t a10)

{
    int32_t kind;
    kind = g_543d4e;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    result->head[9] = a3;
    result->head[0xa] = a4;
    result->head[0xb] = a5;
    result->head[0xc] = a6;
    result->head[0xd] = a7;
    result->head[0xe] = a8;
    result->head[0xf] = a9;
    result->head[0x10] = a10;
    return result;
}
