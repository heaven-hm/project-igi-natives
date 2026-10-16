#include "004FDE00-Particle2DDynCubeObjTask_Update.h"
/* 0x004fde00 Particle2DDynCubeObjTask_Update full linked: callers=0 callees=4 */
int32_t sub_4fde00(float a1, void* a2)

{
    int32_t* esi = a1;
    a1 = sub_4fdc20(esi);
    double var_18[0x3];
    sub_4fdcd0(&var_18, esi);
    int32_t result = sub_4c7140(*(a2 + 4), esi, &var_18, a1, 2);
    int32_t* i = esi[2];

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
            uint32_t eax_6 = sub_4cea10();
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_6 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
