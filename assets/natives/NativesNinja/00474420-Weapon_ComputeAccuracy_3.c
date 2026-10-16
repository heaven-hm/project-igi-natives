#include "00474420-Weapon_ComputeAccuracy_3.h"
/* 0x00474420 Weapon_ComputeAccuracy_3 full linked: callers=3 callees=10 */
void* sub_474420(double* a1)

{
    void* result = Table_GetAt(a1 + 0x20c, 0);
    void* result_1 = result;

    if (result)
    {
        sub_4b3be0(&a1[0xe], *(a1 + 0x204));
        long double x87_r7_4 =
            a1[0x21] * a1[0xe] + a1[0x22] * a1[0x11] + *(a1 + 0x10c) * *(a1 + 0x7c);
        float var_28 = x87_r7_4;
        long double x87_r7_8 = a1[0x22] * *(a1 + 0x8c) + *(a1 + 0x10c) * a1[0x10]
            + a1[0x21] * *(a1 + 0x74);
        float var_24_1 = x87_r7_8;
        long double x87_r7_12 =
            a1[0x22] * a1[0x12] + *(a1 + 0x10c) * *(a1 + 0x84) + a1[0x21] * a1[0xf];
        float var_20_1 = x87_r7_12;
        long double x87_r7_16 = a1[0x11] * *(a1 + 0x11c) + a1[0x23] * *(a1 + 0x7c)
            + a1[0xe] * *(a1 + 0x114);
        float var_1c_1 = x87_r7_16;
        long double x87_r7_20 = a1[0x23] * a1[0x10] + *(a1 + 0x11c) * *(a1 + 0x8c)
            + *(a1 + 0x114) * *(a1 + 0x74);
        float var_18_1 = x87_r7_20;
        long double x87_r7_24 = a1[0x23] * *(a1 + 0x84) + *(a1 + 0x11c) * a1[0x12]
            + *(a1 + 0x114) * a1[0xf];
        float var_14_1 = x87_r7_24;
        long double x87_r7_28 =
            *(a1 + 0x124) * *(a1 + 0x7c) + a1[0x25] * a1[0x11] + a1[0x24] * a1[0xe];
        float var_10_1 = x87_r7_28;
        int32_t* eax_2 = *(a1 + 0x6c);
        int32_t var_4_1 = *(a1 + 0x12c) + *(a1 + 0x94) + 1;
        long double x87_r7_32 = a1[0x25] * *(a1 + 0x8c) + a1[0x24] * *(a1 + 0x74)
            + a1[0x10] * *(a1 + 0x124);
        float var_c_1 = x87_r7_32;
        long double x87_r7_36 =
            a1[0x25] * a1[0x12] + a1[0x24] * a1[0xf] + *(a1 + 0x84) * *(a1 + 0x124);
        float var_8_1 = x87_r7_36;
        memcpy(&a1[0xe], &var_28, 0x28);
        int32_t eax_4;

        if (!eax_2 || *(*(*(*eax_2 + 0xc) + 0xc) + 0x7c) >= 1)
            eax_4 = 1;
        else
            eax_4 = 0;

        double var_68;
        WeaponType_UpdateAnim(&var_68, a1, eax_4);
        float eax_5 = a1[0x40];
        var_68 = var_68 + a1[4];
        double var_60;
        double var_60_1 = var_60 + a1[5];
        double var_58;
        double var_58_1 = var_58 + a1[6];
        float var_50;
        sub_4b38e0(&var_50, eax_5, 0f, 3.14159274f);
        float var_44;
        float var_38;
        var_28 = var_50 * a1[0xe] + var_38 * a1[0xf] + var_44 * *(a1 + 0x74);
        float var_4c;
        float var_40;
        float var_34;
        float var_24_2 = var_4c * a1[0xe] + var_34 * a1[0xf] + var_40 * *(a1 + 0x74);
        float var_48;
        float var_3c;
        float var_30;
        float var_20_2 = var_48 * a1[0xe] + var_30 * a1[0xf] + var_3c * *(a1 + 0x74);
        float var_1c_2 = var_50 * *(a1 + 0x7c) + var_38 * *(a1 + 0x84) + var_44 * a1[0x10];
        float var_18_2 = var_4c * *(a1 + 0x7c) + var_34 * *(a1 + 0x84) + var_40 * a1[0x10];
        float var_14_2 = var_48 * *(a1 + 0x7c) + var_30 * *(a1 + 0x84) + var_3c * a1[0x10];
        int32_t var_2c;
        int32_t var_4_2 = *(a1 + 0x94) + var_2c + 1;
        float var_10_2 = var_50 * a1[0x11] + var_38 * a1[0x12] + var_44 * *(a1 + 0x8c);
        float var_c_2 = var_4c * a1[0x11] + var_34 * a1[0x12] + var_40 * *(a1 + 0x8c);
        float var_8_2 = var_48 * a1[0x11] + var_30 * a1[0x12] + var_3c * *(a1 + 0x8c);
        memcpy(&var_50, &var_28, 0x28);
        result = sub_4f2310(result_1, &var_68, &var_50);
        memcpy(&a1[0x2e], &var_68, 0x18);
        void* ebx_1 = a1[0x41];
        memcpy(&a1[0x31], &var_50, 0x28);

        if (ebx_1)
        {
            float var_70_1 = var_3c * 819.200012f - var_40 * 2048f;
            float var_6c_1 = var_30 * 819.200012f - var_34 * 2048f;
            var_68 = var_48 * 819.200012f - var_4c * 2048f + var_68;
            double var_60_2 = var_70_1 + var_60_1;
            double var_58_2 = var_6c_1 + var_58_1;
            return sub_4658d0(*(ebx_1 + 0x4ec), &var_68, &var_50);
        }
    }

    return result;
}
