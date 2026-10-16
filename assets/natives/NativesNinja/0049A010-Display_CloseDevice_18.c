#include "0049A010-Display_CloseDevice_18.h"
/* 0x0049a010 Display_CloseDevice_18 full linked: callers=1 callees=0 */
int32_t* sub_49a010(int32_t a1)

{
    int32_t ecx = 0;
    int32_t* i;

    for (i = &g_720558; i < 0x72055c; )
    {
        if (a1 == *i)
        {
            (&g_720558)[ecx] = 0;
            *((ecx << 2) + &g_720560) = 0;
            return i;
        }

        i = &i[1];
        ecx += 1;
    }

    return i;
}
