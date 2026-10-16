#include "004250D0-ConditionalSound_Tick.h"
/* 0x004250d0 ConditionalSound_Tick full linked: callers=0 callees=5 */
int32_t* ConditionalSound_Tick(int80_t a1 @ st0, void* a2)

{
    if (sub_4f16c0(a2 + 0x20))
    {
        *(a2 + 0xb1) = *(a2 + 0xb0);
        sub_4f16e0(a2 + 0x20, a2);
        *(a2 + 0xb0) = a1;
    }

    int32_t* result = Menu_DrawWidget_15(a2);
    result = *(a2 + 0xa9);

    if (!result)
    {
    label_42512e:
        result = *(a2 + 0xb0);

        if (!result)
            result = ConditionalSound_Stop(a2);
        else
        {
            result = *(a2 + 0xb1);

            if (!result)
                result = ConditionalSound_Start(a2);
        }

        int32_t* i = *(a2 + 8);

        if (*i && i)
        {
            int32_t edx_1 = g_afa7e0;

            do
            {
                int32_t* esi_1 = *i;
                void* eax_5;

                if (!esi_1)
                    eax_5 = nullptr;
                else
                {
                    int32_t eax_2 = *esi_1;
                    int32_t eax_3 = -(eax_2);
                    eax_5 = (eax_3 - eax_3) & esi_1;
                }

                *((edx_1 << 2) + &g_afa6e0) = eax_5;
                int32_t edx_2 = edx_1 + 1;
                int32_t eax_6 = 0;
                g_afa7e0 = edx_2;
                eax_6 = i[7];
                result = *((eax_6 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    edx_2 = g_afa7e0;
                }

                i = *((edx_2 << 2) + &g_afa6dc);
                edx_1 = edx_2 - 1;
                g_afa7e0 = edx_1;
            } while (i);
        }
    }
    else
    {
        result = *(a2 + 0x124);

        if (!result)
            goto label_42512e;
    }

    return result;
}
