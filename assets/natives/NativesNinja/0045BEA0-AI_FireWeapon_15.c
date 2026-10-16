#include "0045BEA0-AI_FireWeapon_15.h"
/* 0x0045bea0 AI_FireWeapon_15 full linked: callers=0 callees=1 */
int32_t sub_45bea0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45bed0;
    return result;
}
