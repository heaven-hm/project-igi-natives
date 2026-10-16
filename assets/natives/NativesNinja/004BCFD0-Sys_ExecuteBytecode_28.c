#include "004BCFD0-Sys_ExecuteBytecode_28.h"
/* 0x004bcfd0 Sys_ExecuteBytecode_28 full linked: callers=2 callees=0 */
int32_t sub_4bcfd0(int32_t* a1)

{
    a1[0xb] = 0;
    int32_t i;

    do
    {
        i = a1[8];

        if (i)
            break;

        int32_t edx_1 = 0;
        edx_1 = a1[5][*a1];
        (*(edx_1 * 0x18 + &g_a96108))(a1, 0, edx_1, 0);
        i = a1[0xb];
    } while (!i);

    return i;
}
