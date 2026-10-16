#include "004E7C90-CameraControlTask_LoadParameters.h"
/* 0x004e7c90 CameraControlTask_LoadParameters full linked: callers=0 callees=1 */
void sub_4e7c90(void* a1)

{
    g_a5ebdc = a1;
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
            int32_t eax = *((eax_5 << 2) + &g_a970e0);

            if (eax)
            {
                eax(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    g_a5ebdc = 0;
    int32_t ecx = *(a1 + 0x28);

    if (ecx)
    {
        int32_t eax_6 = *(a1 + 0x20);
        sub_4ebbf0(ecx, eax_6, eax_6 + 0x28);
    }
}
