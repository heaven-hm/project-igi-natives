#include "004463B0-Env_InitLadder_8.h"
/* 0x004463b0 Env_InitLadder_8 full linked: callers=2 callees=2 */
int32_t sub_4463b0(void* a1)

{
    void var_8;
    int32_t result = sub_446450(&var_8, a1);
    int32_t* i = *(a1 + 8);

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
            int32_t edx_2 = 0;
            edx_2 = i[7];
            result = *(((eax_5 * 0x180 + edx_2) << 2) + &g_a96ae0);

            if (result)
                result = result(i, &var_8);

            ecx_1 = g_afa7e0 - 1;
            g_afa7e0 = ecx_1;
            i = *((ecx_1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
