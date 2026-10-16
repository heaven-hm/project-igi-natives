#include "0043E1F0-Elevator_OnEvent.h"
/* 0x0043e1f0 Elevator_OnEvent full linked: callers=0 callees=2 */
void* Elevator_OnEvent(float a1)

{
    Vehicle_InitPlane_9(a1);
    void* result = a1 + 0xf0;
    int32_t* i = *(a1 + 8);
    void* result_1 = result;
    void* var_4 = a1 + 0x70;

    if (*i && i)
    {
        int32_t ecx_1 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_3;

            if (!edx_1)
                eax_3 = nullptr;
            else
            {
                int32_t eax = *edx_1;
                int32_t eax_1 = -(eax);
                eax_3 = (eax_1 - eax_1) & edx_1;
            }

            *((ecx_1 << 2) + &g_afa6e0) = eax_3;
            g_afa7e0 = ecx_1 + 1;
            uint32_t eax_5 = sub_4c5800();
            int32_t eax_6 = 0;
            eax_6 = i[7];
            result = *(((eax_5 * 0x180 + eax_6) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &result_1);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
