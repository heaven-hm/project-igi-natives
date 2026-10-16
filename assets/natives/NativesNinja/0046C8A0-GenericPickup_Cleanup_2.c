#include "0046C8A0-GenericPickup_Cleanup_2.h"
/* 0x0046c8a0 GenericPickup_Cleanup_2 full linked: callers=0 callees=4 */
void* sub_46c8a0(void* a1, int32_t a2)

{
    void* result;
    result = *(a1 + 0x11a);

    if (result)
    {
        sub_4dcdd0(a1);
        result = sub_4c7560(Level_StartMission_4(), a1);
        *(a1 + 0x11a) = 0;
    }

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_4;

            if (!edx_1)
                eax_4 = nullptr;
            else
            {
                int32_t eax_1 = *edx_1;
                int32_t eax_2 = -(eax_1);
                eax_4 = (eax_2 - eax_2) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_4;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_6 = sub_4cea20();
            int32_t ecx_3 = 0;
            ecx_3 = i[7];
            result = *(((eax_6 * 0x180 + ecx_3) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
