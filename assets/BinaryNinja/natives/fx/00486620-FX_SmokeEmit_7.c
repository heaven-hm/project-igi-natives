#include "FX_SmokeEmit_7.h"
struct status_msg* FX_SmokeEmit_7(void* a1)

{
    int32_t kind = Qhash_Init(1);
    kind = g_540b08;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
