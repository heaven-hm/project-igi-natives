#include "0046C020-AI_CheckSector_28.h"
/* 0x0046c020 AI_CheckSector_28 full linked: callers=1 callees=3 */
struct status_msg* sub_46c020(void* a1)

{
    int32_t kind = Qhash_Init(1);
    kind = g_5be2c4;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
