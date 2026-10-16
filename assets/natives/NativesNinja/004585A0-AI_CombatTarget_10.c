#include "004585A0-AI_CombatTarget_10.h"
/* 0x004585a0 AI_CombatTarget_10 full linked: callers=0 callees=1 */
int32_t sub_4585a0(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45b1c0;
    return result;
}
