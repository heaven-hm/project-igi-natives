// Original IGI.EXE function: Weapon_ReloadStart (VA 0x00479990; static CFG gate PASS, CFG score 1.000).
#include "Weapon_ReloadStart.h"
void** Weapon_ReloadStart(void* a1, int32_t* a2)

// Sig: void Weapon_ReloadStart(void* soldierCtx)
// Note: Starts weapon RELOAD: uses soldier object ref +0x4C4 with spawner
// 0x4F2060 (arg 0x4C3). IGI-MP hooks this as reloadhook.
{
    void* srcS = *a2;
    void* valA1;
    int32_t objC;
    valA1 = Table_GetAt(srcS + 0x4c4, 0);
    int32_t tmpD;
    HumanPlayer_LoadParameters_13(valA1, tmpD, objC, valA1);
    a2[8] = 0;
    int32_t valA2 = *(a1 + 0x1ac);
    void** result;

    if (!valA2)
    {
        result = AI_CheckHearing_19(srcS);

        if (result)
            result = HumanPlayer_CheckCollision_9(srcS, 9.80908925e-45f);

        *(a1 + 0x1ac) = 1;
    }
    else
    {
        result = valA2 - 1;

        if (valA2 == 1)
        {
            result = FX_FragmentSimulate_15(srcS);

            if (result)
            {
                result = Script_SpawnNewTask_13(a1, *(a2 + 0x21));
                a2[8] = 1;
                *(a1 + 0x1ac) = 0;
            }
        }
    }

    int32_t* i = *(*(a1 + 0xe8) + 8);

    if (*i && i)
    {
        int32_t objC2 = g_afa7e0;

        do
        {
            int32_t* tmpD2 = *i;
            void* valA7;

            if (!tmpD2)
                valA7 = nullptr;
            else
            {
                int32_t valA4 = *tmpD2;
                int32_t valA5 = -(valA4);
                valA7 = (valA5 - valA5) & tmpD2;
            }

            *((objC2 << 2) + &g_afa6e0) = valA7;
            g_afa7e0 = objC2 + 1;
            uint32_t valA9 = AI_SelectTarget_17();
            int32_t objC4 = 0;
            objC4 = i[7];
            result = *(((valA9 * 0x180 + objC4) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a2);

            objC2 = g_afa7e0 - 1;
            g_afa7e0 = objC2;
            i = *((objC2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
