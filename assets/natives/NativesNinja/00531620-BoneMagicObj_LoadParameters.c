#include "00531620-BoneMagicObj_LoadParameters.h"
/* 0x00531620 BoneMagicObj_LoadParameters full linked: callers=0 callees=3 */
int32_t sub_531620(void* a1)

{
    sub_4d38c0(a1 + 0x78, a1 + 0x68);
    float var_c;
    sub_4d2fb0(nullptr, &var_c, a1 + 0x68);
    *(a1 + 0x120) = var_c + *(a1 + 0x120);
    float var_8;
    *(a1 + 0x124) = var_8 + *(a1 + 0x124);
    float var_4;
    *(a1 + 0x128) = var_4 + *(a1 + 0x128);
    int32_t result = sub_4d3210(0, a1 + 0x68);
    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_4;

            if (!esi_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *esi_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_4;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_5 = 0;
            g_afa7e0 = edx_2;
            eax_5 = i[7];
            result = *((eax_5 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    return result;
}
