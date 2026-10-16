#include "004EBCD0-SoundSysMicrophone_Setup.h"
/* 0x004ebcd0 SoundSysMicrophone_Setup full linked: callers=0 callees=4 */
int32_t* sub_4ebcd0(void* a1)

{
    void* var_8 = a1;
    char var_4 = 1;
    int32_t i = 0;
    int32_t* result = sub_4e7330();

    if (*result > 0)
    {
        int32_t esi_1 = 8;

        do
        {
            int32_t ecx_1 = 0;
            ecx_1 = *(*(sub_4e7330() + esi_1) + 0x1c);
            int32_t eax_2 = 0;
            eax_2 = g_54db6a;
            (*(((ecx_1 + eax_2 * 0x180) << 2) + &g_a96ae0))(*(sub_4e7330() + esi_1), &var_8);
            i += 1;
            esi_1 += 4;
            result = sub_4e7330();
        } while (i < *result);
    }

    int32_t* i_1 = *(a1 + 8);

    if (*i_1 && i_1)
    {
        int32_t edx_3 = g_afa7e0;

        do
        {
            int32_t* esi_2 = *i_1;
            void* eax_7;

            if (!esi_2)
                eax_7 = nullptr;
            else
            {
                int32_t eax_4 = *esi_2;
                int32_t eax_5 = -(eax_4);
                eax_7 = (eax_5 - eax_5) & esi_2;
            }

            *((edx_3 << 2) + &g_afa6e0) = eax_7;
            int32_t edx_4 = edx_3 + 1;
            int32_t eax_8 = 0;
            g_afa7e0 = edx_4;
            eax_8 = i_1[7];
            result = *((eax_8 << 2) + &g_a970e0);

            if (result)
            {
                result = result(i_1);
                edx_4 = g_afa7e0;
            }

            i_1 = *((edx_4 << 2) + &g_afa6dc);
            edx_3 = edx_4 - 1;
            g_afa7e0 = edx_3;
        } while (i_1);
    }

    return result;
}
