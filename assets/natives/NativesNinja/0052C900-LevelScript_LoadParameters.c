#include "0052C900-LevelScript_LoadParameters.h"
/* 0x0052c900 LevelScript_LoadParameters full linked: callers=0 callees=1 */
void* sub_52c900(void* a1)

{
    if (!*(a1 + 0x24))
    {
        int32_t* i = *(a1 + 8);
        int32_t eax_1 = *i;
        int32_t eax_2 = -(eax_1);
        *(a1 + 0x24) = (eax_2 - eax_2) & i;

        if (*i && i)
        {
            int32_t ecx_1 = g_afa7e0;

            do
            {
                int32_t* edx_1 = *i;
                void* eax_9;

                if (!edx_1)
                    eax_9 = nullptr;
                else
                {
                    int32_t eax_6 = *edx_1;
                    int32_t eax_7 = -(eax_6);
                    eax_9 = (eax_7 - eax_7) & edx_1;
                }

                *((ecx_1 << 2) + &g_afa6e0) = eax_9;
                g_afa7e0 = ecx_1 + 1;
                uint32_t eax_11 = sub_4f1a70();
                int32_t ecx_3 = 0;
                ecx_3 = i[7];
                int32_t eax_15 = *(((eax_11 * 0x180 + ecx_3) << 2) + &g_a96ae0);

                if (eax_15)
                    eax_15(i, 0);

                ecx_1 = g_afa7e0 - 1;
                g_afa7e0 = ecx_1;
                i = *((ecx_1 << 2) + &g_afa6e0);
            } while (i);
        }
    }

    while (true)
    {
        void* result = *(a1 + 0x24);
        int32_t var_8 = *(a1 + 0x20);
        char var_4_1 = 0;

        if (!result)
            return result;

        int32_t ecx_5 = 0;
        ecx_5 = *(result + 0x1c);
        int32_t ecx_6 = 0;
        ecx_6 = g_54f6f2;
        result = (*(((ecx_5 + ecx_6 * 0x180) << 2) + &g_a96ae0))(result, &var_8);
        result = var_4_1;

        if (!result)
            return result;

        int32_t* ecx_9 = **(a1 + 0x24);

        if (!ecx_9)
            *(a1 + 0x24) = 0;
        else
        {
            int32_t eax_16 = *ecx_9;
            int32_t eax_17 = -(eax_16);
            *(a1 + 0x24) = (eax_17 - eax_17) & ecx_9;
        }
    }
}
