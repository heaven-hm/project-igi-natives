#include "004B0EE0-Sys_AllocateMemory_3.h"
/* 0x004b0ee0 Sys_AllocateMemory_3 full linked: callers=4 callees=0 */
int32_t sub_4b0ee0(int32_t a1, int32_t a2)

{
    int32_t edi = 0;
    char result;

    for (int32_t* i = &g_a950a0; i < &g_a960e0; )
    {
        result = i[0x81];

        if (result)
        {
            int32_t eax = *i;
            int32_t var_8 = edi;
            int32_t var_4_1 = eax;
            result = a1(&var_8, a2);
        }

        i = &i[0x82];
        edi += 1;
    }

    return result;
}
