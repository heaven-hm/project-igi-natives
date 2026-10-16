#include "00485300-GameScreen_OnEvent.h"
/* 0x00485300 GameScreen_OnEvent full linked: callers=1 callees=1 */
struct status_msg* sub_485300(void* a1)

{
    int32_t kind;
    kind = g_5c8a28;
    return QTask_HandleInput(a1, kind, 0);
}
