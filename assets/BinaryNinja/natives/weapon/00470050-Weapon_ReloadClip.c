#include "Weapon_ReloadClip.h"
int32_t Weapon_ReloadClip(double* a1)

{
    void* valA1 = Table_GetAt(a1 + 0x1c4, 0);
    double v_18;
    WeaponType_UpdateAnim(&v_18, a1, 1);
    float tmpD = a1[0x38];
    float valA2 = *(a1 + 0x1bc);
    v_18 = v_18 + a1[4];
    double v_10;
    double v_10_1 = v_10 + a1[5];
    double v_8;
    double v_8_1 = v_8 + a1[6];
    float v_94;
    Sys_ReadFileBlock_12(&v_94, valA2, 0f, tmpD);
    void* valA3 = a1[0x26];
    float v_88;
    float v_7c;
    float v_44 = v_88 * *(valA3 + 0x74) + v_7c * *(valA3 + 0x78) + v_94 * *(valA3 + 0x70);
    float v_90;
    float v_84;
    float v_78;
    float v_40 = v_84 * *(valA3 + 0x74) + v_78 * *(valA3 + 0x78) + v_90 * *(valA3 + 0x70);
    float v_8c;
    float v_80;
    float v_74;
    float v_3c = v_80 * *(valA3 + 0x74) + v_74 * *(valA3 + 0x78) + v_8c * *(valA3 + 0x70);
    float v_38 = v_7c * *(valA3 + 0x84) + v_94 * *(valA3 + 0x7c) + v_88 * *(valA3 + 0x80);
    int32_t tmpD1 = *(valA3 + 0x94);
    float v_34 = v_78 * *(valA3 + 0x84) + v_90 * *(valA3 + 0x7c) + v_84 * *(valA3 + 0x80);
    float v_30 = v_74 * *(valA3 + 0x84) + v_8c * *(valA3 + 0x7c) + v_80 * *(valA3 + 0x80);
    float v_2c = v_88 * *(valA3 + 0x8c) + v_7c * *(valA3 + 0x90) + v_94 * *(valA3 + 0x88);
    float v_28 = v_84 * *(valA3 + 0x8c) + v_78 * *(valA3 + 0x90) + v_90 * *(valA3 + 0x88);
    int32_t v_70;
    int32_t v_20 = tmpD1 + v_70 + 1;
    float v_24 = v_80 * *(valA3 + 0x8c) + v_74 * *(valA3 + 0x90) + v_8c * *(valA3 + 0x88);
    long double x87_r7_42 = *(a1 + 0x1e4);
    float v_6c;
    memcpy(&v_6c, &v_44, 0x28);
    long double f0 = 0f;
    x87_r7_42 - f0;

    if (!(*(&((x87_r7_42 < f0 ? 1 : 0) << 8 | (FCMP_UO(x87_r7_42, f0) ? 1 : 0) << 0xa
        | (x87_r7_42 == f0 ? 1 : 0) << 0xe) + 1) & 0x40))
    {
        Sys_ExecuteBytecode_12(&v_94, x87_r7_42);
        float v_68;
        float v_64;
        v_44 = v_64 * v_7c + v_68 * v_88 + v_6c * v_94;
        float v_40_1 = v_64 * v_78 + v_68 * v_84 + v_6c * v_90;
        float v_3c_1 = v_64 * v_74 + v_68 * v_80 + v_6c * v_8c;
        float v_60;
        float v_5c;
        float v_58;
        float v_38_1 = v_58 * v_7c + v_5c * v_88 + v_60 * v_94;
        float v_34_1 = v_58 * v_78 + v_5c * v_84 + v_60 * v_90;
        v_30 = v_58 * v_74 + v_5c * v_80 + v_60 * v_8c;
        float v_54;
        float v_50;
        float v_4c;
        float v_2c_1 = v_4c * v_7c + v_50 * v_88 + v_54 * v_94;
        int32_t v_48;
        int32_t v_20_1 = v_48 + v_70 + 1;
        float v_28_1 = v_4c * v_78 + v_50 * v_84 + v_54 * v_90;
        float v_24_1 = v_4c * v_74 + v_50 * v_80 + v_54 * v_8c;
        memcpy(&v_6c, &v_44, 0x28);
    }

    int32_t result = Script_FormatString_12(valA1, &v_18, &v_6c);
    memcpy(&a1[0x2f], &v_18, 0x18);
    memcpy(&a1[0x32], &v_6c, 0x28);
    return result;
}
