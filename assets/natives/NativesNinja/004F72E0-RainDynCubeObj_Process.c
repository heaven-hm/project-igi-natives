#include "004F72E0-RainDynCubeObj_Process.h"
/* 0x004f72e0 RainDynCubeObj_Process full linked: callers=0 callees=4 */
void* sub_4f72e0(void* a1)

{
    sub_4f1340(a1 + 0x2cb8);
    sub_4b0d10(*(a1 + 0x2b48));
    *(a1 + 0x2b48) = 0;
    int32_t ecx_1 = 0;
    g_a76c9c -= 0x45b0;

    for (int32_t* i = &g_a76ca4; i < &g_a76cc4; )
    {
        if (*i == a1)
        {
            *((ecx_1 << 2) + &g_a76ca4) = 0;
            return sub_4c6840(g_a44344, a1, 0);
        }

        i = &i[1];
        ecx_1 += 1;
    }

    return sub_4c6840(g_a44344, a1, 0);
}
