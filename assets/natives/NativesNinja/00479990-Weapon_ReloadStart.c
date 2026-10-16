#include "00479990-Weapon_ReloadStart.h"
/* 0x00479990 Weapon_ReloadStart full linked: callers=0 callees=7 */
void* Weapon_ReloadStart(int32_t a1 @ edi, void* a2, int32_t* a3)

// Sig: void Weapon_ReloadStart(void* soldierCtx)
// Note: Starts weapon RELOAD: uses soldier object ref +0x4C4 with spawner
// 0x4F2060 (arg 0x4C3). IGI-MP hooks this as reloadhook.
{
    struct human_player* player = *a3;
    HumanPlayer_LoadParameters_13(Table_GetAt(&player->stance_data, 0));
    a3[8] = 0;
    int32_t eax_2 = *(a2 + 0x1ac);
    void* result;

    if (!eax_2)
    {
        result = sub_463150(player);

        if (result)
            result = HumanPlayer_CheckCollision_9(player, 9.80908925e-45f);

        *(a2 + 0x1ac) = 1;
    }
    else
    {
        result = eax_2 - 1;

        if (eax_2 == 1)
        {
            result = sub_489f50(player);

            if (result)
            {
                result = sub_4f2350(a2, *(a3 + 0x21));
                a3[8] = 1;
                *(a2 + 0x1ac) = 0;
            }
        }
    }

    int32_t* i = *(*(a2 + 0xe8) + 8);

    if (*i && i)
    {
        int32_t ecx_2 = g_afa7e0;

        do
        {
            int32_t* edx_1 = *i;
            void* eax_7;

            if (!edx_1)
                eax_7 = nullptr;
            else
            {
                int32_t eax_4 = *edx_1;
                int32_t eax_5 = -(eax_4);
                eax_7 = (eax_5 - eax_5) & edx_1;
            }

            *((ecx_2 << 2) + &g_afa6e0) = eax_7;
            g_afa7e0 = ecx_2 + 1;
            uint32_t eax_9 = sub_460c10();
            int32_t ecx_4 = 0;
            ecx_4 = i[7];
            result = *(((eax_9 * 0x180 + ecx_4) << 2) + &g_a96ae0);

            if (result)
                result = result(i, a3, a1);

            ecx_2 = g_afa7e0 - 1;
            g_afa7e0 = ecx_2;
            i = *((ecx_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
