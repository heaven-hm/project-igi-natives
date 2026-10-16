#include "004F43E0-Vehicle_Setup.h"
/* 0x004f43e0 Vehicle_Setup full linked: callers=0 callees=3 */
int32_t sub_4f43e0(void* a1, int32_t a2)

{
    *(a1 + 0x745) = 1;
    int32_t result = (*(((sub_4cea10() * 0x180 + sub_4c48c0()) << 2) + &g_a96ae0))(a1, a2);
    void* esi_1 = *(a1 + 0xe8);

    if (esi_1)
    {
        int32_t* i = *(esi_1 + 8);

        if (*i && i)
        {
            int32_t ecx_1 = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_8;

                if (!edx_1)
                    eax_8 = nullptr;
                else
                {
                    int32_t eax_5 = *edx_1;
                    int32_t eax_6 = -(eax_5);
                    eax_8 = (eax_6 - eax_6) & edx_1;
                }

                *((ecx_1 << 2) + &g_afa6e0) = eax_8;
                g_afa7e0 = ecx_1 + 1;
                uint32_t eax_10 = sub_4cea10();
                int32_t ecx_3 = 0;
                ecx_3 = i[7];
                result = *(((eax_10 * 0x180 + ecx_3) << 2) + &g_a96ae0);

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
