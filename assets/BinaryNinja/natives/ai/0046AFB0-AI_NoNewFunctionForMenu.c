// Original IGI.EXE function: AI_NoNewFunctionForMenu (VA 0x0046AFB0; static CFG gate PASS, CFG score 0.935).
#include "AI_NoNewFunctionForMenu.h"
int32_t AI_NoNewFunctionForMenu(int32_t context)

{
    int32_t kind = Qhash_Init(1);
    int32_t flags = g_5be2b0;

    if (!flags)
    {
        kind = g_5bdda8;
        QTask_HandleInput(GameScreen_Process(*(Level_LoadLevel_6() + 0x44)), kind, flags);
        flags = g_5be2b0;
    }

    if (context == 1)
        AI_TakeCover_27(flags);
    else if (context == 2)
        AI_MoveToNode_26(flags);
    else if (context == 3)
        AI_CombatTarget_26(flags);
    else
    {
        Error_Show("No New function for menu!!");

        while (true)
            /* nop */
    }

    /* tailcall */
    return Qhash_Reset();
}
