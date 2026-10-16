#include "0045BC90-AI_CombatTarget_15.h"
/* 0x0045bc90 AI_CombatTarget_15 full linked: callers=0 callees=1 */
int32_t sub_45bc90(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45bcc0;
    return result;
}
