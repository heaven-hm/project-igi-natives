// Original IGI.EXE function: MenuTextConditional_Action (VA 0x00420500; static CFG gate PASS, CFG score 1.000).
#include "MenuTextConditional_Action.h"
int32_t MenuTextConditional_Action(void* a1, int32_t a2)

{
    int32_t result = *(a1 + 0x214);

    if (!result)
        return result;

    return (*(((Menu_RequestScreen_15() * 0x180 + Menu_PlayMusic_13()) << 2) + &g_a96ae0))(a1,
        a2);
}
