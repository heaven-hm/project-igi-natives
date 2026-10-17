// Original IGI.EXE function: GuardGenerator_Setup (VA 0x00487EE0; static CFG gate PASS, CFG score 1.000).
#include "GuardGenerator_Setup.h"
int32_t* GuardGenerator_Setup(int80_t a1 @ fp0, void* a2)

{
    if (Script_FormatString_6(a2 + 0x20))
    {
        Script_SpawnNewTask_7(a2 + 0x20, a2);
        *(a2 + 0x70) = a1;
    }

    int32_t* result;

    if (!*(a2 + 0x70))
    {
        result = *(a2 + 8);

        if (!*result || !result)
            *(a2 + 0x72) = 0;
    }
    else
    {
        result = *(a2 + 0x78);

        if (*(a2 + 0x74) < result)
        {
            int32_t* dstD1 = *(a2 + 8);

            if (!*dstD1 || !dstD1)
            {
                FX_TrailUpdate_9(a2);
                result = *(a2 + 0x74) + 1;
                *(a2 + 0x72) = 1;
                *(a2 + 0x74) = result;
            }
            else
            {
                result = AI_FireWeapon_19(dstD1);

                if (result)
                {
                    result = AI_TakeCover_19(dstD1);

                    if (!result)
                    {
                        int32_t* objC2 = *(a2 + 8);
                        int32_t valA4 = *objC2;
                        int32_t valA5 = -(valA4);
                        QTask_FindType((valA5 - valA5) & objC2);
                        FX_TrailUpdate_9(a2);
                        result = *(a2 + 0x74) + 1;
                        *(a2 + 0x72) = 1;
                        *(a2 + 0x74) = result;
                    }
                }
            }
        }
    }

    int32_t* i = *(a2 + 8);

    if (*i && i)
    {
        int32_t tmpD1 = g_afa7e0;

        do
        {
            int32_t* srcS1 = *i;
            void* valA13;

            if (!srcS1)
                valA13 = nullptr;
            else
            {
                int32_t valA10 = *srcS1;
                int32_t valA11 = -(valA10);
                valA13 = (valA11 - valA11) & srcS1;
            }

            *((tmpD1 << 2) + &g_afa6e0) = valA13;
            int32_t tmpD2 = tmpD1 + 1;
            int32_t valA14 = 0;
            g_afa7e0 = tmpD2;
            valA14 = i[7];
            result = *((valA14 << 2) + &g_a970e0);

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

    return result;
}
