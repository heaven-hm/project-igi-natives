#include "0048F490-FX_FailedToRegisterWinp.h"
/* 0x0048f490 FX_FailedToRegisterWinp full linked: callers=6 callees=2 */
void* sub_48f490(int32_t a1)

{
    int32_t ecx = 0;

    for (int32_t* i = &g_5c8d30; i < &g_5c8df0; )
    {
        if (!*i)
        {
            int32_t eax_1 = ecx * 0xc;
            *(eax_1 + &g_5c8d30) = a1;
            *(eax_1 + 0x5c8d2c) = 0;
            *(eax_1 + 0x5c8d28) = 0;
            return sub_4af8f0(&g_5c8df0, eax_1 + 0x5c8d28);
        }

        i = &i[3];
        ecx += 1;
    }

    Error_Show("Failed to register WinProc callback.");

    while (true)
        /* nop */
}
