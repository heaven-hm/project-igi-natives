#include "00444590-Cabinet_Setup.h"
/* 0x00444590 Cabinet_Setup full linked: callers=0 callees=0 */
void* sub_444590(void* a1)

{
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
            int32_t eax_6 = *((eax_5 << 2) + &g_a970e0);

            if (eax_6)
            {
                eax_6(i);
                edx_2 = g_afa7e0;
            }

            i = *((edx_2 << 2) + &g_afa6dc);
            edx_1 = edx_2 - 1;
            g_afa7e0 = edx_1;
        } while (i);
    }

    void* eax_7 = *(a1 + 0xe8);

    if (eax_7 && *(a1 + 0x130))
    {
        int32_t ecx_1 = 0;
        ecx_1 = *(eax_7 + 0x1c);
        (*((ecx_1 << 2) + &g_a970e0))(eax_7);
    }

    void* result = g_bc2360;

    if (*(result + 0x68) <= *(a1 + 0x124) + 2)
    {
        *(a1 + 0x120) = *(a1 + 0x11f);
        return result;
    }

    *(a1 + 0x11f) = 0;
    *(a1 + 0x120) = *(a1 + 0x11f);
    return result;
}
