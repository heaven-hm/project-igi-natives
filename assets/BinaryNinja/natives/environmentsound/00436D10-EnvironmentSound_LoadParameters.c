// Original IGI.EXE function: EnvironmentSound_LoadParameters (VA 0x00436D10; static CFG gate PASS, CFG score 1.000).
#include "EnvironmentSound_LoadParameters.h"
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
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA3;

            if (!srcS1)
                valA3 = nullptr;
            else
            {
                int32_t valA = *srcS1;
                int32_t valA1 = -(valA);
                valA3 = (valA1 - valA1) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA3;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA4 = 0;
            g_afa7e0 = tmpD2;
            valA4 = i[7];
            result = *((valA4 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i);
                tmpD2 = g_afa7e0;
            }

            i = *((tmpD2 << 2) + &g_afa6dc);
            tmpD1 = tmpD2 - 1;
            g_afa7e0 = tmpD1;
        } while (i);
    }

    return result;
}
