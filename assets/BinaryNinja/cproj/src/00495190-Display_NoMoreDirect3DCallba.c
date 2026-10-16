#include "gi_platform.h"
#include "00495190-Display_NoMoreDirect3DCallba.h"
int32_t* Display_NoMoreDirect3DCallba(int32_t a1, int32_t* a2)

{
    int32_t objC = 0;

    for (int32_t* i = &g_bcad24; i < &g_bcad74; )
    {
        if (!*i)
        {
            *((objC << 3) + &g_bcad20) = *a2;
            *((objC << 3) + &g_bcad24) = a1;
            *a2 = (objC << 3) + &g_bcad20;
            return (objC << 3) + &g_bcad20;
        }

        i = &i[2];
        objC += 1;
    }

    Error_Show("No more Direct3D callbacks available.");

    while (true)
        /* nop */
}
