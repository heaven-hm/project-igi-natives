// Original IGI.EXE function: MenuScreen_LoadParameters (VA 0x00422110; static CFG gate PASS, CFG score 1.000).
#include "MenuScreen_LoadParameters.h"
int32_t MenuScreen_LoadParameters(void* a1)

{
    int32_t valA = *(a1 + 0x44);

    if (valA)
    {
        void* valA1 = Menu_RequestScreen_4(valA);

        if (valA1)
        {
            if (*(valA1 + 4) && Script_FormatString_6(a1 + 0xac))
                Script_SpawnNewTask_7(a1 + 0xac, a1);

            *(valA1 + 4) = 0;
        }
    }

    return (*((Menu_PlayMusic_13() << 2) + &g_a970e0))(a1);
}
