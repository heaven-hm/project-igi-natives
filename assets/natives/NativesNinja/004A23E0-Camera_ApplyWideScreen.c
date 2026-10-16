#include "004A23E0-Camera_ApplyWideScreen.h"
/* 0x004a23e0 Camera_ApplyWideScreen full linked: callers=2 callees=1 */
struct status_msg* sub_4a23e0(void* a1, uint32_t a2, uint32_t a3, uint32_t a4, uint32_t a5, uint32_t a6)

{
    int32_t kind;
    kind = g_543d4c;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    result->head[9] = a3;
    result->head[0xa] = a4;
    result->head[0xb] = a5;
    result->head[0xc] = 0;
    result->head[0xd] = a6;
    return result;
}
