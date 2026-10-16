#include "gi_platform.h"
#include "0046AFB0-AI_NoNewFunctionForMenu.h"
void AI_NoNewFunctionForMenu(int32_t a1)

{
    Qhash_Init(1);
    int32_t kind = 0;
    int32_t flags = g_5be2b0;

    if (!flags)
    {
        kind = g_5bdda8;
        QTask_HandleInput(GameScreen_Process(*(Level_LoadLevel_6() + 0x44)), kind, flags);
        flags = g_5be2b0;
    }

    if (a1 == 1)
        AI_TakeCover_27(flags);
    else if (a1 == 2)
        AI_MoveToNode_26(flags);
    else if (a1 == 3)
        AI_CombatTarget_26(flags);
    else
    {
        Error_Show("No New function for menu!!");

        while (true)
            /* nop */
    }

    /* tailcall */
    Qhash_Reset();
    return;
}
