#include "00491650-Display_NoMoreDisplayCallbac.h"
/* 0x00491650 Display_NoMoreDisplayCallbac full linked: callers=2 callees=1 */
int32_t* sub_491650(int32_t a1, int32_t* a2)

{
    int32_t ecx = 0;

    for (int32_t* i = &g_c28a44; i < &g_c28b44; )
    {
        if (!*i)
        {
            *((ecx << 3) + &g_c28a40) = *a2;
            *((ecx << 3) + &g_c28a44) = a1;
            *a2 = (ecx << 3) + &g_c28a40;
            return (ecx << 3) + &g_c28a40;
        }

        i = &i[2];
        ecx += 1;
    }

    Error_Show("No more Display callbacks available.");

    while (true)
        /* nop */
}
