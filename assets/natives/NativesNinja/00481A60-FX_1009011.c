#include "00481A60-FX_1009011.h"
/* 0x00481a60 FX_1009011 full linked: callers=1 callees=6 */
struct status_msg* sub_481a60(double* a1)

{
    void* eax_1 = sub_4cec10(&a1[0x30]);
    double var_18;
    memcpy(&var_18, &a1[4], 0x18);
    double* var_30;

    if (eax_1)
    {
        var_30 = a1;
        sub_4c48d0(var_30, eax_1);
        int32_t* i = a1[1];
        *(a1 + 0xdc) = 0;

        if (*i && i)
        {
            int32_t ecx_1 = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_5;

                if (!edx_1)
                    eax_5 = nullptr;
                else
                {
                    int32_t eax_2 = *edx_1;
                    int32_t eax_3 = -(eax_2);
                    eax_5 = (eax_3 - eax_3) & edx_1;
                }

                *((ecx_1 << 2) + &g_afa6e0) = eax_5;
                g_afa7e0 = ecx_1 + 1;
                int32_t eax_6 = sub_4d0d80();
                int32_t edx_2 = 0;
                edx_2 = i[7];
                int32_t eax_7 = *(((eax_6 * 0x180 + edx_2) << 2) + &g_a96ae0);

                if (eax_7)
                    eax_7(i);

                ecx_1 = g_afa7e0 - 1;
                g_afa7e0 = ecx_1;
                i = *((ecx_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    int32_t var_2c_3 = 0;
    var_30 = a1;
    WeaponType_UpdateAnim(&var_18, var_30, var_2c_3);
    long double x87_r7_1 = var_18 + a1[4];
    uint32_t edx_3 = a1[0x42];
    uint32_t eax_8 = *(a1 + 0x20c);
    uint32_t var_2c_4 = 0;
    var_30 = 0x47c80000;
    var_18 = x87_r7_1;
    double var_10;
    double var_10_1 = var_10 + a1[5];
    void* var_54 = a1 + 0x214;
    double var_8;
    double var_8_1 = var_8 + a1[6];
    void* var_58 = a1 + 0x214;
    struct status_msg* result = sub_480fe0(&var_18, 1, 0, a1[0x40], a1[0x3f] * 4096f,
        *(a1 + 0x1fc) * 4096f, 0x45c00000, eax_8, edx_3, nullptr, "1009_01_1", a1 + 0x214,
        0x15, 2, var_30, var_2c_4);
    a1[0x32] = 1;
    return result;
}
