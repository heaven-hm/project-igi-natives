// IGI native provenance: StatusScreen_Setup - 0x00486F30 - CFG score 100.0% (PASS; structural only); runtime behavior not verified.
// Evidence: 00486F30-StatusScreen_Setup.md; REA/Ghidra static record; catalog: assets/BinaryNinja/IGINatives_VERIFIED.json.
#include "StatusScreen_Setup.h"
int32_t* StatusScreen_OnEvent3()

{
    void* flagP = *(Level_LoadLevel_6() + 0x5c);
    void* context_1 = Level_LoadLevel_6() + 0x60;
    int32_t data_2 = g_c28b44;
    void* arg_4;
    void* dest_val = arg_4;
    int32_t entity_val = g_c28b48;
    int32_t* result = Display_ClearSurfaces_13(dest_val + 0x20, 1);
    int32_t* i = *(dest_val + 8);

    if (*i && i)
    {
        int32_t entity_1 = g_afa7e0;

        do
        {
            int32_t* temp_1 = *i;
            void* data_6;

            if (!temp_1)
                data_6 = nullptr;
            else
            {
                int32_t data_3 = *temp_1;
                int32_t data_4 = -(data_3);
                data_6 = (data_4 - data_4) & temp_1;
            }

            *((entity_1 << 2) + &g_afa6e0) = data_6;
            g_afa7e0 = entity_1 + 1;
            int32_t data_7 = StatusScreen_GetEvent();
            int32_t entity_3 = 0;
            entity_3 = i[7];
            result = *(((data_7 * 0x180 + entity_3) << 2) + &g_a96ae0);

            if (result)
                result = result(i);

            entity_1 = g_afa7e0 - 1;
            g_afa7e0 = entity_1;
            i = *((entity_1 << 2) + &g_afa6e0);
        } while (i);
    }

    if (*(context_1 + 0x54) == flagP)
    {
        result = AI_CombatTarget_29();

        if (!result)
        {
            uint32_t data_12 = *g_540b5c;
            void* entity_5 = **(flagP + 0x68);
            int32_t temp_3 = 0;
            arg_4 = dest_val;
            temp_3 = *(entity_5 + 0x1c);
            int32_t data_16 = *(((data_12 * 0x180 + temp_3) << 2) + &g_a96ae0);

            if (data_16)
                data_16(entity_5, &arg_4);

            result = g_bc2360;

            if (result[0x1c])
            {
                int32_t temp_11 = FX_ExplosionSpawn_12() / 0x1e / 0x3c;
                int32_t f1_1 = FX_ExplosionSpawn_12() / 0x1e % 0x3c;
                char* entity_14 = &g_541078;

                if (f1_1 == 1)
                    entity_14 = &g_567c74;

                char* data_30 = &g_541078;

                if (temp_11 == 1)
                    data_30 = &g_567c74;

                char* item_5c_3 = entity_14;
                int32_t item_60_2 = f1_1;
                char* item_64_1 = data_30;
                int32_t item_68_1 = temp_11;
                void item_40;
                Game_DataSymbolLoad(&item_40, "Time Left: %d minute%s, %d second%s");
                Sys_FreeMemory_18(*(dest_val + 0x4dc), &item_40);
                *(*(dest_val + 0x4dc) + 4) = data_2 * 0.8125f;
                *(*(dest_val + 0x4dc) + 8) = entity_val * 0.0416666679f;
                return Sys_CloseFileStream_18(*(dest_val + 0x4dc));
            }
        }
    }

    return result;
}
