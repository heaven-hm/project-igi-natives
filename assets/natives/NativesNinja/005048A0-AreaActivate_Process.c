#include "005048A0-AreaActivate_Process.h"
/* 0x005048a0 AreaActivate_Process full linked: callers=0 callees=0 */
int32_t sub_5048a0(void* a1)

{
    *(a1 + 0xa8) = 0;
    void* var_8 = a1;
    int32_t var_4 = 0;
    int32_t ebx = 0;
    int32_t result;

    for (int32_t i = 0xa7a648; i < &g_a7a7bc; )
    {
        result = 1 << (ebx & 0x1f);

        if (*(a1 + 0xac) & result)
        {
            (*i)(&var_8);
            result = *(a1 + 0xa8) + var_4;
            *(a1 + 0xa8) = result;
            var_4 = 0;
        }

        i += 0xc;
        ebx += 1;
    }

    int32_t* i_1 = *(a1 + 8);

    if (*i_1 && i_1)
    {
        int32_t edx_2 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i_1;
            void* eax_5;

            if (!esi_1)
                eax_5 = nullptr;
            else
            {
                int32_t eax_2 = *esi_1;
                int32_t eax_3 = -(eax_2);
                eax_5 = (eax_3 - eax_3) & esi_1;
            }

            *((edx_2 << 2) + &g_afa6e0) = eax_5;
            int32_t edx_3 = edx_2 + 1;
            int32_t eax_6 = 0;
            g_afa7e0 = edx_3;
            eax_6 = i_1[7];
            result = *((eax_6 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i_1);
                edx_3 = g_afa7e0;
            }

            i_1 = *((edx_3 << 2) + &g_afa6dc);
            edx_2 = edx_3 - 1;
            g_afa7e0 = edx_2;
        } while (i_1);
    }

    return result;
}
