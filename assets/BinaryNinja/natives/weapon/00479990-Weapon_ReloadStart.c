// Original IGI.EXE function: Weapon_ReloadStart (VA 0x00479990; static CFG gate PASS, CFG score 1.000).
#include "Weapon_ReloadStart.h"
void** Weapon_ReloadStart(void* context, int32_t* param_2)

// Sig: void Weapon_ReloadStart(void* soldierCtx)
// Note: Starts weapon RELOAD: uses soldier object ref +0x4C4 with spawner
// 0x4F2060 (arg 0x4C3). IGI-MP hooks this as reloadhook.
{
    void* source_val = *param_2;
    void* data_1;
    int32_t entity_val;
    data_1 = Table_GetAt(source_val + 0x4c4, 0);
    int32_t temp_val;
    HumanPlayer_LoadParameters_13(data_1, temp_val, entity_val, data_1);
    param_2[8] = 0;
    int32_t data_2 = *(context + 0x1ac);
    void** result;

    if (!data_2)
    {
        result = AI_CheckHearing_19(source_val);

        if (result)
            result = HumanPlayer_CheckCollision_9(source_val, 9.80908925e-45.0f);

        *(context + 0x1ac) = 1;
    }
    else
    {
        result = data_2 - 1;

        if (data_2 == 1)
        {
            result = FX_FragmentSimulate_15(source_val);

            if (result)
            {
                result = Script_SpawnNewTask_13(context, *(param_2 + 0x21));
                param_2[8] = 1;
                *(context + 0x1ac) = 0;
            }
        }
    }

    int32_t* i = *(*(context + 0xe8) + 8);

    if (*i && i)
    {
        int32_t entity_2 = g_afa7e0;

        do
        {
            int32_t* temp_2 = *i;
            void* data_7;

            if (!temp_2)
                data_7 = nullptr;
            else
            {
                int32_t data_4 = *temp_2;
                int32_t data_5 = -(data_4);
                data_7 = (data_5 - data_5) & temp_2;
            }

            *((entity_2 << 2) + &g_afa6e0) = data_7;
            g_afa7e0 = entity_2 + 1;
            uint32_t data_9 = AI_SelectTarget_17();
            int32_t entity_4 = 0;
            entity_4 = i[7];
            result = *(((data_9 * 0x180 + entity_4) << 2) + &g_a96ae0);

            if (result)
                result = result(i, param_2);

            entity_2 = g_afa7e0 - 1;
            g_afa7e0 = entity_2;
            i = *((entity_2 << 2) + &g_afa6e0);
        } while (i);
    }

    return result;
}
