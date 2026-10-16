#include "00436D10-EnvironmentSound_LoadParameters.h"
/* 0x00436d10 EnvironmentSound_LoadParameters full linked: callers=0 callees=3 */
int32_t EnvironmentSound_LoadParameters(void* a1)

{
    int32_t result;
    result = *(a1 + 0x21);

    if (result)
    {
        Vehicle_AmbientRain(a1);
        result = Vehicle_InitHeli_6(a1);
    }

    result = *(a1 + 0x20);

    if (result)
        result = Vehicle_LeftEcco2F2F2F2F(a1);

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_3;

            if (!esi_1)
                eax_3 = nullptr;
            else
            {
                int32_t eax = *esi_1;
                int32_t eax_1 = -(eax);
                eax_3 = (eax_1 - eax_1) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_3;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_4 = 0;
            g_afa7e0 = edx_2;
            eax_4 = i[7];
            result = *((eax_4 << 2) + &g_a970e0);

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
