#include "00439B70-AlarmLight_Cleanup_2.h"
/* 0x00439b70 AlarmLight_Cleanup_2 full linked: callers=0 callees=2 */
int32_t AlarmLight_Cleanup_2(float a1)

{
    void* esi = *(a1 + 0x130);
    int32_t result;
    result = *(esi + 0x1a0);

    if (result)
    {
        result = *(esi + 0x1a1);

        if (!result)
        {
            long double x87_r7_2 = *(a1 + 0x138) + 0.104719758f;
            *(a1 + 0x138) = x87_r7_2;
            float var_50;
            sub_4b3b60(&var_50, x87_r7_2);
            float var_44;
            float var_38;
            long double x87_r7_6 =
                var_44 * *(a1 + 0x10c) + var_38 * *(a1 + 0x110) + var_50 * *(a1 + 0x108);
            float var_4c;
            float var_40;
            float var_34;
            float var_24_1 =
                var_40 * *(a1 + 0x10c) + var_34 * *(a1 + 0x110) + var_4c * *(a1 + 0x108);
            float var_48;
            float var_3c;
            float var_30;
            float var_20_1 =
                var_3c * *(a1 + 0x10c) + var_30 * *(a1 + 0x110) + var_48 * *(a1 + 0x108);
            long double x87_r6_16 =
                var_38 * *(a1 + 0x11c) + var_50 * *(a1 + 0x114) + var_44 * *(a1 + 0x118);
            float var_18_1 =
                var_34 * *(a1 + 0x11c) + var_4c * *(a1 + 0x114) + var_40 * *(a1 + 0x118);
            float var_14_1 =
                var_30 * *(a1 + 0x11c) + var_48 * *(a1 + 0x114) + var_3c * *(a1 + 0x118);
            long double x87_r5_24 =
                var_44 * *(a1 + 0x124) + var_38 * *(a1 + 0x128) + var_50 * *(a1 + 0x120);
            int32_t var_2c;
            result = *(a1 + 0x12c) + var_2c + 1;
            float var_c_1 =
                var_40 * *(a1 + 0x124) + var_34 * *(a1 + 0x128) + var_4c * *(a1 + 0x120);
            float var_8_1 =
                var_3c * *(a1 + 0x124) + var_30 * *(a1 + 0x128) + var_48 * *(a1 + 0x120);
            var_50 =
                x87_r7_6 * *(esi + 0x70) + x87_r5_24 * *(esi + 0x78) + x87_r6_16 * *(esi + 0x74);
            float var_4c_1 =
                var_24_1 * *(esi + 0x70) + var_c_1 * *(esi + 0x78) + var_18_1 * *(esi + 0x74);
            float var_48_1 =
                var_20_1 * *(esi + 0x70) + var_8_1 * *(esi + 0x78) + var_14_1 * *(esi + 0x74);
            float var_44_1 =
                x87_r7_6 * *(esi + 0x7c) + x87_r5_24 * *(esi + 0x84) + x87_r6_16 * *(esi + 0x80);
            float var_40_1 =
                var_24_1 * *(esi + 0x7c) + var_c_1 * *(esi + 0x84) + var_18_1 * *(esi + 0x80);
            float var_3c_1 =
                var_20_1 * *(esi + 0x7c) + var_8_1 * *(esi + 0x84) + var_14_1 * *(esi + 0x80);
            int32_t var_2c_1 = *(esi + 0x94) + result + 1;
            float var_38_1 =
                x87_r5_24 * *(esi + 0x90) + x87_r6_16 * *(esi + 0x8c) + x87_r7_6 * *(esi + 0x88);
            float var_34_1 =
                var_c_1 * *(esi + 0x90) + var_18_1 * *(esi + 0x8c) + var_24_1 * *(esi + 0x88);
            float var_30_1 =
                var_8_1 * *(esi + 0x90) + var_14_1 * *(esi + 0x8c) + var_20_1 * *(esi + 0x88);
            memcpy(a1 + 0x70, &var_50, 0x28);
        }
    }

    int32_t* i_1 = *(a1 + 8);

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t edx_3 = g_afa7e0;

            do
            {
                int32_t* esi_1 = *i;
                void* eax_5;

                if (!esi_1)
                    eax_5 = nullptr;
                else
                {
                    int32_t eax_2 = *esi_1;
                    int32_t eax_3 = -(eax_2);
                    eax_5 = (eax_3 - eax_3) & esi_1;
                }

                *((edx_3 << 2) + &g_afa6e0) = eax_5;
                int32_t edx_4 = edx_3 + 1;
                int32_t eax_6 = 0;
                g_afa7e0 = edx_4;
                eax_6 = i[7];
                result = *((eax_6 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    edx_4 = g_afa7e0;
                }

                i = *((edx_4 << 2) + &g_afa6dc);
                edx_3 = edx_4 - 1;
                g_afa7e0 = edx_3;
            } while (i);
        }
    }

    return result;
}
