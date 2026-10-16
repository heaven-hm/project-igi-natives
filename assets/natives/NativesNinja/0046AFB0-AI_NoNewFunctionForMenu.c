#include "0046AFB0-AI_NoNewFunctionForMenu.h"
/* 0x0046afb0 AI_NoNewFunctionForMenu full linked: callers=3 callees=9 */
int32_t sub_46afb0(int32_t a1)

{
    int32_t kind = Qhash_Init(1);
    int32_t flags = g_5be2b0;

    if (!flags)
    {
        kind = g_5bdda8;
        QTask_HandleInput(sub_485320(*(Level_LoadLevel_6() + 0x44)), kind, flags);
        flags = g_5be2b0;
    }

    if (a1 == 1)
        sub_46aaf0(flags);
    else if (a1 == 2)
        sub_469430(flags);
    else if (a1 == 3)
        sub_468db0(flags);
    else
    {
        Error_Show("No New function for menu!!");

        while (true)
            /* nop */
    }

    /* tailcall */
    return Qhash_Reset();
}
