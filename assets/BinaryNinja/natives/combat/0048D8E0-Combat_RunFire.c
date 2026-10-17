// Original IGI.EXE function: Combat_RunFire (VA 0x0048D8E0; static CFG gate PASS, CFG score 0.972).
#include "Combat_RunFire.h"
int32_t Combat_RunFire(void* context)

{
    void* flagP = context;
    void* source_val = *(flagP + 0x14);
    context = 0;
    char data_val;
    void* temp_val;
    data_val = Locomotion_GetState(flagP, 4);
    void* data_2;

    if (!data_val)
        data_2 = Table_GetAt(source_val + 0x4c4, 0);
    else
    {
        temp_val = flagP + 0x38;
        int32_t source_1 = **(source_val + 0x7b4);
        Weapon_FireBullet_4(source_1, temp_val, flagP + 0x78);
        data_2 = Table_GetAt(source_1 + 0x20c, 0);
    }

    double item_18;
    memcpy(&item_18, flagP + 0x3e88, 0x18);
    double item_30 = item_18 - *(flagP + 0x3e70);
    double item_10;
    double item_28 = item_10 - *(flagP + 0x3e78);
    double item_8;
    double item_20 = item_8 - *(flagP + 0x3e80);
    int32_t data_3;
    int32_t entity_2;
    data_3 = Sys_PopStack_11(&item_30);

    if (!data_3)
    {
        item_30 = item_30 * *(flagP + 0x3dc8);
        double item_28_1 = item_28 * *(flagP + 0x3dc8);
        double item_20_1 = item_20 * *(flagP + 0x3dc8);
        *(flagP + 0x3e70) = item_30 + *(flagP + 0x3e70);
        *(flagP + 0x3e78) = item_28_1 + *(flagP + 0x3e78);
        *(flagP + 0x3e80) = item_20_1 + *(flagP + 0x3e80);
    }

    void* data_4 = HumanPlayer_LoadParameters_13(data_3, temp_val, entity_2, data_2);
    int32_t item_40;
    Script_ParseEnumReal32_13(data_2, &item_40);
    int32_t data_5 = *(data_4 + 0x610);

    if (data_5 >= 0 && data_5 <= 2)
    {
        if (!*(flagP + 0x3e54) || !item_40)
        {
            int32_t data_11 = *(flagP + 0x3e50) + 1;
            *(flagP + 0x3e50) = data_11;
            data_11 = 1;
            return data_11;
        }

        AI_WriteChannel(flagP, 6, 1.0f);
        data_5 = 1;

        if (*(data_4 + 0x64c) != 1)
            data_5 = 0;

        int32_t entity_4 = item_40;
        bool context_1;

        if (entity_4 != *(flagP + 0x3e58))
        {
            int32_t temp_2 = *(flagP + 0x3e54);
            *(flagP + 0x3e58) = entity_4;
            context_1 = !data_5;
            *(flagP + 0x3e54) = temp_2 - 1;

            if (!data_5)
                *(flagP + 0x3e60) = 0;
            else
            {
                long double fp0_1;
                fp0_1 = Sys_AllocateMemory_14(Level_SetMission_5());
                *(flagP + 0x3e60) = (fp0_1 * *(flagP + 0x3d84) + *(flagP + 0x3d80)) * 30.0f;
            }
        }

        if (entity_4 == *(flagP + 0x3e58) || context_1)
        {
            data_5 = AI_UpdateOrders_3(flagP, flagP + 0x3e70, 0.0349065848f, 0);

            if (data_5)
            {
                int32_t data_9 = *(flagP + 0x3e60);

                if (!data_9)
                {
                    *(flagP + 0x3c8c) = 0x3f800000;
                    data_9 = 0;
                    return data_9;
                }

                data_5 = data_9 - 1;
                *(flagP + 0x3e60) = data_5;
            }
        }
    }

    data_5 = 0;
    return data_5;
}
