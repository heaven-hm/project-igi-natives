#include "0045AFD0-AI_FireWeapon_13.h"
/* 0x0045afd0 AI_FireWeapon_13 full linked: callers=0 callees=1 */
int32_t sub_45afd0(void* a1, void* a2)

{
    *(a2 + 0x33d) = 1;
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45b900;
    return result;
}
