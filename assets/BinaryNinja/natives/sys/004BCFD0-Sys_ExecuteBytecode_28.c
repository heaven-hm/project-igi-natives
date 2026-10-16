#include "Sys_ExecuteBytecode_28.h"
int32_t Sys_ExecuteBytecode_28(int32_t* a1)

{
    a1[0xb] = 0;
    int32_t i;

    do
    {
        i = a1[8];

        if (i)
            break;

        int32_t tmpD1 = 0;
        tmpD1 = a1[5][*a1];
        (*(tmpD1 * 0x18 + &g_a96108))(a1, 0, tmpD1, 0);
        i = a1[0xb];
    } while (!i);

    return i;
}
