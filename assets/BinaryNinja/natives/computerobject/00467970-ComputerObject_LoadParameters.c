// Original IGI.EXE function: ComputerObject_LoadParameters (VA 0x00467970; static CFG gate PASS, CFG score 1.000).
#include "ComputerObject_LoadParameters.h"
int32_t* ComputerObject_LoadParameters(void* context)

{
    void* data_1 = SoundSys_Update3DPosition_12(AI_CheckVisibility_29());
    void* item_2c = data_1 + 0x28;
    void* item_28 = data_1;
    int32_t* result = 0xffffffff;
    int32_t item_10 = 0xffffffff;
    int32_t item_c = 0xffffffff;
    result = *(context + 0x20);
    int32_t i = 0;
    int32_t item_24 = *(data_1 + 0x40);
    int32_t item_14 = 0;
    int32_t item_20 = 0;
    int32_t item_18 = 0;
    int32_t item_8 = 0;
    int32_t item_4 = 0;

    if (result & 1)
    {
        result = AI_CombatTarget_18();

        if (*result > 0)
        {
            int32_t source_1 = 8;

            do
            {
                int32_t entity_1 = 0;
                entity_1 = *(*(AI_CombatTarget_18() + source_1) + 0x1c);
                uint32_t data_5 = AI_CheckHearing_25();
                (*(((entity_1 + data_5 * 0x180) << 2) + &g_a96ae0))(*(AI_CombatTarget_18() + source_1),
                    &item_2c);
                i += 1;
                source_1 += 4;
                result = AI_CombatTarget_18();
            } while (i < *result);
        }
    }

    if (*(context + 0x20) & 2)
    {
        int32_t i_1 = 0;
        result = Level_InitSprites_4();

        if (*result > 0)
        {
            int32_t source_2 = 8;

            do
            {
                int32_t data_8 = 0;
                data_8 = *(*(Level_InitSprites_4() + source_2) + 0x1c);
                uint32_t data_10 = AI_CheckHearing_25();
                (*(((data_8 + data_10 * 0x180) << 2) + &g_a96ae0))(
                    *(Level_InitSprites_4() + source_2), &item_2c);
                i_1 += 1;
                source_2 += 4;
                result = Level_InitSprites_4();
            } while (i_1 < *result);
        }
    }

    if (*(context + 0x20) & 4)
    {
        int32_t i_2 = 0;
        result = AI_CheckSector_25();

        if (*result > 0)
        {
            int32_t source_3 = 8;

            do
            {
                int32_t temp_4 = 0;
                temp_4 = *(*(AI_CheckSector_25() + source_3) + 0x1c);
                uint32_t data_15 = AI_CheckHearing_25();
                (*(((temp_4 + data_15 * 0x180) << 2) + &g_a96ae0))(*(AI_CheckSector_25() + source_3),
                    &item_2c);
                i_2 += 1;
                source_3 += 4;
                result = AI_CheckSector_25();
            } while (i_2 < *result);
        }
    }

    if (*(context + 0x20) & 8)
    {
        result = AI_SelectTarget_27();

        if (result >= 1)
        {
            int32_t i_3 = 0;

            if (*Env_ActivateEntity_2() > 0)
            {
                int32_t source_4 = 8;
                int32_t* data_25;

                do
                {
                    int32_t entity_6 = 0;
                    entity_6 = *(*(Env_ActivateEntity_2() + source_4) + 0x1c);
                    uint32_t data_23 = AI_CheckHearing_25();
                    (*(((entity_6 + data_23 * 0x180) << 2) + &g_a96ae0))(*(Env_ActivateEntity_2() + source_4),
                        &item_2c);
                    i_3 += 1;
                    source_4 += 4;
                    data_25 = Env_ActivateEntity_2();
                } while (i_3 < *data_25);
            }

            result = AI_UpdateOrders_27();
            void* entity_8 = result[0x29];

            if (entity_8)
            {
                uint32_t data_27 = AI_FireWeapon_25();
                int32_t data_28 = 0;
                data_28 = *(entity_8 + 0x1c);
                result = (*(((data_27 * 0x180 + data_28) << 2) + &g_a96ae0))(entity_8, &item_2c);
            }
        }
    }

    if (*(context + 0x20) & 0x10)
    {
        int32_t i_4 = 0;

        if (*Level_LoadLevel_4() > 0)
        {
            int32_t context_val = 8;
            int32_t* data_37;

            do
            {
                int32_t data_32 = 0;
                data_32 = *(*(Level_LoadLevel_4() + context_val) + 0x1c);
                int32_t source_8 = *(((data_32 + AI_CheckHearing_25() * 0x180) << 2) + &g_a96ae0);

                if (source_8)
                    source_8(*(Level_LoadLevel_4() + context_val), &item_2c);

                i_4 += 1;
                context_val += 4;
                data_37 = Level_LoadLevel_4();
            } while (i_4 < *data_37);
        }

        int32_t i_5 = 0;
        result = AI_CheckHearing_30();

        if (*result > 0)
        {
            int32_t source_9 = 8;

            do
            {
                int32_t temp_12 = 0;
                temp_12 = *(*(AI_CheckHearing_30() + source_9) + 0x1c);
                uint32_t data_40 = AI_CheckHearing_25();
                (*(((temp_12 + data_40 * 0x180) << 2) + &g_a96ae0))(*(AI_CheckHearing_30() + source_9),
                    &item_2c);
                i_5 += 1;
                source_9 += 4;
                result = AI_CheckHearing_30();
            } while (i_5 < *result);
        }
    }

    return result;
}
