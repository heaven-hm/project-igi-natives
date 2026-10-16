#include "00428630-Menu_LeaveMenus_19.h"
/* 0x00428630 Menu_LeaveMenus_19 full linked: callers=1 callees=12 */
int32_t Menu_LeaveMenus_19(float a1)

{
    float ebx = a1;
    int32_t result_2 = *(ebx + 0x878) + 1;
    int32_t result = result_2;
    bool cond:0 = result < *(ebx + 0x880);
    *(ebx + 0x878) = result_2;

    if (!cond:0)
    {
        long double st0_1 = sub_4b4770(0x57bc88);
        float ecx_2 = *(ebx + 0xf8);
        int32_t eax_2 = *(*(*(**(ebx + 0x6c) + 0xc) + 0xc) + 0x7c);
        *(ebx + 0x878) = 0;
        int32_t i_2;
        float var_3c;
        double var_18;
        double var_10;
        double var_8;

        if (eax_2)
        {
            long double x87_r7_8;

            if (eax_2 != 1)
            {
                WeaponType_UpdateAnim(&var_18, ebx, 1);
                var_18 = var_18 + *(ebx + 0x20);
                var_10 = var_10 + *(ebx + 0x28);
                x87_r7_8 = var_8 + *(ebx + 0x30);
            }
            else
            {
                WeaponType_RegisterType_2(&i_2, ebx, 0);
                float var_44;
                long double x87_r7_5 = -(var_44);
                float var_40;
                long double x87_r6_3 = var_40 * *(ebx + 0x78) + i_2 * *(ebx + 0x70);
                memcpy(&var_18, ebx + 0x20, 0x18);
                var_3c = x87_r6_3 + x87_r7_5 * *(ebx + 0x74);
                float var_38_1 =
                    var_40 * *(ebx + 0x84) + i_2 * *(ebx + 0x7c) + x87_r7_5 * *(ebx + 0x80);
                long double x87_r7_7 =
                    var_40 * *(ebx + 0x90) + i_2 * *(ebx + 0x88) + x87_r7_5 * *(ebx + 0x8c);
                var_18 = var_3c + var_18;
                var_10 = var_38_1 + var_10;
                x87_r7_8 = x87_r7_7 + var_8;
            }

            var_8 = x87_r7_8;
        }
        else
            memcpy(&var_18, ebx + 0x20, 0x18);

        long double x87_r7_15 = ecx_2 / *(ebx + 0x884);
        int32_t var_24 = *(ebx + 0x114);
        result = *(ebx + 0x118);
        int32_t result_1 = result;
        int32_t var_1c_1 = *(ebx + 0x11c);
        i_2 = x87_r7_15;
        int32_t i_1 = i_2;
        a1 = i_1;

        if (i_1 <= 1)
        {
            i_1 = 1;
            a1 = 1.40129846e-45f;
        }

        long double x87_r7_16 = *(ebx + 0x108);
        double var_34 = *(ebx + 0x10c);
        double var_2c_1 = *(ebx + 0x110);
        long double x87_r6_21 = 1f / a1;
        a1 = x87_r6_21;
        var_3c = x87_r6_21 * x87_r7_16;
        var_34 = a1 * var_34;
        double var_2c_2 = a1 * var_2c_1;

        if (i_1 > 0)
        {
            int32_t i;

            do
            {
                sub_4b4770(0x57bc88);
                sub_4b4770(0x57bc88);
                sub_4b4770(0x57bc88);
                i_2 = *(ebx + 0x88c) * 3f;
                int16_t i_4 = i_2;
                i_2 = (sub_4b4770(0x57bc88) * 0.300000012f + 0.600000024f) * *(ebx + 0x88c) * 30f;
                int32_t i_3 = i_2;
                float var_70_1 = sub_4b4770(0x57bc88) * 6.28318548f;
                long double x87_r7_38 = 0.5f - sub_4b4770(0x57bc88);
                result = sub_4fe120(*(ebx + 0x868), &var_18, &var_24,
                    st0_1 * 0.300000012f + 0.150000006f, x87_r7_38 * 0.0376991145f, var_70_1,
                    0x3f800000, i_4, i_3);
                i = i_1;
                i_1 -= 1;
                var_18 = var_3c + var_18;
                var_10 = var_34 + var_10;
                var_8 = var_2c_2 + var_8;
            } while (i != 1);
        }
    }

    return result;
}
