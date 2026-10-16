#include "00486620-FX_SmokeEmit_7.h"
/* 0x00486620 FX_SmokeEmit_7 full linked: callers=1 callees=3 */
struct status_msg* sub_486620(void* a1)

{
    int32_t kind = Qhash_Init(1);
    kind = g_540b08;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    Qhash_Reset();
    return result;
}
