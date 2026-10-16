#include "00459750-AI_FireWeapon_12.h"
/* 0x00459750 AI_FireWeapon_12 full linked: callers=0 callees=10 */
void* sub_459750(void* a1, float a2)

{
    float esi = a2;
    double* eax = sub_4636e0(esi);
    *(esi + 0x696) = 0;
    double var_58;
    float var_28;
    sub_444b30(eax, &var_58, &var_28);
    int32_t var_48 = *(esi + 0x30);
    float var_18;
    double var_38 = var_18 * 2867.1999999999998;
    int32_t var_44 = *(esi + 0x34);
    float var_24;
    var_58 = var_24 * 2867.1999999999998 + var_58;
    double var_50;
    double var_50_1 = var_38 + var_50;
    sub_4631a0(esi, &var_58);
    float var_60;
    float var_5c;
    sub_4b3c50(&var_28, &var_5c, &var_60, &a2);
    a2 = a2 + 3.14159274f;
    sub_463220(esi, a2);
    sub_489ea0(esi, 0x27, 0, 0f);
    sub_464720(*(esi + 0x4ec));
    sub_464700(*(esi + 0x4ec));
    sub_4635f0(esi);
    sub_463310(esi, eax);
    *(a1 + 0x14) = sub_45c9b0;
    return a1;
}
