#include "00470050-Weapon_ReloadClip.h"
/* 0x00470050 Weapon_ReloadClip full linked: callers=1 callees=9 */
int32_t sub_470050(double* a1)

{
    void* eax_1 = Table_GetAt(a1 + 0x1c4, 0);
    double var_18;
    WeaponType_UpdateAnim(&var_18, a1, 1);
    float edx = a1[0x38];
    float eax_2 = *(a1 + 0x1bc);
    var_18 = var_18 + a1[4];
    double var_10;
    double var_10_1 = var_10 + a1[5];
    double var_8;
    double var_8_1 = var_8 + a1[6];
    float var_94;
    sub_4b38e0(&var_94, eax_2, 0f, edx);
    void* eax_3 = a1[0x26];
    float var_88;
    float var_7c;
    float var_44 = var_88 * *(eax_3 + 0x74) + var_7c * *(eax_3 + 0x78) + var_94 * *(eax_3 + 0x70);
    float var_90;
    float var_84;
    float var_78;
    float var_40 = var_84 * *(eax_3 + 0x74) + var_78 * *(eax_3 + 0x78) + var_90 * *(eax_3 + 0x70);
    float var_8c;
    float var_80;
    float var_74;
    float var_3c = var_80 * *(eax_3 + 0x74) + var_74 * *(eax_3 + 0x78) + var_8c * *(eax_3 + 0x70);
    float var_38 = var_7c * *(eax_3 + 0x84) + var_94 * *(eax_3 + 0x7c) + var_88 * *(eax_3 + 0x80);
    int32_t edx_1 = *(eax_3 + 0x94);
    float var_34 = var_78 * *(eax_3 + 0x84) + var_90 * *(eax_3 + 0x7c) + var_84 * *(eax_3 + 0x80);
    float var_30 = var_74 * *(eax_3 + 0x84) + var_8c * *(eax_3 + 0x7c) + var_80 * *(eax_3 + 0x80);
    float var_2c = var_88 * *(eax_3 + 0x8c) + var_7c * *(eax_3 + 0x90) + var_94 * *(eax_3 + 0x88);
    float var_28 = var_84 * *(eax_3 + 0x8c) + var_78 * *(eax_3 + 0x90) + var_90 * *(eax_3 + 0x88);
    int32_t var_70;
    int32_t var_20 = edx_1 + var_70 + 1;
    float var_24 = var_80 * *(eax_3 + 0x8c) + var_74 * *(eax_3 + 0x90) + var_8c * *(eax_3 + 0x88);
    long double x87_r7_42 = *(a1 + 0x1e4);
    float var_6c;
    memcpy(&var_6c, &var_44, 0x28);
    long double temp0 = 0f;
    x87_r7_42 - temp0;

    if (!(*(&((x87_r7_42 < temp0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_42, temp0) ? 1 : 0) << 0xa
        | (x87_r7_42 == temp0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        sub_4b3ba0(&var_94, x87_r7_42);
        float var_68;
        float var_64;
        var_44 = var_64 * var_7c + var_68 * var_88 + var_6c * var_94;
        float var_40_1 = var_64 * var_78 + var_68 * var_84 + var_6c * var_90;
        float var_3c_1 = var_64 * var_74 + var_68 * var_80 + var_6c * var_8c;
        float var_60;
        float var_5c;
        float var_58;
        float var_38_1 = var_58 * var_7c + var_5c * var_88 + var_60 * var_94;
        float var_34_1 = var_58 * var_78 + var_5c * var_84 + var_60 * var_90;
        var_30 = var_58 * var_74 + var_5c * var_80 + var_60 * var_8c;
        float var_54;
        float var_50;
        float var_4c;
        float var_2c_1 = var_4c * var_7c + var_50 * var_88 + var_54 * var_94;
        int32_t var_48;
        int32_t var_20_1 = var_48 + var_70 + 1;
        float var_28_1 = var_4c * var_78 + var_50 * var_84 + var_54 * var_90;
        float var_24_1 = var_4c * var_74 + var_50 * var_80 + var_54 * var_8c;
        memcpy(&var_6c, &var_44, 0x28);
    }

    int32_t result = sub_4f2310(eax_1, &var_18, &var_6c);
    memcpy(&a1[0x2f], &var_18, 0x18);
    memcpy(&a1[0x32], &var_6c, 0x28);
    return result;
}
