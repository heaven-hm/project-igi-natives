#include "0045F240-AI_FireWeapon_17.h"
/* 0x0045f240 AI_FireWeapon_17 full linked: callers=3 callees=3 */
int32_t sub_45f240(float a1)

{
    char result = *(a1 + 0xd8);

    if (!result)
        return result;

    *(a1 + 0xd8) = 0;
    sub_4d38c0(a1 + 0x78, a1 + 0x68);
    int32_t var_1c_1 = sub_4d64c0(a1 + 0x68, 0);
    return sub_489f70(a1);
}
