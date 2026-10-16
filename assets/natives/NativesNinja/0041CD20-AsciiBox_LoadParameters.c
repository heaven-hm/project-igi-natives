#include "0041CD20-AsciiBox_LoadParameters.h"
/* 0x0041cd20 AsciiBox_LoadParameters full linked: callers=0 callees=2 */
int32_t AsciiBox_LoadParameters(void* a1)

{
    if (*(a1 + 0xdc))
    {
        int32_t eax_2 = Menu_FormatScreen_10(*(a1 + 0xf4));
        int32_t ecx_1 = *(a1 + 0xe8);
        bool cond:0_1 = eax_2 <= ecx_1;
        int32_t edx;

        if (eax_2 < ecx_1)
        {
            do
            {
                int32_t ecx_3 = *(a1 + 0xe0) - 1;
                *(a1 + 0xe0) = ecx_3;
                char* ecx_4 = ecx_3 - 1;

                if (*ecx_4)
                {
                    char i;

                    do
                    {
                        *(a1 + 0xe0) = ecx_4;
                        i = ecx_4[0xffffffff];
                        ecx_4 -= 1;
                    } while (i);
                }

                edx = *(a1 + 0xe8) - 1;
                *(a1 + 0xe8) = edx;
            } while (eax_2 < edx);

            cond:0_1 = eax_2 <= edx;
        }

        if (!cond:0_1)
        {
            do
            {
                void* ecx_7 = *(a1 + 0xe0) + 1;
                *(a1 + 0xe0) = ecx_7;

                while (*(ecx_7 - 1))
                {
                    ecx_7 += 1;
                    *(a1 + 0xe0) = ecx_7;
                }

                edx = *(a1 + 0xe8) + 1;
                *(a1 + 0xe8) = edx;
            } while (eax_2 > edx);
        }
    }

    void* eax_3 = *(a1 + 0xf4);
    int32_t ecx_9 = 0;
    ecx_9 = *(eax_3 + 0x1c);
    (*((ecx_9 << 2) + &g_a970e0))(eax_3);
    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
