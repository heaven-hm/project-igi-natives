#include "Weapon_ComputeAccuracy_3.h"
void* Weapon_ComputeAccuracy_3(double* a1)

{
    void* result = Table_GetAt(a1 + 0x20c, 0);
    void* result_1 = result;

    if (result)
    {
        Sys_DispatchOpcode_12(&a1[0xe], *(a1 + 0x204));
        long double x87_r7_4 =
            a1[0x21] * a1[0xe] + a1[0x22] * a1[0x11] + *(a1 + 0x10c) * *(a1 + 0x7c);
        float v_28 = x87_r7_4;
        long double x87_r7_8 = a1[0x22] * *(a1 + 0x8c) + *(a1 + 0x10c) * a1[0x10]
            + a1[0x21] * *(a1 + 0x74);
        float v_24_1 = x87_r7_8;
        long double x87_r7_12 =
            a1[0x22] * a1[0x12] + *(a1 + 0x10c) * *(a1 + 0x84) + a1[0x21] * a1[0xf];
        float v_20_1 = x87_r7_12;
        long double x87_r7_16 = a1[0x11] * *(a1 + 0x11c) + a1[0x23] * *(a1 + 0x7c)
            + a1[0xe] * *(a1 + 0x114);
        float v_1c_1 = x87_r7_16;
        long double x87_r7_20 = a1[0x23] * a1[0x10] + *(a1 + 0x11c) * *(a1 + 0x8c)
            + *(a1 + 0x114) * *(a1 + 0x74);
        float v_18_1 = x87_r7_20;
        long double x87_r7_24 = a1[0x23] * *(a1 + 0x84) + *(a1 + 0x11c) * a1[0x12]
            + *(a1 + 0x114) * a1[0xf];
        float v_14_1 = x87_r7_24;
        long double x87_r7_28 =
            *(a1 + 0x124) * *(a1 + 0x7c) + a1[0x25] * a1[0x11] + a1[0x24] * a1[0xe];
        float v_10_1 = x87_r7_28;
        int32_t* valA2 = *(a1 + 0x6c);
        int32_t v_4_1 = *(a1 + 0x12c) + *(a1 + 0x94) + 1;
        long double x87_r7_32 = a1[0x25] * *(a1 + 0x8c) + a1[0x24] * *(a1 + 0x74)
            + a1[0x10] * *(a1 + 0x124);
        float v_c_1 = x87_r7_32;
        long double x87_r7_36 =
            a1[0x25] * a1[0x12] + a1[0x24] * a1[0xf] + *(a1 + 0x84) * *(a1 + 0x124);
        float v_8_1 = x87_r7_36;
        memcpy(&a1[0xe], &v_28, 0x28);
        int32_t valA4;

        if (!valA2 || *(*(*(*valA2 + 0xc) + 0xc) + 0x7c) >= 1)
            valA4 = 1;
        else
            valA4 = 0;

        double v_68;
        WeaponType_UpdateAnim(&v_68, a1, valA4);
        float valA5 = a1[0x40];
        v_68 = v_68 + a1[4];
        double v_60;
        double v_60_1 = v_60 + a1[5];
        double v_58;
        double v_58_1 = v_58 + a1[6];
        float v_50;
        Sys_ReadFileBlock_12(&v_50, valA5, 0f, 3.14159274f);
        float v_44;
        float v_38;
        v_28 = v_50 * a1[0xe] + v_38 * a1[0xf] + v_44 * *(a1 + 0x74);
        float v_4c;
        float v_40;
        float v_34;
        float v_24_2 = v_4c * a1[0xe] + v_34 * a1[0xf] + v_40 * *(a1 + 0x74);
        float v_48;
        float v_3c;
        float v_30;
        float v_20_2 = v_48 * a1[0xe] + v_30 * a1[0xf] + v_3c * *(a1 + 0x74);
        float v_1c_2 = v_50 * *(a1 + 0x7c) + v_38 * *(a1 + 0x84) + v_44 * a1[0x10];
        float v_18_2 = v_4c * *(a1 + 0x7c) + v_34 * *(a1 + 0x84) + v_40 * a1[0x10];
        float v_14_2 = v_48 * *(a1 + 0x7c) + v_30 * *(a1 + 0x84) + v_3c * a1[0x10];
        int32_t v_2c;
        int32_t v_4_2 = *(a1 + 0x94) + v_2c + 1;
        float v_10_2 = v_50 * a1[0x11] + v_38 * a1[0x12] + v_44 * *(a1 + 0x8c);
        float v_c_2 = v_4c * a1[0x11] + v_34 * a1[0x12] + v_40 * *(a1 + 0x8c);
        float v_8_2 = v_48 * a1[0x11] + v_30 * a1[0x12] + v_3c * *(a1 + 0x8c);
        memcpy(&v_50, &v_28, 0x28);
        result = Script_FormatString_12(result_1, &v_68, &v_50);
        memcpy(&a1[0x2e], &v_68, 0x18);
        void* ctxB1 = a1[0x41];
        memcpy(&a1[0x31], &v_50, 0x28);

        if (ctxB1)
        {
            float v_70_1 = v_3c * 819.200012f - v_40 * 2048f;
            float v_6c_1 = v_30 * 819.200012f - v_34 * 2048f;
            v_68 = v_48 * 819.200012f - v_4c * 2048f + v_68;
            double v_60_2 = v_70_1 + v_60_1;
            double v_58_2 = v_6c_1 + v_58_1;
            return AI_AlertAllies_23(*(ctxB1 + 0x4ec), &v_68, &v_50);
        }
    }

    return result;
}
