#include "gi_platform.h"
#include "0046C020-AI_CheckSector_28.h"
struct status_msg* AI_CheckSector_28(void* a1)

{
    Qhash_Init(1);
    int32_t kind = g_5be2c4;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
