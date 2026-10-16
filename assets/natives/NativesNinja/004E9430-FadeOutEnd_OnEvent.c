#include "004E9430-FadeOutEnd_OnEvent.h"
/* 0x004e9430 FadeOutEnd_OnEvent full linked: callers=1 callees=2 */
struct status_msg* sub_4e9430(void* a1)

{
    int32_t kind;
    kind = g_a5ec70;
    struct status_msg* result = QTask_HandleInput(a1, kind, 0);
    sub_4e9090(result);
    return result;
}
