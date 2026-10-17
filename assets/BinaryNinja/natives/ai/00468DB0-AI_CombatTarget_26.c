// Original IGI.EXE function: AI_CombatTarget_26 (VA 0x00468DB0; static CFG gate PASS, CFG score 1.000).
#include "AI_CombatTarget_26.h"
struct status_msg* AI_CombatTarget_26(void* a1)

{
    int32_t kind;
    kind = g_5bdc98;
    return QTask_HandleInput(a1, kind, 0);
}
