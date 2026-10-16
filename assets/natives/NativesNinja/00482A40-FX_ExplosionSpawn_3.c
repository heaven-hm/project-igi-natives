#include "00482A40-FX_ExplosionSpawn_3.h"
/* 0x00482a40 FX_ExplosionSpawn_3 full linked: callers=2 callees=6 */
int32_t sub_482a40(void* a1)

{
    void var_18;
    memcpy(&var_18, a1 + 0x70, 0x18);
    float var_94;
    memcpy(&var_94, a1 + 0x88, 0x28);
    int32_t result = *(a1 + 0xb0);
    float var_a4 = -1.57079637f;
    memcpy(a1 + 0xf0, a1 + 0x70, 0x18);
    float var_6c;
    sub_4b3b60(&var_6c, var_a4);
    float var_90;
    float var_8c;
    float var_60;
    float var_54;
    float var_40 = var_54 * var_8c + var_60 * var_90 + var_6c * var_94;
    float var_68;
    float var_5c;
    float var_50;
    float var_3c = var_50 * var_8c + var_5c * var_90 + var_68 * var_94;
    float var_64;
    float var_58;
    float var_4c;
    float var_38 = var_4c * var_8c + var_58 * var_90 + var_64 * var_94;
    float var_88;
    float var_84;
    float var_80;
    float var_34 = var_80 * var_54 + var_84 * var_60 + var_88 * var_6c;
    float var_30 = var_80 * var_50 + var_84 * var_5c + var_88 * var_68;
    float var_2c = var_80 * var_4c + var_84 * var_58 + var_88 * var_64;
    int32_t var_70;
    int32_t var_48;
    int32_t var_1c = var_48 + var_70 + 1;
    float var_7c;
    long double x87_r6_27 = var_7c * var_6c;
    memcpy(a1 + 0x20, &var_18, 0x18);
    float var_78;
    float var_74;
    float var_28 = var_74 * var_54 + var_78 * var_60 + x87_r6_27;
    *(a1 + 0x60) = result;
    float var_24 = var_74 * var_50 + var_78 * var_5c + var_7c * var_68;
    float var_20 = var_74 * var_4c + var_78 * var_58 + var_7c * var_64;
    memcpy(a1 + 0x38, &var_40, 0x28);
    return result;
}
