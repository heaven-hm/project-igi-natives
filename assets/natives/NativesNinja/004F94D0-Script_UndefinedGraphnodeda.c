#include "004F94D0-Script_UndefinedGraphnodeda.h"
/* 0x004f94d0 Script_UndefinedGraphnodeda full linked: callers=6 callees=1 */
int32_t sub_4f94d0(void* a1)

{
    int32_t ecx = 0;

    for (int16_t* i = &g_a77228; i < &g_a77248; )
    {
        if (*(a1 + 0x1c) == *i)
            return *((ecx << 3) + &g_a7722c);

        i = &i[4];
        ecx += 1;
    }

    Error_Show("Undefined GraphNodeDataSize");

    while (true)
        /* nop */
}
