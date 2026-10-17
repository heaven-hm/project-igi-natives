// Original IGI.EXE function: AI_TakeCover_27 (VA 0x0046AAF0; static CFG gate PASS, CFG score 1.000).
#include "AI_TakeCover_27.h"
struct status_msg* AI_TakeCover_27(void* context)

{
    int32_t kind;
    kind = g_5bdd90;
    return QTask_HandleInput(context, kind, 0);
}
