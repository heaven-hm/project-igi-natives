// Original IGI.EXE function: Switch_Setup (VA 0x004450F0; static CFG gate PASS, CFG score 1.000).
#include "Switch_Setup.h"
void* Switch_Setup(long double context , void* param_2)

{
    int32_t* i = *(param_2 + 8);

    if (*i && i)
    {
        int32_t temp_1 = g_afa7e0;

        do
        {
            int32_t* dest_1 = *i;
            void* data_4;

            if (!dest_1)
                data_4 = nullptr;
            else
            {
                int32_t data_1 = *dest_1;
                int32_t data_2 = -(data_1);
                data_4 = (data_2 - data_2) & dest_1;
            }

            *((temp_1 << 2) + &g_afa6e0) = data_4;
            int32_t temp_2 = temp_1 + 1;
            int32_t data_5 = 0;
            g_afa7e0 = temp_2;
            data_5 = i[7];
            int32_t data_6 = *((data_5 << 2) + &g_a970e0);

            if (data_6)
            {
                data_6(i);
                temp_2 = g_afa7e0;
            }

            i = *((temp_2 << 2) + &g_afa6dc);
            temp_1 = temp_2 - 1;
            g_afa7e0 = temp_1;
        } while (i);
    }

    if (Script_FormatString_6(param_2 + 0x1d0))
    {
        Script_SpawnNewTask_7(param_2 + 0x1d0, param_2);
        *(param_2 + 0x1c0) = context;
    }

    void* result = g_bc2360;

    if (*(result + 0x68) > *(param_2 + 0x1c8) + 2)
    {
        char entity_1 = *(param_2 + 0x1c4);
        *(param_2 + 0x1c4) = 0;
        *(param_2 + 0x1c5) = entity_1;
    }

    result = *(param_2 + 0x1c0);

    if (result != *(param_2 + 0x1c1) || *(param_2 + 0x1c4) != *(param_2 + 0x1c5)
        || *(param_2 + 0x1c2) != *(param_2 + 0x1c3))
    {
        int32_t data_8;

        if (*(param_2 + 0x1c2))
            data_8 = 4;
        else if (!result)
        {
            int32_t data_11 = 0;
            data_11 = *(param_2 + 0x1c4);
            data_8 = data_11 + 2;
        }
        else if (!*(param_2 + 0x1c4))
        {
            struct status_msg* data_10 = SoundSys_SetMasterVolume_7(param_2, "switch");

            if (data_10)
                SoundSys_StopSoundSample_7(data_10, param_2 + 0x20);

            data_8 = 0;
        }
        else
            data_8 = 1;

        result = DynObj_CreateMagicObject_5(param_2, DynObj_Missing(((data_8 + 0x17) << 4) + param_2));
        result = *(param_2 + 0x1c0);
        char entity_3 = *(param_2 + 0x1c2);
        *(param_2 + 0x1c1) = result;
        *(param_2 + 0x1c3) = entity_3;
    }

    return result;
}
