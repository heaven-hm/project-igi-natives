#include "00468DB0-AI_CombatTarget_26.h"
/* 0x00468db0 AI_CombatTarget_26 full linked: callers=1 callees=1 */
struct status_msg* sub_468db0(void* a1)

{
    int32_t kind;
    kind = g_5bdc98;
    return QTask_HandleInput(a1, kind, 0);
}
