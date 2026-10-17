// Original IGI.EXE function: Display_NoMoreDisplayCallbac (VA 0x00491650; static CFG gate PASS, CFG score 1.000).
#include "Display_NoMoreDisplayCallbac.h"
int32_t* Display_NoMoreDisplayCallbac(int32_t a1, int32_t* a2)

{
    int32_t objC = 0;

    for (int32_t* i = &g_c28a44; i < &g_c28b44; )
    {
        if (!*i)
        {
            *((objC << 3) + &g_c28a40) = *a2;
            *((objC << 3) + &g_c28a44) = a1;
            *a2 = (objC << 3) + &g_c28a40;
            return (objC << 3) + &g_c28a40;
        }

        i = &i[2];
        objC += 1;
    }

    Error_Show("No more Display callbacks available.");

    while (true)
        /* nop */
}
