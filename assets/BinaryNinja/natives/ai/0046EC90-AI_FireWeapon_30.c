// Original IGI.EXE function: AI_FireWeapon_30 (VA 0x0046EC90; static CFG gate FAIL, CFG score 0.833).
#include "AI_FireWeapon_30.h"
void* AI_FireWeapon_30(double* a1, float* a2)

{
    void* result = Table_GetAt(a1 + 0x1c4, 0);

    if (result)
    {
        float v_94;
        Sys_DispatchOpcode_12(&v_94, a1[0x38]);
        float v_88;
        float v_7c;
        float v_6c = v_7c * a1[0x22] + v_94 * a1[0x21] + v_88 * *(a1 + 0x10c);
        float v_90;
        float v_84;
        float v_78;
        float v_68_1 = v_78 * a1[0x22] + v_90 * a1[0x21] + v_84 * *(a1 + 0x10c);
        float v_8c;
        float v_80;
        float v_74;
        float v_64_1 = v_74 * a1[0x22] + v_8c * a1[0x21] + v_80 * *(a1 + 0x10c);
        float v_60_1 = v_7c * *(a1 + 0x11c) + v_94 * *(a1 + 0x114) + v_88 * a1[0x23];
        float v_5c_1 = v_78 * *(a1 + 0x11c) + v_90 * *(a1 + 0x114) + v_84 * a1[0x23];
        float v_58_1 = v_74 * *(a1 + 0x11c) + v_8c * *(a1 + 0x114) + v_80 * a1[0x23];
        float v_54_1 = v_7c * a1[0x25] + v_94 * a1[0x24] + v_88 * *(a1 + 0x124);
        int32_t v_70;
        int32_t valA2 = *(a1 + 0x12c) + v_70 + 1;
        int32_t v_48_1 = valA2;
        float v_50_1 = v_78 * a1[0x25] + v_90 * a1[0x24] + v_84 * *(a1 + 0x124);
        float v_4c_1 = v_74 * a1[0x25] + v_8c * a1[0x24] + v_80 * *(a1 + 0x124);
        long double x87_r7_38 = v_54_1 * a2[2];
        long double x87_r6_38 = v_60_1 * a2[1];
        memcpy(&v_94, &v_6c, 0x28);
        float v_44 = x87_r7_38 + x87_r6_38 + v_6c * *a2;
        float v_40_1 = v_50_1 * a2[2] + v_5c_1 * a2[1] + v_68_1 * *a2;
        float v_3c_1 = v_4c_1 * a2[2] + v_58_1 * a2[1] + v_64_1 * *a2;
        float v_38_1 = v_6c * a2[3] + v_54_1 * a2[5] + v_60_1 * a2[4];
        float v_34_1 = v_68_1 * a2[3] + v_50_1 * a2[5] + v_5c_1 * a2[4];
        int32_t v_b0_1 = 1;
        int32_t v_20_1 = a2[9] + valA2 + 1;
        float v_30 = v_64_1 * a2[3] + v_4c_1 * a2[5] + v_58_1 * a2[4];
        float v_2c_1 = v_6c * a2[6] + v_54_1 * a2[8] + v_60_1 * a2[7];
        float v_28_1 = v_68_1 * a2[6] + v_50_1 * a2[8] + v_5c_1 * a2[7];
        float v_24_1 = v_64_1 * a2[6] + v_4c_1 * a2[8] + v_58_1 * a2[7];
        memcpy(&a1[0xe], &v_44, 0x28);
        double v_18;
        WeaponType_UpdateAnim(&v_18, a1, v_b0_1);
        float tmpD2 = *(a1 + 0x1e4);
        float valA4 = *(a1 + 0x1bc);
        v_18 = v_18 + a1[4];
        double v_10;
        double v_10_1 = v_10 + a1[5];
        double v_8;
        double v_8_1 = v_8 + a1[6];
        Sys_ReadFileBlock_12(&v_94, valA4, tmpD2, a1[0x38] + 3.14159274f);
        long double x87_r7_84 =
            v_7c * a1[0x22] + v_94 * a1[0x21] + v_88 * *(a1 + 0x10c);
        int32_t valA6 = *(a1 + 0x12c) + v_70 + 1;
        float v_68_2 = v_78 * a1[0x22] + v_90 * a1[0x21] + v_84 * *(a1 + 0x10c);
        float v_64_2 = v_74 * a1[0x22] + v_8c * a1[0x21] + v_80 * *(a1 + 0x10c);
        long double x87_r6_88 =
            v_7c * *(a1 + 0x11c) + v_94 * *(a1 + 0x114) + v_88 * a1[0x23];
        float v_5c_2 = v_78 * *(a1 + 0x11c) + v_90 * *(a1 + 0x114) + v_84 * a1[0x23];
        float v_58_2 = v_74 * *(a1 + 0x11c) + v_8c * *(a1 + 0x114) + v_80 * a1[0x23];
        long double x87_r5_24 =
            v_7c * a1[0x25] + v_94 * a1[0x24] + v_88 * *(a1 + 0x124);
        float v_50_2 = v_78 * a1[0x25] + v_90 * a1[0x24] + v_84 * *(a1 + 0x124);
        float v_4c_2 = v_74 * a1[0x25] + v_8c * a1[0x24] + v_80 * *(a1 + 0x124);
        v_44 = x87_r7_84 * *a2 + x87_r5_24 * a2[2] + x87_r6_88 * a2[1];
        float v_40_2 = v_68_2 * *a2 + v_50_2 * a2[2] + v_5c_2 * a2[1];
        float v_3c_2 = v_64_2 * *a2 + v_4c_2 * a2[2] + v_58_2 * a2[1];
        float v_38_2 = x87_r5_24 * a2[5] + x87_r6_88 * a2[4] + x87_r7_84 * a2[3];
        float v_34_2 = v_50_2 * a2[5] + v_5c_2 * a2[4] + v_68_2 * a2[3];
        v_30 = v_4c_2 * a2[5] + v_58_2 * a2[4] + v_64_2 * a2[3];
        float v_2c_2 = x87_r7_84 * a2[6] + x87_r5_24 * a2[8] + x87_r6_88 * a2[7];
        float v_28_2 = v_68_2 * a2[6] + v_50_2 * a2[8] + v_5c_2 * a2[7];
        int32_t v_20_2 = a2[9] + valA6 + 1;
        float v_24_2 = v_64_2 * a2[6] + v_4c_2 * a2[8] + v_58_2 * a2[7];
        memcpy(&v_94, &v_44, 0x28);
        float* v_b8_2 = &v_94;
        double* v_bc = &v_18;
        result = Script_FormatString_12(result, v_bc, v_b8_2);
        memcpy(&a1[0x2f], &v_18, 0x18);
        memcpy(&a1[0x32], &v_94, 0x28);
    }

    return result;
}
