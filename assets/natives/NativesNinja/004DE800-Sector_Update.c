#include "004DE800-Sector_Update.h"
/* 0x004de800 Sector_Update full linked: callers=0 callees=2 */
void* sub_4de800(void* a1, int32_t a2)

{
    sub_4de040(a1);
    void* result = *(a1 + 0xe8);

    if (result)
    {
        int32_t* i = *(result + 8);

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
                uint32_t eax_5 = sub_4cea20();
                int32_t ecx_3 = 0;
                ecx_3 = i[7];
                result = *(((eax_5 * 0x180 + ecx_3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, a2);

                ecx_1 = g_afa7e0 - 1;
                g_afa7e0 = ecx_1;
                i = *((ecx_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
