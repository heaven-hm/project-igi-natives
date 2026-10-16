#include "AlarmLight_Cleanup_2.h"
int32_t AlarmLight_Cleanup_2(float a1)

{
    void* srcS = *(a1 + 0x130);
    int32_t result;
    result = *(srcS + 0x1a0);

    if (result)
    {
        result = *(srcS + 0x1a1);

        if (!result)
        {
            long double x87_r7_2 = *(a1 + 0x138) + 0.104719758f;
            *(a1 + 0x138) = x87_r7_2;
            float v_50;
            Sys_CloseFileStream_12(&v_50, x87_r7_2);
            float v_44;
            float v_38;
            long double x87_r7_6 =
                v_44 * *(a1 + 0x10c) + v_38 * *(a1 + 0x110) + v_50 * *(a1 + 0x108);
            float v_4c;
            float v_40;
            float v_34;
            float v_24_1 =
                v_40 * *(a1 + 0x10c) + v_34 * *(a1 + 0x110) + v_4c * *(a1 + 0x108);
            float v_48;
            float v_3c;
            float v_30;
            float v_20_1 =
                v_3c * *(a1 + 0x10c) + v_30 * *(a1 + 0x110) + v_48 * *(a1 + 0x108);
            long double x87_r6_16 =
                v_38 * *(a1 + 0x11c) + v_50 * *(a1 + 0x114) + v_44 * *(a1 + 0x118);
            float v_18_1 =
                v_34 * *(a1 + 0x11c) + v_4c * *(a1 + 0x114) + v_40 * *(a1 + 0x118);
            float v_14_1 =
                v_30 * *(a1 + 0x11c) + v_48 * *(a1 + 0x114) + v_3c * *(a1 + 0x118);
            long double x87_r5_24 =
                v_44 * *(a1 + 0x124) + v_38 * *(a1 + 0x128) + v_50 * *(a1 + 0x120);
            int32_t v_2c;
            result = *(a1 + 0x12c) + v_2c + 1;
            float v_c_1 =
                v_40 * *(a1 + 0x124) + v_34 * *(a1 + 0x128) + v_4c * *(a1 + 0x120);
            float v_8_1 =
                v_3c * *(a1 + 0x124) + v_30 * *(a1 + 0x128) + v_48 * *(a1 + 0x120);
            v_50 =
                x87_r7_6 * *(srcS + 0x70) + x87_r5_24 * *(srcS + 0x78) + x87_r6_16 * *(srcS + 0x74);
            float v_4c_1 =
                v_24_1 * *(srcS + 0x70) + v_c_1 * *(srcS + 0x78) + v_18_1 * *(srcS + 0x74);
            float v_48_1 =
                v_20_1 * *(srcS + 0x70) + v_8_1 * *(srcS + 0x78) + v_14_1 * *(srcS + 0x74);
            float v_44_1 =
                x87_r7_6 * *(srcS + 0x7c) + x87_r5_24 * *(srcS + 0x84) + x87_r6_16 * *(srcS + 0x80);
            float v_40_1 =
                v_24_1 * *(srcS + 0x7c) + v_c_1 * *(srcS + 0x84) + v_18_1 * *(srcS + 0x80);
            float v_3c_1 =
                v_20_1 * *(srcS + 0x7c) + v_8_1 * *(srcS + 0x84) + v_14_1 * *(srcS + 0x80);
            int32_t v_2c_1 = *(srcS + 0x94) + result + 1;
            float v_38_1 =
                x87_r5_24 * *(srcS + 0x90) + x87_r6_16 * *(srcS + 0x8c) + x87_r7_6 * *(srcS + 0x88);
            float v_34_1 =
                v_c_1 * *(srcS + 0x90) + v_18_1 * *(srcS + 0x8c) + v_24_1 * *(srcS + 0x88);
            float v_30_1 =
                v_8_1 * *(srcS + 0x90) + v_14_1 * *(srcS + 0x8c) + v_20_1 * *(srcS + 0x88);
            memcpy(a1 + 0x70, &v_50, 0x28);
        }
    }

    int32_t* i_1 = *(a1 + 8);

    if (*i_1)
    {
        int32_t* i = i_1;

        if (i)
        {
            int32_t tmpD3 = g_afa7e0;

            do
            {
                int32_t* srcS1 = *i;
                void* valA5;

                if (!srcS1)
                    valA5 = nullptr;
                else
                {
                    int32_t valA2 = *srcS1;
                    int32_t valA3 = -(valA2);
                    valA5 = (valA3 - valA3) & srcS1;
                }

                *((tmpD3 << 2) + &g_afa6e0) = valA5;
                int32_t tmpD4 = tmpD3 + 1;
                int32_t valA6 = 0;
                g_afa7e0 = tmpD4;
                valA6 = i[7];
                result = *((valA6 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    tmpD4 = g_afa7e0;
                }

                i = *((tmpD4 << 2) + &g_afa6dc);
                tmpD3 = tmpD4 - 1;
                g_afa7e0 = tmpD3;
            } while (i);
        }
    }

    return result;
}
