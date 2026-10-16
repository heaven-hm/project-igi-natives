#include "0046EC90-AI_FireWeapon_30.h"
/* 0x0046ec90 AI_FireWeapon_30 full linked: callers=1 callees=10 */
void* sub_46ec90(double* a1, float* a2)

{
    void* result = Table_GetAt(a1 + 0x1c4, 0);

    if (result)
    {
        float var_94;
        sub_4b3be0(&var_94, a1[0x38]);
        float var_88;
        float var_7c;
        float var_6c = var_7c * a1[0x22] + var_94 * a1[0x21] + var_88 * *(a1 + 0x10c);
        float var_90;
        float var_84;
        float var_78;
        float var_68_1 = var_78 * a1[0x22] + var_90 * a1[0x21] + var_84 * *(a1 + 0x10c);
        float var_8c;
        float var_80;
        float var_74;
        float var_64_1 = var_74 * a1[0x22] + var_8c * a1[0x21] + var_80 * *(a1 + 0x10c);
        float var_60_1 = var_7c * *(a1 + 0x11c) + var_94 * *(a1 + 0x114) + var_88 * a1[0x23];
        float var_5c_1 = var_78 * *(a1 + 0x11c) + var_90 * *(a1 + 0x114) + var_84 * a1[0x23];
        float var_58_1 = var_74 * *(a1 + 0x11c) + var_8c * *(a1 + 0x114) + var_80 * a1[0x23];
        float var_54_1 = var_7c * a1[0x25] + var_94 * a1[0x24] + var_88 * *(a1 + 0x124);
        int32_t var_70;
        int32_t eax_2 = *(a1 + 0x12c) + var_70 + 1;
        int32_t var_48_1 = eax_2;
        float var_50_1 = var_78 * a1[0x25] + var_90 * a1[0x24] + var_84 * *(a1 + 0x124);
        float var_4c_1 = var_74 * a1[0x25] + var_8c * a1[0x24] + var_80 * *(a1 + 0x124);
        long double x87_r7_38 = var_54_1 * a2[2];
        long double x87_r6_38 = var_60_1 * a2[1];
        memcpy(&var_94, &var_6c, 0x28);
        float var_44 = x87_r7_38 + x87_r6_38 + var_6c * *a2;
        float var_40_1 = var_50_1 * a2[2] + var_5c_1 * a2[1] + var_68_1 * *a2;
        float var_3c_1 = var_4c_1 * a2[2] + var_58_1 * a2[1] + var_64_1 * *a2;
        float var_38_1 = var_6c * a2[3] + var_54_1 * a2[5] + var_60_1 * a2[4];
        float var_34_1 = var_68_1 * a2[3] + var_50_1 * a2[5] + var_5c_1 * a2[4];
        int32_t var_b0_1 = 1;
        int32_t var_20_1 = a2[9] + eax_2 + 1;
        float var_30 = var_64_1 * a2[3] + var_4c_1 * a2[5] + var_58_1 * a2[4];
        float var_2c_1 = var_6c * a2[6] + var_54_1 * a2[8] + var_60_1 * a2[7];
        float var_28_1 = var_68_1 * a2[6] + var_50_1 * a2[8] + var_5c_1 * a2[7];
        float var_24_1 = var_64_1 * a2[6] + var_4c_1 * a2[8] + var_58_1 * a2[7];
        memcpy(&a1[0xe], &var_44, 0x28);
        double var_18;
        WeaponType_UpdateAnim(&var_18, a1, var_b0_1);
        float edx_2 = *(a1 + 0x1e4);
        float eax_4 = *(a1 + 0x1bc);
        var_18 = var_18 + a1[4];
        double var_10;
        double var_10_1 = var_10 + a1[5];
        double var_8;
        double var_8_1 = var_8 + a1[6];
        sub_4b38e0(&var_94, eax_4, edx_2, a1[0x38] + 3.14159274f);
        long double x87_r7_84 =
            var_7c * a1[0x22] + var_94 * a1[0x21] + var_88 * *(a1 + 0x10c);
        int32_t eax_6 = *(a1 + 0x12c) + var_70 + 1;
        float var_68_2 = var_78 * a1[0x22] + var_90 * a1[0x21] + var_84 * *(a1 + 0x10c);
        float var_64_2 = var_74 * a1[0x22] + var_8c * a1[0x21] + var_80 * *(a1 + 0x10c);
        long double x87_r6_88 =
            var_7c * *(a1 + 0x11c) + var_94 * *(a1 + 0x114) + var_88 * a1[0x23];
        float var_5c_2 = var_78 * *(a1 + 0x11c) + var_90 * *(a1 + 0x114) + var_84 * a1[0x23];
        float var_58_2 = var_74 * *(a1 + 0x11c) + var_8c * *(a1 + 0x114) + var_80 * a1[0x23];
        long double x87_r5_24 =
            var_7c * a1[0x25] + var_94 * a1[0x24] + var_88 * *(a1 + 0x124);
        float var_50_2 = var_78 * a1[0x25] + var_90 * a1[0x24] + var_84 * *(a1 + 0x124);
        float var_4c_2 = var_74 * a1[0x25] + var_8c * a1[0x24] + var_80 * *(a1 + 0x124);
        var_44 = x87_r7_84 * *a2 + x87_r5_24 * a2[2] + x87_r6_88 * a2[1];
        float var_40_2 = var_68_2 * *a2 + var_50_2 * a2[2] + var_5c_2 * a2[1];
        float var_3c_2 = var_64_2 * *a2 + var_4c_2 * a2[2] + var_58_2 * a2[1];
        float var_38_2 = x87_r5_24 * a2[5] + x87_r6_88 * a2[4] + x87_r7_84 * a2[3];
        float var_34_2 = var_50_2 * a2[5] + var_5c_2 * a2[4] + var_68_2 * a2[3];
        var_30 = var_4c_2 * a2[5] + var_58_2 * a2[4] + var_64_2 * a2[3];
        float var_2c_2 = x87_r7_84 * a2[6] + x87_r5_24 * a2[8] + x87_r6_88 * a2[7];
        float var_28_2 = var_68_2 * a2[6] + var_50_2 * a2[8] + var_5c_2 * a2[7];
        int32_t var_20_2 = a2[9] + eax_6 + 1;
        float var_24_2 = var_64_2 * a2[6] + var_4c_2 * a2[8] + var_58_2 * a2[7];
        memcpy(&var_94, &var_44, 0x28);
        float* var_b8_2 = &var_94;
        double* var_bc = &var_18;
        result = sub_4f2310(result, var_bc, var_b8_2);
        memcpy(&a1[0x2f], &var_18, 0x18);
        memcpy(&a1[0x32], &var_94, 0x28);
    }

    return result;
}
