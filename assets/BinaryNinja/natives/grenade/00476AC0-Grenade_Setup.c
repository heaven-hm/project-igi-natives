// Original IGI.EXE function: Grenade_Setup (VA 0x00476AC0; static CFG gate PASS, CFG score 1.000).
#include "Grenade_Setup.h"
uint32_t Grenade_Setup(int32_t* context)

{
    void* context_val = *(context[0x6d] + 0x2d4);
    int32_t data_1 = context[0x1c8];

    if (data_1)
    {
        context[0x1c8] = data_1 - 1;
        Weapon_CycleFireMode_4(context);
        uint32_t result = Weapon_GrenadeBnc1(context);
        int32_t* i = context[2];

        if (*i && i)
        {
            int32_t temp_1 = g_afa7e0;

            do
            {
                int32_t* source_1 = *i;
                void* data_16;

                if (!source_1)
                    data_16 = nullptr;
                else
                {
                    int32_t data_13 = *source_1;
                    int32_t data_14 = -(data_13);
                    data_16 = (data_14 - data_14) & source_1;
                }

                *((temp_1 << 2) + &g_afa6e0) = data_16;
                int32_t temp_2 = temp_1 + 1;
                int32_t data_17 = 0;
                g_afa7e0 = temp_2;
                data_17 = i[7];
                result = *((data_17 << 2) + &g_a970e0);

                if (result)
                {
                    result = result(i);
                    temp_2 = g_afa7e0;
                }

                i = *((temp_2 << 2) + &g_afa6dc);
                temp_1 = temp_2 - 1;
                g_afa7e0 = temp_1;
            } while (i);
        }

        return result;
    }

    int32_t* item_74 = context;
    int32_t item_80 = data_1;
    int32_t item_7c = 0xc0a00000;
    char data_2 = Level_CheckQTaskID_3();
    void item_78;
    int32_t item_70[0x1c];
    DynObj_LookupHashItem_10(Level_StartMission_4(), &item_70, &context[8], 1, &item_80, data_2, &item_78, 0xffffffff);
    void* data_4 = context[0x1cc];
    int32_t* data_5;

    if (data_4)
        data_5 = *(data_4 + 0x6e0);

    if (!data_4 || !data_5)
    {
        int32_t data_8 = *(context_val + 4);

        if (!data_8)
        {
            int32_t item_90_5 = 0;
            int32_t item_94_4 = 0x47200000;
            int32_t item_98_3 = 2;
            int32_t item_9c_3 = 0x15;
            char* item_a0_2 = "explo_02_m";
            char* item_a4_2 = "1009_01_1";
            int32_t item_ac_2 = 1;
            int32_t item_b0_2 = 3;
            int32_t item_b4_2 = 0x45c00000;
            FX_SmokeEmit(&context[8], 1, 1, 0x3f800000, 0x46a00000, 0, 0x45c00000, 3, 1, &item_70,
                "1009_01_1", "explo_02_m", 0x15, 2, 0x47200000, 0);
        }
        else if (data_8 == 1)
            Weapon_ComputeAccuracy_9(&context[8], &item_70, 0x46a00000, 0x47200000);
    }
    else
    {
        int32_t entity_1 = *(context_val + 4);

        if (!entity_1)
        {
            int32_t item_90_4 = 0;
            int32_t item_94_3 = 0x47200000;
            int32_t item_98_2 = 2;
            int32_t item_9c_2 = 0x15;
            char* item_a0_1 = "explo_02_m";
            char* item_a4_1 = "1009_01_1";
            int32_t item_ac_1 = 1;
            int32_t item_b0_1 = 3;
            int32_t item_b4_1 = 0x45c00000;
            int32_t item_b8_1 = entity_1;
            int32_t item_bc_1 = entity_1;
            FX_SmokeEmit(&context[8], 1, 1, *data_5, data_5[1] * 4096.0f, data_5[2] * 4096.0f, 0x45c00000, 3,
                1, &item_70, "1009_01_1", "explo_02_m", 0x15, 2, 0x47200000, 0);
        }
        else if (entity_1 == 1)
        {
            int32_t item_90_1 = entity_1 - 1;
            int32_t item_94_1 = entity_1 - 1;
            Weapon_ComputeAccuracy_9(&context[8], &item_70, data_5[1] * 4096.0f, data_5[2] * 4096.0f);
        }
    }

    return QTask_FindType(context);
}
