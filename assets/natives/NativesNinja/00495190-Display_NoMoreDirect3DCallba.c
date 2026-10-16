#include "00495190-Display_NoMoreDirect3DCallba.h"
/* 0x00495190 Display_NoMoreDirect3DCallba full linked: callers=3 callees=1 */
int32_t* sub_495190(int32_t a1, int32_t* a2)

{
    int32_t ecx = 0;

    for (int32_t* i = &g_bcad24; i < &g_bcad74; )
    {
        if (!*i)
        {
            *((ecx << 3) + &g_bcad20) = *a2;
            *((ecx << 3) + &g_bcad24) = a1;
            *a2 = (ecx << 3) + &g_bcad20;
            return (ecx << 3) + &g_bcad20;
        }

        i = &i[2];
        ecx += 1;
    }

    Error_Show("No more Direct3D callbacks available.");

    while (true)
        /* nop */
}
