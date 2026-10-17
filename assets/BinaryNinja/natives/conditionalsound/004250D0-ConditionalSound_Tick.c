// Original IGI.EXE function: ConditionalSound_Tick (VA 0x004250D0; static CFG gate PASS, CFG score 1.000).
#include "ConditionalSound_Tick.h"
int32_t* ConditionalSound_Tick(int80_t a1 @ fp0, void* a2)

{
    if (Script_FormatString_6(a2 + 0x20))
    {
        *(a2 + 0xb1) = *(a2 + 0xb0);
        Script_SpawnNewTask_7(a2 + 0x20, a2);
        *(a2 + 0xb0) = a1;
    }

    int32_t* result = Menu_DrawWidget_15(a2);
    result = *(a2 + 0xa9);

    if (!result)
    {
    label_42512e:
        result = *(a2 + 0xb0);

        if (!result)
            result = ConditionalSound_Stop(a2);
        else
        {
            result = *(a2 + 0xb1);

            if (!result)
                result = ConditionalSound_Start(a2);
        }

        int32_t* i = *(a2 + 8);

        if (*i && i)
        {
            int32_t tmpD1 = g_afa7e0;

            do
            {
                int32_t* srcS1 = *i;
                void* valA5;

                if (!srcS1)
                    valA5 = nullptr;
                else
                {
                    int32_t valA2 = *srcS1;
                    int32_t valA3 = -(valA2);
                    valA5 = (valA3 - valA3) & srcS1;
                }

                *((tmpD1 << 2) + &g_afa6e0) = valA5;
                int32_t tmpD2 = tmpD1 + 1;
                int32_t valA6 = 0;
                g_afa7e0 = tmpD2;
                valA6 = i[7];
                result = *((valA6 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    tmpD2 = g_afa7e0;
                }

                i = *((tmpD2 << 2) + &g_afa6dc);
                tmpD1 = tmpD2 - 1;
                g_afa7e0 = tmpD1;
            } while (i);
        }
    }
    else
    {
        result = *(a2 + 0x124);

        if (!result)
            goto label_42512e;
    }

    return result;
}
