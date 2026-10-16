#include "00458FB0-AI_FireWeapon_11.h"
/* 0x00458fb0 AI_FireWeapon_11 full linked: callers=0 callees=1 */
int32_t sub_458fb0(void* a1, void* a2)

{
    *(a2 + 0x696) = 0;
    int32_t result = sub_489e70(a2, *(a1 + 0x10), 0f);
    *(a1 + 0x14) = sub_45bcc0;
    return result;
}
