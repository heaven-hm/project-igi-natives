#include "00481970-ExplodeObject_Setup.h"
/* 0x00481970 ExplodeObject_Setup full linked: callers=0 callees=4 */
void* sub_481970(int80_t a1 @ st0, double* a2)

{
    int32_t* i = a2[1];
    void* result;

    if (*i && i)
    {
        int32_t edx_1 = g_afa7e0;

        do
        {
            int32_t* esi_1 = *i;
            void* eax_3;

            if (!esi_1)
                eax_3 = nullptr;
            else
            {
                int32_t eax = *esi_1;
                int32_t eax_1 = -(eax);
                eax_3 = (eax_1 - eax_1) & esi_1;
            }

            *((edx_1 << 2) + &g_afa6e0) = eax_3;
            int32_t edx_2 = edx_1 + 1;
            int32_t eax_4 = 0;
            g_afa7e0 = edx_2;
            eax_4 = i[7];
            result = *((eax_4 << 2) + &g_a970e0);

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

    result = a2[0x32];

    if (!result)
    {
        if (sub_4f16c0(a2 + 0x194))
        {
            sub_4f16e0(a2 + 0x194, a2);
            *(a2 + 0x1e4) = a1;
        }

        if (*(a2 + 0x1e4) || !*(a2 + 0x1f4))
        {
            sub_481a60(a2);
            result = sub_4cec10(&a2[0x30]);

            if (result)
                goto label_481a3c;
        }
        else
        {
        label_481a3c:
            result = *(a2 + 0x1f4);

            if (result > 0)
            {
                result -= 1;
                *(a2 + 0x1f4) = result;
            }
        }
    }

    return result;
}
