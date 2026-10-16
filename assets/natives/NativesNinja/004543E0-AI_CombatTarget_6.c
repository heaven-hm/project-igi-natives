#include "004543E0-AI_CombatTarget_6.h"
/* 0x004543e0 AI_CombatTarget_6 full linked: callers=0 callees=1 */
int32_t sub_4543e0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 0;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_454410;
    return result;
}
