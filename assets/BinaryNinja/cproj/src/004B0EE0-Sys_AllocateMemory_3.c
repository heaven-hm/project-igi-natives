#include "gi_platform.h"
#include "004B0EE0-Sys_AllocateMemory_3.h"
int32_t Sys_AllocateMemory_3(int32_t a1, int32_t a2)

{
    int32_t dstD = 0;
    char result;

    for (int32_t* i = &g_a950a0; i < &g_a960e0; )
    {
        result = i[0x81];

        if (result)
        {
            int32_t valA = *i;
            int32_t v_8 = dstD;
            int32_t v_4_1 = valA;
            result = a1(&v_8, a2);
        }

        i = &i[0x82];
        dstD += 1;
    }

    return result;
}
