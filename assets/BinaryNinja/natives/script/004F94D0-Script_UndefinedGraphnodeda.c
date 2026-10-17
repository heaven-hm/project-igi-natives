// Original IGI.EXE function: Script_UndefinedGraphnodeda (VA 0x004F94D0; static CFG gate PASS, CFG score 1.000).
#include "Script_UndefinedGraphnodeda.h"
int32_t Script_UndefinedGraphnodeda(void* a1)

{
    int32_t objC = 0;

    for (int16_t* i = &g_a77228; i < &g_a77248; )
    {
        if (*(a1 + 0x1c) == *i)
            return *((objC << 3) + &g_a7722c);

        i = &i[4];
        objC += 1;
    }

    Error_Show("Undefined GraphNodeDataSize");

    while (true)
        /* nop */
}
