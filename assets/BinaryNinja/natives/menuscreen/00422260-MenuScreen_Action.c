// Original IGI.EXE function: MenuScreen_Action (VA 0x00422260; static CFG gate PASS, CFG score 1.000).
#include "MenuScreen_Action.h"
int32_t* MenuScreen_Action(void* a1)

{
    int32_t* result = Script_FormatString_6(a1 + 0xfc);

    if (result)
        result = Script_SpawnNewTask_7(a1 + 0xfc, a1);

    int32_t* i = *(a1 + 8);

    if (*i && i)
    {
        int32_t objC1 = g_afa7e0;

        do
        {
            int32_t* tmpD1 = *i;
            void* valA3;

            if (!tmpD1)
                valA3 = nullptr;
            else
            {
                int32_t valA = *tmpD1;
                int32_t valA1 = -(valA);
                valA3 = (valA1 - valA1) & tmpD1;
            }

            *((objC1 << 2) + &g_afa6e0) = valA3;
            g_afa7e0 = objC1 + 1;
            int32_t valA4 = Menu_HandleInput_13();
            int32_t objC3 = 0;
            objC3 = i[7];
            result = *(((valA4 * 0x180 + objC3) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            objC1 = g_afa7e0 - 1;
            g_afa7e0 = objC1;
            i = *((objC1 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
