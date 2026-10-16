#include "00479780-Gun_FireMessage.h"
/* 0x00479780 Gun_FireMessage full linked: callers=0 callees=7 */
int32_t sub_479780(float a1, void* a2)

{
    void* ebx = *(a1 + 0x128);
    uint32_t eax_1 = sub_4f1ff0();
    int32_t ecx = 0;
    ecx = *(a1 + 0x1c);
    int16_t result = (*(((eax_1 * 0x180 + ecx) << 2) + &g_a96ae0))(a1, a2);
    result = *(a2 + 1);

    if (result)
    {
        int32_t edx_1 = *(ebx + 0x6d0);
        void* var_c_1 = a1 + 0x150;
        void* eax_7 = *(a2 + 0x2c);
        int32_t var_1c = 0x10;
        int32_t var_14_1 = 0x46;
        int32_t var_10_1 = edx_1;
        float var_8_1 = a1;

        if (!eax_7)
        {
            int32_t var_18_2 = 1;
            int32_t var_4_2 = 0;
        }
        else
        {
            int32_t var_18_1 = sub_463130(eax_7);
            int32_t var_4_1 = *(a2 + 0x2c);
        }

        sub_450ce0(&var_1c);
        long double x87_r7_7;

        do
        {
            long double x87_r7_3 = sub_4b4770(Level_SetMission_5()) - 0.5f;
            a1 = x87_r7_3 + x87_r7_3;
            long double x87_r7_6 = sub_4b4770(Level_SetMission_5()) - 0.5f;
            x87_r7_7 = x87_r7_6 + x87_r7_6;
            long double x87_r6_4 = sqrtl(x87_r7_7 * x87_r7_7 + a1 * a1);
            long double temp0_1 = 1f;
            x87_r6_4 - temp0_1;
            result = (x87_r6_4 < temp0_1 ? 1 : 0) << 8 | (FCMP_UO(x87_r6_4, temp0_1) ? 1 : 0) << 0xa
                | (x87_r6_4 == temp0_1 ? 1 : 0) << 0xe | 0x3800;
        } while (!(*(&result + 1) & 0x41));

        long double x87_r7_9 =
            x87_r7_7 * *(ebx + 0x678) * 0.0174532924f + *(ebx + 0x670) * 0.0174532924f;
        *(a2 + 0x20) = *(ebx + 0x674) * 0.0174532924f * a1 + *(ebx + 0x66c) * 0.0174532924f;
        *(a2 + 0x24) = x87_r7_9;
    }

    return result;
}
