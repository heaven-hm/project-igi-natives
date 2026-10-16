#include "004EB670-SoundDefGroup_OnEvent.h"
/* 0x004eb670 SoundDefGroup_OnEvent full linked: callers=0 callees=1 */
int32_t sub_4eb670(void* a1, int32_t* a2)

{
    int32_t result = a2[1];

    if (!result)
    {
        char* eax = *a2;
        int32_t ebx;
        int32_t var_10_1 = ebx;
        char* esi_1 = a1 + 0x22;

        while (true)
        {
            char edx_1 = *eax;
            char ebx_1 = *esi_1;
            bool c_1 = edx_1 < ebx_1;

            if (edx_1 == ebx_1)
            {
                if (!edx_1)
                {
                    result = 0;
                    break;
                }

                edx_1 = eax[1];
                ebx_1 = esi_1[1];
                c_1 = edx_1 < ebx_1;

                if (edx_1 == ebx_1)
                {
                    eax = &eax[2];
                    esi_1 = &esi_1[2];

                    if (edx_1)
                        continue;

                    result = 0;
                    break;
                }
            }

            result = eax - eax + 1;
            break;
        }

        if (!result)
        {
            a2[1] = a1;
            return result;
        }

        int32_t* i = *(a1 + 8);

        if (*i && i)
        {
            int32_t ecx_2 = g_afa7e0;

            do
            {
                int32_t* edx_2 = *i;
                void* eax_5;

                if (!edx_2)
                    eax_5 = nullptr;
                else
                {
                    int32_t eax_2 = *edx_2;
                    int32_t eax_3 = -(eax_2);
                    eax_5 = (eax_3 - eax_3) & edx_2;
                }

                *((ecx_2 << 2) + &g_afa6e0) = eax_5;
                g_afa7e0 = ecx_2 + 1;
                uint32_t eax_7 = sub_4e6630();
                int32_t ecx_4 = 0;
                ecx_4 = i[7];
                result = *(((eax_7 * 0x180 + ecx_4) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, a2);

                ecx_2 = g_afa7e0 - 1;
                g_afa7e0 = ecx_2;
                i = *((ecx_2 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
