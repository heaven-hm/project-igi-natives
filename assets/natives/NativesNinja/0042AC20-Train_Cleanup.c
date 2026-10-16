#include "0042AC20-Train_Cleanup.h"
/* 0x0042ac20 Train_Cleanup full linked: callers=0 callees=1 */
int32_t* Train_Cleanup(void* a1)

{
    int32_t* result = *(a1 + 8);
    void* var_8 = a1 + 0x20;
    void* var_4 = a1 + 0x70;

    if (*result)
    {
        int32_t* i = result;

        if (i)
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
                uint32_t eax_6 = sub_4c5800();
                int32_t ecx_3 = 0;
                ecx_3 = i[7];
                result = *(((eax_6 * 0x180 + ecx_3) << 2) + &g_a96ae0);

                if (result)
                    result = result(i, &var_8);

                ecx_1 = g_afa7e0 - 1;
                g_afa7e0 = ecx_1;
                i = *((ecx_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    return result;
}
