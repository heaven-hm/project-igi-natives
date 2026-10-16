#include "0042BD40-Afterburner_Update.h"
/* 0x0042bd40 Afterburner_Update full linked: callers=0 callees=9 */
int32_t** Afterburner_Update(void* a1)

{
    int32_t* eax = sub_497800(0x30);
    eax[1] = g_bc2364;
    eax[3] = a1;
    eax[9] = *(a1 + 0x138) * 255f;
    eax[0xa] = *(a1 + 0x138) * 255f;
    eax[0xb] = *(a1 + 0x138) * 255f;
    eax[5] = sub_4daa20(&eax[6]);
    sub_4da180(&eax[8], &eax[7]);
    long double x87_r4_3 = g_bcab00 * (*(a1 + 0x30) - g_bcab18)
        + g_bcaafc * (*(a1 + 0x28) - g_bcab10)
        + g_bcaaf8 * (*(a1 + 0x20) - g_bcab08);
    float var_44 = x87_r4_3;
    uint32_t eax_5;

    if (sub_499ff0(var_44) >= 1)
        eax_5 = sub_499ff0(var_44);
    else
        eax_5 = 1;

    int32_t** result = sub_4978b0(eax_5, eax);
    void var_40;
    memcpy(&var_40, a1 + 0x20, 0x18);
    void var_28;
    memcpy(&var_28, a1 + 0x70, 0x28);
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_9;

            if (!edx_1)
                eax_9 = nullptr;
            else
            {
                int32_t eax_6 = *edx_1;
                int32_t eax_7 = -(eax_6);
                eax_9 = (eax_7 - eax_7) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_9;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_11 = sub_4c56f0();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_11 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &var_40);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
