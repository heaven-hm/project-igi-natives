#include "0042D1D0-Rotor_OnEvent.h"
/* 0x0042d1d0 Rotor_OnEvent full linked: callers=0 callees=7 */
int32_t Rotor_OnEvent(void* a1)

{
    void* var_50 = 0x24;
    void* eax = sub_497800(var_50);
    *(eax + 4) = g_57bd14;
    *(eax + 0xc) = a1;
    *(eax + 0x14) = sub_4daa20(eax + 0x18);
    int32_t* var_58 = eax + 0x1c;
    sub_4da180(eax + 0x20, var_58);
    int32_t result = sub_497860(eax);
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
            void* eax_7;

            if (!edx_1)
                eax_7 = nullptr;
            else
            {
                int32_t eax_4 = *edx_1;
                int32_t eax_5 = -(eax_4);
                eax_7 = (eax_5 - eax_5) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_7;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_9 = sub_4c56f0();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_9 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
            {
                var_50 = &var_40;
                result = result(i, var_50);
            }

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
