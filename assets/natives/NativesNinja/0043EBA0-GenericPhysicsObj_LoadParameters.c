#include "0043EBA0-GenericPhysicsObj_LoadParameters.h"
/* 0x0043eba0 GenericPhysicsObj_LoadParameters full linked: callers=0 callees=1 */
float* GenericPhysicsObj_LoadParameters(float a1)

{
    float* result = Vehicle_CheckFlightDynamics_9(a1);
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
