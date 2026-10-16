#include "004E7E30-ViewportQTask_Setup.h"
/* 0x004e7e30 ViewportQTask_Setup full linked: callers=0 callees=16 */
int32_t sub_4e7e30(void* a1)

{
    float var_f0 = g_c28b44;
    float eax = *(a1 + 0x20);
    float ecx = *(a1 + 0x24);
    float edx = *(a1 + 0x28);
    float eax_1 = *(a1 + 0x2c);
    float var_104 = g_c28b48;
    g_a5ec68 = a1;
    int32_t ecx_1 = *(a1 + 0xac);
    float var_f8 = edx;
    sub_518230(ecx_1);
    void* eax_2 = *(a1 + 0x50);
    long double x87_r7_4 = (eax_1 + ecx) * 0.5f;
    float var_fc_1 = eax * var_f0;
    float var_108_1 = ((ecx - x87_r7_4) * *(eax_2 + 0x44) + x87_r7_4) * var_104;
    long double x87_r7_6 = (x87_r7_4 + (eax_1 - x87_r7_4) * *(eax_2 + 0x44)) * var_104;
    var_104 = var_fc_1;
    float var_104_1 = var_104;
    *(a1 + 0x34) = var_104_1;
    var_104_1 = var_108_1;
    *(a1 + 0x38) = var_104_1;
    var_f8 = var_f8 * var_f0 - var_fc_1;
    var_f8 = var_f8;
    *(a1 + 0x3c) = var_f8;
    var_f8 = x87_r7_6 - var_108_1;
    var_f8 = var_f8;
    *(a1 + 0x40) = var_f8;
    sub_497680(a1 + 0x54, a1 + 0x34);
    sub_497620(a1 + 0x54, 1);
    void* eax_4 = *(a1 + 0x50);
    void var_d0;
    memcpy(&var_d0, eax_4, 0x28);
    void var_e8;
    memcpy(&var_e8, eax_4 + 0x28, 0x18);
    void var_a8;
    sub_497d70(&var_a8, &var_d0, &var_e8, *(eax_4 + 0x40) * *(a1 + 0x30));
    sub_497e60(&var_a8, 1f);
    Transcontext_SetActiveTransContext(&var_a8);
    g_5470b4 = *(a1 + 0xbc);

    for (int32_t* i = &g_a5ebe0; i < &g_a5ec1c; i = &i[1])
    {
        int32_t eax_5 = *i;

        if (eax_5)
            eax_5(*(a1 + 0x50));
    }

    sub_4b73a0(*(a1 + 0xc4));
    int32_t* i_1 = *(a1 + 8);

    if (*i_1 && i_1)
    {
        int32_t ecx_5 = g_afa7e0;

        do
        {
            int32_t* edx_4 = *i_1;
            void* eax_10;

            if (!edx_4)
                eax_10 = nullptr;
            else
            {
                int32_t eax_7 = *edx_4;
                int32_t eax_8 = -(eax_7);
                eax_10 = (eax_8 - eax_8) & edx_4;
            }

            *((ecx_5 << 2) + &g_afa6e0) = eax_10;
            g_afa7e0 = ecx_5 + 1;
            int32_t eax_11 = sub_4e7530();
            int32_t edx_5 = 0;
            edx_5 = i_1[7];
            int32_t eax_12 = *(((eax_11 * 0x180 + edx_5) << 2) + &g_a96ae0);

            if (eax_12)
                eax_12(i_1);

            ecx_5 = g_afa7e0 - 1;
            g_afa7e0 = ecx_5;
            i_1 = *((ecx_5 << 2) + &g_afa6e0);
        } while (i_1);
    }

    sub_4b7360(*(a1 + 0xc4));
    sub_497ee0(&var_a8);
    int32_t eax_14 = g_a5ec6c;
    g_a5ec68 = 0;
    *((eax_14 << 2) + &g_a5ec1c) = a1;
    g_a5ec6c = eax_14 + 1;
    return sub_497700();
}
