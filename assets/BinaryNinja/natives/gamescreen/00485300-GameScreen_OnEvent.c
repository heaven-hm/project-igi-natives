// Original IGI.EXE function: GameScreen_OnEvent (VA 0x00485300; static CFG gate PASS, CFG score 1.000).
#include "GameScreen_OnEvent.h"
struct status_msg* GameScreen_OnEvent(void* a1)

{
    int32_t kind;
    kind = g_5c8a28;
    return QTask_HandleInput(a1, kind, 0);
}
