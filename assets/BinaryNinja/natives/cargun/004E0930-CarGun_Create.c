// Original IGI.EXE function: CarGun_Create (VA 0x004E0930; static CFG gate PASS, CFG score 1.000).
#include "CarGun_Create.h"
struct status_msg* CarGun_Create(void* a1, uint32_t a2)

{
    int32_t kind;
    kind = g_a5e364;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    result->head[8] = a2;
    return result;
}
